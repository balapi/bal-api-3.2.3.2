/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_API_MODEL_SUPPORTING_STRUCTS_H_
#define BCMOLT_API_MODEL_SUPPORTING_STRUCTS_H_

#include <bcmos_system.h>
#include <bcmolt_system_types.h>
#include "bcmolt_msg.h"
#include "bcmolt_api_model_supporting_enums.h"
#include "bcmolt_api_model_supporting_typedefs.h"

/** \addtogroup object_model
 * @{
 */


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_type intf_type; 
    bcmolt_interface_id intf_id; 
} bcmolt_intf_ref;


#define BCMOLT_INTF_REF_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_access_control_fwd_action_type action; 
    bcmolt_intf_ref redirect_intf_ref; 
} bcmolt_access_control_fwd_action;


#define BCMOLT_ACCESS_CONTROL_FWD_ACTION_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_action_control_pkt_modifiers pkt_modifier_bit_mask; 
    uint16_t o_vid; 
    uint16_t i_vid; 
    uint8_t o_pbits; 
    uint8_t i_pbits; 
    uint8_t dscp; 
    uint8_t ttl; 
} bcmolt_access_control_pkt_modifier;


#define BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_PRESENCE_MASK_ALL 0x000000000000007FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_action_cmd_id cmds_bitmask; 
    uint16_t o_vid; 
    uint8_t o_pbits; 
    uint16_t i_vid; 
    uint8_t i_pbits; 
    bcmolt_action_tag_format tag_format; 
} bcmolt_action;


#define BCMOLT_ACTION_PRESENCE_MASK_ALL 0x000000000000003FULL


typedef struct
{
    uint8_t arr[16]; 
} bcmolt_bin_str_16;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_16 bytes; 
} bcmolt_aes_key;


#define BCMOLT_AES_KEY_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_AES_KEY_BYTES_MAX_LENGTH 16
#define BCMOLT_AES_KEY_BYTES_LENGTH 16


typedef struct
{
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_calibration_record arr[8]; 
} bcmolt_arr_calibration_record_8;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_sign sign; 
    uint8_t value; 
} bcmolt_ds_frequency_offset;


#define BCMOLT_DS_FREQUENCY_OFFSET_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t administrative_label; 
    uint8_t dwlch_id; 
} bcmolt_pon_id;


#define BCMOLT_PON_ID_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t version; 
    uint8_t channel_index; 
    bcmolt_ds_frequency_offset ds_frequency_offset; 
    uint8_t channel_partition; 
    uint8_t uwlch_id; 
    uint32_t us_frequency; 
    bcmolt_upstream_line_rate_capabilities us_rate; 
    uint8_t default_onu_attenuation; 
    uint8_t response_threshold; 
    bcmolt_link_type us_link_type; 
    bcmos_bool is_valid; 
    bcmolt_pon_id pon_id; 
} bcmolt_channel_profile;


#define BCMOLT_CHANNEL_PROFILE_PRESENCE_MASK_ALL 0x0000000000000FFFULL


typedef struct
{
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_channel_profile arr[8]; 
} bcmolt_arr_channel_profile_8;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t ds_wavelength_channel_id; 
    uint8_t us_wavelength_channel_id; 
    uint16_t power_consumption; 
} bcmolt_power_consumption_channel_report;


#define BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_power_consumption_channel_report arr[8]; 
} bcmolt_arr_power_consumption_channel_report_8;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_sched_id sched_id; 
    bcmolt_tm_queue_id queue_id; 
} bcmolt_tm_queue_ref;


#define BCMOLT_TM_QUEUE_REF_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_tm_queue_ref arr[8]; 
} bcmolt_arr_tm_queue_ref_8;


typedef struct
{
    bcmolt_presence_mask arr_index_mask; 
    uint16_t arr[2]; 
} bcmolt_arr_u16_2;


typedef struct
{
    bcmolt_presence_mask arr_index_mask; 
    uint8_t arr[8]; 
} bcmolt_arr_u8_8;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t profile_version; 
    bcmolt_burst_profile_type type; 
    bcmos_bool is_fec_on; 
    uint8_t delimiter_size_in_bytes; 
    uint32_t delimiter_pattern_high; 
    uint32_t delimiter_pattern_low; 
    uint8_t preamble_length_in_bytes; 
    uint8_t preamble_repeats_count; 
    uint32_t preamble_pattern_high; 
    uint32_t preamble_pattern_low; 
    uint64_t pon_tag; 
    uint32_t num_of_guard_bytes; 
    bcmos_bool is_profile_valid; 
    uint32_t burst_overhead_size_in_words; 
} bcmolt_xgpon_burst_profile;


