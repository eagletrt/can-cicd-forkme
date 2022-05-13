#ifdef __cplusplus
extern "C" {
#endif

#ifndef SECONDARY_H
#define SECONDARY_H

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
#define SECONDARY_IMU_ANGULAR_RATE_SIZE 6
#define SECONDARY_IMU_ACCELERATION_SIZE 6
#define SECONDARY_IRTS_FL_0_SIZE 8
#define SECONDARY_IRTS_FL_1_SIZE 8
#define SECONDARY_IRTS_FL_2_SIZE 8
#define SECONDARY_IRTS_FL_3_SIZE 8
#define SECONDARY_IRTS_FR_0_SIZE 8
#define SECONDARY_IRTS_FR_1_SIZE 8
#define SECONDARY_IRTS_FR_2_SIZE 8
#define SECONDARY_IRTS_FR_3_SIZE 8
#define SECONDARY_IRTS_RL_0_SIZE 8
#define SECONDARY_IRTS_RL_1_SIZE 8
#define SECONDARY_IRTS_RL_2_SIZE 8
#define SECONDARY_IRTS_RL_3_SIZE 8
#define SECONDARY_IRTS_RR_0_SIZE 8
#define SECONDARY_IRTS_RR_1_SIZE 8
#define SECONDARY_IRTS_RR_2_SIZE 8
#define SECONDARY_IRTS_RR_3_SIZE 8
#define SECONDARY_GPS_COORDS_SIZE 8
#define SECONDARY_GPS_SPEED_SIZE 2
#define SECONDARY_LAP_COUNT_SIZE 5

// Bitsets
// Enums
// Structs
typedef struct __is_packed {
    uint16_t ang_rate_x;
    uint16_t ang_rate_y;
    uint16_t ang_rate_z;
    uint32_t timestamp;
} SecondaryImuAngularRateMsg;

typedef struct __is_packed {
    uint16_t accel_x;
    uint16_t accel_y;
    uint16_t accel_z;
    uint32_t timestamp;
} SecondaryImuAccelerationMsg;

typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
    uint32_t timestamp;
} SecondaryIrtsFl0Msg;

typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
    uint32_t timestamp;
} SecondaryIrtsFl1Msg;

typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
    uint32_t timestamp;
} SecondaryIrtsFl2Msg;

typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
    uint32_t timestamp;
} SecondaryIrtsFl3Msg;

typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
    uint32_t timestamp;
} SecondaryIrtsFr0Msg;

typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
    uint32_t timestamp;
} SecondaryIrtsFr1Msg;

typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
    uint32_t timestamp;
} SecondaryIrtsFr2Msg;

typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
    uint32_t timestamp;
} SecondaryIrtsFr3Msg;

typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
    uint32_t timestamp;
} SecondaryIrtsRl0Msg;

typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
    uint32_t timestamp;
} SecondaryIrtsRl1Msg;

typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
    uint32_t timestamp;
} SecondaryIrtsRl2Msg;

typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
    uint32_t timestamp;
} SecondaryIrtsRl3Msg;

typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
    uint32_t timestamp;
} SecondaryIrtsRr0Msg;

typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
    uint32_t timestamp;
} SecondaryIrtsRr1Msg;

typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
    uint32_t timestamp;
} SecondaryIrtsRr2Msg;

typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
    uint32_t timestamp;
} SecondaryIrtsRr3Msg;

typedef struct __is_packed {
    float latitude;
    float longitude;
    uint32_t timestamp;
} SecondaryGpsCoordsMsg;

typedef struct __is_packed {
    uint16_t speed;
    uint32_t timestamp;
} SecondaryGpsSpeedMsg;

typedef struct __is_packed {
    uint32_t timestamp;
    uint8_t lap_count;
} SecondaryLapCountMsg;

// Functions

void serialize_SecondaryImuAngularRateMsg(uint8_t *data, SecondaryImuAngularRateMsg *msg){
    data[0] = msg->ang_rate_x & 255;
    data[1] = (msg->ang_rate_x >> 8) & 255;
    data[2] = msg->ang_rate_y & 255;
    data[3] = (msg->ang_rate_y >> 8) & 255;
    data[4] = msg->ang_rate_z & 255;
    data[5] = (msg->ang_rate_z >> 8) & 255;
}

