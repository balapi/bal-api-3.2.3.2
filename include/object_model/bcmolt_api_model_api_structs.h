/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_API_MODEL_API_STRUCTS_H_
#define BCMOLT_API_MODEL_API_STRUCTS_H_

#include <bcmos_system.h>
#include <bcmolt_system_types.h>
#include "bcmolt_msg.h"
#include "bcmolt_api_model_supporting_structs.h"
#include "bcmolt_api_model_supporting_enums.h"
#include "bcmolt_api_model_supporting_typedefs.h"

/** \addtogroup object_model
 * @{
 */


typedef struct
{
    bcmolt_access_control_id id; 
} bcmolt_access_control_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_classifier classifier; 
    uint16_t priority; 
    bcmolt_access_control_fwd_action forwarding_action; 
    bcmolt_access_control_pkt_modifier modifier_action; 
    bcmolt_config_state state; 
    bcmolt_control_state statistics_control; 
    bcmolt_cookie cookie; 
    bcmolt_intf_ref_list_u8 interface_refs; 
} bcmolt_access_control_cfg_data;


#define BCMOLT_ACCESS_CONTROL_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000DA70ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_access_control_key key; 
    bcmolt_access_control_cfg_data data; 
} bcmolt_access_control_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_access_control_key key; 
    bcmolt_access_control_cfg_data filter; 
    bcmolt_access_control_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_access_control_cfg *responses; 

    bcmolt_access_control_key next_key; 
} bcmolt_access_control_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_intf_ref interface_ref; 
    bcmolt_service_port_id svc_port_id; 
    bcmolt_bin_str buffer; 
} bcmolt_access_control_receive_eth_packet_data;


#define BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_PRESENCE_MASK_ALL 0x000000000000000EULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_access_control_key key; 
    bcmolt_access_control_receive_eth_packet_data data; 
} bcmolt_access_control_receive_eth_packet;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_members_update_command command; 
    bcmolt_intf_ref_list_u8 interface_ref_list; 
} bcmolt_access_control_interfaces_update_data;


#define BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_access_control_key key; 
    bcmolt_access_control_interfaces_update_data data; 
} bcmolt_access_control_interfaces_update;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool receive_eth_packet; 
} bcmolt_access_control_auto_cfg_data;


#define BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_access_control_key key; 
    bcmolt_access_control_auto_cfg_data data; 
} bcmolt_access_control_auto_cfg;


typedef struct
{
    bcmolt_ldid device_id; 
} bcmolt_device_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_system_mode system_mode; 
    uint32_t keepalive_interval; 
    uint32_t keepalive_tolerance; 
    bcmolt_firmware_sw_version firmware_sw_version; 
    bcmolt_chip_family chip_family; 
    bcmolt_device_chip_revision chip_revision; 
    uint32_t chip_voltage; 
    int32_t chip_temperature; 
    bcmolt_debug_device_cfg debug; 
    bcmolt_ext_irq protection_switching_ext_irq; 
    bcmolt_indication_shaping indication_shaping; 
    bcmolt_uart_baudrate tod_uart_baudrate; 
    bcmolt_itu_tod itu_tod; 
    bcmolt_ieee_8021_as_tod ieee_8021_as_tod; 
    bcmolt_embedded_image_entry_list_u8_max_4 embedded_image_list; 
    bcmos_bool wd_enable; 
    uint16_t wd_ip_traffic_timeout; 
    bcmolt_comm_mode comm_mode; 
    bcmolt_pcie_conn_data pcie_conn_data; 
    bcmolt_inband_conn_data inband_conn_data; 
    bcmos_bool logger_enable; 
    bcmolt_inni_config inni_config; 
    bcmolt_ras_ddr_usage_mode ras_ddr_mode; 
} bcmolt_device_cfg_data;


#define BCMOLT_DEVICE_CFG_DATA_PRESENCE_MASK_ALL 0x00000000783F3EFFULL
#define BCMOLT_DEVICE_CFG_DATA_EMBEDDED_IMAGE_LIST_MIN_LENGTH 0
#define BCMOLT_DEVICE_CFG_DATA_EMBEDDED_IMAGE_LIST_MAX_LENGTH 4


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_device_key key; 
    bcmolt_device_cfg_data data; 
} bcmolt_device_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_device_key key; 
    bcmolt_device_cfg_data filter; 
    bcmolt_device_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_device_cfg *responses; 

    bcmolt_device_key next_key; 
} bcmolt_device_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_system_mode system_mode; 
    bcmolt_comm_mode comm_mode; 
    bcmolt_pcie_conn_data pcie_conn_data; 
    bcmolt_inband_conn_data inband_conn_data; 
    bcmolt_inni_config inni_config; 
    bcmolt_ras_ddr_usage_mode ras_ddr_mode; 
} bcmolt_device_connect_data;


#define BCMOLT_DEVICE_CONNECT_DATA_PRESENCE_MASK_ALL 0x000000000000006FULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
    bcmolt_device_connect_data data; 
} bcmolt_device_connect;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
} bcmolt_device_disconnect;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
} bcmolt_device_reset;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t sequence_number; 
    uint32_t time_stamp; 
} bcmolt_device_host_keep_alive_data;


#define BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
    bcmolt_device_host_keep_alive_data data; 
} bcmolt_device_host_keep_alive;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
} bcmolt_device_sw_upgrade_activate;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_256 tod_string; 
} bcmolt_device_set_8021_as_tod_string_data;


#define BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
    bcmolt_device_set_8021_as_tod_string_data data; 
} bcmolt_device_set_8021_as_tod_string;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_device_image_type image_type; 
    uint32_t image_size; 
    uint32_t crc32; 
    bcmolt_str_64 image_name; 
} bcmolt_device_image_transfer_start_data;


#define BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
    bcmolt_device_image_transfer_start_data data; 
} bcmolt_device_image_transfer_start;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t block_number; 
    bcmos_bool more_data; 
    bcmolt_bin_str data; 
} bcmolt_device_image_transfer_data_data;


#define BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
    bcmolt_device_image_transfer_data_data data; 
} bcmolt_device_image_transfer_data;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool cpu; 
    bcmos_bool ras_0; 
    bcmos_bool ras_1; 
} bcmolt_device_run_ddr_test_data;


#define BCMOLT_DEVICE_RUN_DDR_TEST_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_device_key key; 
    bcmolt_device_run_ddr_test_data data; 
} bcmolt_device_run_ddr_test;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_firmware_sw_version firmware_sw_version; 
    bcmolt_system_mode system_mode; 
    uint32_t keepalive_interval; 
    uint32_t keepalive_tolerance; 
    bcmos_bool standalone; 
} bcmolt_device_device_ready_data;


#define BCMOLT_DEVICE_DEVICE_READY_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_device_ready_data data; 
} bcmolt_device_device_ready;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
} bcmolt_device_connection_established;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t sequence_number; 
    uint32_t time_stamp; 
    uint32_t keepalive_interval; 
    uint32_t keepalive_tolerance; 
} bcmolt_device_device_keep_alive_data;


#define BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_device_keep_alive_data data; 
} bcmolt_device_device_keep_alive;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_host_connection_fail_reason reason; 
} bcmolt_device_connection_failure_data;


#define BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_connection_failure_data data; 
} bcmolt_device_connection_failure;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool standalone; 
    bcmolt_system_mode system_mode; 
} bcmolt_device_connection_complete_data;


#define BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_connection_complete_data data; 
} bcmolt_device_connection_complete;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
} bcmolt_device_disconnection_complete;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_100 task_name; 
    bcmolt_str_100 file_name; 
    uint32_t line_number; 
    uint8_t pon_ni; 
} bcmolt_device_sw_error_data;


