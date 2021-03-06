/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __VENDOR_DEFINITIONS_H__
#define __VENDOR_DEFINITIONS_H__

#include "qca-vendor_copy.h"

#define WIFI_SCANNING_MAC_OUI_LENGTH 3
#define WIFI_MAC_ADDR_LENGTH 6

/*Internal to Android HAL component */
/* subcommands for link layer statistics start here */
#ifndef QCA_NL80211_VENDOR_SUBCMD_LL_STATS_SET
#define QCA_NL80211_VENDOR_SUBCMD_LL_STATS_SET 14
#define QCA_NL80211_VENDOR_SUBCMD_LL_STATS_GET 15
#define QCA_NL80211_VENDOR_SUBCMD_LL_STATS_CLR 16
/* subcommands for gscan start here */
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_START 20
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_STOP 21
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_GET_VALID_CHANNELS 22
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_GET_CAPABILITIES 23
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_GET_CACHED_RESULTS 24
/* Used when report_threshold is reached in scan cache. */
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_SCAN_RESULTS_AVAILABLE 25
/* Used to report scan results when each probe rsp. is received,
 * if report_events enabled in wifi_scan_cmd_params.
 */
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_FULL_SCAN_RESULT 26
/* Indicates progress of scanning state-machine. */
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_SCAN_EVENT 27
/* Indicates BSSID Hotlist. */
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_HOTLIST_AP_FOUND 28
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_SET_BSSID_HOTLIST 29
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_RESET_BSSID_HOTLIST 30
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_SIGNIFICANT_CHANGE 31
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_SET_SIGNIFICANT_CHANGE 32
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_RESET_SIGNIFICANT_CHANGE 33
/* TDLS Commands. */
#define QCA_NL80211_VENDOR_SUBCMD_TDLS_ENABLE 34
#define QCA_NL80211_VENDOR_SUBCMD_TDLS_DISABLE 35
#define QCA_NL80211_VENDOR_SUBCMD_TDLS_GET_STATUS 36
#define QCA_NL80211_VENDOR_SUBCMD_TDLS_STATE 37
/* Supported features. */
#define QCA_NL80211_VENDOR_SUBCMD_GET_SUPPORTED_FEATURES 38
/* set scanning_mac_oui */
#define QCA_NL80211_VENDOR_SUBCMD_SCANNING_MAC_OUI 39
/* Set nodfs_flag */
#define QCA_NL80211_VENDOR_SUBCMD_NO_DFS_FLAG 40
/* Indicates BSSID Hotlist AP lost. */
#define QCA_NL80211_VENDOR_SUBCMD_GSCAN_HOTLIST_AP_LOST 41
/* Get Concurrency Matrix */
#define QCA_NL80211_VENDOR_SUBCMD_GET_CONCURRENCY_MATRIX 42
/* Get Wifi Specific Info */
#define QCA_NL80211_VENDOR_SUBCMD_GET_WIFI_INFO 61
/* Start Wifi Logger */
#define QCA_NL80211_VENDOR_SUBCMD_WIFI_LOGGER_START 62
/* Start Wifi Memory Dump */
#define QCA_NL80211_VENDOR_SUBCMD_WIFI_LOGGER_MEMORY_DUMP 63
/* Roaming */
#define QCA_NL80211_VENDOR_SUBCMD_ROAM 64

/* APIs corresponding to the sub commands 65-68 are deprecated.
 * These sub commands are reserved and not supposed to be used
 * for any other purpose
 */