void serialize_SecondaryImuAngularRate(uint8_t *data, uint16_t ang_rate_x, uint16_t ang_rate_y, uint16_t ang_rate_z){
    data[0] = ang_rate_x & 255;
    data[1] = (ang_rate_x >> 8) & 255;
    data[2] = ang_rate_y & 255;
    data[3] = (ang_rate_y >> 8) & 255;
    data[4] = ang_rate_z & 255;
    data[5] = (ang_rate_z >> 8) & 255;
}

void deserialize_SecondaryImuAngularRate(uint8_t *data, SecondaryImuAngularRateMsg *msg){
    msg->ang_rate_x = data[0] | (data[1] << 8);
    msg->ang_rate_y = data[2] | (data[3] << 8);
    msg->ang_rate_z = data[4] | (data[5] << 8);
}

void serialize_SecondaryImuAccelerationMsg(uint8_t *data, SecondaryImuAccelerationMsg *msg){
    data[0] = msg->accel_x & 255;
    data[1] = (msg->accel_x >> 8) & 255;
    data[2] = msg->accel_y & 255;
    data[3] = (msg->accel_y >> 8) & 255;
    data[4] = msg->accel_z & 255;
    data[5] = (msg->accel_z >> 8) & 255;
}

void serialize_SecondaryImuAcceleration(uint8_t *data, uint16_t accel_x, uint16_t accel_y, uint16_t accel_z){
    data[0] = accel_x & 255;
    data[1] = (accel_x >> 8) & 255;
    data[2] = accel_y & 255;
    data[3] = (accel_y >> 8) & 255;
    data[4] = accel_z & 255;
    data[5] = (accel_z >> 8) & 255;
}

void deserialize_SecondaryImuAcceleration(uint8_t *data, SecondaryImuAccelerationMsg *msg){
    msg->accel_x = data[0] | (data[1] << 8);
    msg->accel_y = data[2] | (data[3] << 8);
    msg->accel_z = data[4] | (data[5] << 8);
}

void serialize_SecondaryIrtsFl0Msg(uint8_t *data, SecondaryIrtsFl0Msg *msg){
    data[0] = msg->channel1 & 255;
    data[1] = (msg->channel1 >> 8) & 255;
    data[2] = msg->channel2 & 255;
    data[3] = (msg->channel2 >> 8) & 255;
    data[4] = msg->channel3 & 255;
    data[5] = (msg->channel3 >> 8) & 255;
    data[6] = msg->channel4 & 255;
    data[7] = (msg->channel4 >> 8) & 255;
}

void serialize_SecondaryIrtsFl0(uint8_t *data, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4){
    data[0] = channel1 & 255;
    data[1] = (channel1 >> 8) & 255;
    data[2] = channel2 & 255;
    data[3] = (channel2 >> 8) & 255;
    data[4] = channel3 & 255;
    data[5] = (channel3 >> 8) & 255;
    data[6] = channel4 & 255;
    data[7] = (channel4 >> 8) & 255;
}