#define BCMOLT_DEVICE_SW_ERROR_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_sw_error_data data; 
} bcmolt_device_sw_error;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t cpu_id; 
    bcmolt_str_2000 text; 
} bcmolt_device_sw_exception_data;


#define BCMOLT_DEVICE_SW_EXCEPTION_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_sw_exception_data data; 
} bcmolt_device_sw_exception;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_device_image_type image_type; 
    uint32_t block_number; 
    bcmolt_image_transfer_status status; 
} bcmolt_device_image_transfer_complete_data;


#define BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_image_transfer_complete_data data; 
} bcmolt_device_image_transfer_complete;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ddr_test_completed ddr_test; 
} bcmolt_device_ddr_test_complete_data;


#define BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_ddr_test_complete_data data; 
} bcmolt_device_ddr_test_complete;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_100 module_name; 
    uint16_t module_id; 
    bcmolt_status status; 
} bcmolt_device_sw_health_check_failure_data;


#define BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_device_key key; 
    bcmolt_device_sw_health_check_failure_data data; 
} bcmolt_device_sw_health_check_failure;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool connection_complete; 
    bcmos_bool connection_established; 
    bcmos_bool connection_failure; 
    bcmos_bool ddr_test_complete; 
    bcmos_bool device_keep_alive; 
    bcmos_bool device_ready; 
    bcmos_bool disconnection_complete; 
    bcmos_bool image_transfer_complete; 
    bcmos_bool sw_error; 
    bcmos_bool sw_exception; 
    bcmos_bool sw_health_check_failure; 
} bcmolt_device_auto_cfg_data;


#define BCMOLT_DEVICE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000007FFULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_device_key key; 
    bcmolt_device_auto_cfg_data data; 
} bcmolt_device_auto_cfg;


typedef struct
{
    bcmolt_erps_id id; 
} bcmolt_erps_interface_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; 
    bcmolt_erps_intf_ref east_port; 
    bcmolt_erps_intf_ref west_port; 
    bcmolt_vlan_id control_vlan_id; 
    bcmolt_ring_port_state east_port_state; 
    bcmolt_ring_port_state west_port_state; 
} bcmolt_erps_interface_cfg_data;


#define BCMOLT_ERPS_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000E07ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_erps_interface_key key; 
    bcmolt_erps_interface_cfg_data data; 
} bcmolt_erps_interface_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_erps_interface_key key; 
    bcmolt_erps_interface_cfg_data filter; 
    bcmolt_erps_interface_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_erps_interface_cfg *responses; 

    bcmolt_erps_interface_key next_key; 
} bcmolt_erps_interface_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_erps_control command; 
    bcmolt_ring_port port; 
} bcmolt_erps_interface_set_ring_port_control_data;


#define BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_erps_interface_key key; 
    bcmolt_erps_interface_set_ring_port_control_data data; 
} bcmolt_erps_interface_set_ring_port_control;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ring_port port_id; 
    bcmolt_erps_control command; 
    bcmolt_ring_port_state port_state; 
    bcmolt_result result; 
} bcmolt_erps_interface_ring_port_control_data;


#define BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_erps_interface_key key; 
    bcmolt_erps_interface_ring_port_control_data data; 
} bcmolt_erps_interface_ring_port_control;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ring_port_control; 
} bcmolt_erps_interface_auto_cfg_data;


#define BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_erps_interface_key key; 
    bcmolt_erps_interface_auto_cfg_data data; 
} bcmolt_erps_interface_auto_cfg;


typedef struct
{
    bcmolt_eth_oam_id id; 
} bcmolt_eth_oam_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; 
    bcmolt_intf_ref intf_ref; 
    bcmolt_mep_cfg local_mep; 
    bcmolt_mep_cfg remote_mep; 
    bcmolt_meg_cfg meg; 
    bcmos_mac_address source_mac; 
    bcmos_mac_address dest_mac; 
    bcmolt_pkt_tag_type pkt_tag_type; 
    bcmolt_vlan_id o_vid; 
    uint8_t o_pbits; 
    uint16_t o_tpid; 
    bcmolt_vlan_id i_vid; 
    uint8_t i_pbits; 
    uint16_t i_tpid; 
} bcmolt_eth_oam_cfg_data;


#define BCMOLT_ETH_OAM_CFG_DATA_PRESENCE_MASK_ALL 0x000000000003FF27ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_eth_oam_key key; 
    bcmolt_eth_oam_cfg_data data; 
} bcmolt_eth_oam_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_eth_oam_key key; 
    bcmolt_eth_oam_cfg_data filter; 
    bcmolt_eth_oam_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_eth_oam_cfg *responses; 

    bcmolt_eth_oam_key next_key; 
} bcmolt_eth_oam_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ccm_event event; 
} bcmolt_eth_oam_ccm_event_data;


#define BCMOLT_ETH_OAM_CCM_EVENT_DATA_PRESENCE_MASK_ALL 0x0000000000000002ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_eth_oam_key key; 
    bcmolt_eth_oam_ccm_event_data data; 
} bcmolt_eth_oam_ccm_event;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_mep_type type; 
    bcmolt_control_state state; 
} bcmolt_eth_oam_set_mep_state_data;


#define BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_eth_oam_key key; 
    bcmolt_eth_oam_set_mep_state_data data; 
} bcmolt_eth_oam_set_mep_state;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
    bcmolt_control_state old_state; 
    bcmolt_control_state new_state; 
} bcmolt_eth_oam_state_change_data;


#define BCMOLT_ETH_OAM_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_eth_oam_key key; 
    bcmolt_eth_oam_state_change_data data; 
} bcmolt_eth_oam_state_change;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ccm_event; 
    bcmos_bool state_change; 
} bcmolt_eth_oam_auto_cfg_data;


#define BCMOLT_ETH_OAM_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_eth_oam_key key; 
    bcmolt_eth_oam_auto_cfg_data data; 
} bcmolt_eth_oam_auto_cfg;


typedef struct
{
    bcmolt_flow_id flow_id; 
    bcmolt_flow_type flow_type; 
} bcmolt_flow_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_flow_intf_ref ingress_intf; 
    bcmolt_flow_intf_ref egress_intf; 
    bcmolt_onu_id onu_id; 
    bcmolt_service_port_id svc_port_id; 
    bcmolt_classifier classifier; 
    uint16_t priority; 
    bcmolt_action action; 
    bcmolt_group_id group_id; 
    bcmolt_egress_qos egress_qos; 
    bcmolt_flow_state state; 
    bcmolt_control_state local_switching; 
    bcmolt_control_state statistics; 
    bcmolt_cookie cookie; 
} bcmolt_flow_cfg_data;


#define BCMOLT_FLOW_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000001FFFULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_flow_key key; 
    bcmolt_flow_cfg_data data; 
} bcmolt_flow_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_flow_key key; 
    bcmolt_flow_cfg_data filter; 
    bcmolt_flow_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_flow_cfg *responses; 

    bcmolt_flow_key next_key; 
} bcmolt_flow_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str buffer; 
} bcmolt_flow_send_eth_packet_data;


#define BCMOLT_FLOW_SEND_ETH_PACKET_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_flow_key key; 
    bcmolt_flow_send_eth_packet_data data; 
} bcmolt_flow_send_eth_packet;


typedef struct
{
    bcmolt_ldid device_id; 
    bcmolt_gpio_pin gpio_id; 
} bcmolt_gpio_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gpio_pin_dir direction; 
    bcmolt_gpio_value value; 
} bcmolt_gpio_cfg_data;


#define BCMOLT_GPIO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_gpio_key key; 
    bcmolt_gpio_cfg_data data; 
} bcmolt_gpio_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_gpio_key key; 
    bcmolt_gpio_cfg_data filter; 
    bcmolt_gpio_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_gpio_cfg *responses; 

    bcmolt_gpio_key next_key; 
} bcmolt_gpio_multi_cfg;


