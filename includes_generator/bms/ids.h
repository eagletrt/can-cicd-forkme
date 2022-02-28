#ifndef bms_IDS_H
#define bms_IDS_H

#define bms_IDS_VERSION 1.1f

/* TOPIC STATUS */
#define TOPIC_STATUS_MASK 0b00000011111
#define TOPIC_STATUS_FILTER 0b00000000000
/*
* Cellboard's status
*/
#define ID_BOARD_STATUS_0 0b11000000000
/*
* Cellboard's status
*/
#define ID_BOARD_STATUS_1 0b11000100000
/*
* Cellboard's status
*/
#define ID_BOARD_STATUS_2 0b11001000000
/*
* Cellboard's status
*/
#define ID_BOARD_STATUS_3 0b11001100000
/*
* Cellboard's status
*/
#define ID_BOARD_STATUS_4 0b11010000000
/*
* Cellboard's status
*/
#define ID_BOARD_STATUS_5 0b11010100000

/* TOPIC TEMPERATURE_INFO */
#define TOPIC_TEMPERATURE_INFO_MASK 0b00000011111
#define TOPIC_TEMPERATURE_INFO_FILTER 0b00000000001
/*
* Cells' temperatures
*/
#define ID_TEMP_STATS_0 0b10100000001
/*
* Cells' temperatures
*/
#define ID_TEMP_STATS_1 0b10100100001
/*
* Cells' temperatures
*/
#define ID_TEMP_STATS_2 0b10101000001
/*
* Cells' temperatures
*/
#define ID_TEMP_STATS_3 0b10101100001
/*
* Cells' temperatures
*/
#define ID_TEMP_STATS_4 0b10110000001
/*
* Cells' temperatures
*/
#define ID_TEMP_STATS_5 0b10110100001

/* TOPIC VOLTAGE_INFO */
#define TOPIC_VOLTAGE_INFO_MASK 0b00000011111
#define TOPIC_VOLTAGE_INFO_FILTER 0b00000000010
/*
* Cells' voltages
*/
#define ID_VOLTAGES_0 0b01000000010
/*
* Cells' voltages
*/
#define ID_VOLTAGES_1 0b01000100010
/*
* Cells' voltages
*/
#define ID_VOLTAGES_2 0b01001000010
/*
* Cells' voltages
*/
#define ID_VOLTAGES_3 0b01001100010
/*
* Cells' voltages
*/
#define ID_VOLTAGES_4 0b01010000010
/*
* Cells' voltages
*/
#define ID_VOLTAGES_5 0b01010100010

/* TOPIC BALANCING */
#define TOPIC_BALANCING_MASK 0b00000011111
#define TOPIC_BALANCING_FILTER 0b00000000011
/*
* Set discharging status for cells
*/
#define ID_BALANCING 0b11000000011

#endif