#define BCMOLT_XGPON_BURST_PROFILE_PRESENCE_MASK_ALL 0x0000000000003FFFULL


typedef struct
{
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_xgpon_burst_profile arr[4]; 
} bcmolt_arr_xgpon_burst_profile_4;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool los; 
    bcmos_bool onu_alarms; 
    bcmos_bool tiwi; 
    bcmos_bool ack_timeout; 
    bcmos_bool sfi; 
    bcmos_bool loki; 
} bcmolt_automatic_onu_deactivation;


#define BCMOLT_AUTOMATIC_ONU_DEACTIVATION_PRESENCE_MASK_ALL 0x000000000000003FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t us_ber_interval; 
    uint8_t sf_threshold; 
    uint8_t sd_threshold; 
} bcmolt_ber_monitor_params;


#define BCMOLT_BER_MONITOR_PARAMS_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    uint32_t len; 
    uint8_t *arr; 
} bcmolt_bin_str;


typedef struct
{
    uint8_t arr[10]; 
} bcmolt_bin_str_10;


typedef struct
{
    uint8_t arr[13]; 
} bcmolt_bin_str_13;


typedef struct
{
    uint8_t arr[36]; 
} bcmolt_bin_str_36;


typedef struct
{
    uint8_t arr[4]; 
} bcmolt_bin_str_4;


typedef struct
{
    uint8_t arr[40]; 
} bcmolt_bin_str_40;


typedef struct
{
    uint8_t arr[8]; 
} bcmolt_bin_str_8;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t ma_7; 
    uint16_t ma_3; 
    uint16_t ma_1; 
} bcmolt_cbr_rt_allocation_profile;


#define BCMOLT_CBR_RT_ALLOCATION_PROFILE_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t min; 
    uint16_t max; 
} bcmolt_layer_4_port_range;


#define BCMOLT_LAYER_4_PORT_RANGE_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint64_t classifier_bitmap; 
    uint16_t o_vid; 
    uint16_t i_vid; 
    uint8_t o_pbits; 
    uint8_t i_pbits; 
    uint16_t ether_type; 
    bcmos_mac_address dst_mac; 
    bcmos_mac_address src_mac; 
    uint8_t ip_proto; 
    bcmos_ipv4_address dst_ip; 
    bcmos_ipv4_address dst_ip_mask; 
    uint16_t dst_port; 
    bcmolt_layer_4_port_range dst_port_range; 
    bcmos_ipv4_address src_ip; 
    bcmos_ipv4_address src_ip_mask; 
    uint16_t src_port; 
    bcmolt_layer_4_port_range src_port_range; 
    bcmolt_pkt_tag_type pkt_tag_type; 
} bcmolt_classifier;


#define BCMOLT_CLASSIFIER_PRESENCE_MASK_ALL 0x00000000002B3FFFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ddr_test_status status; 
    union
    {
        struct
        {
            bcmolt_presence_mask presence_mask;
        } def;
        struct
        {
            bcmolt_presence_mask presence_mask;
            bcmolt_ddr_test_result cpu_result; 
            bcmolt_ddr_test_result ras_0_result; 
            bcmolt_ddr_test_result ras_1_result; 
        } completed;
        struct
        {
            bcmolt_presence_mask presence_mask;
            bcmolt_host_connection_fail_reason reason; 
        } connection_failed;
    } u;
} bcmolt_ddr_test_completed;


#define BCMOLT_DDR_TEST_COMPLETED_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_DDR_TEST_COMPLETED_DEFAULT_PRESENCE_MASK_ALL 0x0000000000000000ULL
#define BCMOLT_DDR_TEST_COMPLETED_COMPLETED_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_DDR_TEST_COMPLETED_CONNECTION_FAILED_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool use_prev_pon_serdes_firmware; 
    bcmos_bool use_prev_nni_serdes_firmware; 
} bcmolt_debug_device_cfg;


#define BCMOLT_DEBUG_DEVICE_CFG_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_control_state untagged_flow; 
    bcmolt_vlan_id untagged_vid; 
} bcmolt_debug_flow_config;


#define BCMOLT_DEBUG_FLOW_CONFIG_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_sched_id id; 
} bcmolt_tm_sched_ref;