typedef struct
{
    bcmolt_group_id id; 
} bcmolt_group_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_group_member_info_list_u8 members; 
    bcmolt_cookie cookie; 
    bcmolt_group_type type; 
    bcmolt_group_state state; 
    bcmolt_action action; 
} bcmolt_group_cfg_data;


#define BCMOLT_GROUP_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_group_key key; 
    bcmolt_group_cfg_data data; 
} bcmolt_group_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_group_key key; 
    bcmolt_group_cfg_data filter; 
    bcmolt_group_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_group_cfg *responses; 

    bcmolt_group_key next_key; 
} bcmolt_group_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_group_members_update_command members_cmd; 
} bcmolt_group_members_update_data;


#define BCMOLT_GROUP_MEMBERS_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_group_key key; 
    bcmolt_group_members_update_data data; 
} bcmolt_group_members_update;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
    bcmolt_group_member_update_fail_reason fail_reason; 
} bcmolt_group_complete_members_update_data;


#define BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_group_key key; 
    bcmolt_group_complete_members_update_data data; 
} bcmolt_group_complete_members_update;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool complete_members_update; 
} bcmolt_group_auto_cfg_data;


#define BCMOLT_GROUP_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_group_key key; 
    bcmolt_group_auto_cfg_data data; 
} bcmolt_group_auto_cfg;


typedef struct
{
    bcmolt_inband_mgmt_instance_id id; 
} bcmolt_inband_mgmt_channel_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_flow_intf_ref nni_intf; 
    bcmolt_interface_id nic_intf_id; 
    uint16_t vlan_id; 
    bcmos_mac_address nic_card_mac; 
    bcmolt_inband_mgmt_action_type action; 
    bcmolt_inband_mgmt_state state; 
} bcmolt_inband_mgmt_channel_cfg_data;


#define BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000003FULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_inband_mgmt_channel_key key; 
    bcmolt_inband_mgmt_channel_cfg_data data; 
} bcmolt_inband_mgmt_channel_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_inband_mgmt_channel_key key; 
    bcmolt_inband_mgmt_channel_cfg_data filter; 
    bcmolt_inband_mgmt_channel_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_inband_mgmt_channel_cfg *responses; 

    bcmolt_inband_mgmt_channel_key next_key; 
} bcmolt_inband_mgmt_channel_multi_cfg;


typedef struct
{
    bcmolt_interface pon_ni; 
} bcmolt_internal_nni_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_mac_address mac_address; 
    bcmolt_nni_connection active_nni; 
    bcmolt_nni_link_status status; 
    bcmolt_nni_link_status backup_status; 
    bcmolt_nni_loopback_type loopback_type; 
    uint32_t status_polling_interval_ms; 
    bcmolt_internal_nni_redundancy redundancy; 
    bcmolt_control_state flow_control; 
} bcmolt_internal_nni_cfg_data;


#define BCMOLT_INTERNAL_NNI_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000003BEULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_internal_nni_key key; 
    bcmolt_internal_nni_cfg_data data; 
} bcmolt_internal_nni_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_internal_nni_key key; 
    bcmolt_internal_nni_cfg_data filter; 
    bcmolt_internal_nni_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_internal_nni_cfg *responses; 

    bcmolt_internal_nni_key next_key; 
} bcmolt_internal_nni_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status new_status; 
    bcmolt_nni_connection link; 
    bcmolt_nni_connection previous_active; 
    bcmolt_nni_connection new_active; 
} bcmolt_internal_nni_status_changed_data;


#define BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_internal_nni_key key; 
    bcmolt_internal_nni_status_changed_data data; 
} bcmolt_internal_nni_status_changed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool status_changed; 
} bcmolt_internal_nni_auto_cfg_data;


#define BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_internal_nni_key key; 
    bcmolt_internal_nni_auto_cfg_data data; 
} bcmolt_internal_nni_auto_cfg;


typedef struct
{
    bcmolt_interface pon_ni; 
    bcmolt_alloc_id alloc_id; 
} bcmolt_itupon_alloc_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_activation_state state; 
    bcmolt_pon_alloc_sla sla; 
    bcmolt_onu_id onu_id; 
} bcmolt_itupon_alloc_cfg_data;


#define BCMOLT_ITUPON_ALLOC_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_itupon_alloc_key key; 
    bcmolt_itupon_alloc_cfg_data data; 
} bcmolt_itupon_alloc_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_itupon_alloc_key key; 
    bcmolt_itupon_alloc_cfg_data filter; 
    bcmolt_itupon_alloc_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_itupon_alloc_cfg *responses; 

    bcmolt_itupon_alloc_key next_key; 
} bcmolt_itupon_alloc_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_activation_state new_state; 
} bcmolt_itupon_alloc_configuration_completed_data;


#define BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_itupon_alloc_key key; 
    bcmolt_itupon_alloc_configuration_completed_data data; 
} bcmolt_itupon_alloc_configuration_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t num_of_cycles; 
} bcmolt_itupon_alloc_get_stats_data;


#define BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_itupon_alloc_key key; 
    bcmolt_itupon_alloc_get_stats_data data; 
} bcmolt_itupon_alloc_get_stats;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    uint32_t average_nsr_used; 
    uint32_t average_nsr_allocated; 
    uint32_t average_sr_report; 
} bcmolt_itupon_alloc_get_alloc_stats_completed_data;


#define BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_itupon_alloc_key key; 
    bcmolt_itupon_alloc_get_alloc_stats_completed_data data; 
} bcmolt_itupon_alloc_get_alloc_stats_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_alloc_operation state; 
} bcmolt_itupon_alloc_set_state_data;


#define BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_itupon_alloc_key key; 
    bcmolt_itupon_alloc_set_state_data data; 
} bcmolt_itupon_alloc_set_state;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool configuration_completed; 
    bcmos_bool get_alloc_stats_completed; 
} bcmolt_itupon_alloc_auto_cfg_data;


#define BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_itupon_alloc_key key; 
    bcmolt_itupon_alloc_auto_cfg_data data; 
} bcmolt_itupon_alloc_auto_cfg;


typedef struct
{
    bcmolt_interface pon_ni; 
    bcmolt_gem_port_id gem_port_id; 
} bcmolt_itupon_gem_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gem_port_configuration configuration; 
    bcmolt_onu_id onu_id; 
    bcmolt_activation_state state; 
    bcmolt_control_state encryption_mode; 
    bcmolt_us_gem_port_destination upstream_destination_queue; 
    bcmolt_control_state control; 
    uint16_t mac_table_entry_limit; 
    bcmolt_debug_flow_config debug_flow_config; 
} bcmolt_itupon_gem_cfg_data;


#define BCMOLT_ITUPON_GEM_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000000FFULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_itupon_gem_key key; 
    bcmolt_itupon_gem_cfg_data data; 
} bcmolt_itupon_gem_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_itupon_gem_key key; 
    bcmolt_itupon_gem_cfg_data filter; 
    bcmolt_itupon_gem_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_itupon_gem_cfg *responses; 

    bcmolt_itupon_gem_key next_key; 
} bcmolt_itupon_gem_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_activation_state new_state; 
} bcmolt_itupon_gem_configuration_completed_data;


#define BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_itupon_gem_key key; 
    bcmolt_itupon_gem_configuration_completed_data data; 
} bcmolt_itupon_gem_configuration_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gem_port_operation state; 
} bcmolt_itupon_gem_set_state_data;


#define BCMOLT_ITUPON_GEM_SET_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_itupon_gem_key key; 
    bcmolt_itupon_gem_set_state_data data; 
} bcmolt_itupon_gem_set_state;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool configuration_completed; 
} bcmolt_itupon_gem_auto_cfg_data;


#define BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_itupon_gem_key key; 
    bcmolt_itupon_gem_auto_cfg_data data; 
} bcmolt_itupon_gem_auto_cfg;


