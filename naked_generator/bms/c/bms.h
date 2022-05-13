#ifdef __cplusplus
extern "C" {
#endif

#ifndef BMS_H
#define BMS_H

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

// Sizes
#define BMS_BOARD_STATUS_SIZE 2
#define BMS_TEMPERATURES_SIZE 7
#define BMS_VOLTAGES_SIZE 7
#define BMS_BALANCING_SIZE 4
#define BMS_FW_UPDATE_SIZE 1

// Bitsets
typedef uint8_t BmsErrors[1];
#define BMS_ERRORS_DEFAULT { 0 }
#define BMS_ERRORS_CAN_COMM 0
#define BMS_ERRORS_LTC_COMM 1
#define BMS_ERRORS_TEMP_COMM_0 2
#define BMS_ERRORS_TEMP_COMM_1 3
#define BMS_ERRORS_TEMP_COMM_2 4
#define BMS_ERRORS_TEMP_COMM_3 5
#define BMS_ERRORS_TEMP_COMM_4 6
#define BMS_ERRORS_TEMP_COMM_5 7

typedef uint8_t BmsBalancingCells[3];
#define BMS_BALANCING_CELLS_DEFAULT { 0, 0, 0 }
#define BMS_BALANCING_CELLS_CELL0 0
#define BMS_BALANCING_CELLS_CELL1 1
#define BMS_BALANCING_CELLS_CELL2 2
#define BMS_BALANCING_CELLS_CELL3 3
#define BMS_BALANCING_CELLS_CELL4 4
#define BMS_BALANCING_CELLS_CELL5 5
#define BMS_BALANCING_CELLS_CELL6 6
#define BMS_BALANCING_CELLS_CELL7 7
#define BMS_BALANCING_CELLS_CELL8 8
#define BMS_BALANCING_CELLS_CELL9 9
#define BMS_BALANCING_CELLS_CELL10 10
#define BMS_BALANCING_CELLS_CELL11 11
#define BMS_BALANCING_CELLS_CELL12 12
#define BMS_BALANCING_CELLS_CELL13 13
#define BMS_BALANCING_CELLS_CELL14 14
#define BMS_BALANCING_CELLS_CELL15 15
#define BMS_BALANCING_CELLS_CELL16 16
#define BMS_BALANCING_CELLS_CELL17 17

// Enums
typedef enum __is_packed {
    BMS_BALANCING_STATUS_OFF = 0,
    BMS_BALANCING_STATUS_DISCHARGE = 1,
} BmsBalancingStatus;

// Structs
typedef struct __is_packed {
    BmsErrors errors;
    BmsBalancingStatus balancing_status;
    uint32_t timestamp;
} BmsBoardStatusMsg;

typedef struct __is_packed {
    uint8_t start_index;
    uint8_t temp0;
    uint8_t temp1;
    uint8_t temp2;
    uint8_t temp3;
    uint8_t temp4;
    uint8_t temp5;
    uint32_t timestamp;
} BmsTemperaturesMsg;

typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint8_t start_index;
    uint32_t timestamp;
} BmsVoltagesMsg;

typedef struct __is_packed {
    BmsBalancingCells cells;
    uint8_t board_index;
    uint32_t timestamp;
} BmsBalancingMsg;

typedef struct __is_packed {
    uint8_t board_index;
    uint32_t timestamp;
} BmsFwUpdateMsg;

// Functions

void serialize_BmsBoardStatusMsg(uint8_t *data, BmsBoardStatusMsg *msg){
    data[0] = msg->errors[0];
    data[1] = msg->balancing_status << 7;
}

void serialize_BmsBoardStatus(uint8_t *data, BmsErrors errors, BmsBalancingStatus balancing_status){
    data[0] = errors[0];
    data[1] = balancing_status << 7;
}

void deserialize_BmsBoardStatus(uint8_t *data, BmsBoardStatusMsg *msg){
    msg->errors[0] = data[0];
    msg->balancing_status = (BmsBalancingStatus) ((data[1] & 128) >> 7);
}

void serialize_BmsTemperaturesMsg(uint8_t *data, BmsTemperaturesMsg *msg){
    data[0] = msg->start_index;
    data[1] = msg->temp0;
    data[2] = msg->temp1;
    data[3] = msg->temp2;
    data[4] = msg->temp3;
    data[5] = msg->temp4;
    data[6] = msg->temp5;
}

void serialize_BmsTemperatures(uint8_t *data, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5){
    data[0] = start_index;
    data[1] = temp0;
    data[2] = temp1;
    data[3] = temp2;
    data[4] = temp3;
    data[5] = temp4;
    data[6] = temp5;
}

void deserialize_BmsTemperatures(uint8_t *data, BmsTemperaturesMsg *msg){
    msg->start_index = data[0];
    msg->temp0 = data[1];
    msg->temp1 = data[2];
    msg->temp2 = data[3];
    msg->temp3 = data[4];
    msg->temp4 = data[5];
    msg->temp5 = data[6];
}

void serialize_BmsVoltagesMsg(uint8_t *data, BmsVoltagesMsg *msg){
    data[0] = msg->voltage0 & 255;
    data[1] = (msg->voltage0 >> 8) & 255;
    data[2] = msg->voltage1 & 255;
    data[3] = (msg->voltage1 >> 8) & 255;
    data[4] = msg->voltage2 & 255;
    data[5] = (msg->voltage2 >> 8) & 255;
    data[6] = msg->start_index;
}

void serialize_BmsVoltages(uint8_t *data, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint8_t start_index){
    data[0] = voltage0 & 255;
    data[1] = (voltage0 >> 8) & 255;
    data[2] = voltage1 & 255;
    data[3] = (voltage1 >> 8) & 255;
    data[4] = voltage2 & 255;
    data[5] = (voltage2 >> 8) & 255;
    data[6] = start_index;
}

void deserialize_BmsVoltages(uint8_t *data, BmsVoltagesMsg *msg){
    msg->voltage0 = data[0] | (data[1] << 8);
    msg->voltage1 = data[2] | (data[3] << 8);
    msg->voltage2 = data[4] | (data[5] << 8);
    msg->start_index = data[6];
}

void serialize_BmsBalancingMsg(uint8_t *data, BmsBalancingMsg *msg){
    data[0] = msg->cells[0];
    data[1] = msg->cells[1];
    data[2] = msg->cells[2];
    data[3] = msg->board_index;
}

void serialize_BmsBalancing(uint8_t *data, BmsBalancingCells cells, uint8_t board_index){
    data[0] = cells[0];
    data[1] = cells[1];
    data[2] = cells[2];
    data[3] = board_index;
}

void deserialize_BmsBalancing(uint8_t *data, BmsBalancingMsg *msg){
    msg->cells[0] = data[0];
    msg->cells[1] = data[1];
    msg->cells[2] = data[2];
    msg->board_index = data[3];
}

void serialize_BmsFwUpdateMsg(uint8_t *data, BmsFwUpdateMsg *msg){
    data[0] = msg->board_index;
}

void serialize_BmsFwUpdate(uint8_t *data, uint8_t board_index){
    data[0] = board_index;
}

void deserialize_BmsFwUpdate(uint8_t *data, BmsFwUpdateMsg *msg){
    msg->board_index = data[0];
}

#endif

#ifdef __cplusplus
}
#endif