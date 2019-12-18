/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_API_MODEL_SUPPORTING_TYPEDEFS_H_
#define BCMOLT_API_MODEL_SUPPORTING_TYPEDEFS_H_

#include <bcmos_system.h>

/** \addtogroup object_model
 * @{
 */


typedef uint16_t bcmolt_access_control_id;


typedef uint32_t bcmolt_ber_interval;
#define BCMOLT_BER_INTERVAL_BER_INTERVAL_NOT_CONFIGURED ((bcmolt_ber_interval)0)


typedef uint8_t bcmolt_burst_profile_index;


typedef uint64_t bcmolt_cookie;


typedef uint8_t bcmolt_erps_id;
#define BCMOLT_ERPS_ID_INVALID ((bcmolt_erps_id)255)
#define BCMOLT_ERPS_ID_UNASSIGNED ((bcmolt_erps_id)254)


typedef uint8_t bcmolt_eth_oam_id;
#define BCMOLT_ETH_OAM_ID_UNASSIGNED ((bcmolt_eth_oam_id)0)


typedef uint16_t bcmolt_group_id;
#define BCMOLT_GROUP_ID_INVALID ((bcmolt_group_id)65535U)


typedef uint8_t bcmolt_inband_mgmt_instance_id;


typedef uint8_t bcmolt_interface_id;
#define BCMOLT_INTERFACE_ID_INVALID ((bcmolt_interface_id)255)


typedef uint32_t bcmolt_mtu;


typedef uint16_t bcmolt_policer_profile_id;
#define BCMOLT_POLICER_PROFILE_ID_UNASSIGNED ((bcmolt_policer_profile_id)65535U)
#define BCMOLT_POLICER_PROFILE_ID_MAX ((bcmolt_policer_profile_id)1024)


typedef uint8_t bcmolt_protection_interface_id;
#define BCMOLT_PROTECTION_INTERFACE_ID_INVALID ((bcmolt_protection_interface_id)255)
#define BCMOLT_PROTECTION_INTERFACE_ID_UNASSIGNED ((bcmolt_protection_interface_id)254)


typedef uint32_t bcmolt_service_port_id;
#define BCMOLT_SERVICE_PORT_ID_INVALID ((bcmolt_service_port_id)65535UL)
#define BCMOLT_SERVICE_PORT_ID_NEXT_FREE ((bcmolt_service_port_id)65536UL)


typedef uint8_t bcmolt_switch_inni_id;
#define BCMOLT_SWITCH_INNI_ID_INVALID ((bcmolt_switch_inni_id)255)


typedef uint8_t bcmolt_tm_priority;


typedef uint8_t bcmolt_tm_qmp_id;


typedef uint16_t bcmolt_tm_queue_id;


typedef uint16_t bcmolt_tm_queue_set_id;
#define BCMOLT_TM_QUEUE_SET_ID_QSET_NOT_USE ((bcmolt_tm_queue_set_id)32768U)


typedef uint16_t bcmolt_tm_sched_id;
#define BCMOLT_TM_SCHED_ID_UNKNOWN ((bcmolt_tm_sched_id)65535U)


typedef uint8_t bcmolt_tm_weight;
#define BCMOLT_TM_WEIGHT_MAX_WEIGHT ((bcmolt_tm_weight)63)



/** @} */

#endif