typedef struct
{
    bcmolt_ldid device_id; 
    bcmolt_str_100 name; 
} bcmolt_log_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_log_type type; 
    bcmolt_log_style style; 
    bcmolt_log_level_per_file level; 
    bcmolt_log_level_msg_count msg_count; 
    uint32_t lost_msg_count; 
} bcmolt_log_cfg_data;


#define BCMOLT_LOG_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_log_key key; 
    bcmolt_log_cfg_data data; 
} bcmolt_log_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_log_key key; 
    bcmolt_log_cfg_data filter; 
    bcmolt_log_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_log_cfg *responses; 

    bcmolt_log_key next_key; 
} bcmolt_log_multi_cfg;


typedef struct
{
    bcmolt_ldid device_id; 
    bcmolt_log_file_id file_id; 
} bcmolt_log_file_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool wrap_around; 
    bcmos_bool clear_after_read; 
    uint32_t msg_count; 
    uint32_t msgs_read; 
    uint32_t msgs_remaining; 
    bcmolt_str_2048 buffer; 
} bcmolt_log_file_cfg_data;


#define BCMOLT_LOG_FILE_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000003FULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_log_file_key key; 
    bcmolt_log_file_cfg_data data; 
} bcmolt_log_file_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_log_file_key key; 
    bcmolt_log_file_cfg_data filter; 
    bcmolt_log_file_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_log_file_cfg *responses; 

    bcmolt_log_file_key next_key; 
} bcmolt_log_file_multi_cfg;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_log_file_key key; 
} bcmolt_log_file_clear;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_log_file_key key; 
} bcmolt_log_file_reset_buffer_ptr;


typedef struct
{
    bcmolt_interface pon_ni; 
} bcmolt_ngpon2_channel_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_system_profile system_profile; 
    bcmolt_arr_channel_profile_8 channel_profile; 
} bcmolt_ngpon2_channel_cfg_data;


#define BCMOLT_NGPON2_CHANNEL_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_NGPON2_CHANNEL_CFG_DATA_CHANNEL_PROFILE_LENGTH 8


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_ngpon2_channel_key key; 
    bcmolt_ngpon2_channel_cfg_data data; 
} bcmolt_ngpon2_channel_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_ngpon2_channel_key key; 
    bcmolt_ngpon2_channel_cfg_data filter; 
    bcmolt_ngpon2_channel_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_ngpon2_channel_cfg *responses; 

    bcmolt_ngpon2_channel_key next_key; 
} bcmolt_ngpon2_channel_multi_cfg;


typedef struct
{
    bcmolt_nni_id id; 
} bcmolt_nni_interface_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
    bcmolt_interface_state old_state; 
    bcmolt_interface_state new_state; 
} bcmolt_nni_interface_state_change_data;


#define BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_nni_interface_key key; 
    bcmolt_nni_interface_state_change_data data; 
} bcmolt_nni_interface_state_change;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state config_state; 
    bcmolt_interface_state state; 
    bcmolt_protection_type protection_type; 
    bcmolt_link_state link_state; 
    bcmolt_link_fault_code link_fault_code; 
    bcmolt_str_48 description; 
    bcmolt_policer_profile_id policer_profile; 
} bcmolt_nni_interface_cfg_data;


#define BCMOLT_NNI_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000000FBULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_nni_interface_key key; 
    bcmolt_nni_interface_cfg_data data; 
} bcmolt_nni_interface_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_nni_interface_key key; 
    bcmolt_nni_interface_cfg_data filter; 
    bcmolt_nni_interface_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_nni_interface_cfg *responses; 

    bcmolt_nni_interface_key next_key; 
} bcmolt_nni_interface_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_operation nni_state; 
} bcmolt_nni_interface_set_nni_state_data;


#define BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_nni_interface_key key; 
    bcmolt_nni_interface_set_nni_state_data data; 
} bcmolt_nni_interface_set_nni_state;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_link_state old_state; 
    bcmolt_link_state new_state; 
    bcmolt_link_fault_code fault_code; 
} bcmolt_nni_interface_link_state_change_data;


#define BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_nni_interface_key key; 
    bcmolt_nni_interface_link_state_change_data data; 
} bcmolt_nni_interface_link_state_change;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool link_state_change; 
    bcmos_bool state_change; 
} bcmolt_nni_interface_auto_cfg_data;


#define BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_nni_interface_key key; 
    bcmolt_nni_interface_auto_cfg_data data; 
} bcmolt_nni_interface_auto_cfg;


typedef struct
{
    uint8_t reserved; 
} bcmolt_olt_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_topology topology; 
    bcmolt_bal_state bal_state; 
    bcmolt_host_sw_version host_sw_version; 
} bcmolt_olt_cfg_data;


#define BCMOLT_OLT_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_olt_key key; 
    bcmolt_olt_cfg_data data; 
} bcmolt_olt_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_olt_key key; 
    bcmolt_olt_cfg_data filter; 
    bcmolt_olt_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_olt_cfg *responses; 

    bcmolt_olt_key next_key; 
} bcmolt_olt_multi_cfg;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_olt_key key; 
} bcmolt_olt_connect;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_olt_key key; 
} bcmolt_olt_connected;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_olt_key key; 
} bcmolt_olt_disconnect;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_olt_key key; 
} bcmolt_olt_bal_reset;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_olt_disconnect_reason reason; 
} bcmolt_olt_disconnected_data;


#define BCMOLT_OLT_DISCONNECTED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_olt_key key; 
    bcmolt_olt_disconnected_data data; 
} bcmolt_olt_disconnected;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bal_fail_reason reason; 
} bcmolt_olt_bal_failure_data;


#define BCMOLT_OLT_BAL_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_olt_key key; 
    bcmolt_olt_bal_failure_data data; 
} bcmolt_olt_bal_failure;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_olt_key key; 
} bcmolt_olt_bal_ready;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_100 task_name; 
    bcmolt_str_100 file_name; 
    uint32_t line_number; 
    bcmolt_str_100 error_string; 
} bcmolt_olt_sw_error_data;


#define BCMOLT_OLT_SW_ERROR_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_olt_key key; 
    bcmolt_olt_sw_error_data data; 
} bcmolt_olt_sw_error;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_reset_mode mode; 
} bcmolt_olt_reset_data;


#define BCMOLT_OLT_RESET_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_olt_key key; 
    bcmolt_olt_reset_data data; 
} bcmolt_olt_reset;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool bal_failure; 
    bcmos_bool bal_ready; 
    bcmos_bool connected; 
    bcmos_bool disconnected; 
    bcmos_bool sw_error; 
} bcmolt_olt_auto_cfg_data;


#define BCMOLT_OLT_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_olt_key key; 
    bcmolt_olt_auto_cfg_data data; 
} bcmolt_olt_auto_cfg;


typedef struct
{
    bcmolt_interface pon_ni; 
    bcmolt_onu_id onu_id; 
} bcmolt_onu_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_state onu_state; 
    bcmolt_onu_state onu_old_state; 
    bcmolt_onu_rate onu_rate; 
    bcmolt_itu_onu_params itu; 
} bcmolt_onu_cfg_data;


#define BCMOLT_ONU_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_cfg_data data; 
} bcmolt_onu_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_cfg_data filter; 
    bcmolt_onu_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_onu_cfg *responses; 

    bcmolt_onu_key next_key; 
} bcmolt_onu_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_operation onu_state; 
} bcmolt_onu_set_onu_state_data;


#define BCMOLT_ONU_SET_ONU_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_set_onu_state_data data; 
} bcmolt_onu_set_onu_state;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_rssi_measurement;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool sma_flag; 
} bcmolt_onu_request_registration_data;


