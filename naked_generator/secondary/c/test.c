#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "secondary.h"

int main() {

    printf("***SecondaryImuAngularRateMsg***\n");
    uint8_t buffer_SecondaryImuAngularRate[SECONDARY_IMU_ANGULAR_RATE_SIZE];
    SecondaryImuAngularRateMsg SecondaryImuAngularRate_s = { 58797, 56793, 16841 };
    
    printf("Before: %hu %hu %hu\n", SecondaryImuAngularRate_s.ang_rate_x, SecondaryImuAngularRate_s.ang_rate_y, SecondaryImuAngularRate_s.ang_rate_z);
    
    serialize_SecondaryImuAngularRate(buffer_SecondaryImuAngularRate, &SecondaryImuAngularRate_s);
    SecondaryImuAngularRateMsg SecondaryImuAngularRate_d;
    deserialize_SecondaryImuAngularRate(buffer_SecondaryImuAngularRate, &SecondaryImuAngularRate_d);
    
    printf("After:  %hu %hu %hu\n", SecondaryImuAngularRate_d.ang_rate_x, SecondaryImuAngularRate_d.ang_rate_y, SecondaryImuAngularRate_d.ang_rate_z);
    
    assert(memcmp(&SecondaryImuAngularRate_s, &SecondaryImuAngularRate_d, SECONDARY_IMU_ANGULAR_RATE_SIZE) == 0);
    printf("\n");

    printf("***SecondaryImuAccelerationMsg***\n");
    uint8_t buffer_SecondaryImuAcceleration[SECONDARY_IMU_ACCELERATION_SIZE];
    SecondaryImuAccelerationMsg SecondaryImuAcceleration_s = { 49277, 56225, 40771 };
    
    printf("Before: %hu %hu %hu\n", SecondaryImuAcceleration_s.accel_x, SecondaryImuAcceleration_s.accel_y, SecondaryImuAcceleration_s.accel_z);
    
    serialize_SecondaryImuAcceleration(buffer_SecondaryImuAcceleration, &SecondaryImuAcceleration_s);
    SecondaryImuAccelerationMsg SecondaryImuAcceleration_d;
    deserialize_SecondaryImuAcceleration(buffer_SecondaryImuAcceleration, &SecondaryImuAcceleration_d);
    
    printf("After:  %hu %hu %hu\n", SecondaryImuAcceleration_d.accel_x, SecondaryImuAcceleration_d.accel_y, SecondaryImuAcceleration_d.accel_z);
    
    assert(memcmp(&SecondaryImuAcceleration_s, &SecondaryImuAcceleration_d, SECONDARY_IMU_ACCELERATION_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFl0Msg***\n");
    uint8_t buffer_SecondaryIrtsFl0[SECONDARY_IRTS_FL_0_SIZE];
    SecondaryIrtsFl0Msg SecondaryIrtsFl0_s = { 18405, 55772, 24306, 48401 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFl0_s.channel1, SecondaryIrtsFl0_s.channel2, SecondaryIrtsFl0_s.channel3, SecondaryIrtsFl0_s.channel4);
    
    serialize_SecondaryIrtsFl0(buffer_SecondaryIrtsFl0, &SecondaryIrtsFl0_s);
    SecondaryIrtsFl0Msg SecondaryIrtsFl0_d;
    deserialize_SecondaryIrtsFl0(buffer_SecondaryIrtsFl0, &SecondaryIrtsFl0_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFl0_d.channel1, SecondaryIrtsFl0_d.channel2, SecondaryIrtsFl0_d.channel3, SecondaryIrtsFl0_d.channel4);
    
    assert(memcmp(&SecondaryIrtsFl0_s, &SecondaryIrtsFl0_d, SECONDARY_IRTS_FL_0_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFl1Msg***\n");
    uint8_t buffer_SecondaryIrtsFl1[SECONDARY_IRTS_FL_1_SIZE];
    SecondaryIrtsFl1Msg SecondaryIrtsFl1_s = { 31652, 17494, 36618, 51930 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFl1_s.channel5, SecondaryIrtsFl1_s.channel6, SecondaryIrtsFl1_s.channel7, SecondaryIrtsFl1_s.channel8);
    
    serialize_SecondaryIrtsFl1(buffer_SecondaryIrtsFl1, &SecondaryIrtsFl1_s);
    SecondaryIrtsFl1Msg SecondaryIrtsFl1_d;
    deserialize_SecondaryIrtsFl1(buffer_SecondaryIrtsFl1, &SecondaryIrtsFl1_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFl1_d.channel5, SecondaryIrtsFl1_d.channel6, SecondaryIrtsFl1_d.channel7, SecondaryIrtsFl1_d.channel8);
    
    assert(memcmp(&SecondaryIrtsFl1_s, &SecondaryIrtsFl1_d, SECONDARY_IRTS_FL_1_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFl2Msg***\n");
    uint8_t buffer_SecondaryIrtsFl2[SECONDARY_IRTS_FL_2_SIZE];
    SecondaryIrtsFl2Msg SecondaryIrtsFl2_s = { 25476, 45561, 36101, 38224 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFl2_s.channel9, SecondaryIrtsFl2_s.channel10, SecondaryIrtsFl2_s.channel11, SecondaryIrtsFl2_s.channel12);
    
    serialize_SecondaryIrtsFl2(buffer_SecondaryIrtsFl2, &SecondaryIrtsFl2_s);
    SecondaryIrtsFl2Msg SecondaryIrtsFl2_d;
    deserialize_SecondaryIrtsFl2(buffer_SecondaryIrtsFl2, &SecondaryIrtsFl2_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFl2_d.channel9, SecondaryIrtsFl2_d.channel10, SecondaryIrtsFl2_d.channel11, SecondaryIrtsFl2_d.channel12);
    
    assert(memcmp(&SecondaryIrtsFl2_s, &SecondaryIrtsFl2_d, SECONDARY_IRTS_FL_2_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFl3Msg***\n");
    uint8_t buffer_SecondaryIrtsFl3[SECONDARY_IRTS_FL_3_SIZE];
    SecondaryIrtsFl3Msg SecondaryIrtsFl3_s = { 42408, 2479, 50006, 24177 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFl3_s.channel13, SecondaryIrtsFl3_s.channel14, SecondaryIrtsFl3_s.channel15, SecondaryIrtsFl3_s.channel16);
    
    serialize_SecondaryIrtsFl3(buffer_SecondaryIrtsFl3, &SecondaryIrtsFl3_s);
    SecondaryIrtsFl3Msg SecondaryIrtsFl3_d;
    deserialize_SecondaryIrtsFl3(buffer_SecondaryIrtsFl3, &SecondaryIrtsFl3_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFl3_d.channel13, SecondaryIrtsFl3_d.channel14, SecondaryIrtsFl3_d.channel15, SecondaryIrtsFl3_d.channel16);
    
    assert(memcmp(&SecondaryIrtsFl3_s, &SecondaryIrtsFl3_d, SECONDARY_IRTS_FL_3_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFr0Msg***\n");
    uint8_t buffer_SecondaryIrtsFr0[SECONDARY_IRTS_FR_0_SIZE];
    SecondaryIrtsFr0Msg SecondaryIrtsFr0_s = { 38972, 9716, 3528, 53121 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFr0_s.channel1, SecondaryIrtsFr0_s.channel2, SecondaryIrtsFr0_s.channel3, SecondaryIrtsFr0_s.channel4);
    
    serialize_SecondaryIrtsFr0(buffer_SecondaryIrtsFr0, &SecondaryIrtsFr0_s);
    SecondaryIrtsFr0Msg SecondaryIrtsFr0_d;
    deserialize_SecondaryIrtsFr0(buffer_SecondaryIrtsFr0, &SecondaryIrtsFr0_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFr0_d.channel1, SecondaryIrtsFr0_d.channel2, SecondaryIrtsFr0_d.channel3, SecondaryIrtsFr0_d.channel4);
    
    assert(memcmp(&SecondaryIrtsFr0_s, &SecondaryIrtsFr0_d, SECONDARY_IRTS_FR_0_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFr1Msg***\n");
    uint8_t buffer_SecondaryIrtsFr1[SECONDARY_IRTS_FR_1_SIZE];
    SecondaryIrtsFr1Msg SecondaryIrtsFr1_s = { 25015, 49069, 65145, 29164 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFr1_s.channel5, SecondaryIrtsFr1_s.channel6, SecondaryIrtsFr1_s.channel7, SecondaryIrtsFr1_s.channel8);
    
    serialize_SecondaryIrtsFr1(buffer_SecondaryIrtsFr1, &SecondaryIrtsFr1_s);
    SecondaryIrtsFr1Msg SecondaryIrtsFr1_d;
    deserialize_SecondaryIrtsFr1(buffer_SecondaryIrtsFr1, &SecondaryIrtsFr1_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFr1_d.channel5, SecondaryIrtsFr1_d.channel6, SecondaryIrtsFr1_d.channel7, SecondaryIrtsFr1_d.channel8);
    
    assert(memcmp(&SecondaryIrtsFr1_s, &SecondaryIrtsFr1_d, SECONDARY_IRTS_FR_1_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFr2Msg***\n");
    uint8_t buffer_SecondaryIrtsFr2[SECONDARY_IRTS_FR_2_SIZE];
    SecondaryIrtsFr2Msg SecondaryIrtsFr2_s = { 37381, 61509, 34496, 15302 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFr2_s.channel9, SecondaryIrtsFr2_s.channel10, SecondaryIrtsFr2_s.channel11, SecondaryIrtsFr2_s.channel12);
    
    serialize_SecondaryIrtsFr2(buffer_SecondaryIrtsFr2, &SecondaryIrtsFr2_s);
    SecondaryIrtsFr2Msg SecondaryIrtsFr2_d;
    deserialize_SecondaryIrtsFr2(buffer_SecondaryIrtsFr2, &SecondaryIrtsFr2_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFr2_d.channel9, SecondaryIrtsFr2_d.channel10, SecondaryIrtsFr2_d.channel11, SecondaryIrtsFr2_d.channel12);
    
    assert(memcmp(&SecondaryIrtsFr2_s, &SecondaryIrtsFr2_d, SECONDARY_IRTS_FR_2_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsFr3Msg***\n");
    uint8_t buffer_SecondaryIrtsFr3[SECONDARY_IRTS_FR_3_SIZE];
    SecondaryIrtsFr3Msg SecondaryIrtsFr3_s = { 58506, 11018, 63640, 60247 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsFr3_s.channel13, SecondaryIrtsFr3_s.channel14, SecondaryIrtsFr3_s.channel15, SecondaryIrtsFr3_s.channel16);
    
    serialize_SecondaryIrtsFr3(buffer_SecondaryIrtsFr3, &SecondaryIrtsFr3_s);
    SecondaryIrtsFr3Msg SecondaryIrtsFr3_d;
    deserialize_SecondaryIrtsFr3(buffer_SecondaryIrtsFr3, &SecondaryIrtsFr3_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsFr3_d.channel13, SecondaryIrtsFr3_d.channel14, SecondaryIrtsFr3_d.channel15, SecondaryIrtsFr3_d.channel16);
    
    assert(memcmp(&SecondaryIrtsFr3_s, &SecondaryIrtsFr3_d, SECONDARY_IRTS_FR_3_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRl0Msg***\n");
    uint8_t buffer_SecondaryIrtsRl0[SECONDARY_IRTS_RL_0_SIZE];
    SecondaryIrtsRl0Msg SecondaryIrtsRl0_s = { 64649, 57036, 19282, 52049 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRl0_s.channel1, SecondaryIrtsRl0_s.channel2, SecondaryIrtsRl0_s.channel3, SecondaryIrtsRl0_s.channel4);
    
    serialize_SecondaryIrtsRl0(buffer_SecondaryIrtsRl0, &SecondaryIrtsRl0_s);
    SecondaryIrtsRl0Msg SecondaryIrtsRl0_d;
    deserialize_SecondaryIrtsRl0(buffer_SecondaryIrtsRl0, &SecondaryIrtsRl0_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRl0_d.channel1, SecondaryIrtsRl0_d.channel2, SecondaryIrtsRl0_d.channel3, SecondaryIrtsRl0_d.channel4);
    
    assert(memcmp(&SecondaryIrtsRl0_s, &SecondaryIrtsRl0_d, SECONDARY_IRTS_RL_0_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRl1Msg***\n");
    uint8_t buffer_SecondaryIrtsRl1[SECONDARY_IRTS_RL_1_SIZE];
    SecondaryIrtsRl1Msg SecondaryIrtsRl1_s = { 18003, 42417, 40023, 18853 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRl1_s.channel5, SecondaryIrtsRl1_s.channel6, SecondaryIrtsRl1_s.channel7, SecondaryIrtsRl1_s.channel8);
    
    serialize_SecondaryIrtsRl1(buffer_SecondaryIrtsRl1, &SecondaryIrtsRl1_s);
    SecondaryIrtsRl1Msg SecondaryIrtsRl1_d;
    deserialize_SecondaryIrtsRl1(buffer_SecondaryIrtsRl1, &SecondaryIrtsRl1_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRl1_d.channel5, SecondaryIrtsRl1_d.channel6, SecondaryIrtsRl1_d.channel7, SecondaryIrtsRl1_d.channel8);
    
    assert(memcmp(&SecondaryIrtsRl1_s, &SecondaryIrtsRl1_d, SECONDARY_IRTS_RL_1_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRl2Msg***\n");
    uint8_t buffer_SecondaryIrtsRl2[SECONDARY_IRTS_RL_2_SIZE];
    SecondaryIrtsRl2Msg SecondaryIrtsRl2_s = { 40581, 40778, 49784, 57357 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRl2_s.channel9, SecondaryIrtsRl2_s.channel10, SecondaryIrtsRl2_s.channel11, SecondaryIrtsRl2_s.channel12);
    
    serialize_SecondaryIrtsRl2(buffer_SecondaryIrtsRl2, &SecondaryIrtsRl2_s);
    SecondaryIrtsRl2Msg SecondaryIrtsRl2_d;
    deserialize_SecondaryIrtsRl2(buffer_SecondaryIrtsRl2, &SecondaryIrtsRl2_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRl2_d.channel9, SecondaryIrtsRl2_d.channel10, SecondaryIrtsRl2_d.channel11, SecondaryIrtsRl2_d.channel12);
    
    assert(memcmp(&SecondaryIrtsRl2_s, &SecondaryIrtsRl2_d, SECONDARY_IRTS_RL_2_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRl3Msg***\n");
    uint8_t buffer_SecondaryIrtsRl3[SECONDARY_IRTS_RL_3_SIZE];
    SecondaryIrtsRl3Msg SecondaryIrtsRl3_s = { 55869, 43329, 46222, 50556 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRl3_s.channel13, SecondaryIrtsRl3_s.channel14, SecondaryIrtsRl3_s.channel15, SecondaryIrtsRl3_s.channel16);
    
    serialize_SecondaryIrtsRl3(buffer_SecondaryIrtsRl3, &SecondaryIrtsRl3_s);
    SecondaryIrtsRl3Msg SecondaryIrtsRl3_d;
    deserialize_SecondaryIrtsRl3(buffer_SecondaryIrtsRl3, &SecondaryIrtsRl3_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRl3_d.channel13, SecondaryIrtsRl3_d.channel14, SecondaryIrtsRl3_d.channel15, SecondaryIrtsRl3_d.channel16);
    
    assert(memcmp(&SecondaryIrtsRl3_s, &SecondaryIrtsRl3_d, SECONDARY_IRTS_RL_3_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRr0Msg***\n");
    uint8_t buffer_SecondaryIrtsRr0[SECONDARY_IRTS_RR_0_SIZE];
    SecondaryIrtsRr0Msg SecondaryIrtsRr0_s = { 35994, 64215, 35264, 9749 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRr0_s.channel1, SecondaryIrtsRr0_s.channel2, SecondaryIrtsRr0_s.channel3, SecondaryIrtsRr0_s.channel4);
    
    serialize_SecondaryIrtsRr0(buffer_SecondaryIrtsRr0, &SecondaryIrtsRr0_s);
    SecondaryIrtsRr0Msg SecondaryIrtsRr0_d;
    deserialize_SecondaryIrtsRr0(buffer_SecondaryIrtsRr0, &SecondaryIrtsRr0_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRr0_d.channel1, SecondaryIrtsRr0_d.channel2, SecondaryIrtsRr0_d.channel3, SecondaryIrtsRr0_d.channel4);
    
    assert(memcmp(&SecondaryIrtsRr0_s, &SecondaryIrtsRr0_d, SECONDARY_IRTS_RR_0_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRr1Msg***\n");
    uint8_t buffer_SecondaryIrtsRr1[SECONDARY_IRTS_RR_1_SIZE];
    SecondaryIrtsRr1Msg SecondaryIrtsRr1_s = { 41980, 37640, 50221, 55323 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRr1_s.channel5, SecondaryIrtsRr1_s.channel6, SecondaryIrtsRr1_s.channel7, SecondaryIrtsRr1_s.channel8);
    
    serialize_SecondaryIrtsRr1(buffer_SecondaryIrtsRr1, &SecondaryIrtsRr1_s);
    SecondaryIrtsRr1Msg SecondaryIrtsRr1_d;
    deserialize_SecondaryIrtsRr1(buffer_SecondaryIrtsRr1, &SecondaryIrtsRr1_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRr1_d.channel5, SecondaryIrtsRr1_d.channel6, SecondaryIrtsRr1_d.channel7, SecondaryIrtsRr1_d.channel8);
    
    assert(memcmp(&SecondaryIrtsRr1_s, &SecondaryIrtsRr1_d, SECONDARY_IRTS_RR_1_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRr2Msg***\n");
    uint8_t buffer_SecondaryIrtsRr2[SECONDARY_IRTS_RR_2_SIZE];
    SecondaryIrtsRr2Msg SecondaryIrtsRr2_s = { 42514, 44106, 25684, 49189 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRr2_s.channel9, SecondaryIrtsRr2_s.channel10, SecondaryIrtsRr2_s.channel11, SecondaryIrtsRr2_s.channel12);
    
    serialize_SecondaryIrtsRr2(buffer_SecondaryIrtsRr2, &SecondaryIrtsRr2_s);
    SecondaryIrtsRr2Msg SecondaryIrtsRr2_d;
    deserialize_SecondaryIrtsRr2(buffer_SecondaryIrtsRr2, &SecondaryIrtsRr2_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRr2_d.channel9, SecondaryIrtsRr2_d.channel10, SecondaryIrtsRr2_d.channel11, SecondaryIrtsRr2_d.channel12);
    
    assert(memcmp(&SecondaryIrtsRr2_s, &SecondaryIrtsRr2_d, SECONDARY_IRTS_RR_2_SIZE) == 0);
    printf("\n");

    printf("***SecondaryIrtsRr3Msg***\n");
    uint8_t buffer_SecondaryIrtsRr3[SECONDARY_IRTS_RR_3_SIZE];
    SecondaryIrtsRr3Msg SecondaryIrtsRr3_s = { 18096, 64945, 11595, 62466 };
    
    printf("Before: %hu %hu %hu %hu\n", SecondaryIrtsRr3_s.channel13, SecondaryIrtsRr3_s.channel14, SecondaryIrtsRr3_s.channel15, SecondaryIrtsRr3_s.channel16);
    
    serialize_SecondaryIrtsRr3(buffer_SecondaryIrtsRr3, &SecondaryIrtsRr3_s);
    SecondaryIrtsRr3Msg SecondaryIrtsRr3_d;
    deserialize_SecondaryIrtsRr3(buffer_SecondaryIrtsRr3, &SecondaryIrtsRr3_d);
    
    printf("After:  %hu %hu %hu %hu\n", SecondaryIrtsRr3_d.channel13, SecondaryIrtsRr3_d.channel14, SecondaryIrtsRr3_d.channel15, SecondaryIrtsRr3_d.channel16);
    
    assert(memcmp(&SecondaryIrtsRr3_s, &SecondaryIrtsRr3_d, SECONDARY_IRTS_RR_3_SIZE) == 0);
    printf("\n");

    printf("***SecondaryGpsCoordsMsg***\n");
    uint8_t buffer_SecondaryGpsCoords[SECONDARY_GPS_COORDS_SIZE];
    SecondaryGpsCoordsMsg SecondaryGpsCoords_s = { 0.9062679121109941, 0.7407341139263618 };
    
    printf("Before: %f %f\n", SecondaryGpsCoords_s.latitude, SecondaryGpsCoords_s.longitude);
    
    serialize_SecondaryGpsCoords(buffer_SecondaryGpsCoords, &SecondaryGpsCoords_s);
    SecondaryGpsCoordsMsg SecondaryGpsCoords_d;
    deserialize_SecondaryGpsCoords(buffer_SecondaryGpsCoords, &SecondaryGpsCoords_d);
    
    printf("After:  %f %f\n", SecondaryGpsCoords_d.latitude, SecondaryGpsCoords_d.longitude);
    
    assert(memcmp(&SecondaryGpsCoords_s, &SecondaryGpsCoords_d, SECONDARY_GPS_COORDS_SIZE) == 0);
    printf("\n");

    printf("***SecondaryGpsSpeedMsg***\n");
    uint8_t buffer_SecondaryGpsSpeed[SECONDARY_GPS_SPEED_SIZE];
    SecondaryGpsSpeedMsg SecondaryGpsSpeed_s = { 12831 };
    
    printf("Before: %hu\n", SecondaryGpsSpeed_s.speed);
    
    serialize_SecondaryGpsSpeed(buffer_SecondaryGpsSpeed, &SecondaryGpsSpeed_s);
    SecondaryGpsSpeedMsg SecondaryGpsSpeed_d;
    deserialize_SecondaryGpsSpeed(buffer_SecondaryGpsSpeed, &SecondaryGpsSpeed_d);
    
    printf("After:  %hu\n", SecondaryGpsSpeed_d.speed);
    
    assert(memcmp(&SecondaryGpsSpeed_s, &SecondaryGpsSpeed_d, SECONDARY_GPS_SPEED_SIZE) == 0);
    printf("\n");

    printf("***SecondaryLapCountMsg***\n");
    uint8_t buffer_SecondaryLapCount[SECONDARY_LAP_COUNT_SIZE];
    SecondaryLapCountMsg SecondaryLapCount_s = { 3702056101, 45 };
    
    printf("Before: %u %hhu\n", SecondaryLapCount_s.timestamp, SecondaryLapCount_s.lap_count);
    
    serialize_SecondaryLapCount(buffer_SecondaryLapCount, &SecondaryLapCount_s);
    SecondaryLapCountMsg SecondaryLapCount_d;
    deserialize_SecondaryLapCount(buffer_SecondaryLapCount, &SecondaryLapCount_d);
    
    printf("After:  %u %hhu\n", SecondaryLapCount_d.timestamp, SecondaryLapCount_d.lap_count);
    
    assert(memcmp(&SecondaryLapCount_s, &SecondaryLapCount_d, SECONDARY_LAP_COUNT_SIZE) == 0);
    printf("\n");

    return 0;
}