/* PNO */
#define QCA_NL80211_VENDOR_SUBCMD_PNO_SET_LIST 69
#define QCA_NL80211_VENDOR_SUBCMD_PNO_SET_PASSPOINT_LIST 70
#define QCA_NL80211_VENDOR_SUBCMD_PNO_RESET_PASSPOINT_LIST 71
#define QCA_NL80211_VENDOR_SUBCMD_PNO_NETWORK_FOUND 72
#define QCA_NL80211_VENDOR_SUBCMD_PNO_PASSPOINT_NETWORK_FOUND 73
/* Wi-Fi Configuration subcommands */
#define QCA_NL80211_VENDOR_SUBCMD_SET_WIFI_CONFIGURATION 74
#define QCA_NL80211_VENDOR_SUBCMD_GET_WIFI_CONFIGURATION 75
/* WiFiLogger Support feature set */
#define QCA_NL80211_VENDOR_SUBCMD_GET_LOGGER_FEATURE_SET 76
/* WiFiLogger Get Ring Data */
#define QCA_NL80211_VENDOR_SUBCMD_GET_RING_DATA 77
/* Get tdls capabilities */
#define QCA_NL80211_VENDOR_SUBCMD_TDLS_GET_CAPABILITIES 78
/* offloaded packets*/
#define QCA_NL80211_VENDOR_SUBCMD_OFFLOADED_PACKETS 79
/* RSSI monitoring*/
#define QCA_NL80211_VENDOR_SUBCMD_MONITOR_RSSI 80
/* Nan Data Path */
#define QCA_NL80211_VENDOR_SUBCMD_NDP 81
/* Neighbour Discovery offload */
#define QCA_NL80211_VENDOR_SUBCMD_ND_OFFLOAD 82
/* Set packet filter for BPF*/
#define QCA_NL80211_VENDOR_SUBCMD_PACKET_FILTER 83
/* Get Driver-firmware interface maximum supported size*/
#define QCA_NL80211_VENDOR_SUBCMD_GET_BUS_SIZE 84
/* Get wake reason stats */
#define QCA_NL80211_VENDOR_SUBCMD_GET_WAKE_REASON_STATS 85
/* Radio Mode change */
#define QCA_NL80211_VENDOR_SUBCMD_WLAN_MAC_MODE 165
#endif