#define BCMOLT_ONU_REQUEST_REGISTRATION_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_request_registration_data data; 
} bcmolt_onu_request_registration;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_power_levelling_control control; 
    uint8_t attenuation; 
} bcmolt_onu_change_power_levelling_data;


#define BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_change_power_levelling_data data; 
} bcmolt_onu_change_power_levelling;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_get_power_level;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_get_power_consumption;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_frequency_adjustment_direction frequency_adjustment_direction; 
    uint8_t frequency_adjustment_size; 
} bcmolt_onu_adjust_tx_wavelength_data;


#define BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_adjust_tx_wavelength_data data; 
} bcmolt_onu_adjust_tx_wavelength;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key master_key; 
    bcmolt_bin_str buffer; 
    uint32_t mic; 
} bcmolt_onu_secure_mutual_authentication_data;


#define BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_secure_mutual_authentication_data data; 
} bcmolt_onu_secure_mutual_authentication;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_tuning_in;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_pon_id target_ds_pon_id; 
    bcmolt_pon_id target_us_pon_id; 
    uint32_t time_to_switch; 
    bcmos_bool rollback; 
    bcmolt_status status; 
} bcmolt_onu_tuning_out_data;


#define BCMOLT_ONU_TUNING_OUT_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_tuning_out_data data; 
} bcmolt_onu_tuning_out;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_xgpon_onu_alarms xgpon_onu_alarm; 
} bcmolt_onu_xgpon_alarm_data;


#define BCMOLT_ONU_XGPON_ALARM_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_xgpon_alarm_data data; 
} bcmolt_onu_xgpon_alarm;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gpon_onu_alarms gpon_onu_alarm; 
} bcmolt_onu_gpon_alarm_data;


#define BCMOLT_ONU_GPON_ALARM_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_gpon_alarm_data data; 
} bcmolt_onu_gpon_alarm;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
    int32_t drift_value; 
    uint32_t new_eqd; 
} bcmolt_onu_dowi_data;


#define BCMOLT_ONU_DOWI_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_dowi_data data; 
} bcmolt_onu_dowi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
    uint32_t ber; 
} bcmolt_onu_sfi_data;


#define BCMOLT_ONU_SFI_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_sfi_data data; 
} bcmolt_onu_sfi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
    uint32_t ber; 
} bcmolt_onu_sdi_data;


#define BCMOLT_ONU_SDI_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_sdi_data data; 
} bcmolt_onu_sdi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_dfi_data;


#define BCMOLT_ONU_DFI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_dfi_data data; 
} bcmolt_onu_dfi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_pqsi_data;


#define BCMOLT_ONU_PQSI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_pqsi_data data; 
} bcmolt_onu_pqsi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_sufi_data;


#define BCMOLT_ONU_SUFI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_sufi_data data; 
} bcmolt_onu_sufi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
    int32_t drift_value; 
} bcmolt_onu_tiwi_data;


#define BCMOLT_ONU_TIWI_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_tiwi_data data; 
} bcmolt_onu_tiwi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_looci_data;


#define BCMOLT_ONU_LOOCI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_looci_data data; 
} bcmolt_onu_looci;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_loai_data;


#define BCMOLT_ONU_LOAI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_loai_data data; 
} bcmolt_onu_loai;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_dgi_data;


#define BCMOLT_ONU_DGI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_dgi_data data; 
} bcmolt_onu_dgi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_pee_data;


#define BCMOLT_ONU_PEE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_pee_data data; 
} bcmolt_onu_pee;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t link_number; 
    uint8_t k1; 
    uint8_t k2; 
} bcmolt_onu_pst_data;


#define BCMOLT_ONU_PST_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_pst_data data; 
} bcmolt_onu_pst;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_ranging_fail_reason fail_reason; 
    uint32_t eqd; 
    uint8_t number_of_ploams; 
} bcmolt_onu_ranging_completed_data;


#define BCMOLT_ONU_RANGING_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_ranging_completed_data data; 
} bcmolt_onu_ranging_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_activation_fail_reason fail_reason; 
    bcmolt_bin_str_36 registration_id; 
    bcmolt_xgpon_onu_registration_keys registration_encryption_keys; 
} bcmolt_onu_onu_activation_completed_data;


#define BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL
#define BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_REGISTRATION_ID_MAX_LENGTH 36
#define BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_REGISTRATION_ID_LENGTH 36


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_onu_activation_completed_data data; 
} bcmolt_onu_onu_activation_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_deactivation_fail_reason fail_reason; 
} bcmolt_onu_onu_deactivation_completed_data;


#define BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_onu_deactivation_completed_data data; 
} bcmolt_onu_onu_deactivation_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_serial_number serial_number; 
} bcmolt_onu_onu_enable_completed_data;


#define BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_onu_enable_completed_data data; 
} bcmolt_onu_onu_enable_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_serial_number serial_number; 
    bcmolt_deactivation_fail_reason fail_reason; 
    bcmolt_result status; 
} bcmolt_onu_onu_disable_completed_data;


#define BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_onu_disable_completed_data data; 
} bcmolt_onu_onu_disable_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_rssi_measurement_fail_reason fail_reason; 
} bcmolt_onu_rssi_measurement_completed_data;


#define BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_rssi_measurement_completed_data data; 
} bcmolt_onu_rssi_measurement_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_alloc_id alloc_id; 
} bcmolt_onu_invalid_dbru_report_data;


#define BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_invalid_dbru_report_data data; 
} bcmolt_onu_invalid_dbru_report;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_itupon_onu_aes_key new_key; 
} bcmolt_onu_key_exchange_completed_data;


#define BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_key_exchange_completed_data data; 
} bcmolt_onu_key_exchange_completed;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_key_exchange_key_request_timeout;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_key_exchange_cycle_skipped;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key expected_key; 
    bcmolt_aes_key received_key; 
} bcmolt_onu_key_exchange_key_mismatch_data;


#define BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_key_exchange_key_mismatch_data data; 
} bcmolt_onu_key_exchange_key_mismatch;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_optical_reflection;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
} bcmolt_onu_loki_data;


#define BCMOLT_ONU_LOKI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_loki_data data; 
} bcmolt_onu_loki;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_13 ploam_buffer; 
} bcmolt_onu_memi_data;


#define BCMOLT_ONU_MEMI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_ONU_MEMI_DATA_PLOAM_BUFFER_MAX_LENGTH 13
#define BCMOLT_ONU_MEMI_DATA_PLOAM_BUFFER_LENGTH 13


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_memi_data data; 
} bcmolt_onu_memi;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gem_port_id gem_port; 
    bcmolt_result status; 
    bcmolt_omci_port_id_operation operation; 
} bcmolt_onu_omci_port_id_configuration_completed_data;


#define BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_omci_port_id_configuration_completed_data data; 
} bcmolt_onu_omci_port_id_configuration_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ber_interval ber_interval; 
    bcmolt_result result; 
} bcmolt_onu_ber_interval_configuration_completed_data;


#define BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_ber_interval_configuration_completed_data data; 
} bcmolt_onu_ber_interval_configuration_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t bip8_errors; 
} bcmolt_onu_err_data;


#define BCMOLT_ONU_ERR_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_err_data data; 
} bcmolt_onu_err;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_password_authentication_fail_reason fail_reason; 
    bcmolt_bin_str_10 password; 
} bcmolt_onu_password_authentication_completed_data;


#define BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_PASSWORD_MAX_LENGTH 10
#define BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_PASSWORD_LENGTH 10


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_password_authentication_completed_data data; 
} bcmolt_onu_password_authentication_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t expected_index; 
    uint32_t actual_index; 
} bcmolt_onu_key_exchange_unconsecutive_index_data;


#define BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_key_exchange_unconsecutive_index_data data; 
} bcmolt_onu_key_exchange_unconsecutive_index;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key new_key; 
} bcmolt_onu_key_exchange_decrypt_required_data;