#define BCMOLT_TM_SCHED_REF_PRESENCE_MASK_ALL 0x0000000000000002ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_egress_qos_type type; 
    bcmolt_tm_sched_ref tm_sched; 
    union
    {
        struct
        {
            bcmolt_presence_mask presence_mask;
            bcmolt_tm_queue_id queue_id; 
        } fixed_queue;
        struct
        {
            bcmolt_presence_mask presence_mask;
            uint8_t tc_id; 
            uint16_t tc_to_queue_id; 
        } tc_to_queue;
        struct
        {
            bcmolt_presence_mask presence_mask;
            uint16_t pbit_to_tc_id; 
            uint16_t tc_to_queue_id; 
        } pbit_to_tc;
        struct
        {
            bcmolt_presence_mask presence_mask;
            bcmolt_tm_qmp_id tm_qmp_id; 
            bcmolt_tm_queue_set_id tm_q_set_id; 
        } priority_to_queue;
    } u;
} bcmolt_egress_qos;


#define BCMOLT_EGRESS_QOS_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_EGRESS_QOS_FIXED_QUEUE_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_EGRESS_QOS_TC_TO_QUEUE_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_EGRESS_QOS_PBIT_TO_TC_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    char str[64]; 
} bcmolt_str_64;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_device_image_type image_type; 
    uint32_t image_size; 
    uint32_t crc32; 
    bcmolt_embedded_image_transfer_status status; 
    bcmolt_str_64 image_name; 
} bcmolt_embedded_image_entry;


#define BCMOLT_EMBEDDED_IMAGE_ENTRY_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    uint8_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_embedded_image_entry *arr; 
} bcmolt_embedded_image_entry_list_u8_max_4;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_type intf_type; 
    bcmolt_interface_id intf_id; 
} bcmolt_erps_intf_ref;


#define BCMOLT_ERPS_INTF_REF_PRESENCE_MASK_ALL 0x0000000000000005ULL


typedef struct
{
    char str[32]; 
} bcmolt_str_32;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t major; 
    uint8_t minor; 
    uint8_t revision; 
    uint32_t model; 
    bcmolt_str_32 build_time; 
} bcmolt_firmware_sw_version;


#define BCMOLT_FIRMWARE_SW_VERSION_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_flow_interface_type intf_type; 
    bcmolt_interface_id intf_id; 
} bcmolt_flow_intf_ref;


#define BCMOLT_FLOW_INTF_REF_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gem_port_direction direction; 
    bcmolt_gem_port_type type; 
} bcmolt_gem_port_configuration;


#define BCMOLT_GEM_PORT_CONFIGURATION_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    uint8_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_gem_port_id *arr; 
} bcmolt_gem_port_id_list_u8_max_16;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status losi; 
    bcmolt_status lofi; 
    bcmolt_status loami; 
    bcmolt_status dgi; 
    bcmolt_status tiwi; 
    bcmolt_status dowi; 
    bcmolt_status sufi; 
    bcmolt_status sfi; 
    bcmolt_status sdi; 
    bcmolt_status dfi; 
    bcmolt_status loai; 
    bcmolt_status loki; 
} bcmolt_gpon_onu_alarm_state;


#define BCMOLT_GPON_ONU_ALARM_STATE_PRESENCE_MASK_ALL 0x0000000000000FFFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status losi; 
    bcmolt_status lofi; 
    bcmolt_status loami; 
} bcmolt_gpon_onu_alarms;


#define BCMOLT_GPON_ONU_ALARMS_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t losi; 
    uint8_t lofi; 
    uint8_t loami; 
} bcmolt_gpon_onu_alarms_thresholds;


#define BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_10 password; 
    bcmos_bool us_fec; 
    bcmolt_gem_port_id omci_port_id; 
    bcmolt_ber_interval ds_ber_reporting_interval; 
    bcmolt_gpon_onu_alarm_state alarm_state; 
} bcmolt_gpon_onu_params;


#define BCMOLT_GPON_ONU_PARAMS_PRESENCE_MASK_ALL 0x000000000000001FULL
#define BCMOLT_GPON_ONU_PARAMS_PASSWORD_MAX_LENGTH 10
#define BCMOLT_GPON_ONU_PARAMS_PASSWORD_LENGTH 10


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t pls_maximum_allocation_size; 
    uint8_t mode; 
} bcmolt_pon_power_level;


#define BCMOLT_PON_POWER_LEVEL_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gpon_onu_alarms_thresholds onu_alarms_thresholds; 
    uint32_t preassigned_equalization_delay; 
    bcmolt_pon_power_level power_level; 
    bcmolt_control_state bip32_indication_control; 
    bcmolt_ber_interval ds_ber_reporting_interval; 
    uint8_t sr_reporting_block_size; 
} bcmolt_gpon_pon_params;


#define BCMOLT_GPON_PON_PARAMS_PRESENCE_MASK_ALL 0x000000000000003FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_trx_type transceiver_type; 
} bcmolt_gpon_trx;


