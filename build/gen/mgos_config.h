/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/1.26/apps/higrow/esp32/build_contexts/build_ctx_118995775/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_sys_config.yaml /fwbuild-volumes/1.26/apps/higrow/esp32/build_contexts/build_ctx_118995775/build/gen/mos_conf_schema.yml
 */

#ifndef MGOS_CONFIG_H_
#define MGOS_CONFIG_H_

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_config_device {
  char *id;
  char *password;
};

struct mgos_config_debug {
  char *udp_log_addr;
  int level;
  char *filter;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
  int mbedtls_level;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  char *tz_spec;
  int wdt_timeout;
  char *pref_ota_lib;
  int esp32_adc_vref;
};

struct mgos_config_bt_gatts {
  int min_sec_level;
  int require_pairing;
};

struct mgos_config_bt {
  int enable;
  char *dev_name;
  int adv_enable;
  char *scan_rsp_data_hex;
  int keep_enabled;
  int allow_pairing;
  int max_paired_devices;
  int random_address;
  struct mgos_config_bt_gatts gatts;
  int config_svc_enable;
};

struct mgos_config_mjs {
  int generate_jsc;
};

struct mgos_config_rpc_ws {
  int enable;
  char *server_address;
  int reconnect_interval_min;
  int reconnect_interval_max;
  char *ssl_server_name;
  char *ssl_ca_file;
  char *ssl_client_cert_file;
};

struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  int wait_for_start_frame;
};

struct mgos_config_rpc {
  int enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  char *acl_file;
  char *auth_domain;
  char *auth_file;
  struct mgos_config_rpc_ws ws;
  struct mgos_config_rpc_uart uart;
};

struct mgos_config_wifi_sta {
  int enable;
  char *ssid;
  char *pass;
  char *user;
  char *anon_identity;
  char *cert;
  char *key;
  char *ca_cert;
  char *ip;
  char *netmask;
  char *gw;
  char *nameserver;
  char *dhcp_hostname;
};

struct mgos_config_wifi_ap {
  int enable;
  char *ssid;
  char *pass;
  int hidden;
  int channel;
  int max_connections;
  char *ip;
  char *netmask;
  char *gw;
  char *dhcp_start;
  char *dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  char *hostname;
  int keep_enabled;
};

struct mgos_config_wifi {
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_ap ap;
};

struct mgos_config_higrow {
  char *deviceId;
  double temperature;
  double humidity;
  int light;
  int water;
  int connected;
};

struct mgos_config {
  struct mgos_config_device device;
  struct mgos_config_debug debug;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_bt bt;
  struct mgos_config_mjs mjs;
  struct mgos_config_rpc rpc;
  struct mgos_config_wifi wifi;
  struct mgos_config_higrow higrow;
};