void deserialize_SecondaryIrtsFl0(uint8_t *data, SecondaryIrtsFl0Msg *msg){
    msg->channel1 = data[0] | (data[1] << 8);
    msg->channel2 = data[2] | (data[3] << 8);
    msg->channel3 = data[4] | (data[5] << 8);
    msg->channel4 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsFl1Msg(uint8_t *data, SecondaryIrtsFl1Msg *msg){
    data[0] = msg->channel5 & 255;
    data[1] = (msg->channel5 >> 8) & 255;
    data[2] = msg->channel6 & 255;
    data[3] = (msg->channel6 >> 8) & 255;
    data[4] = msg->channel7 & 255;
    data[5] = (msg->channel7 >> 8) & 255;
    data[6] = msg->channel8 & 255;
    data[7] = (msg->channel8 >> 8) & 255;
}

void serialize_SecondaryIrtsFl1(uint8_t *data, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8){
    data[0] = channel5 & 255;
    data[1] = (channel5 >> 8) & 255;
    data[2] = channel6 & 255;
    data[3] = (channel6 >> 8) & 255;
    data[4] = channel7 & 255;
    data[5] = (channel7 >> 8) & 255;
    data[6] = channel8 & 255;
    data[7] = (channel8 >> 8) & 255;
}

void deserialize_SecondaryIrtsFl1(uint8_t *data, SecondaryIrtsFl1Msg *msg){
    msg->channel5 = data[0] | (data[1] << 8);
    msg->channel6 = data[2] | (data[3] << 8);
    msg->channel7 = data[4] | (data[5] << 8);
    msg->channel8 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsFl2Msg(uint8_t *data, SecondaryIrtsFl2Msg *msg){
    data[0] = msg->channel9 & 255;
    data[1] = (msg->channel9 >> 8) & 255;
    data[2] = msg->channel10 & 255;
    data[3] = (msg->channel10 >> 8) & 255;
    data[4] = msg->channel11 & 255;
    data[5] = (msg->channel11 >> 8) & 255;
    data[6] = msg->channel12 & 255;
    data[7] = (msg->channel12 >> 8) & 255;
}

void serialize_SecondaryIrtsFl2(uint8_t *data, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12){
    data[0] = channel9 & 255;
    data[1] = (channel9 >> 8) & 255;
    data[2] = channel10 & 255;
    data[3] = (channel10 >> 8) & 255;
    data[4] = channel11 & 255;
    data[5] = (channel11 >> 8) & 255;
    data[6] = channel12 & 255;
    data[7] = (channel12 >> 8) & 255;
}

void deserialize_SecondaryIrtsFl2(uint8_t *data, SecondaryIrtsFl2Msg *msg){
    msg->channel9 = data[0] | (data[1] << 8);
    msg->channel10 = data[2] | (data[3] << 8);
    msg->channel11 = data[4] | (data[5] << 8);
    msg->channel12 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsFl3Msg(uint8_t *data, SecondaryIrtsFl3Msg *msg){
    data[0] = msg->channel13 & 255;
    data[1] = (msg->channel13 >> 8) & 255;
    data[2] = msg->channel14 & 255;
    data[3] = (msg->channel14 >> 8) & 255;
    data[4] = msg->channel15 & 255;
    data[5] = (msg->channel15 >> 8) & 255;
    data[6] = msg->channel16 & 255;
    data[7] = (msg->channel16 >> 8) & 255;
}

void serialize_SecondaryIrtsFl3(uint8_t *data, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16){
    data[0] = channel13 & 255;
    data[1] = (channel13 >> 8) & 255;
    data[2] = channel14 & 255;
    data[3] = (channel14 >> 8) & 255;
    data[4] = channel15 & 255;
    data[5] = (channel15 >> 8) & 255;
    data[6] = channel16 & 255;
    data[7] = (channel16 >> 8) & 255;
}

void deserialize_SecondaryIrtsFl3(uint8_t *data, SecondaryIrtsFl3Msg *msg){
    msg->channel13 = data[0] | (data[1] << 8);
    msg->channel14 = data[2] | (data[3] << 8);
    msg->channel15 = data[4] | (data[5] << 8);
    msg->channel16 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsFr0Msg(uint8_t *data, SecondaryIrtsFr0Msg *msg){
    data[0] = msg->channel1 & 255;
    data[1] = (msg->channel1 >> 8) & 255;
    data[2] = msg->channel2 & 255;
    data[3] = (msg->channel2 >> 8) & 255;
    data[4] = msg->channel3 & 255;
    data[5] = (msg->channel3 >> 8) & 255;
    data[6] = msg->channel4 & 255;
    data[7] = (msg->channel4 >> 8) & 255;
}

void serialize_SecondaryIrtsFr0(uint8_t *data, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4){
    data[0] = channel1 & 255;
    data[1] = (channel1 >> 8) & 255;
    data[2] = channel2 & 255;
    data[3] = (channel2 >> 8) & 255;
    data[4] = channel3 & 255;
    data[5] = (channel3 >> 8) & 255;
    data[6] = channel4 & 255;
    data[7] = (channel4 >> 8) & 255;
}

void deserialize_SecondaryIrtsFr0(uint8_t *data, SecondaryIrtsFr0Msg *msg){
    msg->channel1 = data[0] | (data[1] << 8);
    msg->channel2 = data[2] | (data[3] << 8);
    msg->channel3 = data[4] | (data[5] << 8);
    msg->channel4 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsFr1Msg(uint8_t *data, SecondaryIrtsFr1Msg *msg){
    data[0] = msg->channel5 & 255;
    data[1] = (msg->channel5 >> 8) & 255;
    data[2] = msg->channel6 & 255;
    data[3] = (msg->channel6 >> 8) & 255;
    data[4] = msg->channel7 & 255;
    data[5] = (msg->channel7 >> 8) & 255;
    data[6] = msg->channel8 & 255;
    data[7] = (msg->channel8 >> 8) & 255;
}

void serialize_SecondaryIrtsFr1(uint8_t *data, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8){
    data[0] = channel5 & 255;
    data[1] = (channel5 >> 8) & 255;
    data[2] = channel6 & 255;
    data[3] = (channel6 >> 8) & 255;
    data[4] = channel7 & 255;
    data[5] = (channel7 >> 8) & 255;
    data[6] = channel8 & 255;
    data[7] = (channel8 >> 8) & 255;
}

void deserialize_SecondaryIrtsFr1(uint8_t *data, SecondaryIrtsFr1Msg *msg){
    msg->channel5 = data[0] | (data[1] << 8);
    msg->channel6 = data[2] | (data[3] << 8);
    msg->channel7 = data[4] | (data[5] << 8);
    msg->channel8 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsFr2Msg(uint8_t *data, SecondaryIrtsFr2Msg *msg){
    data[0] = msg->channel9 & 255;
    data[1] = (msg->channel9 >> 8) & 255;
    data[2] = msg->channel10 & 255;
    data[3] = (msg->channel10 >> 8) & 255;
    data[4] = msg->channel11 & 255;
    data[5] = (msg->channel11 >> 8) & 255;
    data[6] = msg->channel12 & 255;
    data[7] = (msg->channel12 >> 8) & 255;
}

void serialize_SecondaryIrtsFr2(uint8_t *data, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12){
    data[0] = channel9 & 255;
    data[1] = (channel9 >> 8) & 255;
    data[2] = channel10 & 255;
    data[3] = (channel10 >> 8) & 255;
    data[4] = channel11 & 255;
    data[5] = (channel11 >> 8) & 255;
    data[6] = channel12 & 255;
    data[7] = (channel12 >> 8) & 255;
}

void deserialize_SecondaryIrtsFr2(uint8_t *data, SecondaryIrtsFr2Msg *msg){
    msg->channel9 = data[0] | (data[1] << 8);
    msg->channel10 = data[2] | (data[3] << 8);
    msg->channel11 = data[4] | (data[5] << 8);
    msg->channel12 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsFr3Msg(uint8_t *data, SecondaryIrtsFr3Msg *msg){
    data[0] = msg->channel13 & 255;
    data[1] = (msg->channel13 >> 8) & 255;
    data[2] = msg->channel14 & 255;
    data[3] = (msg->channel14 >> 8) & 255;
    data[4] = msg->channel15 & 255;
    data[5] = (msg->channel15 >> 8) & 255;
    data[6] = msg->channel16 & 255;
    data[7] = (msg->channel16 >> 8) & 255;
}

void serialize_SecondaryIrtsFr3(uint8_t *data, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16){
    data[0] = channel13 & 255;
    data[1] = (channel13 >> 8) & 255;
    data[2] = channel14 & 255;
    data[3] = (channel14 >> 8) & 255;
    data[4] = channel15 & 255;
    data[5] = (channel15 >> 8) & 255;
    data[6] = channel16 & 255;
    data[7] = (channel16 >> 8) & 255;
}

void deserialize_SecondaryIrtsFr3(uint8_t *data, SecondaryIrtsFr3Msg *msg){
    msg->channel13 = data[0] | (data[1] << 8);
    msg->channel14 = data[2] | (data[3] << 8);
    msg->channel15 = data[4] | (data[5] << 8);
    msg->channel16 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRl0Msg(uint8_t *data, SecondaryIrtsRl0Msg *msg){
    data[0] = msg->channel1 & 255;
    data[1] = (msg->channel1 >> 8) & 255;
    data[2] = msg->channel2 & 255;
    data[3] = (msg->channel2 >> 8) & 255;
    data[4] = msg->channel3 & 255;
    data[5] = (msg->channel3 >> 8) & 255;
    data[6] = msg->channel4 & 255;
    data[7] = (msg->channel4 >> 8) & 255;
}

void serialize_SecondaryIrtsRl0(uint8_t *data, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4){
    data[0] = channel1 & 255;
    data[1] = (channel1 >> 8) & 255;
    data[2] = channel2 & 255;
    data[3] = (channel2 >> 8) & 255;
    data[4] = channel3 & 255;
    data[5] = (channel3 >> 8) & 255;
    data[6] = channel4 & 255;
    data[7] = (channel4 >> 8) & 255;
}

void deserialize_SecondaryIrtsRl0(uint8_t *data, SecondaryIrtsRl0Msg *msg){
    msg->channel1 = data[0] | (data[1] << 8);
    msg->channel2 = data[2] | (data[3] << 8);
    msg->channel3 = data[4] | (data[5] << 8);
    msg->channel4 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRl1Msg(uint8_t *data, SecondaryIrtsRl1Msg *msg){
    data[0] = msg->channel5 & 255;
    data[1] = (msg->channel5 >> 8) & 255;
    data[2] = msg->channel6 & 255;
    data[3] = (msg->channel6 >> 8) & 255;
    data[4] = msg->channel7 & 255;
    data[5] = (msg->channel7 >> 8) & 255;
    data[6] = msg->channel8 & 255;
    data[7] = (msg->channel8 >> 8) & 255;
}

void serialize_SecondaryIrtsRl1(uint8_t *data, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8){
    data[0] = channel5 & 255;
    data[1] = (channel5 >> 8) & 255;
    data[2] = channel6 & 255;
    data[3] = (channel6 >> 8) & 255;
    data[4] = channel7 & 255;
    data[5] = (channel7 >> 8) & 255;
    data[6] = channel8 & 255;
    data[7] = (channel8 >> 8) & 255;
}

void deserialize_SecondaryIrtsRl1(uint8_t *data, SecondaryIrtsRl1Msg *msg){
    msg->channel5 = data[0] | (data[1] << 8);
    msg->channel6 = data[2] | (data[3] << 8);
    msg->channel7 = data[4] | (data[5] << 8);
    msg->channel8 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRl2Msg(uint8_t *data, SecondaryIrtsRl2Msg *msg){
    data[0] = msg->channel9 & 255;
    data[1] = (msg->channel9 >> 8) & 255;
    data[2] = msg->channel10 & 255;
    data[3] = (msg->channel10 >> 8) & 255;
    data[4] = msg->channel11 & 255;
    data[5] = (msg->channel11 >> 8) & 255;
    data[6] = msg->channel12 & 255;
    data[7] = (msg->channel12 >> 8) & 255;
}

void serialize_SecondaryIrtsRl2(uint8_t *data, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12){
    data[0] = channel9 & 255;
    data[1] = (channel9 >> 8) & 255;
    data[2] = channel10 & 255;
    data[3] = (channel10 >> 8) & 255;
    data[4] = channel11 & 255;
    data[5] = (channel11 >> 8) & 255;
    data[6] = channel12 & 255;
    data[7] = (channel12 >> 8) & 255;
}

void deserialize_SecondaryIrtsRl2(uint8_t *data, SecondaryIrtsRl2Msg *msg){
    msg->channel9 = data[0] | (data[1] << 8);
    msg->channel10 = data[2] | (data[3] << 8);
    msg->channel11 = data[4] | (data[5] << 8);
    msg->channel12 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRl3Msg(uint8_t *data, SecondaryIrtsRl3Msg *msg){
    data[0] = msg->channel13 & 255;
    data[1] = (msg->channel13 >> 8) & 255;
    data[2] = msg->channel14 & 255;
    data[3] = (msg->channel14 >> 8) & 255;
    data[4] = msg->channel15 & 255;
    data[5] = (msg->channel15 >> 8) & 255;
    data[6] = msg->channel16 & 255;
    data[7] = (msg->channel16 >> 8) & 255;
}

void serialize_SecondaryIrtsRl3(uint8_t *data, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16){
    data[0] = channel13 & 255;
    data[1] = (channel13 >> 8) & 255;
    data[2] = channel14 & 255;
    data[3] = (channel14 >> 8) & 255;
    data[4] = channel15 & 255;
    data[5] = (channel15 >> 8) & 255;
    data[6] = channel16 & 255;
    data[7] = (channel16 >> 8) & 255;
}

void deserialize_SecondaryIrtsRl3(uint8_t *data, SecondaryIrtsRl3Msg *msg){
    msg->channel13 = data[0] | (data[1] << 8);
    msg->channel14 = data[2] | (data[3] << 8);
    msg->channel15 = data[4] | (data[5] << 8);
    msg->channel16 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRr0Msg(uint8_t *data, SecondaryIrtsRr0Msg *msg){
    data[0] = msg->channel1 & 255;
    data[1] = (msg->channel1 >> 8) & 255;
    data[2] = msg->channel2 & 255;
    data[3] = (msg->channel2 >> 8) & 255;
    data[4] = msg->channel3 & 255;
    data[5] = (msg->channel3 >> 8) & 255;
    data[6] = msg->channel4 & 255;
    data[7] = (msg->channel4 >> 8) & 255;
}

void serialize_SecondaryIrtsRr0(uint8_t *data, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4){
    data[0] = channel1 & 255;
    data[1] = (channel1 >> 8) & 255;
    data[2] = channel2 & 255;
    data[3] = (channel2 >> 8) & 255;
    data[4] = channel3 & 255;
    data[5] = (channel3 >> 8) & 255;
    data[6] = channel4 & 255;
    data[7] = (channel4 >> 8) & 255;
}

void deserialize_SecondaryIrtsRr0(uint8_t *data, SecondaryIrtsRr0Msg *msg){
    msg->channel1 = data[0] | (data[1] << 8);
    msg->channel2 = data[2] | (data[3] << 8);
    msg->channel3 = data[4] | (data[5] << 8);
    msg->channel4 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRr1Msg(uint8_t *data, SecondaryIrtsRr1Msg *msg){
    data[0] = msg->channel5 & 255;
    data[1] = (msg->channel5 >> 8) & 255;
    data[2] = msg->channel6 & 255;
    data[3] = (msg->channel6 >> 8) & 255;
    data[4] = msg->channel7 & 255;
    data[5] = (msg->channel7 >> 8) & 255;
    data[6] = msg->channel8 & 255;
    data[7] = (msg->channel8 >> 8) & 255;
}

void serialize_SecondaryIrtsRr1(uint8_t *data, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8){
    data[0] = channel5 & 255;
    data[1] = (channel5 >> 8) & 255;
    data[2] = channel6 & 255;
    data[3] = (channel6 >> 8) & 255;
    data[4] = channel7 & 255;
    data[5] = (channel7 >> 8) & 255;
    data[6] = channel8 & 255;
    data[7] = (channel8 >> 8) & 255;
}

void deserialize_SecondaryIrtsRr1(uint8_t *data, SecondaryIrtsRr1Msg *msg){
    msg->channel5 = data[0] | (data[1] << 8);
    msg->channel6 = data[2] | (data[3] << 8);
    msg->channel7 = data[4] | (data[5] << 8);
    msg->channel8 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRr2Msg(uint8_t *data, SecondaryIrtsRr2Msg *msg){
    data[0] = msg->channel9 & 255;
    data[1] = (msg->channel9 >> 8) & 255;
    data[2] = msg->channel10 & 255;
    data[3] = (msg->channel10 >> 8) & 255;
    data[4] = msg->channel11 & 255;
    data[5] = (msg->channel11 >> 8) & 255;
    data[6] = msg->channel12 & 255;
    data[7] = (msg->channel12 >> 8) & 255;
}

void serialize_SecondaryIrtsRr2(uint8_t *data, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12){
    data[0] = channel9 & 255;
    data[1] = (channel9 >> 8) & 255;
    data[2] = channel10 & 255;
    data[3] = (channel10 >> 8) & 255;
    data[4] = channel11 & 255;
    data[5] = (channel11 >> 8) & 255;
    data[6] = channel12 & 255;
    data[7] = (channel12 >> 8) & 255;
}

void deserialize_SecondaryIrtsRr2(uint8_t *data, SecondaryIrtsRr2Msg *msg){
    msg->channel9 = data[0] | (data[1] << 8);
    msg->channel10 = data[2] | (data[3] << 8);
    msg->channel11 = data[4] | (data[5] << 8);
    msg->channel12 = data[6] | (data[7] << 8);
}

void serialize_SecondaryIrtsRr3Msg(uint8_t *data, SecondaryIrtsRr3Msg *msg){
    data[0] = msg->channel13 & 255;
    data[1] = (msg->channel13 >> 8) & 255;
    data[2] = msg->channel14 & 255;
    data[3] = (msg->channel14 >> 8) & 255;
    data[4] = msg->channel15 & 255;
    data[5] = (msg->channel15 >> 8) & 255;
    data[6] = msg->channel16 & 255;
    data[7] = (msg->channel16 >> 8) & 255;
}

void serialize_SecondaryIrtsRr3(uint8_t *data, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16){
    data[0] = channel13 & 255;
    data[1] = (channel13 >> 8) & 255;
    data[2] = channel14 & 255;
    data[3] = (channel14 >> 8) & 255;
    data[4] = channel15 & 255;
    data[5] = (channel15 >> 8) & 255;
    data[6] = channel16 & 255;
    data[7] = (channel16 >> 8) & 255;
}

void deserialize_SecondaryIrtsRr3(uint8_t *data, SecondaryIrtsRr3Msg *msg){
    msg->channel13 = data[0] | (data[1] << 8);
    msg->channel14 = data[2] | (data[3] << 8);
    msg->channel15 = data[4] | (data[5] << 8);
    msg->channel16 = data[6] | (data[7] << 8);
}

void serialize_SecondaryGpsCoordsMsg(uint8_t *data, SecondaryGpsCoordsMsg *msg){
    data[0] = ((float_t) msg->latitude).bytes[0];
    data[1] = ((float_t) msg->latitude).bytes[1];
    data[2] = ((float_t) msg->latitude).bytes[2];
    data[3] = ((float_t) msg->latitude).bytes[3];
    data[4] = ((float_t) msg->longitude).bytes[0];
    data[5] = ((float_t) msg->longitude).bytes[1];
    data[6] = ((float_t) msg->longitude).bytes[2];
    data[7] = ((float_t) msg->longitude).bytes[3];
}

void serialize_SecondaryGpsCoords(uint8_t *data, float latitude, float longitude){
    data[0] = ((float_t) latitude).bytes[0];
    data[1] = ((float_t) latitude).bytes[1];
    data[2] = ((float_t) latitude).bytes[2];
    data[3] = ((float_t) latitude).bytes[3];
    data[4] = ((float_t) longitude).bytes[0];
    data[5] = ((float_t) longitude).bytes[1];
    data[6] = ((float_t) longitude).bytes[2];
    data[7] = ((float_t) longitude).bytes[3];
}

void deserialize_SecondaryGpsCoords(uint8_t *data, SecondaryGpsCoordsMsg *msg){
    msg->latitude = ((float_t) {data[0], data[1], data[2], data[3]}).value;
    msg->longitude = ((float_t) {data[4], data[5], data[6], data[7]}).value;
}

void serialize_SecondaryGpsSpeedMsg(uint8_t *data, SecondaryGpsSpeedMsg *msg){
    data[0] = msg->speed & 255;
    data[1] = (msg->speed >> 8) & 255;
}

void serialize_SecondaryGpsSpeed(uint8_t *data, uint16_t speed){
    data[0] = speed & 255;
    data[1] = (speed >> 8) & 255;
}

void deserialize_SecondaryGpsSpeed(uint8_t *data, SecondaryGpsSpeedMsg *msg){
    msg->speed = data[0] | (data[1] << 8);
}

void serialize_SecondaryLapCountMsg(uint8_t *data, SecondaryLapCountMsg *msg){
    data[0] = msg->timestamp & 255;
    data[1] = (msg->timestamp >> 8) & 255;
    data[2] = (msg->timestamp >> 16) & 255;
    data[3] = (msg->timestamp >> 24) & 255;
    data[4] = msg->lap_count;
}

void serialize_SecondaryLapCount(uint8_t *data, uint32_t timestamp, uint8_t lap_count){
    data[0] = timestamp & 255;
    data[1] = (timestamp >> 8) & 255;
    data[2] = (timestamp >> 16) & 255;
    data[3] = (timestamp >> 24) & 255;
    data[4] = lap_count;
}

void deserialize_SecondaryLapCount(uint8_t *data, SecondaryLapCountMsg *msg){
    msg->timestamp = data[0] | (data[1] << 8) | (data[2] << 16) | (data[3] << 24);
    msg->lap_count = data[4];
}

#endif

#ifdef __cplusplus
}
#endif