#define BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_key_exchange_decrypt_required_data data; 
} bcmolt_onu_key_exchange_decrypt_required;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
} bcmolt_onu_onu_activation_standby_completed_data;


#define BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_onu_activation_standby_completed_data data; 
} bcmolt_onu_onu_activation_standby_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_state old_state; 
    bcmolt_onu_state new_state; 
    bcmolt_power_management_transition_reason reason; 
} bcmolt_onu_power_management_state_change_data;


#define BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_power_management_state_change_data data; 
} bcmolt_onu_power_management_state_change;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; 
    int32_t estimated_drift; 
} bcmolt_onu_possible_drift_data;


#define BCMOLT_ONU_POSSIBLE_DRIFT_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_possible_drift_data data; 
} bcmolt_onu_possible_drift;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_36 registration_id; 
    bcmolt_result request_registration_status; 
    bcmolt_request_registration_fail_reason request_registration_fail_reason; 
} bcmolt_onu_registration_id_data;


#define BCMOLT_ONU_REGISTRATION_ID_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_ONU_REGISTRATION_ID_DATA_REGISTRATION_ID_MAX_LENGTH 36
#define BCMOLT_ONU_REGISTRATION_ID_DATA_REGISTRATION_ID_LENGTH 36


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_registration_id_data data; 
} bcmolt_onu_registration_id;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t attenuation; 
    uint8_t power_levelling_capability; 
} bcmolt_onu_power_level_report_data;


#define BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_power_level_report_data data; 
} bcmolt_onu_power_level_report;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_arr_power_consumption_channel_report_8 power_consumption_report; 
} bcmolt_onu_power_consumption_report_data;


#define BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_POWER_CONSUMPTION_REPORT_LENGTH 8


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_power_consumption_report_data data; 
} bcmolt_onu_power_consumption_report;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; 
    bcmolt_secure_mutual_authentication_fail_reason fail_reason; 
} bcmolt_onu_secure_mutual_authentication_failure_data;


#define BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_secure_mutual_authentication_failure_data data; 
} bcmolt_onu_secure_mutual_authentication_failure;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
    bcmolt_tune_out_fail_reason fail_reason; 
} bcmolt_onu_onu_tuning_out_completed_data;


#define BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_onu_tuning_out_completed_data data; 
} bcmolt_onu_onu_tuning_out_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
    bcmolt_tune_in_fail_reason fail_reason; 
} bcmolt_onu_onu_tuning_in_completed_data;


#define BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_onu_tuning_in_completed_data data; 
} bcmolt_onu_onu_tuning_in_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ack; 
    bcmolt_result result; 
} bcmolt_onu_tuning_response_data;


#define BCMOLT_ONU_TUNING_RESPONSE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_tuning_response_data data; 
} bcmolt_onu_tuning_response;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool default_key; 
    bcmolt_bin_str_40 ploam; 
} bcmolt_onu_ploam_packet_data;


#define BCMOLT_ONU_PLOAM_PACKET_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_ONU_PLOAM_PACKET_DATA_PLOAM_MAX_LENGTH 40
#define BCMOLT_ONU_PLOAM_PACKET_DATA_PLOAM_LENGTH 40


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_ploam_packet_data data; 
} bcmolt_onu_ploam_packet;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_packet_type packet_type; 
    bcmos_bool calc_crc; 
    uint8_t number_of_packets; 
    uint16_t packet_size; 
    bcmolt_bin_str buffer; 
} bcmolt_onu_cpu_packets_data;


#define BCMOLT_ONU_CPU_PACKETS_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_cpu_packets_data data; 
} bcmolt_onu_cpu_packets;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t port_id; 
    bcmos_bool crc_ok; 
    uint32_t packet_size; 
    bcmolt_bin_str buffer; 
} bcmolt_onu_cpu_packet_data;


#define BCMOLT_ONU_CPU_PACKET_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_cpu_packet_data data; 
} bcmolt_onu_cpu_packet;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t port_id; 
    bcmos_bool crc_ok; 
    uint32_t packet_size; 
    bcmolt_bin_str buffer; 
} bcmolt_onu_omci_packet_data;


#define BCMOLT_ONU_OMCI_PACKET_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_omci_packet_data data; 
} bcmolt_onu_omci_packet;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_onu_ready_for_data_grant;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t bip8_errors; 
} bcmolt_onu_rei_data;


#define BCMOLT_ONU_REI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_rei_data data; 
} bcmolt_onu_rei;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_onu_key key; 
} bcmolt_onu_force_deactivation;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_operation new_onu_state; 
} bcmolt_onu_state_change_data;


#define BCMOLT_ONU_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_state_change_data data; 
} bcmolt_onu_state_change;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ber_interval_configuration_completed; 
    bcmos_bool cpu_packet; 
    bcmos_bool dfi; 
    bcmos_bool dgi; 
    bcmos_bool dowi; 
    bcmos_bool err; 
    bcmos_bool gpon_alarm; 
    bcmos_bool invalid_dbru_report; 
    bcmos_bool key_exchange_completed; 
    bcmos_bool key_exchange_cycle_skipped; 
    bcmos_bool key_exchange_decrypt_required; 
    bcmos_bool key_exchange_key_mismatch; 
    bcmos_bool key_exchange_key_request_timeout; 
    bcmos_bool key_exchange_unconsecutive_index; 
    bcmos_bool loai; 
    bcmos_bool loki; 
    bcmos_bool looci; 
    bcmos_bool memi; 
    bcmos_bool omci_packet; 
    bcmos_bool omci_port_id_configuration_completed; 
    bcmos_bool onu_activation_completed; 
    bcmos_bool onu_activation_standby_completed; 
    bcmos_bool onu_deactivation_completed; 
    bcmos_bool onu_disable_completed; 
    bcmos_bool onu_enable_completed; 
    bcmos_bool onu_ready_for_data_grant; 
    bcmos_bool onu_tuning_in_completed; 
    bcmos_bool onu_tuning_out_completed; 
    bcmos_bool optical_reflection; 
    bcmos_bool password_authentication_completed; 
    bcmos_bool pee; 
    bcmos_bool possible_drift; 
    bcmos_bool power_consumption_report; 
    bcmos_bool power_level_report; 
    bcmos_bool power_management_state_change; 
    bcmos_bool pqsi; 
    bcmos_bool pst; 
    bcmos_bool ranging_completed; 
    bcmos_bool registration_id; 
    bcmos_bool rei; 
    bcmos_bool rssi_measurement_completed; 
    bcmos_bool sdi; 
    bcmos_bool secure_mutual_authentication_failure; 
    bcmos_bool sfi; 
    bcmos_bool state_change; 
    bcmos_bool sufi; 
    bcmos_bool tiwi; 
    bcmos_bool tuning_response; 
    bcmos_bool xgpon_alarm; 
} bcmolt_onu_auto_cfg_data;


#define BCMOLT_ONU_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0001FFFFFFFFFFFFULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_onu_key key; 
    bcmolt_onu_auto_cfg_data data; 
} bcmolt_onu_auto_cfg;


typedef struct
{
    uint16_t id; 
    bcmolt_tm_sched_dir dir; 
} bcmolt_pbit_to_tc_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_8 tc; 
} bcmolt_pbit_to_tc_cfg_data;


#define BCMOLT_PBIT_TO_TC_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_PBIT_TO_TC_CFG_DATA_TC_MAX_LENGTH 8
#define BCMOLT_PBIT_TO_TC_CFG_DATA_TC_LENGTH 8


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_pbit_to_tc_key key; 
    bcmolt_pbit_to_tc_cfg_data data; 
} bcmolt_pbit_to_tc_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_pbit_to_tc_key key; 
    bcmolt_pbit_to_tc_cfg_data filter; 
    bcmolt_pbit_to_tc_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_pbit_to_tc_cfg *responses; 

    bcmolt_pbit_to_tc_key next_key; 
} bcmolt_pbit_to_tc_multi_cfg;


