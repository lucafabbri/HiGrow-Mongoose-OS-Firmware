/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_ro_vars --c_global_name=mgos_sys_ro_vars --dest_dir=/fwbuild-volumes/1.26/apps/higrow/esp32/build_contexts/build_ctx_118995775/build/gen/ /mongoose-os/fw/src/mgos_ro_vars_schema.yaml
 */

#ifndef MGOS_RO_VARS_H_
#define MGOS_RO_VARS_H_

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_ro_vars {
  char *mac_address;
  char *arch;
  char *fw_version;
  char *fw_timestamp;
  char *fw_id;
};

/* Parametrized accessor prototypes {{{ */
const char *mgos_ro_vars_get_mac_address(struct mgos_ro_vars *cfg);
const char *mgos_ro_vars_get_arch(struct mgos_ro_vars *cfg);
const char *mgos_ro_vars_get_fw_version(struct mgos_ro_vars *cfg);
const char *mgos_ro_vars_get_fw_timestamp(struct mgos_ro_vars *cfg);
const char *mgos_ro_vars_get_fw_id(struct mgos_ro_vars *cfg);

void mgos_ro_vars_set_mac_address(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_arch(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_fw_version(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_fw_timestamp(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_fw_id(struct mgos_ro_vars *cfg, const char *val);
/* }}} */

extern struct mgos_ro_vars mgos_sys_ro_vars;

static inline const char *mgos_sys_ro_vars_get_mac_address(void) { return mgos_ro_vars_get_mac_address(&mgos_sys_ro_vars); }
static inline const char *mgos_sys_ro_vars_get_arch(void) { return mgos_ro_vars_get_arch(&mgos_sys_ro_vars); }
static inline const char *mgos_sys_ro_vars_get_fw_version(void) { return mgos_ro_vars_get_fw_version(&mgos_sys_ro_vars); }
static inline const char *mgos_sys_ro_vars_get_fw_timestamp(void) { return mgos_ro_vars_get_fw_timestamp(&mgos_sys_ro_vars); }
static inline const char *mgos_sys_ro_vars_get_fw_id(void) { return mgos_ro_vars_get_fw_id(&mgos_sys_ro_vars); }

static inline void mgos_sys_ro_vars_set_mac_address(const char *val) { mgos_ro_vars_set_mac_address(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_arch(const char *val) { mgos_ro_vars_set_arch(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_fw_version(const char *val) { mgos_ro_vars_set_fw_version(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_fw_timestamp(const char *val) { mgos_ro_vars_set_fw_timestamp(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_fw_id(const char *val) { mgos_ro_vars_set_fw_id(&mgos_sys_ro_vars, val); }


const struct mgos_conf_entry *mgos_ro_vars_schema();

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_RO_VARS_H_ */