/* Parametrized accessor prototypes {{{ */
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
const char *mgos_config_get_device_id(struct mgos_config *cfg);
const char *mgos_config_get_device_password(struct mgos_config *cfg);
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
int         mgos_config_get_debug_level(struct mgos_config *cfg);
const char *mgos_config_get_debug_filter(struct mgos_config *cfg);
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
int         mgos_config_get_sys_esp32_adc_vref(struct mgos_config *cfg);
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
const struct mgos_config_bt *mgos_config_get_bt(struct mgos_config *cfg);
int         mgos_config_get_bt_enable(struct mgos_config *cfg);
const char *mgos_config_get_bt_dev_name(struct mgos_config *cfg);
int         mgos_config_get_bt_adv_enable(struct mgos_config *cfg);
const char *mgos_config_get_bt_scan_rsp_data_hex(struct mgos_config *cfg);
int         mgos_config_get_bt_keep_enabled(struct mgos_config *cfg);
int         mgos_config_get_bt_allow_pairing(struct mgos_config *cfg);
int         mgos_config_get_bt_max_paired_devices(struct mgos_config *cfg);
int         mgos_config_get_bt_random_address(struct mgos_config *cfg);
const struct mgos_config_bt_gatts *mgos_config_get_bt_gatts(struct mgos_config *cfg);
int         mgos_config_get_bt_gatts_min_sec_level(struct mgos_config *cfg);
int         mgos_config_get_bt_gatts_require_pairing(struct mgos_config *cfg);
int         mgos_config_get_bt_config_svc_enable(struct mgos_config *cfg);
const struct mgos_config_mjs *mgos_config_get_mjs(struct mgos_config *cfg);
int         mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg);
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg);
int         mgos_config_get_rpc_enable(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg);
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg);
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg);
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_enable(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_ca_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg);
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_wait_for_start_frame(struct mgos_config *cfg);
const struct mgos_config_wifi *mgos_config_get_wifi(struct mgos_config *cfg);
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(struct mgos_config *cfg);
int         mgos_config_get_wifi_sta_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_pass(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_user(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_key(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg);
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_pass(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_channel(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg);
const struct mgos_config_higrow *mgos_config_get_higrow(struct mgos_config *cfg);
const char *mgos_config_get_higrow_deviceId(struct mgos_config *cfg);
double      mgos_config_get_higrow_temperature(struct mgos_config *cfg);
double      mgos_config_get_higrow_humidity(struct mgos_config *cfg);
int         mgos_config_get_higrow_light(struct mgos_config *cfg);
int         mgos_config_get_higrow_water(struct mgos_config *cfg);
int         mgos_config_get_higrow_connected(struct mgos_config *cfg);

void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int         val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_bt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_scan_rsp_data_hex(struct mgos_config *cfg, const char *val);
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_allow_pairing(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_max_paired_devices(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_random_address(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_gatts_min_sec_level(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_gatts_require_pairing(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_config_svc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_wait_for_start_frame(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int         val);
void mgos_config_set_higrow_deviceId(struct mgos_config *cfg, const char *val);
void mgos_config_set_higrow_temperature(struct mgos_config *cfg, double      val);
void mgos_config_set_higrow_humidity(struct mgos_config *cfg, double      val);
void mgos_config_set_higrow_light(struct mgos_config *cfg, int         val);
void mgos_config_set_higrow_water(struct mgos_config *cfg, int         val);
void mgos_config_set_higrow_connected(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_password(void) { return mgos_config_get_device_password(&mgos_sys_config); }
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_filter(void) { return mgos_config_get_debug_filter(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_esp32_adc_vref(void) { return mgos_config_get_sys_esp32_adc_vref(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const struct mgos_config_bt *mgos_sys_config_get_bt(void) { return mgos_config_get_bt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_enable(void) { return mgos_config_get_bt_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_bt_dev_name(void) { return mgos_config_get_bt_dev_name(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_adv_enable(void) { return mgos_config_get_bt_adv_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_bt_scan_rsp_data_hex(void) { return mgos_config_get_bt_scan_rsp_data_hex(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_keep_enabled(void) { return mgos_config_get_bt_keep_enabled(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_allow_pairing(void) { return mgos_config_get_bt_allow_pairing(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_max_paired_devices(void) { return mgos_config_get_bt_max_paired_devices(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_random_address(void) { return mgos_config_get_bt_random_address(&mgos_sys_config); }
static inline const struct mgos_config_bt_gatts *mgos_sys_config_get_bt_gatts(void) { return mgos_config_get_bt_gatts(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_gatts_min_sec_level(void) { return mgos_config_get_bt_gatts_min_sec_level(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_gatts_require_pairing(void) { return mgos_config_get_bt_gatts_require_pairing(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_config_svc_enable(void) { return mgos_config_get_bt_config_svc_enable(&mgos_sys_config); }
static inline const struct mgos_config_mjs *mgos_sys_config_get_mjs(void) { return mgos_config_get_mjs(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mjs_generate_jsc(void) { return mgos_config_get_mjs_generate_jsc(&mgos_sys_config); }
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc_ws *mgos_sys_config_get_rpc_ws(void) { return mgos_config_get_rpc_ws(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_enable(void) { return mgos_config_get_rpc_ws_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_server_address(void) { return mgos_config_get_rpc_ws_server_address(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_min(void) { return mgos_config_get_rpc_ws_reconnect_interval_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_max(void) { return mgos_config_get_rpc_ws_reconnect_interval_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_server_name(void) { return mgos_config_get_rpc_ws_ssl_server_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_ca_file(void) { return mgos_config_get_rpc_ws_ssl_ca_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_client_cert_file(void) { return mgos_config_get_rpc_ws_ssl_client_cert_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_wait_for_start_frame(void) { return mgos_config_get_rpc_uart_wait_for_start_frame(&mgos_sys_config); }
static inline const struct mgos_config_wifi *mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
static inline const struct mgos_config_wifi_ap *mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_hostname(void) { return mgos_config_get_wifi_ap_hostname(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
static inline const struct mgos_config_higrow *mgos_sys_config_get_higrow(void) { return mgos_config_get_higrow(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_higrow_deviceId(void) { return mgos_config_get_higrow_deviceId(&mgos_sys_config); }
static inline double      mgos_sys_config_get_higrow_temperature(void) { return mgos_config_get_higrow_temperature(&mgos_sys_config); }
static inline double      mgos_sys_config_get_higrow_humidity(void) { return mgos_config_get_higrow_humidity(&mgos_sys_config); }
static inline int         mgos_sys_config_get_higrow_light(void) { return mgos_config_get_higrow_light(&mgos_sys_config); }
static inline int         mgos_sys_config_get_higrow_water(void) { return mgos_config_get_higrow_water(&mgos_sys_config); }
static inline int         mgos_sys_config_get_higrow_connected(void) { return mgos_config_get_higrow_connected(&mgos_sys_config); }

static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_password(const char *val) { mgos_config_set_device_password(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_filter(const char *val) { mgos_config_set_debug_filter(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char *val) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_esp32_adc_vref(int         val) { mgos_config_set_sys_esp32_adc_vref(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_enable(int         val) { mgos_config_set_bt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_dev_name(const char *val) { mgos_config_set_bt_dev_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_adv_enable(int         val) { mgos_config_set_bt_adv_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_scan_rsp_data_hex(const char *val) { mgos_config_set_bt_scan_rsp_data_hex(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_keep_enabled(int         val) { mgos_config_set_bt_keep_enabled(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_allow_pairing(int         val) { mgos_config_set_bt_allow_pairing(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_max_paired_devices(int         val) { mgos_config_set_bt_max_paired_devices(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_random_address(int         val) { mgos_config_set_bt_random_address(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_gatts_min_sec_level(int         val) { mgos_config_set_bt_gatts_min_sec_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_gatts_require_pairing(int         val) { mgos_config_set_bt_gatts_require_pairing(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_config_svc_enable(int         val) { mgos_config_set_bt_config_svc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mjs_generate_jsc(int         val) { mgos_config_set_mjs_generate_jsc(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_enable(int         val) { mgos_config_set_rpc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_frame_size(int         val) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_queue_length(int         val) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int         val) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_acl_file(const char *val) { mgos_config_set_rpc_acl_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_domain(const char *val) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_file(const char *val) { mgos_config_set_rpc_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_enable(int         val) { mgos_config_set_rpc_ws_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_server_address(const char *val) { mgos_config_set_rpc_ws_server_address(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_min(int         val) { mgos_config_set_rpc_ws_reconnect_interval_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_max(int         val) { mgos_config_set_rpc_ws_reconnect_interval_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_server_name(const char *val) { mgos_config_set_rpc_ws_ssl_server_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_ca_file(const char *val) { mgos_config_set_rpc_ws_ssl_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_client_cert_file(const char *val) { mgos_config_set_rpc_ws_ssl_client_cert_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_uart_no(int         val) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int         val) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_fc_type(int         val) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_wait_for_start_frame(int         val) { mgos_config_set_rpc_uart_wait_for_start_frame(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_enable(int         val) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ssid(const char *val) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_pass(const char *val) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_user(const char *val) { mgos_config_set_wifi_sta_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char *val) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_cert(const char *val) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_key(const char *val) { mgos_config_set_wifi_sta_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char *val) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ip(const char *val) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_netmask(const char *val) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_gw(const char *val) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char *val) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_enable(int         val) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ssid(const char *val) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_pass(const char *val) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_hidden(int         val) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_channel(int         val) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_max_connections(int         val) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ip(const char *val) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_netmask(const char *val) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_gw(const char *val) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char *val) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char *val) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int         val) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_disable_after(int         val) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_hostname(const char *val) { mgos_config_set_wifi_ap_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int         val) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_higrow_deviceId(const char *val) { mgos_config_set_higrow_deviceId(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_higrow_temperature(double      val) { mgos_config_set_higrow_temperature(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_higrow_humidity(double      val) { mgos_config_set_higrow_humidity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_higrow_light(int         val) { mgos_config_set_higrow_light(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_higrow_water(int         val) { mgos_config_set_higrow_water(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_higrow_connected(int         val) { mgos_config_set_higrow_connected(&mgos_sys_config, val); }


const struct mgos_conf_entry *mgos_config_schema();

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_CONFIG_H_ */