typedef struct
{
    bcmolt_policer_profile_id id; 
} bcmolt_policer_profile_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; 
    bcmolt_policer_type type; 
    bcmolt_policer_app target_object; 
    bcmolt_traffic_type traffic_type; 
    uint32_t cir_kbps; 
    uint32_t pir_kbps; 
    uint32_t cbs_kb; 
    uint32_t pbs_kb; 
    bcmos_bool color_awareness; 
    bcmos_bool color_marking; 
} bcmolt_policer_profile_cfg_data;


#define BCMOLT_POLICER_PROFILE_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000003FFULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_policer_profile_key key; 
    bcmolt_policer_profile_cfg_data data; 
} bcmolt_policer_profile_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_policer_profile_key key; 
    bcmolt_policer_profile_cfg_data filter; 
    bcmolt_policer_profile_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_policer_profile_cfg *responses; 

    bcmolt_policer_profile_key next_key; 
} bcmolt_policer_profile_multi_cfg;


typedef struct
{
    bcmolt_interface pon_ni; 
} bcmolt_pon_interface_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_state state; 
    bcmolt_status los_status; 
    bcmolt_status los_initial_value; 
    bcmolt_service_discovery discovery; 
    bcmolt_itu_pon_params itu; 
    bcmolt_pon_distance pon_distance; 
    uint16_t number_of_active_onus; 
    uint16_t number_of_active_standby_onus; 
    bcmolt_gpon_trx gpon_trx; 
    bcmolt_xgpon_trx xgpon_trx; 
    bcmolt_xgpon_trx xgs_ngpon2_trx; 
} bcmolt_pon_interface_cfg_data;


#define BCMOLT_PON_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000003F3DULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_cfg_data data; 
} bcmolt_pon_interface_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_cfg_data filter; 
    bcmolt_pon_interface_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_pon_interface_cfg *responses; 

    bcmolt_pon_interface_key next_key; 
} bcmolt_pon_interface_multi_cfg;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_operation operation; 
} bcmolt_pon_interface_set_pon_interface_state_data;


#define BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_set_pon_interface_state_data data; 
} bcmolt_pon_interface_set_pon_interface_state;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_operation onu_state; 
} bcmolt_pon_interface_set_onu_state_data;


#define BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_set_onu_state_data data; 
} bcmolt_pon_interface_set_onu_state;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_reset;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_disable_serial_number_control control; 
    bcmolt_serial_number serial_number; 
} bcmolt_pon_interface_disable_serial_number_data;


#define BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_disable_serial_number_data data; 
} bcmolt_pon_interface_disable_serial_number;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_single_request_standby_pon_monitoring;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t number_of_cycle; 
    uint8_t allocation_number; 
    uint8_t bw_map_array; 
} bcmolt_pon_interface_run_special_bw_map_data;


#define BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_run_special_bw_map_data data; 
} bcmolt_pon_interface_run_special_bw_map;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_tod_request;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_id_list_u32 list_of_onu_ids; 
} bcmolt_pon_interface_start_onu_upgrade_data;


#define BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_start_onu_upgrade_data data; 
} bcmolt_pon_interface_start_onu_upgrade;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_abort_onu_upgrade;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_switch_over_type_c_onu_state onu_state; 
    bcmolt_onu_id_list_u32 onu_list; 
} bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data;


#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data data; 
} bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t rerange_delta; 
} bcmolt_pon_interface_protection_switching_apply_rerange_delta_data;


#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_protection_switching_apply_rerange_delta_data data; 
} bcmolt_pon_interface_protection_switching_apply_rerange_delta;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_packet_type packet_type; 
    bcmos_bool calc_crc; 
    bcmolt_gem_port_id_list_u8_max_16 gem_port_list; 
    bcmolt_bin_str buffer; 
} bcmolt_pon_interface_cpu_packets_data;


#define BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL
#define BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_GEM_PORT_LIST_MIN_LENGTH 0
#define BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_GEM_PORT_LIST_MAX_LENGTH 16


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_cpu_packets_data data; 
} bcmolt_pon_interface_cpu_packets;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_40 ploam; 
} bcmolt_pon_interface_broadcast_ploam_packet_data;


#define BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_PLOAM_MAX_LENGTH 40
#define BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_PLOAM_LENGTH 40


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_broadcast_ploam_packet_data data; 
} bcmolt_pon_interface_broadcast_ploam_packet;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
    bcmolt_interface_state previous_state; 
    bcmolt_interface_state new_state; 
} bcmolt_pon_interface_state_change_completed_data;


#define BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_state_change_completed_data data; 
} bcmolt_pon_interface_state_change_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_64 tod_string; 
    uint64_t sfc; 
    uint64_t rtc_offset_sec; 
    uint32_t rtc_offset_nsec; 
    bcmolt_result status; 
} bcmolt_pon_interface_tod_request_completed_data;


#define BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_tod_request_completed_data data; 
} bcmolt_pon_interface_tod_request_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status status; 
} bcmolt_pon_interface_los_data;


#define BCMOLT_PON_INTERFACE_LOS_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_los_data data; 
} bcmolt_pon_interface_los;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_serial_number_acquisition_cycle_start;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_traffic_resume_result result; 
} bcmolt_pon_interface_protection_switching_traffic_resume_data;


#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_protection_switching_traffic_resume_data data; 
} bcmolt_pon_interface_protection_switching_traffic_resume;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_itupon_onu_eqd_list_u32 onus; 
} bcmolt_pon_interface_protection_switching_onus_ranged_data;


#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_protection_switching_onus_ranged_data data; 
} bcmolt_pon_interface_protection_switching_onus_ranged;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_protection_switching_rerange_failure;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; 
} bcmolt_pon_interface_protection_switching_switchover_completed_data;


#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_protection_switching_switchover_completed_data data; 
} bcmolt_pon_interface_protection_switching_switchover_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t number_of_detected_delimiter; 
    bcmolt_status energy_detect_signal; 
} bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data;


#define BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data data; 
} bcmolt_pon_interface_standby_pon_monitoring_cycle_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_serial_number serial_number; 
    uint32_t ranging_time; 
    bcmolt_onu_id onu_id; 
    bcmolt_upstream_line_rate_capabilities upstream_line_rate_capabilities; 
    uint8_t current_downstream_pon_id; 
    uint8_t current_upstream_pon_id; 
    bcmolt_arr_calibration_record_8 calibration_record; 
    uint8_t tuning_granularity; 
    uint8_t step_tuning_time; 
    uint8_t attenuation; 
    uint8_t power_levelling_capabilities; 
} bcmolt_pon_interface_onu_discovered_data;


#define BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_PRESENCE_MASK_ALL 0x00000000000007FFULL
#define BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_CALIBRATION_RECORD_LENGTH 8


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_onu_discovered_data data; 
} bcmolt_pon_interface_onu_discovered;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_packet_injection_error error; 
    bcmolt_gem_port_id gem_port_id; 
} bcmolt_pon_interface_cpu_packets_failure_data;


#define BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_cpu_packets_failure_data data; 
} bcmolt_pon_interface_cpu_packets_failure;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_deactivate_all_onus_completed;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_disable_all_onus_completed;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_activate_all_onus_completed;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_enable_all_onus_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_pon_ni_onu_upgrade_status_code overall_status; 
    uint32_t file_size_in_bytes; 
    bcmolt_onu_upgrade_status_list_u32_max_128 onu_status; 
} bcmolt_pon_interface_onu_upgrade_complete_data;


#define BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ONU_STATUS_MAX_LENGTH 128


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_onu_upgrade_complete_data data; 
} bcmolt_pon_interface_onu_upgrade_complete;


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
} bcmolt_pon_interface_ieee_rogue_detection_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t mpcp_timestamp; 
} bcmolt_pon_interface_mpcp_timestamp_changed_data;


