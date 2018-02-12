load('api_config.js');
load('api_events.js');
load('api_gpio.js');
load('api_http.js');
load('api_net.js');
load('api_sys.js');
load('api_timer.js');
load('api_esp32.js');
load('api_dht.js');
load('api_adc.js');
load('api_rpc.js');

//Pins
let ResetPin = 0;
let LedPin = 16;
let DHTpin = 22;
let SOILpin = 32;
let LIGHTpin = 34;

// Turn on status led
GPIO.set_mode(LedPin, GPIO.MODE_OUTPUT);
GPIO.write(LedPin, 0);

//Reset Handler
GPIO.set_mode(ResetPin, GPIO.MODE_INPUT);
GPIO.set_int_handler(ResetPin, GPIO.INT_EDGE_NEG, function(ResetPin) {
  print('Pin', ResetPin, 'got interrupt');
  GPIO.toggle(LedPin);
  Sys.usleep(200000);
  GPIO.toggle(LedPin);
  Sys.usleep(200000);
  GPIO.toggle(LedPin);
  Sys.usleep(200000);
  GPIO.toggle(LedPin);
  Sys.usleep(200000);
  GPIO.toggle(LedPin);
  Sys.usleep(200000);
  GPIO.toggle(LedPin);
  Sys.usleep(200000);
  GPIO.write(LedPin, 0);
  Cfg.set({bt:{enable:true}});
  Cfg.set({wifi:{sta:{enable:false}}});
  Cfg.set({wifi:{ap:{enable:false}}});
  Cfg.set({wifi:{sta:{ssid:'',pass:''}}});
  Sys.reboot(1000);
}, null);
GPIO.enable_int(ResetPin);

ADC.enable(SOILpin);
let dht = DHT.create(DHTpin, DHT.DHT11);
let deviceId = Cfg.get("higrow.deviceId");
let connected = false;
let getResetReason = ffi('int getResetReason(void)');
let resetreason = getResetReason();

// Get Reset reason
// from user_interface.h (expressif)
// enum rst_reason {
//	REASON_DEFAULT_RST		= 0,	/* normal startup by power on */
//	REASON_WDT_RST			= 1,	/* hardware watch dog reset */
//	REASON_EXCEPTION_RST	= 2,	/* exception reset, GPIO status wont change */
//	REASON_SOFT_WDT_RST   	= 3,	/* software watch dog reset, GPIO status wont change */
//	REASON_SOFT_RESTART 	= 4,	/* software restart ,system_restart , GPIO status wont change */
//	REASON_DEEP_SLEEP_AWAKE	= 5,	/* wake up from deep-sleep */
//	REASON_EXT_SYS_RST      = 6		/* external system reset */
// };

let cloudconnect = Timer.set(1000, Timer.REPEAT, function() {
  let t = dht.getTemp();
  let h = dht.getHumidity();
  
  let higrowdata = {DeviceId: deviceId, Temperature: t, Humidity: h, Water: ADC.read(SOILpin), Light: ADC.read(LIGHTpin)};
  
  if(deviceId!=="" && connected){
    GPIO.write(LedPin, 1);
    HTTP.query({
      url: 'https://api.higrow.tech/api/records',
      headers: {'Content-Type' : 'application/json'},
      data: higrowdata,
      success: function(body, full_http_msg) 
      { 
        print(body); 
        ESP32.deepSleep(3600000000); //3600 seconds / 60 minutes
      },
      error: function(err) 
      { 
        print(err); 
        ESP32.deepSleep(7200000000); //7200 seconds / 120 minutes
      },
    });
    Timer.del(cloudconnect);
  }
  
  Cfg.set({higrow:{temperature:higrowdata.Temperature}});
  Cfg.set({higrow:{water:higrowdata.Water}});
  Cfg.set({higrow:{humidity:higrowdata.Humidity}});
  Cfg.set({higrow:{light:higrowdata.Light}});
},null);


// Monitor network connectivity.
Event.addGroupHandler(Net.EVENT_GRP, function(ev, evdata, arg) {
  let status = true && connected;
  let evs = '???';
  if (ev === Net.STATUS_DISCONNECTED) {
    evs = 'DISCONNECTED';
    connected = false;
  } else if (ev === Net.STATUS_CONNECTING) {
    evs = 'CONNECTING';
    connected = false;
  } else if (ev === Net.STATUS_CONNECTED) {
    evs = 'CONNECTED';
    connected = false;
  } else if (ev === Net.STATUS_GOT_IP) {
    evs = 'GOT_IP';
    connected = true;
  }
}, null);