#define BCMOLT_GPON_TRX_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_intf_ref intf; 
    bcmolt_service_port_id svc_port_id; 
    bcmolt_egress_qos egress_qos; 
} bcmolt_group_member_info;


#define BCMOLT_GROUP_MEMBER_INFO_PRESENCE_MASK_ALL 0x000000000000000BULL


typedef struct
{
    uint8_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_group_member_info *arr; 
} bcmolt_group_member_info_list_u8;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_members_update_command command; 
    bcmolt_group_member_info_list_u8 members; 
} bcmolt_group_members_update_command;


#define BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t major; 
    uint8_t minor; 
    uint8_t revision; 
    uint16_t model; 
    bcmolt_str_64 build_time; 
} bcmolt_host_sw_version;


#define BCMOLT_HOST_SW_VERSION_PRESENCE_MASK_ALL 0x0000000000000037ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t pon_id_1; 
    uint32_t pon_id_2; 
} bcmolt_hw_pon_id;


#define BCMOLT_HW_PON_ID_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    char str[256]; 
} bcmolt_str_256;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_256 tod_format; 
    uint32_t clock_transport_sample_delay; 
} bcmolt_ieee_8021_as_tod;


#define BCMOLT_IEEE_8021_AS_TOD_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_ipv4_address device_ip_address; 
    uint16_t device_udp_port; 
} bcmolt_inband_conn_data;


#define BCMOLT_INBAND_CONN_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool enabled; 
    uint32_t max_rate; 
    uint32_t max_burst; 
} bcmolt_indication_shaping;


#define BCMOLT_INDICATION_SHAPING_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_inni_mode mode; 
    bcmolt_inni_mux mux; 
} bcmolt_inni_config;


#define BCMOLT_INNI_CONFIG_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    uint8_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_intf_ref *arr; 
} bcmolt_intf_ref_list_u8;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_4 vendor_id; 
    bcmolt_bin_str_4 vendor_specific; 
} bcmolt_serial_number;


#define BCMOLT_SERIAL_NUMBER_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_SERIAL_NUMBER_VENDOR_ID_MAX_LENGTH 4
#define BCMOLT_SERIAL_NUMBER_VENDOR_ID_LENGTH 4
#define BCMOLT_SERIAL_NUMBER_VENDOR_SPECIFIC_MAX_LENGTH 4
#define BCMOLT_SERIAL_NUMBER_VENDOR_SPECIFIC_LENGTH 4


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key encryption_key; 
    uint8_t key_index; 
} bcmolt_itupon_onu_aes_key;


#define BCMOLT_ITUPON_ONU_AES_KEY_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status losi; 
    bcmolt_status lobi; 
    bcmolt_status lopci; 
    bcmolt_status lopci_mic_error; 
    bcmolt_status looci; 
    bcmolt_status tiwi; 
    bcmolt_status dowi; 
    bcmolt_status sufi; 
    bcmolt_status sfi; 
    bcmolt_status sdi; 
    bcmolt_status dfi; 
    bcmolt_status dgi; 
    bcmolt_status pqsi; 
    bcmolt_status loai; 
    bcmolt_status loki; 
} bcmolt_xgpon_onu_alarm_state;


#define BCMOLT_XGPON_ONU_ALARM_STATE_PRESENCE_MASK_ALL 0x0000000000007FFFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_arr_calibration_record_8 calibration_record; 
    bcmolt_upstream_line_rate_capabilities us_line_rate; 
    uint8_t tuning_granularity; 
    uint8_t step_tuning_time; 
    uint8_t power_levelling_capabilities; 
} bcmolt_ngpon2_onu_params;


#define BCMOLT_NGPON2_ONU_PARAMS_PRESENCE_MASK_ALL 0x000000000000001FULL
#define BCMOLT_NGPON2_ONU_PARAMS_CALIBRATION_RECORD_LENGTH 8


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key ploam_ik; 
    bcmolt_aes_key omci_ik; 
    bcmolt_aes_key omci_k1; 
    bcmolt_aes_key omci_k2; 
    bcmolt_aes_key kek; 
} bcmolt_xgpon_onu_registration_keys;


#define BCMOLT_XGPON_ONU_REGISTRATION_KEYS_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_control_state request_registration_state; 
    bcmos_bool sma_flag; 
} bcmolt_request_registration_status;


