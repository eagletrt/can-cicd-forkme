#ifdef __cplusplus
extern "C" {
#endif

#ifndef PRIMARY_H
#define PRIMARY_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>

/*
*   NAKED SHARED 
*   Common functions, defines and checks between all the network.h files
*/
#ifndef __NAKED_SHARED
#define __NAKED_SHARED
    /*
    *   Endianness check
    *   static check for supported endianness
    */
    #ifndef __NAKED_ENDIAN_ORDER
        #define __NAKED_ENDIAN_ORDER 1094861636L // "ABCD"
    #endif
    #if !defined(__NAKED_LITTLE_ENDIAN) && !defined(__NAKED_BIG_ENDIAN) && !defined(__NAKED_PDP_ENDIAN)
        #if __NAKED_ENDIAN_ORDER==0x41424344UL 
            #define __NAKED_LITTLE_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x44434241UL
            #define __NAKED_BIG_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x42414443UL
            #define __NAKED_PDP_ENDIAN
        #else
            #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
        #endif
    #endif
    
    #ifndef __NAKED_LITTLE_ENDIAN
        #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
    #endif
    
    /*
    *   Floating point types size check
    *   the only supported sizes for now are 32 bits for float and 64 for double
    */
    static_assert(sizeof(float) == 4,"** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'float' OF 4 BYTES **");
    static_assert(sizeof(double) == 8, "** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'double' OF 8 BYTES **");

    /*
    *   Packed macro
    *   macro for packed structs on multiple compilers
    */
    #if defined(__MINGW32__)
        #define __is_packed __attribute__((__gcc_struct__, __packed__)) // , __aligned__(1)))
    #else
        #define __is_packed __attribute__((__packed__)) // , __aligned__(1)))
    #endif
    
    /*
    *   Bitset setter/getter
    *   macros for reading/writing bitsets
    */
    #define setBit(bitset, index, value) \
    do { \
        (bitset)[(index)/8] &= ~( 1 << (index) % 8); \
        (bitset)[(index)/8] |=  ((value) << (index) % 8); \
    } while(0);
    #define flipBit(bitset, index) ((bitset)[(index)/8] ^= (1 << (index) % 8) )
    #define getBit(bitset, index)  ((bitset)[(index)/8] &  (1 << (index) % 8) )
#endif

// Types

typedef union {
    uint8_t bytes[4];
    float value;
} float_t;

typedef union {
    uint8_t bytes[8];
    double value;
} double_t;

// Frequencies
#define PRIMARY_STEER_VERSION_MS 1000
#define PRIMARY_DAS_VERSION_MS 1000
#define PRIMARY_HV_VERSION_MS 1000
#define PRIMARY_LV_VERSION_MS 1000
#define PRIMARY_TLM_VERSION_MS 1000
#define PRIMARY_TIMESTAMP_MS 1000
#define PRIMARY_STEER_SYSTEM_STATUS_MS 2000
#define PRIMARY_TLM_STATUS_MS 1000
#define PRIMARY_CAR_STATUS_MS 100
#define PRIMARY_DAS_ERRORS_MS 20
#define PRIMARY_SPEED_MS 100
#define PRIMARY_HV_VOLTAGE_MS 20
#define PRIMARY_HV_CURRENT_MS 20
#define PRIMARY_HV_TEMP_MS 200
#define PRIMARY_HV_ERRORS_MS 20
#define PRIMARY_TS_STATUS_MS 20
#define PRIMARY_HANDCART_STATUS_MS 500
#define PRIMARY_STEER_STATUS_MS 100
#define PRIMARY_LV_CURRENT_MS 500
#define PRIMARY_LV_VOLTAGE_MS 200
#define PRIMARY_LV_TEMPERATURE_MS 200
#define PRIMARY_COOLING_STATUS_MS 1000
#define PRIMARY_HV_CELLS_VOLTAGE_MS 200
#define PRIMARY_HV_CELLS_TEMP_MS 100
#define PRIMARY_HV_CELL_BALANCING_STATUS_MS 500
#define PRIMARY_INV_L_SET_TORQUE_MS 20
#define PRIMARY_INV_L_RESPONSE_MS 100

// Sizes
#define PRIMARY_STEER_VERSION_SIZE 2
#define PRIMARY_DAS_VERSION_SIZE 2
#define PRIMARY_HV_VERSION_SIZE 2
#define PRIMARY_LV_VERSION_SIZE 2
#define PRIMARY_TLM_VERSION_SIZE 2
#define PRIMARY_TIMESTAMP_SIZE 4
#define PRIMARY_SET_TLM_STATUS_SIZE 3
#define PRIMARY_STEER_SYSTEM_STATUS_SIZE 1
#define PRIMARY_MARKER_SIZE 0
#define PRIMARY_TLM_STATUS_SIZE 3
#define PRIMARY_CAR_STATUS_SIZE 1
#define PRIMARY_DAS_ERRORS_SIZE 1
#define PRIMARY_SPEED_SIZE 8
#define PRIMARY_HV_VOLTAGE_SIZE 8
#define PRIMARY_HV_CURRENT_SIZE 4
#define PRIMARY_HV_TEMP_SIZE 6
#define PRIMARY_HV_ERRORS_SIZE 4
#define PRIMARY_TS_STATUS_SIZE 1
#define PRIMARY_SET_TS_STATUS_SIZE 1
#define PRIMARY_SET_CELL_BALANCING_STATUS_SIZE 1
#define PRIMARY_HANDCART_STATUS_SIZE 1
#define PRIMARY_STEER_STATUS_SIZE 1
#define PRIMARY_SET_CAR_STATUS_SIZE 1
#define PRIMARY_SET_PEDALS_RANGE_SIZE 1
#define PRIMARY_LV_CURRENT_SIZE 1
#define PRIMARY_LV_VOLTAGE_SIZE 6
#define PRIMARY_LV_TEMPERATURE_SIZE 2
#define PRIMARY_COOLING_STATUS_SIZE 3
#define PRIMARY_HV_CELLS_VOLTAGE_SIZE 7
#define PRIMARY_HV_CELLS_TEMP_SIZE 8
#define PRIMARY_HV_CELL_BALANCING_STATUS_SIZE 1
#define PRIMARY_INV_L_SET_TORQUE_SIZE 3
#define PRIMARY_INV_L_RESPONSE_SIZE 5

// Bitsets
typedef uint8_t PrimaryHvErrors[2];
#define PRIMARY_HV_ERRORS_DEFAULT { 0, 0 }
#define PRIMARY_HV_ERRORS_LTC_PEC_ERROR 0
#define PRIMARY_HV_ERRORS_CELL_UNDER_VOLTAGE 1
#define PRIMARY_HV_ERRORS_CELL_OVER_VOLTAGE 2
#define PRIMARY_HV_ERRORS_CELL_OVER_TEMPERATURE 3
#define PRIMARY_HV_ERRORS_OVER_CURRENT 4
#define PRIMARY_HV_ERRORS_ADC_INIT 5
#define PRIMARY_HV_ERRORS_ADC_TIMEOUT 6
#define PRIMARY_HV_ERRORS_INT_VOLTAGE_MISMATCH 7
#define PRIMARY_HV_ERRORS_FEEDBACK_HARD 8
#define PRIMARY_HV_ERRORS_FEEDBACK_SOFT 9

typedef uint8_t PrimaryDasErrors[1];
#define PRIMARY_DAS_ERRORS_DEFAULT { 0 }
#define PRIMARY_DAS_ERRORS_PEDAL_ADC 0
#define PRIMARY_DAS_ERRORS_PEDAL_IMPLAUSIBILITY 1
#define PRIMARY_DAS_ERRORS_IMU_TOUT 2
#define PRIMARY_DAS_ERRORS_IRTS_TOUT 3
#define PRIMARY_DAS_ERRORS_TS_TOUT 4
#define PRIMARY_DAS_ERRORS_INVL_TOUT 5
#define PRIMARY_DAS_ERRORS_INVR_TOUT 6
#define PRIMARY_DAS_ERRORS_FSM 7

typedef uint8_t PrimaryInvStatus[4];
#define PRIMARY_INV_STATUS_DEFAULT { 0, 0, 0, 0 }
#define PRIMARY_INV_STATUS_DRIVE_ENABLE 0
#define PRIMARY_INV_STATUS_NCR0 1
#define PRIMARY_INV_STATUS_LIMP 2
#define PRIMARY_INV_STATUS_LIMM 3
#define PRIMARY_INV_STATUS_DRIVE_OK 4
#define PRIMARY_INV_STATUS_ICNS 5
#define PRIMARY_INV_STATUS_T_NLIM 6
#define PRIMARY_INV_STATUS_P_N 7
#define PRIMARY_INV_STATUS_N_I 8
#define PRIMARY_INV_STATUS_N0 9
#define PRIMARY_INV_STATUS_RSW 10
#define PRIMARY_INV_STATUS_CAL0 11
#define PRIMARY_INV_STATUS_CAL 12
#define PRIMARY_INV_STATUS_TOL 13
#define PRIMARY_INV_STATUS_DRIVE_READY 14
#define PRIMARY_INV_STATUS_BRK 15
#define PRIMARY_INV_STATUS_SIGN_MAG 16
#define PRIMARY_INV_STATUS_NCLIP 17
#define PRIMARY_INV_STATUS_NCLIPP 18
#define PRIMARY_INV_STATUS_NCLIPM 19
#define PRIMARY_INV_STATUS_IRD_DIG 20
#define PRIMARY_INV_STATUS_IUSE_RCHD 21
#define PRIMARY_INV_STATUS_IRD_N 22
#define PRIMARY_INV_STATUS_IRD_TI 23
#define PRIMARY_INV_STATUS_IRD_TIR 24
#define PRIMARY_INV_STATUS_HZ10 25
#define PRIMARY_INV_STATUS_IRD_TM 26
#define PRIMARY_INV_STATUS_IRD_ANA 27
#define PRIMARY_INV_STATUS_IWCNS 28
#define PRIMARY_INV_STATUS_RFE_PULSE 29
#define PRIMARY_INV_STATUS_MD 30
#define PRIMARY_INV_STATUS_HND_WHL 31

typedef uint8_t PrimaryInvErrors[4];
#define PRIMARY_INV_ERRORS_DEFAULT { 0, 0, 0, 0 }
#define PRIMARY_INV_ERRORS_BAD_PARAM 0
#define PRIMARY_INV_ERRORS_HW_FAULT 1
#define PRIMARY_INV_ERRORS_SAFETY_FAULT 2
#define PRIMARY_INV_ERRORS_CAN_TIMEOUT 3
#define PRIMARY_INV_ERRORS_ENCODER_ERR 4
#define PRIMARY_INV_ERRORS_NO_POWER_VOLTAGE 5
#define PRIMARY_INV_ERRORS_HI_MOTOR_TEMP 6
#define PRIMARY_INV_ERRORS_HI_DEVICE_TEMP 7
#define PRIMARY_INV_ERRORS_OVERVOLTAGE 8
#define PRIMARY_INV_ERRORS_OVERCURRENT 9
#define PRIMARY_INV_ERRORS_RACEAWAY 10
#define PRIMARY_INV_ERRORS_USER_ERR 11
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_12 12
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_13 13
#define PRIMARY_INV_ERRORS_CURRENT_ERR 14
#define PRIMARY_INV_ERRORS_BALLAST_OVERLOAD 15
#define PRIMARY_INV_ERRORS_DEVICE_ID_ERR 16
#define PRIMARY_INV_ERRORS_RUN_SIG_FAULT 17
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_19 18
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_20 19
#define PRIMARY_INV_ERRORS_POWERVOLTAGE_WARN 20
#define PRIMARY_INV_ERRORS_HI_MOTOR_TEMP_WARN 21
#define PRIMARY_INV_ERRORS_HI_DEVICE_TEMP_WARN 22
#define PRIMARY_INV_ERRORS_VOUT_LIMIT_WARN 23
#define PRIMARY_INV_ERRORS_OVERCURRENT_WARN 24
#define PRIMARY_INV_ERRORS_RACEAWAY_WARN 25
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_27 26
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_28 27
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_29 28
#define PRIMARY_INV_ERRORS_UNKNOWN_ERR_30 29
#define PRIMARY_INV_ERRORS_BALLAST_OVERLOAD_WARN 30

typedef uint8_t PrimaryRegVal[4];
#define PRIMARY_REG_VAL_DEFAULT { 0, 0, 0, 0 }

// Enums
typedef enum __is_packed {
    PRIMARY_TLM_STATUS_OFF = 0,
    PRIMARY_TLM_STATUS_ON = 1,
} PrimaryTlmStatus;

typedef enum __is_packed {
    PRIMARY_RACE_TYPE_ACCELERATION = 0,
    PRIMARY_RACE_TYPE_SKIDPAD = 1,
    PRIMARY_RACE_TYPE_AUTOCROSS = 2,
    PRIMARY_RACE_TYPE_ENDURANCE = 3,
} PrimaryRaceType;

typedef enum __is_packed {
    PRIMARY_INVERTER_STATUS_OFF = 0,
    PRIMARY_INVERTER_STATUS_IDLE = 1,
    PRIMARY_INVERTER_STATUS_ON = 2,
} PrimaryInverterStatus;

typedef enum __is_packed {
    PRIMARY_CAR_STATUS_IDLE = 0,
    PRIMARY_CAR_STATUS_SETUP = 1,
    PRIMARY_CAR_STATUS_RUN = 2,
} PrimaryCarStatus;

typedef enum __is_packed {
    PRIMARY_TS_STATUS_OFF = 0,
    PRIMARY_TS_STATUS_PRECHARGE = 1,
    PRIMARY_TS_STATUS_ON = 2,
    PRIMARY_TS_STATUS_FATAL = 3,
} PrimaryTsStatus;

typedef enum __is_packed {
    PRIMARY_TS_STATUS_SET_OFF = 0,
    PRIMARY_TS_STATUS_SET_ON = 1,
} PrimaryTsStatusSet;

typedef enum __is_packed {
    PRIMARY_SET_BALANCING_STATUS_OFF = 0,
    PRIMARY_SET_BALANCING_STATUS_ON = 1,
} PrimarySetBalancingStatus;

typedef enum __is_packed {
    PRIMARY_TRACTION_CONTROL_OFF = 0,
    PRIMARY_TRACTION_CONTROL_SLIP_CONTROL = 1,
    PRIMARY_TRACTION_CONTROL_TORQUE_VECTORING = 2,
    PRIMARY_TRACTION_CONTROL_COMPLETE = 3,
} PrimaryTractionControl;

typedef enum __is_packed {
    PRIMARY_MAP_R = 0,
    PRIMARY_MAP_D20 = 1,
    PRIMARY_MAP_D40 = 2,
    PRIMARY_MAP_D60 = 3,
    PRIMARY_MAP_D80 = 4,
    PRIMARY_MAP_D100 = 5,
} PrimaryMap;

typedef enum __is_packed {
    PRIMARY_CAR_STATUS_SET_IDLE = 0,
    PRIMARY_CAR_STATUS_SET_RUN = 1,
} PrimaryCarStatusSet;

typedef enum __is_packed {
    PRIMARY_BOUND_SET_MAX = 0,
    PRIMARY_BOUND_SET_MIN = 1,
} PrimaryBound;

typedef enum __is_packed {
    PRIMARY_PEDAL_ACCELERATOR = 0,
    PRIMARY_PEDAL_BRAKE = 1,
} PrimaryPedal;

typedef enum __is_packed {
    PRIMARY_BALANCING_STATUS_OFF = 0,
    PRIMARY_BALANCING_STATUS_ON = 1,
} PrimaryBalancingStatus;

// Structs
typedef struct __is_packed {
    uint8_t component_version;
    uint8_t cancicd_version;
} PrimarySteerVersionMsg;

typedef struct __is_packed {
    uint8_t component_version;
    uint8_t cancicd_version;
} PrimaryDasVersionMsg;

typedef struct __is_packed {
    uint8_t component_version;
    uint8_t cancicd_version;
} PrimaryHvVersionMsg;

typedef struct __is_packed {
    uint8_t component_version;
    uint8_t cancicd_version;
} PrimaryLvVersionMsg;

typedef struct __is_packed {
    uint8_t component_version;
    uint8_t cancicd_version;
} PrimaryTlmVersionMsg;

typedef struct __is_packed {
    uint32_t timestamp;
} PrimaryTimestampMsg;

typedef struct __is_packed {
    uint8_t driver;
    uint8_t circuit;
    PrimaryRaceType race_type;
    PrimaryTlmStatus tlm_status;
} PrimarySetTlmStatusMsg;

typedef struct __is_packed {
    uint8_t soc_temp;
} PrimarySteerSystemStatusMsg;

typedef struct __is_packed {
} PrimaryMarkerMsg;

typedef struct __is_packed {
    uint8_t driver;
    uint8_t circuit;
    PrimaryRaceType race_type;
    PrimaryTlmStatus tlm_status;
} PrimaryTlmStatusMsg;

typedef struct __is_packed {
    PrimaryInverterStatus inverter_l;
    PrimaryInverterStatus inverter_r;
    PrimaryCarStatus car_status;
} PrimaryCarStatusMsg;

typedef struct __is_packed {
    PrimaryDasErrors das_error;
} PrimaryDasErrorsMsg;

typedef struct __is_packed {
    uint16_t encoder_r;
    uint16_t encoder_l;
    uint16_t inverter_r;
    uint16_t inverter_l;
} PrimarySpeedMsg;

typedef struct __is_packed {
    uint16_t pack_voltage;
    uint16_t bus_voltage;
    uint16_t max_cell_voltage;
    uint16_t min_cell_voltage;
} PrimaryHvVoltageMsg;

typedef struct __is_packed {
    uint16_t current;
    int16_t power;
} PrimaryHvCurrentMsg;

typedef struct __is_packed {
    uint16_t average_temp;
    uint16_t max_temp;
    uint16_t min_temp;
} PrimaryHvTempMsg;

typedef struct __is_packed {
    PrimaryHvErrors warnings;
    PrimaryHvErrors errors;
} PrimaryHvErrorsMsg;

typedef struct __is_packed {
    PrimaryTsStatus ts_status;
} PrimaryTsStatusMsg;

typedef struct __is_packed {
    PrimaryTsStatusSet ts_status_set;
} PrimarySetTsStatusMsg;

typedef struct __is_packed {
    PrimarySetBalancingStatus set_balancing_status;
} PrimarySetCellBalancingStatusMsg;

typedef struct __is_packed {
    bool connected;
} PrimaryHandcartStatusMsg;

typedef struct __is_packed {
    PrimaryMap map;
    PrimaryTractionControl traction_control;
} PrimarySteerStatusMsg;

typedef struct __is_packed {
    PrimaryCarStatusSet car_status_set;
} PrimarySetCarStatusMsg;

typedef struct __is_packed {
    PrimaryBound bound;
    PrimaryPedal pedal;
} PrimarySetPedalsRangeMsg;

typedef struct __is_packed {
    uint8_t current;
} PrimaryLvCurrentMsg;

typedef struct __is_packed {
    uint16_t total_voltage;
    uint8_t voltage_1;
    uint8_t voltage_2;
    uint8_t voltage_3;
    uint8_t voltage_4;
} PrimaryLvVoltageMsg;

typedef struct __is_packed {
    uint8_t bp_temperature;
    uint8_t dcdc_temperature;
} PrimaryLvTemperatureMsg;

typedef struct __is_packed {
    uint8_t hv_fan_speed;
    uint8_t lv_fan_speed;
    uint8_t pump_speed;
} PrimaryCoolingStatusMsg;

typedef struct __is_packed {
    uint16_t voltage_0;
    uint16_t voltage_1;
    uint16_t voltage_2;
    uint8_t cell_index;
} PrimaryHvCellsVoltageMsg;

typedef struct __is_packed {
    uint8_t cell_index;
    uint8_t temp_0;
    uint8_t temp_1;
    uint8_t temp_2;
    uint8_t temp_3;
    uint8_t temp_4;
    uint8_t temp_5;
    uint8_t temp_6;
} PrimaryHvCellsTempMsg;

typedef struct __is_packed {
    PrimaryBalancingStatus balancing_status;
} PrimaryHvCellBalancingStatusMsg;

typedef struct __is_packed {
    uint8_t regid;
    uint8_t lsb;
    uint8_t msb;
} PrimaryInvLSetTorqueMsg;

typedef struct __is_packed {
    PrimaryRegVal reg_val;
    uint8_t reg_id;
} PrimaryInvLResponseMsg;

// Functions

void serialize_PrimarySteerVersion(uint8_t *data, PrimarySteerVersionMsg *msg){
    data[0] = msg->component_version;
    data[1] = msg->cancicd_version;
}

void deserialize_PrimarySteerVersion(uint8_t *data, PrimarySteerVersionMsg *msg){
    msg->component_version = data[0];
    msg->cancicd_version = data[1];
}

void serialize_PrimaryDasVersion(uint8_t *data, PrimaryDasVersionMsg *msg){
    data[0] = msg->component_version;
    data[1] = msg->cancicd_version;
}

void deserialize_PrimaryDasVersion(uint8_t *data, PrimaryDasVersionMsg *msg){
    msg->component_version = data[0];
    msg->cancicd_version = data[1];
}

void serialize_PrimaryHvVersion(uint8_t *data, PrimaryHvVersionMsg *msg){
    data[0] = msg->component_version;
    data[1] = msg->cancicd_version;
}

void deserialize_PrimaryHvVersion(uint8_t *data, PrimaryHvVersionMsg *msg){
    msg->component_version = data[0];
    msg->cancicd_version = data[1];
}

void serialize_PrimaryLvVersion(uint8_t *data, PrimaryLvVersionMsg *msg){
    data[0] = msg->component_version;
    data[1] = msg->cancicd_version;
}

void deserialize_PrimaryLvVersion(uint8_t *data, PrimaryLvVersionMsg *msg){
    msg->component_version = data[0];
    msg->cancicd_version = data[1];
}

void serialize_PrimaryTlmVersion(uint8_t *data, PrimaryTlmVersionMsg *msg){
    data[0] = msg->component_version;
    data[1] = msg->cancicd_version;
}

void deserialize_PrimaryTlmVersion(uint8_t *data, PrimaryTlmVersionMsg *msg){
    msg->component_version = data[0];
    msg->cancicd_version = data[1];
}

void serialize_PrimaryTimestamp(uint8_t *data, PrimaryTimestampMsg *msg){
    data[0] = msg->timestamp & 255;
    data[1] = (msg->timestamp >> 8) & 255;
    data[2] = (msg->timestamp >> 16) & 255;
    data[3] = (msg->timestamp >> 24) & 255;
}

void deserialize_PrimaryTimestamp(uint8_t *data, PrimaryTimestampMsg *msg){
    msg->timestamp = data[0] | (data[1] << 8) | (data[2] << 16) | (data[3] << 24);
}

void serialize_PrimarySetTlmStatus(uint8_t *data, PrimarySetTlmStatusMsg *msg){
    data[0] = msg->driver;
    data[1] = msg->circuit;
    data[2] = msg->race_type << 6 | msg->tlm_status << 5;
}

void deserialize_PrimarySetTlmStatus(uint8_t *data, PrimarySetTlmStatusMsg *msg){
    msg->driver = data[0];
    msg->circuit = data[1];
    msg->race_type = (PrimaryRaceType) ((data[2] & 192) >> 6);
    msg->tlm_status = (PrimaryTlmStatus) ((data[2] & 32) >> 5);
}

void serialize_PrimarySteerSystemStatus(uint8_t *data, PrimarySteerSystemStatusMsg *msg){
    data[0] = msg->soc_temp;
}

void deserialize_PrimarySteerSystemStatus(uint8_t *data, PrimarySteerSystemStatusMsg *msg){
    msg->soc_temp = data[0];
}

void serialize_PrimaryMarker(uint8_t *data, PrimaryMarkerMsg *msg){
}

void deserialize_PrimaryMarker(uint8_t *data, PrimaryMarkerMsg *msg){
}

void serialize_PrimaryTlmStatus(uint8_t *data, PrimaryTlmStatusMsg *msg){
    data[0] = msg->driver;
    data[1] = msg->circuit;
    data[2] = msg->race_type << 6 | msg->tlm_status << 5;
}

void deserialize_PrimaryTlmStatus(uint8_t *data, PrimaryTlmStatusMsg *msg){
    msg->driver = data[0];
    msg->circuit = data[1];
    msg->race_type = (PrimaryRaceType) ((data[2] & 192) >> 6);
    msg->tlm_status = (PrimaryTlmStatus) ((data[2] & 32) >> 5);
}

void serialize_PrimaryCarStatus(uint8_t *data, PrimaryCarStatusMsg *msg){
    data[0] = msg->inverter_l << 6 | msg->inverter_r << 4 | msg->car_status << 2;
}

void deserialize_PrimaryCarStatus(uint8_t *data, PrimaryCarStatusMsg *msg){
    msg->inverter_l = (PrimaryInverterStatus) ((data[0] & 192) >> 6);
    msg->inverter_r = (PrimaryInverterStatus) ((data[0] & 48) >> 4);
    msg->car_status = (PrimaryCarStatus) ((data[0] & 12) >> 2);
}

void serialize_PrimaryDasErrors(uint8_t *data, PrimaryDasErrorsMsg *msg){
    data[0] = msg->das_error[0];
}

void deserialize_PrimaryDasErrors(uint8_t *data, PrimaryDasErrorsMsg *msg){
    msg->das_error[0] = data[0];
}

void serialize_PrimarySpeed(uint8_t *data, PrimarySpeedMsg *msg){
    data[0] = msg->encoder_r & 255;
    data[1] = (msg->encoder_r >> 8) & 255;
    data[2] = msg->encoder_l & 255;
    data[3] = (msg->encoder_l >> 8) & 255;
    data[4] = msg->inverter_r & 255;
    data[5] = (msg->inverter_r >> 8) & 255;
    data[6] = msg->inverter_l & 255;
    data[7] = (msg->inverter_l >> 8) & 255;
}

void deserialize_PrimarySpeed(uint8_t *data, PrimarySpeedMsg *msg){
    msg->encoder_r = data[0] | (data[1] << 8);
    msg->encoder_l = data[2] | (data[3] << 8);
    msg->inverter_r = data[4] | (data[5] << 8);
    msg->inverter_l = data[6] | (data[7] << 8);
}

void serialize_PrimaryHvVoltage(uint8_t *data, PrimaryHvVoltageMsg *msg){
    data[0] = msg->pack_voltage & 255;
    data[1] = (msg->pack_voltage >> 8) & 255;
    data[2] = msg->bus_voltage & 255;
    data[3] = (msg->bus_voltage >> 8) & 255;
    data[4] = msg->max_cell_voltage & 255;
    data[5] = (msg->max_cell_voltage >> 8) & 255;
    data[6] = msg->min_cell_voltage & 255;
    data[7] = (msg->min_cell_voltage >> 8) & 255;
}

void deserialize_PrimaryHvVoltage(uint8_t *data, PrimaryHvVoltageMsg *msg){
    msg->pack_voltage = data[0] | (data[1] << 8);
    msg->bus_voltage = data[2] | (data[3] << 8);
    msg->max_cell_voltage = data[4] | (data[5] << 8);
    msg->min_cell_voltage = data[6] | (data[7] << 8);
}

void serialize_PrimaryHvCurrent(uint8_t *data, PrimaryHvCurrentMsg *msg){
    data[0] = msg->current & 255;
    data[1] = (msg->current >> 8) & 255;
    data[2] = msg->power & 255;
    data[3] = (msg->power >> 8) & 255;
}

void deserialize_PrimaryHvCurrent(uint8_t *data, PrimaryHvCurrentMsg *msg){
    msg->current = data[0] | (data[1] << 8);
    msg->power = data[2] | (data[3] << 8);
}

void serialize_PrimaryHvTemp(uint8_t *data, PrimaryHvTempMsg *msg){
    data[0] = msg->average_temp & 255;
    data[1] = (msg->average_temp >> 8) & 255;
    data[2] = msg->max_temp & 255;
    data[3] = (msg->max_temp >> 8) & 255;
    data[4] = msg->min_temp & 255;
    data[5] = (msg->min_temp >> 8) & 255;
}

void deserialize_PrimaryHvTemp(uint8_t *data, PrimaryHvTempMsg *msg){
    msg->average_temp = data[0] | (data[1] << 8);
    msg->max_temp = data[2] | (data[3] << 8);
    msg->min_temp = data[4] | (data[5] << 8);
}

void serialize_PrimaryHvErrors(uint8_t *data, PrimaryHvErrorsMsg *msg){
    data[0] = msg->warnings[0];
    data[1] = msg->warnings[1];
    data[2] = msg->errors[0];
    data[3] = msg->errors[1];
}

void deserialize_PrimaryHvErrors(uint8_t *data, PrimaryHvErrorsMsg *msg){
    msg->warnings[0] = data[0];
    msg->warnings[1] = data[1];
    msg->errors[0] = data[2];
    msg->errors[1] = data[3];
}

void serialize_PrimaryTsStatus(uint8_t *data, PrimaryTsStatusMsg *msg){
    data[0] = msg->ts_status << 6;
}

void deserialize_PrimaryTsStatus(uint8_t *data, PrimaryTsStatusMsg *msg){
    msg->ts_status = (PrimaryTsStatus) ((data[0] & 192) >> 6);
}

void serialize_PrimarySetTsStatus(uint8_t *data, PrimarySetTsStatusMsg *msg){
    data[0] = msg->ts_status_set << 7;
}

void deserialize_PrimarySetTsStatus(uint8_t *data, PrimarySetTsStatusMsg *msg){
    msg->ts_status_set = (PrimaryTsStatusSet) ((data[0] & 128) >> 7);
}

void serialize_PrimarySetCellBalancingStatus(uint8_t *data, PrimarySetCellBalancingStatusMsg *msg){
    data[0] = msg->set_balancing_status << 7;
}

void deserialize_PrimarySetCellBalancingStatus(uint8_t *data, PrimarySetCellBalancingStatusMsg *msg){
    msg->set_balancing_status = (PrimarySetBalancingStatus) ((data[0] & 128) >> 7);
}

void serialize_PrimaryHandcartStatus(uint8_t *data, PrimaryHandcartStatusMsg *msg){
    data[0] = msg->connected << 7;
}

void deserialize_PrimaryHandcartStatus(uint8_t *data, PrimaryHandcartStatusMsg *msg){
    msg->connected = (data[0] & 128) >> 7;
}

void serialize_PrimarySteerStatus(uint8_t *data, PrimarySteerStatusMsg *msg){
    data[0] = msg->map << 5 | msg->traction_control << 3;
}

void deserialize_PrimarySteerStatus(uint8_t *data, PrimarySteerStatusMsg *msg){
    msg->map = (PrimaryMap) ((data[0] & 224) >> 5);
    msg->traction_control = (PrimaryTractionControl) ((data[0] & 24) >> 3);
}

void serialize_PrimarySetCarStatus(uint8_t *data, PrimarySetCarStatusMsg *msg){
    data[0] = msg->car_status_set << 7;
}

void deserialize_PrimarySetCarStatus(uint8_t *data, PrimarySetCarStatusMsg *msg){
    msg->car_status_set = (PrimaryCarStatusSet) ((data[0] & 128) >> 7);
}

void serialize_PrimarySetPedalsRange(uint8_t *data, PrimarySetPedalsRangeMsg *msg){
    data[0] = msg->bound << 7 | msg->pedal << 6;
}

void deserialize_PrimarySetPedalsRange(uint8_t *data, PrimarySetPedalsRangeMsg *msg){
    msg->bound = (PrimaryBound) ((data[0] & 128) >> 7);
    msg->pedal = (PrimaryPedal) ((data[0] & 64) >> 6);
}

void serialize_PrimaryLvCurrent(uint8_t *data, PrimaryLvCurrentMsg *msg){
    data[0] = msg->current;
}

void deserialize_PrimaryLvCurrent(uint8_t *data, PrimaryLvCurrentMsg *msg){
    msg->current = data[0];
}

void serialize_PrimaryLvVoltage(uint8_t *data, PrimaryLvVoltageMsg *msg){
    data[0] = msg->total_voltage & 255;
    data[1] = (msg->total_voltage >> 8) & 255;
    data[2] = msg->voltage_1;
    data[3] = msg->voltage_2;
    data[4] = msg->voltage_3;
    data[5] = msg->voltage_4;
}

void deserialize_PrimaryLvVoltage(uint8_t *data, PrimaryLvVoltageMsg *msg){
    msg->total_voltage = data[0] | (data[1] << 8);
    msg->voltage_1 = data[2];
    msg->voltage_2 = data[3];
    msg->voltage_3 = data[4];
    msg->voltage_4 = data[5];
}

void serialize_PrimaryLvTemperature(uint8_t *data, PrimaryLvTemperatureMsg *msg){
    data[0] = msg->bp_temperature;
    data[1] = msg->dcdc_temperature;
}

void deserialize_PrimaryLvTemperature(uint8_t *data, PrimaryLvTemperatureMsg *msg){
    msg->bp_temperature = data[0];
    msg->dcdc_temperature = data[1];
}

void serialize_PrimaryCoolingStatus(uint8_t *data, PrimaryCoolingStatusMsg *msg){
    data[0] = msg->hv_fan_speed;
    data[1] = msg->lv_fan_speed;
    data[2] = msg->pump_speed;
}

void deserialize_PrimaryCoolingStatus(uint8_t *data, PrimaryCoolingStatusMsg *msg){
    msg->hv_fan_speed = data[0];
    msg->lv_fan_speed = data[1];
    msg->pump_speed = data[2];
}

void serialize_PrimaryHvCellsVoltage(uint8_t *data, PrimaryHvCellsVoltageMsg *msg){
    data[0] = msg->voltage_0 & 255;
    data[1] = (msg->voltage_0 >> 8) & 255;
    data[2] = msg->voltage_1 & 255;
    data[3] = (msg->voltage_1 >> 8) & 255;
    data[4] = msg->voltage_2 & 255;
    data[5] = (msg->voltage_2 >> 8) & 255;
    data[6] = msg->cell_index;
}

void deserialize_PrimaryHvCellsVoltage(uint8_t *data, PrimaryHvCellsVoltageMsg *msg){
    msg->voltage_0 = data[0] | (data[1] << 8);
    msg->voltage_1 = data[2] | (data[3] << 8);
    msg->voltage_2 = data[4] | (data[5] << 8);
    msg->cell_index = data[6];
}

void serialize_PrimaryHvCellsTemp(uint8_t *data, PrimaryHvCellsTempMsg *msg){
    data[0] = msg->cell_index;
    data[1] = msg->temp_0;
    data[2] = msg->temp_1;
    data[3] = msg->temp_2;
    data[4] = msg->temp_3;
    data[5] = msg->temp_4;
    data[6] = msg->temp_5;
    data[7] = msg->temp_6;
}

void deserialize_PrimaryHvCellsTemp(uint8_t *data, PrimaryHvCellsTempMsg *msg){
    msg->cell_index = data[0];
    msg->temp_0 = data[1];
    msg->temp_1 = data[2];
    msg->temp_2 = data[3];
    msg->temp_3 = data[4];
    msg->temp_4 = data[5];
    msg->temp_5 = data[6];
    msg->temp_6 = data[7];
}

void serialize_PrimaryHvCellBalancingStatus(uint8_t *data, PrimaryHvCellBalancingStatusMsg *msg){
    data[0] = msg->balancing_status << 7;
}

void deserialize_PrimaryHvCellBalancingStatus(uint8_t *data, PrimaryHvCellBalancingStatusMsg *msg){
    msg->balancing_status = (PrimaryBalancingStatus) ((data[0] & 128) >> 7);
}

void serialize_PrimaryInvLSetTorque(uint8_t *data, PrimaryInvLSetTorqueMsg *msg){
    data[0] = msg->regid;
    data[1] = msg->lsb;
    data[2] = msg->msb;
}

void deserialize_PrimaryInvLSetTorque(uint8_t *data, PrimaryInvLSetTorqueMsg *msg){
    msg->regid = data[0];
    msg->lsb = data[1];
    msg->msb = data[2];
}

void serialize_PrimaryInvLResponse(uint8_t *data, PrimaryInvLResponseMsg *msg){
    data[0] = msg->reg_val[0];
    data[1] = msg->reg_val[1];
    data[2] = msg->reg_val[2];
    data[3] = msg->reg_val[3];
    data[4] = msg->reg_id;
}

void deserialize_PrimaryInvLResponse(uint8_t *data, PrimaryInvLResponseMsg *msg){
    msg->reg_val[0] = data[0];
    msg->reg_val[1] = data[1];
    msg->reg_val[2] = data[2];
    msg->reg_val[3] = data[3];
    msg->reg_id = data[4];
}

#endif

#ifdef __cplusplus
}
#endif