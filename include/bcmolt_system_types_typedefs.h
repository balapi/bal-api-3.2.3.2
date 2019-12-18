/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_SYSTEM_TYPES_TYPEDEFS_H_
#define BCMOLT_SYSTEM_TYPES_TYPEDEFS_H_

#include <bcmos_system.h>

/** \addtogroup object_model
 * @{
 */


typedef uint16_t bcmolt_alloc_id;
#define BCMOLT_ALLOC_ID_INVALID ((bcmolt_alloc_id)65535U)


typedef uint16_t bcmolt_devid;


typedef uint16_t bcmolt_flow_id;


typedef uint32_t bcmolt_gem_port_id;
#define BCMOLT_GEM_PORT_ID_NEXT_FREE ((bcmolt_gem_port_id)65536UL)
#define BCMOLT_GEM_PORT_ID_INVALID ((bcmolt_gem_port_id)65535UL)


typedef uint8_t bcmolt_interface;
#define BCMOLT_INTERFACE_UNDEFINED ((bcmolt_interface)255)


typedef uint16_t bcmolt_iwf_flow_id;


typedef uint8_t bcmolt_ldid;
#define BCMOLT_LDID_UNDEFINED ((bcmolt_ldid)255)


typedef uint8_t bcmolt_loid;
#define BCMOLT_LOID_UNDEFINED ((bcmolt_loid)255)


typedef uint8_t bcmolt_mac_table_idx_cam;
#define BCMOLT_MAC_TABLE_IDX_CAM_NONE ((bcmolt_mac_table_idx_cam)255)


typedef uint16_t bcmolt_mac_table_idx_main;


typedef uint8_t bcmolt_nni_id;
#define BCMOLT_NNI_ID_INVALID ((bcmolt_nni_id)255)


typedef uint8_t bcmolt_odid;
#define BCMOLT_ODID_UNDEFINED ((bcmolt_odid)255)


typedef uint16_t bcmolt_oltid;


typedef uint16_t bcmolt_onu_id;
#define BCMOLT_ONU_ID_INVALID ((bcmolt_onu_id)65535U)
#define BCMOLT_ONU_ID_NEXT_FREE ((bcmolt_onu_id)65534U)


typedef uint8_t bcmolt_pon_ni;
#define BCMOLT_PON_NI_INVALID ((bcmolt_pon_ni)255)
#define BCMOLT_PON_NI_ALL ((bcmolt_pon_ni)255)


typedef uint16_t bcmolt_vlan_id;
#define BCMOLT_VLAN_ID_MAX ((bcmolt_vlan_id)4095)
#define BCMOLT_VLAN_ID_ANY ((bcmolt_vlan_id)65535U)



/** @} */

#endif