#define BCMOLT_REQUEST_REGISTRATION_STATUS_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_xgpon_onu_alarm_state alarm_state; 
    bcmolt_bin_str_36 registration_id; 
    bcmolt_ngpon2_onu_params ngpon2; 
    bcmolt_xgpon_onu_registration_keys registration_encryption_keys; 
    bcmolt_request_registration_status request_registration_status; 
    bcmolt_burst_profile_index ranging_burst_profile; 
    bcmolt_burst_profile_index data_burst_profile; 
} bcmolt_xgpon_onu_params;


#define BCMOLT_XGPON_ONU_PARAMS_PRESENCE_MASK_ALL 0x000000000000007FULL
#define BCMOLT_XGPON_ONU_PARAMS_REGISTRATION_ID_MAX_LENGTH 36
#define BCMOLT_XGPON_ONU_PARAMS_REGISTRATION_ID_LENGTH 36


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_serial_number serial_number; 
    uint32_t ranging_time; 
    bcmolt_itupon_onu_aes_key encryption_key; 
    bcmos_bool auto_learning; 
    bcmolt_status disabled_after_discovery; 
    bcmolt_automatic_onu_deactivation_reason automatic_onu_deactivation_reason; 
    bcmos_bool ps_type_c; 
    bcmolt_gpon_onu_params gpon; 
    bcmolt_xgpon_onu_params xgpon; 
} bcmolt_itu_onu_params;


#define BCMOLT_ITU_ONU_PARAMS_PRESENCE_MASK_ALL 0x00000000000009EFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t cbr_bw; 
    uint32_t total_bw; 
    uint32_t next_onu_total_bw; 
} bcmolt_pon_available_bandwidth;


#define BCMOLT_PON_AVAILABLE_BANDWIDTH_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t drift_interval; 
    uint8_t drift_limit; 
    uint8_t transmission_control_limit; 
} bcmolt_pon_drift_control;


#define BCMOLT_PON_DRIFT_CONTROL_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_control_state key_exchange; 
    bcmolt_control_state authentication; 
    bcmolt_control_state fail_due_to_authentication_failure; 
} bcmolt_onu_activation;


#define BCMOLT_ONU_ACTIVATION_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t interval; 
    bcmolt_control_state control; 
    bcmolt_control_state encrypted_ports_only; 
    bcmolt_gpon_key_exchange_mode gpon_mode; 
} bcmolt_key_exchange;


#define BCMOLT_KEY_EXCHANGE_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t ilowpower; 
    uint32_t iaware; 
    uint16_t itransinit; 
    uint16_t itxinit; 
    uint32_t irxoff; 
} bcmolt_onu_power_management_configuration;


#define BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_PRESENCE_MASK_ALL 0x000000000000001FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t interval; 
    bcmolt_control_state control; 
} bcmolt_periodic_standby_pon_monitoring;


#define BCMOLT_PERIODIC_STANDBY_PON_MONITORING_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_prbs_polynomial polynom; 
    bcmolt_prbs_checker_mode mode; 
    bcmos_bool data_invert; 
    bcmolt_control_state control; 
} bcmolt_prbs_checker_config;


#define BCMOLT_PRBS_CHECKER_CONFIG_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_prbs_polynomial polynom; 
    bcmos_bool error_insert; 
    bcmos_bool invert; 
    bcmolt_control_state control; 
} bcmolt_prbs_generator_config;


#define BCMOLT_PRBS_GENERATOR_CONFIG_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_prbs_lock_state lock_state; 
    uint32_t error_counts; 
} bcmolt_prbs_status;


#define BCMOLT_PRBS_STATUS_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t timeout; 
    bcmolt_gpio_pin gpio_pin; 
    uint16_t ps_c_wait_before_deactivation_timeout; 
    bcmolt_pon_protection_switching_options options; 
} bcmolt_itupon_protection_switching;


#define BCMOLT_ITUPON_PROTECTION_SWITCHING_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t response_timeout_ms; 
    uint8_t max_retry_count; 
    bcmolt_omci_device_id omci_format; 
    uint16_t window_size; 
    bcmos_bool activate_commit; 
    uint32_t delay_for_commit_ms; 
    uint8_t max_activation_attempts; 
    uint32_t end_swdl_delay_ms; 
} bcmolt_ituonu_upgrade_params;


#define BCMOLT_ITUONU_UPGRADE_PARAMS_PRESENCE_MASK_ALL 0x00000000000000FFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_id onu_id; 
    uint32_t bytes_transmitted; 
    bcmolt_onu_upgrade_status_code status; 
} bcmolt_onu_upgrade_status;


#define BCMOLT_ONU_UPGRADE_STATUS_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    uint32_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_onu_upgrade_status *arr; 
} bcmolt_onu_upgrade_status_list_u32_max_128;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_pon_ni_onu_upgrade_status_code overall_status; 
    uint32_t file_size_in_bytes; 
    bcmolt_onu_upgrade_status_list_u32_max_128 onu_status; 
} bcmolt_pon_onu_upgrade_status;


