/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_API_MODEL_TAGS_H_
#define BCMOLT_API_MODEL_TAGS_H_

#include <bcmos_system.h>


typedef enum
{
    BCMOLT_TAG__NONE = 0,
    BCMOLT_TAG_DEVICE = 1ULL << 0,
    BCMOLT_TAG_GPON = 1ULL << 1,
    BCMOLT_TAG_NGPON2 = 1ULL << 2,
    BCMOLT_TAG_SYSTEM = 1ULL << 3,
    BCMOLT_TAG_XGPON = 1ULL << 4,
    BCMOLT_TAG_XGS = 1ULL << 5,
} bcmolt_tag;


#define BCMOLT_CONFIG_MODE_DEVICE 1
#define BCMOLT_CONFIG_MODE_GPON 1
#define BCMOLT_CONFIG_MODE_NGPON2 1
#define BCMOLT_CONFIG_MODE_SYSTEM 1
#define BCMOLT_CONFIG_MODE_XGPON 1
#define BCMOLT_CONFIG_MODE_XGS 1


bcmolt_tag bcmolt_access_control_get_active_tags(const bcmolt_access_control_key *key);


bcmolt_tag bcmolt_device_get_active_tags(const bcmolt_device_key *key);


bcmolt_tag bcmolt_erps_interface_get_active_tags(const bcmolt_erps_interface_key *key);


bcmolt_tag bcmolt_eth_oam_get_active_tags(const bcmolt_eth_oam_key *key);


bcmolt_tag bcmolt_flow_get_active_tags(const bcmolt_flow_key *key);


bcmolt_tag bcmolt_gpio_get_active_tags(const bcmolt_gpio_key *key);


bcmolt_tag bcmolt_group_get_active_tags(const bcmolt_group_key *key);


bcmolt_tag bcmolt_inband_mgmt_channel_get_active_tags(const bcmolt_inband_mgmt_channel_key *key);


bcmolt_tag bcmolt_internal_nni_get_active_tags(const bcmolt_internal_nni_key *key);


bcmolt_tag bcmolt_itupon_alloc_get_active_tags(const bcmolt_itupon_alloc_key *key);


bcmolt_tag bcmolt_itupon_gem_get_active_tags(const bcmolt_itupon_gem_key *key);


bcmolt_tag bcmolt_log_get_active_tags(const bcmolt_log_key *key);


bcmolt_tag bcmolt_log_file_get_active_tags(const bcmolt_log_file_key *key);


bcmolt_tag bcmolt_ngpon2_channel_get_active_tags(const bcmolt_ngpon2_channel_key *key);


bcmolt_tag bcmolt_nni_interface_get_active_tags(const bcmolt_nni_interface_key *key);


bcmolt_tag bcmolt_olt_get_active_tags(const bcmolt_olt_key *key);


bcmolt_tag bcmolt_onu_get_active_tags(const bcmolt_onu_key *key);


bcmolt_tag bcmolt_pbit_to_tc_get_active_tags(const bcmolt_pbit_to_tc_key *key);


bcmolt_tag bcmolt_policer_profile_get_active_tags(const bcmolt_policer_profile_key *key);


bcmolt_tag bcmolt_pon_interface_get_active_tags(const bcmolt_pon_interface_key *key);


bcmolt_tag bcmolt_protection_interface_get_active_tags(const bcmolt_protection_interface_key *key);


bcmolt_tag bcmolt_software_error_get_active_tags(const bcmolt_software_error_key *key);


bcmolt_tag bcmolt_switch_inni_get_active_tags(const bcmolt_switch_inni_key *key);


bcmolt_tag bcmolt_tc_to_queue_get_active_tags(const bcmolt_tc_to_queue_key *key);


bcmolt_tag bcmolt_tm_qmp_get_active_tags(const bcmolt_tm_qmp_key *key);


bcmolt_tag bcmolt_tm_queue_get_active_tags(const bcmolt_tm_queue_key *key);


bcmolt_tag bcmolt_tm_sched_get_active_tags(const bcmolt_tm_sched_key *key);



#endif