#define BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_mpcp_timestamp_changed_data data; 
} bcmolt_pon_interface_mpcp_timestamp_changed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool activate_all_onus_completed; 
    bcmos_bool cpu_packets_failure; 
    bcmos_bool deactivate_all_onus_completed; 
    bcmos_bool disable_all_onus_completed; 
    bcmos_bool enable_all_onus_completed; 
    bcmos_bool ieee_rogue_detection_completed; 
    bcmos_bool los; 
    bcmos_bool mpcp_timestamp_changed; 
    bcmos_bool onu_discovered; 
    bcmos_bool onu_upgrade_complete; 
    bcmos_bool protection_switching_onus_ranged; 
    bcmos_bool protection_switching_rerange_failure; 
    bcmos_bool protection_switching_switchover_completed; 
    bcmos_bool protection_switching_traffic_resume; 
    bcmos_bool serial_number_acquisition_cycle_start; 
    bcmos_bool standby_pon_monitoring_cycle_completed; 
    bcmos_bool state_change_completed; 
    bcmos_bool tod_request_completed; 
} bcmolt_pon_interface_auto_cfg_data;


#define BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x000000000003FFFFULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_pon_interface_key key; 
    bcmolt_pon_interface_auto_cfg_data data; 
} bcmolt_pon_interface_auto_cfg;


typedef struct
{
    bcmolt_protection_interface_id id; 
} bcmolt_protection_interface_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; 
    bcmolt_intf_ref primary_interface; 
    bcmolt_intf_ref secondary_interface; 
    bcmolt_active_interface active_interface; 
} bcmolt_protection_interface_cfg_data;


#define BCMOLT_PROTECTION_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_protection_interface_key key; 
    bcmolt_protection_interface_cfg_data data; 
} bcmolt_protection_interface_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_protection_interface_key key; 
    bcmolt_protection_interface_cfg_data filter; 
    bcmolt_protection_interface_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_protection_interface_cfg *responses; 

    bcmolt_protection_interface_key next_key; 
} bcmolt_protection_interface_multi_cfg;


typedef struct
{
    bcmolt_oper hdr; 
    bcmolt_protection_interface_key key; 
} bcmolt_protection_interface_protection_switch;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_active_interface active_interface; 
} bcmolt_protection_interface_protection_switch_completed_data;


#define BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto hdr; 
    bcmolt_protection_interface_key key; 
    bcmolt_protection_interface_protection_switch_completed_data data; 
} bcmolt_protection_interface_protection_switch_completed;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool protection_switch_completed; 
} bcmolt_protection_interface_auto_cfg_data;


#define BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_auto_cfg hdr; 
    bcmolt_protection_interface_key key; 
    bcmolt_protection_interface_auto_cfg_data data; 
} bcmolt_protection_interface_auto_cfg;


typedef struct
{
    bcmolt_ldid device_id; 
    uint32_t idx; 
} bcmolt_software_error_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_sw_error entry; 
} bcmolt_software_error_cfg_data;


#define BCMOLT_SOFTWARE_ERROR_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_software_error_key key; 
    bcmolt_software_error_cfg_data data; 
} bcmolt_software_error_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_software_error_key key; 
    bcmolt_software_error_cfg_data filter; 
    bcmolt_software_error_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_software_error_cfg *responses; 

    bcmolt_software_error_key next_key; 
} bcmolt_software_error_multi_cfg;


typedef struct
{
    bcmolt_switch_inni_id id; 
} bcmolt_switch_inni_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state config_state; 
    bcmolt_policer_profile_id policer_profile; 
} bcmolt_switch_inni_cfg_data;


#define BCMOLT_SWITCH_INNI_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_switch_inni_key key; 
    bcmolt_switch_inni_cfg_data data; 
} bcmolt_switch_inni_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_switch_inni_key key; 
    bcmolt_switch_inni_cfg_data filter; 
    bcmolt_switch_inni_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_switch_inni_cfg *responses; 

    bcmolt_switch_inni_key next_key; 
} bcmolt_switch_inni_multi_cfg;


typedef struct
{
    uint16_t id; 
    bcmolt_tm_sched_dir dir; 
} bcmolt_tc_to_queue_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_arr_tm_queue_ref_8 queue; 
} bcmolt_tc_to_queue_cfg_data;


#define BCMOLT_TC_TO_QUEUE_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_TC_TO_QUEUE_CFG_DATA_QUEUE_LENGTH 8


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_tc_to_queue_key key; 
    bcmolt_tc_to_queue_cfg_data data; 
} bcmolt_tc_to_queue_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_tc_to_queue_key key; 
    bcmolt_tc_to_queue_cfg_data filter; 
    bcmolt_tc_to_queue_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_tc_to_queue_cfg *responses; 

    bcmolt_tc_to_queue_key next_key; 
} bcmolt_tc_to_queue_multi_cfg;


typedef struct
{
    bcmolt_tm_qmp_id id; 
} bcmolt_tm_qmp_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_qmp_type type; 
    bcmolt_arr_u8_8 pbits_to_tmq_id; 
    uint16_t ref_count; 
    bcmolt_config_state state; 
} bcmolt_tm_qmp_cfg_data;


#define BCMOLT_TM_QMP_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL
#define BCMOLT_TM_QMP_CFG_DATA_PBITS_TO_TMQ_ID_LENGTH 8


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_tm_qmp_key key; 
    bcmolt_tm_qmp_cfg_data data; 
} bcmolt_tm_qmp_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_tm_qmp_key key; 
    bcmolt_tm_qmp_cfg_data filter; 
    bcmolt_tm_qmp_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_tm_qmp_cfg *responses; 

    bcmolt_tm_qmp_key next_key; 
} bcmolt_tm_qmp_multi_cfg;


typedef struct
{
    bcmolt_tm_sched_id sched_id; 
    bcmolt_tm_queue_set_id tm_q_set_id; 
    bcmolt_tm_queue_id id; 
} bcmolt_tm_queue_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; 
    bcmolt_tm_sched_param tm_sched_param; 
    bcmolt_tm_shaping rate; 
    uint16_t ref_count; 
} bcmolt_tm_queue_cfg_data;


#define BCMOLT_TM_QUEUE_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001BULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_tm_queue_key key; 
    bcmolt_tm_queue_cfg_data data; 
} bcmolt_tm_queue_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_tm_queue_key key; 
    bcmolt_tm_queue_cfg_data filter; 
    bcmolt_tm_queue_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_tm_queue_cfg *responses; 

    bcmolt_tm_queue_key next_key; 
} bcmolt_tm_queue_multi_cfg;


typedef struct
{
    bcmolt_tm_sched_id id; 
} bcmolt_tm_sched_key;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_sched_attachment_point attachment_point; 
    bcmolt_tm_sched_type sched_type; 
    uint8_t num_priorities; 
    bcmolt_tm_shaping rate; 
    bcmolt_config_state state; 
} bcmolt_tm_sched_cfg_data;


#define BCMOLT_TM_SCHED_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000002FULL


typedef struct
{
    bcmolt_cfg hdr; 
    bcmolt_tm_sched_key key; 
    bcmolt_tm_sched_cfg_data data; 
} bcmolt_tm_sched_cfg;


typedef struct
{
    bcmolt_multi_cfg hdr; 
    bcmolt_tm_sched_key key; 
    bcmolt_tm_sched_cfg_data filter; 
    bcmolt_tm_sched_cfg_data request; 

    bcmos_bool more; 
    uint16_t num_responses; 
    bcmolt_tm_sched_cfg *responses; 

    bcmolt_tm_sched_key next_key; 
} bcmolt_tm_sched_multi_cfg;



/** @} */

#endif