#define BCMOLT_PON_ONU_UPGRADE_STATUS_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_PON_ONU_UPGRADE_STATUS_ONU_STATUS_MAX_LENGTH 128


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t losi; 
    uint8_t lobi; 
    uint8_t looci; 
    uint8_t lopci; 
} bcmolt_xgpon_onu_alarms_thresholds;


#define BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_control_state loai; 
    bcmolt_control_state loki; 
} bcmolt_xgpon_onu_alarm_indication_control;


#define BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key key; 
    bcmos_bool key_control; 
} bcmolt_xgpon_multicast_key;


#define BCMOLT_XGPON_MULTICAST_KEY_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t tsource; 
    uint32_t ttarget; 
    bcmos_bool request_registration_required; 
} bcmolt_onu_tuning_configuration;


#define BCMOLT_ONU_TUNING_CONFIGURATION_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_control_state ngpon2_amd1; 
    bcmolt_onu_tuning_configuration onu_tuning; 
} bcmolt_ngpon2_pon_params;


#define BCMOLT_NGPON2_PON_PARAMS_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t retrans_ranging_time; 
    uint8_t retrans_assign_alloc_id; 
    uint8_t retrans_key_control; 
    uint8_t retrans_request_registration; 
} bcmolt_ploam_retransmission;


#define BCMOLT_PLOAM_RETRANSMISSION_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t re; 
    bcmolt_odn_class odn_class; 
    bcmolt_control_state ds_fec_mode; 
    bcmolt_tc_protocol protocol; 
    bcmolt_link_type ds_link_type; 
    bcmolt_pon_id pon_id; 
    uint8_t c; 
    uint16_t tol; 
} bcmolt_operation_control;


#define BCMOLT_OPERATION_CONTROL_PRESENCE_MASK_ALL 0x00000000000000FFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_control_state control; 
    uint32_t interval_ms; 
} bcmolt_periodic_ploams;


#define BCMOLT_PERIODIC_PLOAMS_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_hw_pon_id hw_pon_id; 
    bcmolt_xgpon_onu_alarms_thresholds onu_alarms_thresholds; 
    bcmolt_xgpon_onu_alarm_indication_control alarm_indication_control; 
    bcmolt_xgpon_multicast_key multicast_key; 
    bcmolt_gem_port_id min_data_gem_port_id; 
    bcmolt_ngpon2_pon_params ngpon2; 
    bcmolt_control_state tdma_2_5_g_discovery; 
    bcmolt_control_state tdma_10_g_discovery; 
    bcmolt_ploam_retransmission ploam_retransmission; 
    uint16_t tdma_number_of_2_5_g_active_onus; 
    uint16_t tdma_number_of_10_g_active_onus; 
    bcmolt_operation_control operation_control; 
    bcmolt_periodic_ploams periodic_ploams; 
} bcmolt_xgpon_pon_params;


#define BCMOLT_XGPON_PON_PARAMS_PRESENCE_MASK_ALL 0x0000000000001FFFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_pon_available_bandwidth available_bandwidth; 
    uint32_t ranging_window_size; 
    uint32_t eqd_cycles_number; 
    bcmolt_pon_drift_control drift_control; 
    uint8_t los_alarm_threshold; 
    bcmolt_ber_monitor_params ber_monitor; 
    uint32_t ack_timeout; 
    bcmolt_onu_activation onu_activation; 
    bcmolt_key_exchange key_exchange; 
    bcmolt_alloc_id min_data_alloc_id; 
    bcmolt_cbr_rt_allocation_profile cbr_rt_allocation_profile; 
    bcmolt_arr_u16_2 cbr_nrt_allocation_profile; 
    bcmolt_onu_power_management_configuration power_management; 
    bcmolt_periodic_standby_pon_monitoring periodic_standby_pon_monitoring; 
    bcmolt_prbs_checker_config prbs_checker; 
    bcmolt_prbs_generator_config prbs_generator; 
    bcmolt_prbs_status prbs_status; 
    bcmolt_dba_mode dba_mode; 
    bcmolt_itupon_protection_switching protection_switching; 
    bcmolt_automatic_onu_deactivation automatic_onu_deactivation; 
    uint32_t us_bandwidth_limit; 
    bcmolt_ituonu_upgrade_params onu_upgrade_params; 
    bcmolt_pon_onu_upgrade_status onu_upgrade_status; 
    bcmolt_control_state ds_fec_mode; 
    bcmolt_xgpon_pon_params xgpon; 
    bcmolt_gpon_pon_params gpon; 
} bcmolt_itu_pon_params;