enum qca_wlan_vendor_attr_tdls_enable
{
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_INVALID = 0,
    /* An array of 6 x Unsigned 8-bit value */
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_MAC_ADDR,
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_CHANNEL,
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_GLOBAL_OPERATING_CLASS,
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_MAX_LATENCY_MS,
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_MIN_BANDWIDTH_KBPS,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_MAX =
        QCA_WLAN_VENDOR_ATTR_TDLS_ENABLE_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_tdls_disable
{
    QCA_WLAN_VENDOR_ATTR_TDLS_DISABLE_INVALID = 0,
    /* An array of 6 x Unsigned 8-bit value */
    QCA_WLAN_VENDOR_ATTR_TDLS_DISABLE_MAC_ADDR,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_TDLS_DISABLE_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_TDLS_DISABLE_MAX =
        QCA_WLAN_VENDOR_ATTR_TDLS_DISABLE_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_tdls_get_status
{
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_INVALID = 0,
    /* An array of 6 x Unsigned 8-bit value */
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_MAC_ADDR,
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_STATE,
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_REASON,
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_CHANNEL,
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_GLOBAL_OPERATING_CLASS,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_MAX =
        QCA_WLAN_VENDOR_ATTR_TDLS_GET_STATUS_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_tdls_state
{
    QCA_WLAN_VENDOR_ATTR_TDLS_STATE_INVALID = 0,
    /* An array of 6 x Unsigned 8-bit value */
    QCA_WLAN_VENDOR_ATTR_TDLS_MAC_ADDR,
    QCA_WLAN_VENDOR_ATTR_TDLS_STATE,
    QCA_WLAN_VENDOR_ATTR_TDLS_REASON,
    QCA_WLAN_VENDOR_ATTR_TDLS_CHANNEL,
    QCA_WLAN_VENDOR_ATTR_TDLS_GLOBAL_OPERATING_CLASS,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_TDLS_STATE_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_TDLS_STATE_MAX =
        QCA_WLAN_VENDOR_ATTR_TDLS_STATE_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_tdls_get_capabilities
{
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_CAPS_INVALID = 0,

    QCA_WLAN_VENDOR_ATTR_TDLS_GET_CAPS_MAX_CONC_SESSIONS,
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_CAPS_FEATURES_SUPPORTED,

    /* keep last */
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_CAPS_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_TDLS_GET_CAPS_MAX =
        QCA_WLAN_VENDOR_ATTR_TDLS_GET_CAPS_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_get_supported_features
{
    QCA_WLAN_VENDOR_ATTR_FEATURE_SET_INVALID = 0,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_FEATURE_SET = 1,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_FEATURE_SET_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_FEATURE_SET_MAX =
        QCA_WLAN_VENDOR_ATTR_FEATURE_SET_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_set_scanning_mac_oui
{
    QCA_WLAN_VENDOR_ATTR_SET_SCANNING_MAC_OUI_INVALID = 0,
    /* An array of 3 x Unsigned 8-bit value */
    QCA_WLAN_VENDOR_ATTR_SET_SCANNING_MAC_OUI = 1,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_SET_SCANNING_MAC_OUI_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_SET_SCANNING_MAC_OUI_MAX =
        QCA_WLAN_VENDOR_ATTR_SET_SCANNING_MAC_OUI_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_set_no_dfs_flag
{
    QCA_WLAN_VENDOR_ATTR_SET_NO_DFS_FLAG_INVALID = 0,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_SET_NO_DFS_FLAG = 1,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_SET_NO_DFS_FLAG_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_SET_NO_DFS_FLAG_MAX =
        QCA_WLAN_VENDOR_ATTR_SET_NO_DFS_FLAG_AFTER_LAST - 1,
};

/* NL attributes for data used by
 * QCA_NL80211_VENDOR_SUBCMD_GET_CONCURRENCY_MATRIX sub command.
 */
enum qca_wlan_vendor_attr_get_concurrency_matrix
{
    QCA_WLAN_VENDOR_ATTR_GET_CONCURRENCY_MATRIX_INVALID = 0,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_GET_CONCURRENCY_MATRIX_CONFIG_PARAM_SET_SIZE_MAX = 1,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_GET_CONCURRENCY_MATRIX_RESULTS_SET_SIZE = 2,
    /* An array of SET_SIZE x Unsigned 32bit values representing
     * concurrency combinations.
     */
    QCA_WLAN_VENDOR_ATTR_GET_CONCURRENCY_MATRIX_RESULTS_SET = 3,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_GET_CONCURRENCY_MATRIX_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_GET_CONCURRENCY_MATRIX_MAX =
        QCA_WLAN_VENDOR_ATTR_GET_CONCURRENCY_MATRIX_AFTER_LAST - 1,
};

/* NL attributes for data used by
 * QCA_NL80211_VENDOR_SUBCMD_SET|GET_WIFI_CONFIGURATION sub commands.
 */
enum qca_wlan_vendor_attr_wifi_config {
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_INVALID = 0,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_DYNAMIC_DTIM = 1,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_STATS_AVG_FACTOR = 2,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_GUARD_TIME = 3,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_FINE_TIME_MEASUREMENT = 4,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_TX_RATE = 5,
    /* Unsigned 32-bit value */
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_PENALIZE_AFTER_NCONS_BEACON_MISS = 6,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_MAX =
        QCA_WLAN_VENDOR_ATTR_WIFI_CONFIG_AFTER_LAST - 1,
};

enum qca_wlan_epno_type
{
    QCA_WLAN_EPNO,
    QCA_WLAN_PNO
};

#define EPNO_NO_NETWORKS 0

enum qca_wlan_offloaded_packets_sending_control
{
    QCA_WLAN_OFFLOADED_PACKETS_SENDING_CONTROL_INVALID = 0,
    QCA_WLAN_OFFLOADED_PACKETS_SENDING_START,
    QCA_WLAN_OFFLOADED_PACKETS_SENDING_STOP
};

enum qca_wlan_vendor_attr_offloaded_packets
{
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_INVALID = 0,

    /* Takes valid value from the enum
     * qca_wlan_offloaded_packets_sending_control
     */
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_SENDING_CONTROL,

    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_REQUEST_ID,

    /* Packet in hex format */
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_IP_PACKET,
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_SRC_MAC_ADDR,
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_DST_MAC_ADDR,
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_PERIOD,

    /* keep last */
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_MAX =
        QCA_WLAN_VENDOR_ATTR_OFFLOADED_PACKETS_AFTER_LAST - 1,

};

enum qca_wlan_rssi_monitoring_control
{
    QCA_WLAN_RSSI_MONITORING_CONTROL_INVALID = 0,
    QCA_WLAN_RSSI_MONITORING_START,
    QCA_WLAN_RSSI_MONITORING_STOP,
};

enum qca_wlan_vendor_attr_rssi_monitoring
{
    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_INVALID = 0,

    /* Takes valid value from the enum
     * qca_wlan_rssi_monitoring_control
     */
    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_CONTROL,

    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_REQUEST_ID,

    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_MAX_RSSI,
    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_MIN_RSSI,

    /* attributes to be used/received in callback */
    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_CUR_BSSID,
    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_CUR_RSSI,

    /* keep last */
    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_MAX =
        QCA_WLAN_VENDOR_ATTR_RSSI_MONITORING_AFTER_LAST - 1,

};

enum qca_wlan_vendor_attr_ndp_params
{
    QCA_WLAN_VENDOR_ATTR_NDP_PARAM_INVALID = 0,
    /* enum of sub commands */
    QCA_WLAN_VENDOR_ATTR_NDP_SUBCMD,
    /* Unsigned 16-bit value */
    QCA_WLAN_VENDOR_ATTR_NDP_TRANSACTION_ID,
    /* NL attributes for data used NDP SUB cmds */
    /* Unsigned 32-bit value indicating a service info */
    QCA_WLAN_VENDOR_ATTR_NDP_SERVICE_INSTANCE_ID,
    /* Unsigned 32-bit value; channel frequency */
    QCA_WLAN_VENDOR_ATTR_NDP_CHANNEL,
    /* Interface Discovery MAC address. An array of 6 Unsigned int8 */
    QCA_WLAN_VENDOR_ATTR_NDP_PEER_DISCOVERY_MAC_ADDR,
    /* Interface name on which NDP is being created */
    QCA_WLAN_VENDOR_ATTR_NDP_IFACE_STR,
    /* Unsigned 32-bit value for security */
    QCA_WLAN_VENDOR_ATTR_NDP_CONFIG_SECURITY,
    /* Unsigned 32-bit value for Qos */
    QCA_WLAN_VENDOR_ATTR_NDP_CONFIG_QOS,
    /* Array of u8: len = QCA_WLAN_VENDOR_ATTR_NAN_DP_APP_INFO_LEN */
    QCA_WLAN_VENDOR_ATTR_NDP_APP_INFO,
    /* Unsigned 32-bit value for NDP instance Id */
    QCA_WLAN_VENDOR_ATTR_NDP_INSTANCE_ID,
    /* Array of instance Ids */
    QCA_WLAN_VENDOR_ATTR_NDP_INSTANCE_ID_ARRAY,
    /* Unsigned 32-bit value for initiator/responder ndp response code accept/reject */
    QCA_WLAN_VENDOR_ATTR_NDP_RESPONSE_CODE,
    /* NDI MAC address. An array of 6 Unsigned int8 */
    QCA_WLAN_VENDOR_ATTR_NDP_NDI_MAC_ADDR,
    /* Unsigned 32-bit value errors types returned by driver */
    QCA_WLAN_VENDOR_ATTR_NDP_DRV_RESPONSE_STATUS_TYPE,
    /* Unsigned 32-bit value error values returned by driver */
    QCA_WLAN_VENDOR_ATTR_NDP_DRV_RETURN_VALUE,
    /* Unsigned 32-bit value for Channel setup configuration */
    QCA_WLAN_VENDOR_ATTR_NDP_CHANNEL_CONFIG,
    /* Unsigned 32-bit value for Cipher Suite Shared Key Type */
    QCA_WLAN_VENDOR_ATTR_NDP_CSID,
    /* Array of u8: len = NAN_PMK_INFO_LEN */
    QCA_WLAN_VENDOR_ATTR_NDP_PMK,
    QCA_WLAN_VENDOR_ATTR_NDP_SCID,
    /* Array of u8: len = NAN_SECURITY_MAX_PASSPHRASE_LEN*/
    QCA_WLAN_VENDOR_ATTR_NDP_PASSPHRASE,
    /* Array of u8: len = NAN_MAX_SERVICE_NAME_LEN */
    QCA_WLAN_VENDOR_ATTR_NDP_SERVICE_NAME,
    /* Unsigned 32-bit value indicating schedule update */
    QCA_WLAN_VENDOR_ATTR_NDP_SCHEDULE_UPDATE_REASON,
    /* Unsigned 32-bit value for NSS */
    QCA_WLAN_VENDOR_ATTR_NDP_NSS,
    /* Unsigned 32-bit value for NUMBER NDP CHANNEL */
    QCA_WLAN_VENDOR_ATTR_NDP_NUM_CHANNELS,
    /* Unsigned 32-bit value for CHANNEL BANDWIDTH */
    QCA_WLAN_VENDOR_ATTR_NDP_CHANNEL_WIDTH,

    /* Array of channel/band width */
    QCA_WLAN_VENDOR_ATTR_NDP_CHANNEL_INFO,

    /* KEEP LAST */
    QCA_WLAN_VENDOR_ATTR_NDP_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_NDP_MAX =
        QCA_WLAN_VENDOR_ATTR_NDP_AFTER_LAST - 1,
};

enum qca_wlan_vendor_attr_ndp_cfg_security
{
   /* Security info will be added when proposed in the specification */
   QCA_WLAN_VENDOR_ATTR_NDP_SECURITY_TYPE = 1,

};

enum qca_wlan_vendor_attr_ndp_qos
{
   /* Qos info will be added when proposed in the specification */
   QCA_WLAN_VENDOR_ATTR_NDP_QOS_CONFIG = 1,

};

/*
 * QCA_NL80211_VENDOR_SUBCMD_NDP sub commands.
 */
enum qca_wlan_vendor_attr_ndp_sub_cmd_value
{
   QCA_WLAN_VENDOR_ATTR_NDP_INTERFACE_CREATE = 1,
   QCA_WLAN_VENDOR_ATTR_NDP_INTERFACE_DELETE = 2,
   QCA_WLAN_VENDOR_ATTR_NDP_INITIATOR_REQUEST = 3,
   QCA_WLAN_VENDOR_ATTR_NDP_INITIATOR_RESPONSE = 4,
   QCA_WLAN_VENDOR_ATTR_NDP_RESPONDER_REQUEST = 5,
   QCA_WLAN_VENDOR_ATTR_NDP_RESPONDER_RESPONSE = 6,
   QCA_WLAN_VENDOR_ATTR_NDP_END_REQUEST = 7,
   QCA_WLAN_VENDOR_ATTR_NDP_END_RESPONSE = 8,
   QCA_WLAN_VENDOR_ATTR_NDP_DATA_REQUEST_IND = 9,
   QCA_WLAN_VENDOR_ATTR_NDP_CONFIRM_IND = 10,
   QCA_WLAN_VENDOR_ATTR_NDP_END_IND = 11,
   QCA_WLAN_VENDOR_ATTR_NDP_SCHEDULE_UPDATE_IND = 12
};

#define PACKET_FILTER_ID 0

enum packet_filter_sub_cmd
{
    QCA_WLAN_SET_PACKET_FILTER = 1,
    QCA_WLAN_GET_PACKET_FILTER_SIZE = 2,
    /* For writing packet filter program + data */
    QCA_WLAN_WRITE_PACKET_FILTER = 3,
    /* For reading packet filter data */
    QCA_WLAN_READ_PACKET_FILTER = 4,
    /* Enable APF faeature */
    QCA_WLAN_ENABLE_PACKET_FILTER = 5,
    /* Disable APF faeature */
    QCA_WLAN_DISABLE_PACKET_FILTER = 6,
};

enum qca_wlan_vendor_attr_packet_filter
{
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_INVALID = 0,

    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_SUB_CMD,
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_VERSION,
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_ID,
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_TOTAL_LENGTH,
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_CURRENT_OFFSET,
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_PROGRAM,
    /* The length of the program in the write buffer,
     * the write buffer may have program+data
     */
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_PROG_LENGTH,

    /* keep last */
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_MAX =
        QCA_WLAN_VENDOR_ATTR_PACKET_FILTER_AFTER_LAST - 1,

};

enum qca_wlan_vendor_attr_nd_offload
{
    QCA_WLAN_VENDOR_ATTR_ND_OFFLOAD_INVALID = 0,

    QCA_WLAN_VENDOR_ATTR_ND_OFFLOAD_FLAG,

    /* keep last */
    QCA_WLAN_VENDOR_ATTR_ND_OFFLOAD_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_ND_OFFLOAD_MAX =
        QCA_WLAN_VENDOR_ATTR_ND_OFFLOAD_AFTER_LAST - 1,

};

enum qca_wlan_vendor_drv_info
{
    QCA_WLAN_VENDOR_ATTR_DRV_INFO_INVALID = 0,

    QCA_WLAN_VENDOR_ATTR_DRV_INFO_BUS_SIZE,

    /* keep last */
    QCA_WLAN_VENDOR_ATTR_DRV_INFO_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_DRV_INFO_MAX =
        QCA_WLAN_VENDOR_ATTR_DRV_INFO_AFTER_LAST - 1,

};

/* NL attributes for data used by
 * QCA_NL80211_VENDOR_SUBCMD_GET_WAKE_REASON_STATS  sub command.
 */
enum qca_wlan_vendor_attr_wake_stats
{
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_INVALID = 0,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_TOTAL_CMD_EVENT_WAKE,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_CMD_EVENT_WAKE_CNT_PTR,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_CMD_EVENT_WAKE_CNT_SZ,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_TOTAL_DRIVER_FW_LOCAL_WAKE,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_DRIVER_FW_LOCAL_WAKE_CNT_PTR,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_DRIVER_FW_LOCAL_WAKE_CNT_SZ,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_TOTAL_RX_DATA_WAKE,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_RX_UNICAST_CNT,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_RX_MULTICAST_CNT,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_RX_BROADCAST_CNT,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_ICMP_PKT,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_ICMP6_PKT,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_ICMP6_RA,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_ICMP6_NA,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_ICMP6_NS,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_ICMP4_RX_MULTICAST_CNT,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_ICMP6_RX_MULTICAST_CNT,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_OTHER_RX_MULTICAST_CNT,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_WAKE_STATS_MAX =
        QCA_WLAN_VENDOR_ATTR_WAKE_STATS_AFTER_LAST - 1,
};

/**
 * enum qca_wlan_vendor_attr_mac - Used by the vendor command
 * QCA_NL80211_VENDOR_SUBCMD_WLAN_MAC_INFO.
 */
enum qca_wlan_vendor_attr_mac {
    QCA_WLAN_VENDOR_ATTR_MAC_INVALID = 0,
    /* MAC mode info list which has an array of nested values as
     * per attributes in enum qca_wlan_vendor_attr_mac_info.
     */
    QCA_WLAN_VENDOR_ATTR_MAC_INFO = 1,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_MAC_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_MAC_MAX =
    QCA_WLAN_VENDOR_ATTR_MAC_AFTER_LAST - 1,
};

/**
 * enum qca_wlan_vendor_attr_mac_iface_info - Information of the connected
 * WiFi netdev interface on a respective MAC.
 * Used by the attribute QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO.
 */
enum qca_wlan_vendor_attr_mac_iface_info {
    QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO_INVALID = 0,
    /* Wi-Fi Netdev's interface id.u32. */
    QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO_ID = 1,
    /* Associated frequency in MHz of the connected Wi-Fi interface. u32 */
    QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO_FREQ = 2,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO_MAX =
    QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO_AFTER_LAST - 1,
};

/**
 * enum qca_wlan_vendor_attr_mac_info - Points to MAC the information.
 * Used by the attribute QCA_WLAN_VENDOR_ATTR_MAC_INFO of the
 * vendor command QCA_NL80211_VENDOR_SUBCMD_WLAN_MAC_INFO.
 */
enum qca_wlan_vendor_attr_mac_info {
    QCA_WLAN_VENDOR_ATTR_MAC_INFO_INVALID = 0,
    /* Hardware MAC ID associated for the MAC (u32) */
    QCA_WLAN_VENDOR_ATTR_MAC_INFO_MAC_ID = 1,
    /* Band supported by the respective MAC at a given point.
     * Represented by enum qca_wlan_vendor_mac_info_band.
     */
    QCA_WLAN_VENDOR_ATTR_MAC_INFO_BAND = 2,
    /* Refers to list of WLAN net dev interfaces associated with this MAC.
     * Represented by enum qca_wlan_vendor_attr_mac_iface_info.
     */
    QCA_WLAN_VENDOR_ATTR_MAC_IFACE_INFO = 3,
    /* keep last */
    QCA_WLAN_VENDOR_ATTR_MAC_INFO_AFTER_LAST,
    QCA_WLAN_VENDOR_ATTR_MAC_INFO_MAX =
    QCA_WLAN_VENDOR_ATTR_MAC_INFO_AFTER_LAST - 1,
};
#endif