#define BCMOLT_ITU_PON_PARAMS_PRESENCE_MASK_ALL 0x000000002BEBFFFFULL
#define BCMOLT_ITU_PON_PARAMS_CBR_NRT_ALLOCATION_PROFILE_LENGTH 2


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_control_state tod_enable; 
    bcmolt_gpio_pin tod_gpio_pin; 
    bcmos_bool connected_internally; 
    uint8_t tod_string_length; 
} bcmolt_itu_tod;


#define BCMOLT_ITU_TOD_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_id onu_id; 
    uint32_t eqd; 
} bcmolt_itupon_onu_eqd;


#define BCMOLT_ITUPON_ONU_EQD_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    uint32_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_itupon_onu_eqd *arr; 
} bcmolt_itupon_onu_eqd_list_u32;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t no_log; 
    uint32_t fatal; 
    uint32_t error; 
    uint32_t warning; 
    uint32_t info; 
    uint32_t debug; 
} bcmolt_log_level_msg_count;


#define BCMOLT_LOG_LEVEL_MSG_COUNT_PRESENCE_MASK_ALL 0x000000000000003FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_log_level print; 
    bcmolt_log_level save; 
} bcmolt_log_level_per_file;


#define BCMOLT_LOG_LEVEL_PER_FILE_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    char str[48]; 
} bcmolt_str_48;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_48 name; 
    bcmolt_meg_format format; 
    bcmolt_meg_level level; 
} bcmolt_meg_cfg;


#define BCMOLT_MEG_CFG_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t mep_name; 
    bcmolt_mep_type type; 
    bcmolt_ccm_interval interval; 
    uint16_t loc_clear_threshold; 
    bcmolt_control_state state; 
} bcmolt_mep_cfg;


#define BCMOLT_MEP_CFG_PRESENCE_MASK_ALL 0x000000000000006DULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_trivalent link_status; 
    bcmolt_trivalent signal_detected; 
    bcmolt_trivalent pmd_locked; 
} bcmolt_nni_link_status;


#define BCMOLT_NNI_LINK_STATUS_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    uint32_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_onu_id *arr; 
} bcmolt_onu_id_list_u32;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t host_dma_rx_queue_size; 
    uint16_t host_dma_tx_queue_size; 
    bcmolt_mtu mtu; 
    bcmos_bool avs_control; 
} bcmolt_pcie_conn_data;


#define BCMOLT_PCIE_CONN_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t cbr_rt_bw; 
    uint32_t cbr_nrt_bw; 
    uint32_t guaranteed_bw; 
    uint32_t maximum_bw; 
    bcmolt_additional_bw_eligibility additional_bw_eligibility; 
    bcmos_bool cbr_rt_compensation; 
    uint8_t cbr_rt_ap_index; 
    uint8_t cbr_nrt_ap_index; 
    bcmolt_alloc_type alloc_type; 
    uint8_t weight; 
    uint8_t priority; 
} bcmolt_pon_alloc_sla;


#define BCMOLT_PON_ALLOC_SLA_PRESENCE_MASK_ALL 0x00000000000007FFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t max_log_distance; 
    uint32_t max_diff_reach; 
} bcmolt_pon_distance;


#define BCMOLT_PON_DISTANCE_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_nni_protection_mode mode; 
} bcmolt_protection_type;


#define BCMOLT_PROTECTION_TYPE_PRESENCE_MASK_ALL 0x0000000000000001ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t interval; 
    bcmolt_control_state control; 
    bcmolt_onu_post_discovery_mode onu_post_discovery_mode; 
    bcmolt_burst_profile_index burst_profile; 
} bcmolt_service_discovery;


#define BCMOLT_SERVICE_DISCOVERY_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_stat_condition_type type; 
    union
    {
        struct
        {
            bcmolt_presence_mask presence_mask;
            uint64_t rising; 
            uint64_t falling; 
        } rate_threshold;
        struct
        {
            bcmolt_presence_mask presence_mask;
            uint64_t upper; 
            uint64_t lower; 
        } rate_range;
        struct
        {
            bcmolt_presence_mask presence_mask;
            uint64_t limit; 
        } value_threshold;
        struct
        {
            bcmolt_presence_mask presence_mask;
        } none;
    } u;
} bcmolt_stat_alarm_trigger_config;


#define BCMOLT_STAT_ALARM_TRIGGER_CONFIG_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_STAT_ALARM_TRIGGER_CONFIG_VALUE_THRESHOLD_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_STAT_ALARM_TRIGGER_CONFIG_NONE_PRESENCE_MASK_ALL 0x0000000000000000ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t active_soak_time; 
    uint32_t clear_soak_time; 
} bcmolt_stat_alarm_soak_config;


#define BCMOLT_STAT_ALARM_SOAK_CONFIG_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_stat_alarm_trigger_config trigger; 
    bcmolt_stat_alarm_soak_config soak; 
} bcmolt_stat_alarm_config;


#define BCMOLT_STAT_ALARM_CONFIG_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    char str[100]; 
} bcmolt_str_100;


typedef struct
{
    char str[16]; 
} bcmolt_str_16;


typedef struct
{
    char str[2000]; 
} bcmolt_str_2000;


typedef struct
{
    char str[2048]; 
} bcmolt_str_2048;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint64_t first_error_time_us; 
    uint64_t last_error_time_us; 
    uint32_t line_number; 
    uint32_t error_counter; 
    uint32_t instance; 
    bcmolt_str_64 filename; 
    bcmolt_str_64 task_name; 
} bcmolt_sw_error;


#define BCMOLT_SW_ERROR_PRESENCE_MASK_ALL 0x000000000000007FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t ng_2_sys_id; 
    uint8_t version; 
    uint8_t channel_spacing; 
    bcmolt_us_operating_wavelength_bands us_operating_wavelength_bands; 
    uint8_t us_mse; 
    uint8_t loose_calibration_bound; 
    uint16_t fsr; 
    uint8_t twdm_channel_count; 
} bcmolt_system_profile;


#define BCMOLT_SYSTEM_PROFILE_PRESENCE_MASK_ALL 0x00000000000000FFULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_sched_param_type type; 
    union
    {
        struct
        {
            bcmolt_presence_mask presence_mask;
            bcmolt_tm_priority priority; 
        } priority;
        struct
        {
            bcmolt_presence_mask presence_mask;
            bcmolt_tm_weight weight; 
        } weight;
    } u;
} bcmolt_tm_sched_param;


#define BCMOLT_TM_SCHED_PARAM_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_TM_SCHED_PARAM_PRIORITY_PRESENCE_MASK_ALL 0x0000000000000004ULL
#define BCMOLT_TM_SCHED_PARAM_WEIGHT_PRESENCE_MASK_ALL 0x0000000000000002ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_sched_output_type type; 
    union
    {
        struct
        {
            bcmolt_presence_mask presence_mask;
            bcmolt_intf_ref interface_ref; 
        } interface;
        struct
        {
            bcmolt_presence_mask presence_mask;
            uint32_t tm_sched_id; 
            bcmolt_tm_sched_param tm_sched_param; 
        } tm_sched;
    } u;
} bcmolt_tm_sched_attachment_point;


#define BCMOLT_TM_SCHED_ATTACHMENT_POINT_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_TM_SCHED_ATTACHMENT_POINT_INTERFACE_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t cir; 
    uint32_t pir; 
    uint32_t burst; 
} bcmolt_tm_shaping;


#define BCMOLT_TM_SHAPING_PRESENCE_MASK_ALL 0x0000000000000007ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ldid local_device_id; 
    bcmolt_odid olt_device_id; 
    bcmolt_interface_id physical_if_id; 
    bcmolt_str_16 user_string; 
} bcmolt_topology_map;


#define BCMOLT_TOPOLOGY_MAP_PRESENCE_MASK_ALL 0x000000000000001EULL


typedef struct
{
    uint32_t len; 
    bcmolt_presence_mask arr_index_mask; 
    bcmolt_topology_map *arr; 
} bcmolt_topology_map_list_u32;


typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t num_switch_ports; 
    bcmolt_topology_map_list_u32 topology_maps; 
} bcmolt_topology;


#define BCMOLT_TOPOLOGY_PRESENCE_MASK_ALL 0x0000000000000003ULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status losi; 
    bcmolt_status lobi; 
    bcmolt_status lopci_miss; 
    bcmolt_status lopci_mic_error; 
} bcmolt_xgpon_onu_alarms;


#define BCMOLT_XGPON_ONU_ALARMS_PRESENCE_MASK_ALL 0x000000000000000FULL


typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_arr_xgpon_burst_profile_4 burst_profile; 
    bcmolt_xgpon_trx_type transceiver_type; 
} bcmolt_xgpon_trx;


#define BCMOLT_XGPON_TRX_PRESENCE_MASK_ALL 0x0000000000000005ULL
#define BCMOLT_XGPON_TRX_BURST_PROFILE_LENGTH 4



/** @} */

#endif
