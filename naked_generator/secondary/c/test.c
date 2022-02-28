#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "secondary.h"

int main() {

/* secondary_IMU_ANGULAR_RATE */
    printf("secondary_IMU_ANGULAR_RATE:\n");
    uint8_t* buffer_secondary_imu_angular_rate = (uint8_t*)malloc(sizeof(secondary_IMU_ANGULAR_RATE));
    
    secondary_IMU_ANGULAR_RATE secondary_imu_angular_rate_s = { 14340.0, 17620.0, 54339.0 };
    serialize_secondary_IMU_ANGULAR_RATE(buffer_secondary_imu_angular_rate, secondary_imu_angular_rate_s.ang_rate_x, secondary_imu_angular_rate_s.ang_rate_y, secondary_imu_angular_rate_s.ang_rate_z);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_z);
    
    secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate_d = (secondary_IMU_ANGULAR_RATE*)malloc(sizeof(secondary_IMU_ANGULAR_RATE));
    deserialize_secondary_IMU_ANGULAR_RATE(buffer_secondary_imu_angular_rate, secondary_imu_angular_rate_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_z);
    
    assert(memcmp(&secondary_imu_angular_rate_s, secondary_imu_angular_rate_d, sizeof(secondary_IMU_ANGULAR_RATE)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IMU_ACCELERATION */
    printf("secondary_IMU_ACCELERATION:\n");
    uint8_t* buffer_secondary_imu_acceleration = (uint8_t*)malloc(sizeof(secondary_IMU_ACCELERATION));
    
    secondary_IMU_ACCELERATION secondary_imu_acceleration_s = { 15141.0, 62888.0, 8870.0 };
    serialize_secondary_IMU_ACCELERATION(buffer_secondary_imu_acceleration, secondary_imu_acceleration_s.accel_x, secondary_imu_acceleration_s.accel_y, secondary_imu_acceleration_s.accel_z);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_s.accel_x, (long long unsigned int)secondary_imu_acceleration_s.accel_y, (long long unsigned int)secondary_imu_acceleration_s.accel_z);
    
    secondary_IMU_ACCELERATION* secondary_imu_acceleration_d = (secondary_IMU_ACCELERATION*)malloc(sizeof(secondary_IMU_ACCELERATION));
    deserialize_secondary_IMU_ACCELERATION(buffer_secondary_imu_acceleration, secondary_imu_acceleration_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_d->accel_x, (long long unsigned int)secondary_imu_acceleration_d->accel_y, (long long unsigned int)secondary_imu_acceleration_d->accel_z);
    
    assert(memcmp(&secondary_imu_acceleration_s, secondary_imu_acceleration_d, sizeof(secondary_IMU_ACCELERATION)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_0 */
    printf("secondary_IRTS_FL_0:\n");
    uint8_t* buffer_secondary_irts_fl_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_0));
    
    secondary_IRTS_FL_0 secondary_irts_fl_0_s = { 10483.0, 22990.0, 46411.0, 54156.0 };
    serialize_secondary_IRTS_FL_0(buffer_secondary_irts_fl_0, secondary_irts_fl_0_s.channel1, secondary_irts_fl_0_s.channel2, secondary_irts_fl_0_s.channel3, secondary_irts_fl_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_s.channel1, (long long unsigned int)secondary_irts_fl_0_s.channel2, (long long unsigned int)secondary_irts_fl_0_s.channel3, (long long unsigned int)secondary_irts_fl_0_s.channel4);
    
    secondary_IRTS_FL_0* secondary_irts_fl_0_d = (secondary_IRTS_FL_0*)malloc(sizeof(secondary_IRTS_FL_0));
    deserialize_secondary_IRTS_FL_0(buffer_secondary_irts_fl_0, secondary_irts_fl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_d->channel1, (long long unsigned int)secondary_irts_fl_0_d->channel2, (long long unsigned int)secondary_irts_fl_0_d->channel3, (long long unsigned int)secondary_irts_fl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fl_0_s, secondary_irts_fl_0_d, sizeof(secondary_IRTS_FL_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_1 */
    printf("secondary_IRTS_FL_1:\n");
    uint8_t* buffer_secondary_irts_fl_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_1));
    
    secondary_IRTS_FL_1 secondary_irts_fl_1_s = { 4536.0, 27517.0, 5484.0, 46744.0 };
    serialize_secondary_IRTS_FL_1(buffer_secondary_irts_fl_1, secondary_irts_fl_1_s.channel5, secondary_irts_fl_1_s.channel6, secondary_irts_fl_1_s.channel7, secondary_irts_fl_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_s.channel5, (long long unsigned int)secondary_irts_fl_1_s.channel6, (long long unsigned int)secondary_irts_fl_1_s.channel7, (long long unsigned int)secondary_irts_fl_1_s.channel8);
    
    secondary_IRTS_FL_1* secondary_irts_fl_1_d = (secondary_IRTS_FL_1*)malloc(sizeof(secondary_IRTS_FL_1));
    deserialize_secondary_IRTS_FL_1(buffer_secondary_irts_fl_1, secondary_irts_fl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_d->channel5, (long long unsigned int)secondary_irts_fl_1_d->channel6, (long long unsigned int)secondary_irts_fl_1_d->channel7, (long long unsigned int)secondary_irts_fl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fl_1_s, secondary_irts_fl_1_d, sizeof(secondary_IRTS_FL_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_2 */
    printf("secondary_IRTS_FL_2:\n");
    uint8_t* buffer_secondary_irts_fl_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_2));
    
    secondary_IRTS_FL_2 secondary_irts_fl_2_s = { 24104.0, 61123.0, 16664.0, 13437.0 };
    serialize_secondary_IRTS_FL_2(buffer_secondary_irts_fl_2, secondary_irts_fl_2_s.channel9, secondary_irts_fl_2_s.channel10, secondary_irts_fl_2_s.channel11, secondary_irts_fl_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_s.channel9, (long long unsigned int)secondary_irts_fl_2_s.channel10, (long long unsigned int)secondary_irts_fl_2_s.channel11, (long long unsigned int)secondary_irts_fl_2_s.channel12);
    
    secondary_IRTS_FL_2* secondary_irts_fl_2_d = (secondary_IRTS_FL_2*)malloc(sizeof(secondary_IRTS_FL_2));
    deserialize_secondary_IRTS_FL_2(buffer_secondary_irts_fl_2, secondary_irts_fl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_d->channel9, (long long unsigned int)secondary_irts_fl_2_d->channel10, (long long unsigned int)secondary_irts_fl_2_d->channel11, (long long unsigned int)secondary_irts_fl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fl_2_s, secondary_irts_fl_2_d, sizeof(secondary_IRTS_FL_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_3 */
    printf("secondary_IRTS_FL_3:\n");
    uint8_t* buffer_secondary_irts_fl_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_3));
    
    secondary_IRTS_FL_3 secondary_irts_fl_3_s = { 14273.0, 45750.0, 27081.0, 29170.0 };
    serialize_secondary_IRTS_FL_3(buffer_secondary_irts_fl_3, secondary_irts_fl_3_s.channel13, secondary_irts_fl_3_s.channel14, secondary_irts_fl_3_s.channel15, secondary_irts_fl_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_s.channel13, (long long unsigned int)secondary_irts_fl_3_s.channel14, (long long unsigned int)secondary_irts_fl_3_s.channel15, (long long unsigned int)secondary_irts_fl_3_s.channel16);
    
    secondary_IRTS_FL_3* secondary_irts_fl_3_d = (secondary_IRTS_FL_3*)malloc(sizeof(secondary_IRTS_FL_3));
    deserialize_secondary_IRTS_FL_3(buffer_secondary_irts_fl_3, secondary_irts_fl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_d->channel13, (long long unsigned int)secondary_irts_fl_3_d->channel14, (long long unsigned int)secondary_irts_fl_3_d->channel15, (long long unsigned int)secondary_irts_fl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fl_3_s, secondary_irts_fl_3_d, sizeof(secondary_IRTS_FL_3)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_0 */
    printf("secondary_IRTS_FR_0:\n");
    uint8_t* buffer_secondary_irts_fr_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_0));
    
    secondary_IRTS_FR_0 secondary_irts_fr_0_s = { 26961.0, 17711.0, 14903.0, 7568.0 };
    serialize_secondary_IRTS_FR_0(buffer_secondary_irts_fr_0, secondary_irts_fr_0_s.channel1, secondary_irts_fr_0_s.channel2, secondary_irts_fr_0_s.channel3, secondary_irts_fr_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_s.channel1, (long long unsigned int)secondary_irts_fr_0_s.channel2, (long long unsigned int)secondary_irts_fr_0_s.channel3, (long long unsigned int)secondary_irts_fr_0_s.channel4);
    
    secondary_IRTS_FR_0* secondary_irts_fr_0_d = (secondary_IRTS_FR_0*)malloc(sizeof(secondary_IRTS_FR_0));
    deserialize_secondary_IRTS_FR_0(buffer_secondary_irts_fr_0, secondary_irts_fr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_d->channel1, (long long unsigned int)secondary_irts_fr_0_d->channel2, (long long unsigned int)secondary_irts_fr_0_d->channel3, (long long unsigned int)secondary_irts_fr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fr_0_s, secondary_irts_fr_0_d, sizeof(secondary_IRTS_FR_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_1 */
    printf("secondary_IRTS_FR_1:\n");
    uint8_t* buffer_secondary_irts_fr_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_1));
    
    secondary_IRTS_FR_1 secondary_irts_fr_1_s = { 47017.0, 567.0, 57031.0, 51896.0 };
    serialize_secondary_IRTS_FR_1(buffer_secondary_irts_fr_1, secondary_irts_fr_1_s.channel5, secondary_irts_fr_1_s.channel6, secondary_irts_fr_1_s.channel7, secondary_irts_fr_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_s.channel5, (long long unsigned int)secondary_irts_fr_1_s.channel6, (long long unsigned int)secondary_irts_fr_1_s.channel7, (long long unsigned int)secondary_irts_fr_1_s.channel8);
    
    secondary_IRTS_FR_1* secondary_irts_fr_1_d = (secondary_IRTS_FR_1*)malloc(sizeof(secondary_IRTS_FR_1));
    deserialize_secondary_IRTS_FR_1(buffer_secondary_irts_fr_1, secondary_irts_fr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_d->channel5, (long long unsigned int)secondary_irts_fr_1_d->channel6, (long long unsigned int)secondary_irts_fr_1_d->channel7, (long long unsigned int)secondary_irts_fr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fr_1_s, secondary_irts_fr_1_d, sizeof(secondary_IRTS_FR_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_2 */
    printf("secondary_IRTS_FR_2:\n");
    uint8_t* buffer_secondary_irts_fr_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_2));
    
    secondary_IRTS_FR_2 secondary_irts_fr_2_s = { 63629.0, 53376.0, 16185.0, 5500.0 };
    serialize_secondary_IRTS_FR_2(buffer_secondary_irts_fr_2, secondary_irts_fr_2_s.channel9, secondary_irts_fr_2_s.channel10, secondary_irts_fr_2_s.channel11, secondary_irts_fr_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_s.channel9, (long long unsigned int)secondary_irts_fr_2_s.channel10, (long long unsigned int)secondary_irts_fr_2_s.channel11, (long long unsigned int)secondary_irts_fr_2_s.channel12);
    
    secondary_IRTS_FR_2* secondary_irts_fr_2_d = (secondary_IRTS_FR_2*)malloc(sizeof(secondary_IRTS_FR_2));
    deserialize_secondary_IRTS_FR_2(buffer_secondary_irts_fr_2, secondary_irts_fr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_d->channel9, (long long unsigned int)secondary_irts_fr_2_d->channel10, (long long unsigned int)secondary_irts_fr_2_d->channel11, (long long unsigned int)secondary_irts_fr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fr_2_s, secondary_irts_fr_2_d, sizeof(secondary_IRTS_FR_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_3 */
    printf("secondary_IRTS_FR_3:\n");
    uint8_t* buffer_secondary_irts_fr_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_3));
    
    secondary_IRTS_FR_3 secondary_irts_fr_3_s = { 41165.0, 39193.0, 4325.0, 49251.0 };
    serialize_secondary_IRTS_FR_3(buffer_secondary_irts_fr_3, secondary_irts_fr_3_s.channel13, secondary_irts_fr_3_s.channel14, secondary_irts_fr_3_s.channel15, secondary_irts_fr_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_s.channel13, (long long unsigned int)secondary_irts_fr_3_s.channel14, (long long unsigned int)secondary_irts_fr_3_s.channel15, (long long unsigned int)secondary_irts_fr_3_s.channel16);
    
    secondary_IRTS_FR_3* secondary_irts_fr_3_d = (secondary_IRTS_FR_3*)malloc(sizeof(secondary_IRTS_FR_3));
    deserialize_secondary_IRTS_FR_3(buffer_secondary_irts_fr_3, secondary_irts_fr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_d->channel13, (long long unsigned int)secondary_irts_fr_3_d->channel14, (long long unsigned int)secondary_irts_fr_3_d->channel15, (long long unsigned int)secondary_irts_fr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fr_3_s, secondary_irts_fr_3_d, sizeof(secondary_IRTS_FR_3)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_0 */
    printf("secondary_IRTS_RL_0:\n");
    uint8_t* buffer_secondary_irts_rl_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_0));
    
    secondary_IRTS_RL_0 secondary_irts_rl_0_s = { 54201.0, 8210.0, 30820.0, 23273.0 };
    serialize_secondary_IRTS_RL_0(buffer_secondary_irts_rl_0, secondary_irts_rl_0_s.channel1, secondary_irts_rl_0_s.channel2, secondary_irts_rl_0_s.channel3, secondary_irts_rl_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_s.channel1, (long long unsigned int)secondary_irts_rl_0_s.channel2, (long long unsigned int)secondary_irts_rl_0_s.channel3, (long long unsigned int)secondary_irts_rl_0_s.channel4);
    
    secondary_IRTS_RL_0* secondary_irts_rl_0_d = (secondary_IRTS_RL_0*)malloc(sizeof(secondary_IRTS_RL_0));
    deserialize_secondary_IRTS_RL_0(buffer_secondary_irts_rl_0, secondary_irts_rl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_d->channel1, (long long unsigned int)secondary_irts_rl_0_d->channel2, (long long unsigned int)secondary_irts_rl_0_d->channel3, (long long unsigned int)secondary_irts_rl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rl_0_s, secondary_irts_rl_0_d, sizeof(secondary_IRTS_RL_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_1 */
    printf("secondary_IRTS_RL_1:\n");
    uint8_t* buffer_secondary_irts_rl_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_1));
    
    secondary_IRTS_RL_1 secondary_irts_rl_1_s = { 4000.0, 34194.0, 45128.0, 60174.0 };
    serialize_secondary_IRTS_RL_1(buffer_secondary_irts_rl_1, secondary_irts_rl_1_s.channel5, secondary_irts_rl_1_s.channel6, secondary_irts_rl_1_s.channel7, secondary_irts_rl_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_s.channel5, (long long unsigned int)secondary_irts_rl_1_s.channel6, (long long unsigned int)secondary_irts_rl_1_s.channel7, (long long unsigned int)secondary_irts_rl_1_s.channel8);
    
    secondary_IRTS_RL_1* secondary_irts_rl_1_d = (secondary_IRTS_RL_1*)malloc(sizeof(secondary_IRTS_RL_1));
    deserialize_secondary_IRTS_RL_1(buffer_secondary_irts_rl_1, secondary_irts_rl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_d->channel5, (long long unsigned int)secondary_irts_rl_1_d->channel6, (long long unsigned int)secondary_irts_rl_1_d->channel7, (long long unsigned int)secondary_irts_rl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rl_1_s, secondary_irts_rl_1_d, sizeof(secondary_IRTS_RL_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_2 */
    printf("secondary_IRTS_RL_2:\n");
    uint8_t* buffer_secondary_irts_rl_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_2));
    
    secondary_IRTS_RL_2 secondary_irts_rl_2_s = { 28166.0, 57937.0, 58804.0, 2386.0 };
    serialize_secondary_IRTS_RL_2(buffer_secondary_irts_rl_2, secondary_irts_rl_2_s.channel9, secondary_irts_rl_2_s.channel10, secondary_irts_rl_2_s.channel11, secondary_irts_rl_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_s.channel9, (long long unsigned int)secondary_irts_rl_2_s.channel10, (long long unsigned int)secondary_irts_rl_2_s.channel11, (long long unsigned int)secondary_irts_rl_2_s.channel12);
    
    secondary_IRTS_RL_2* secondary_irts_rl_2_d = (secondary_IRTS_RL_2*)malloc(sizeof(secondary_IRTS_RL_2));
    deserialize_secondary_IRTS_RL_2(buffer_secondary_irts_rl_2, secondary_irts_rl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_d->channel9, (long long unsigned int)secondary_irts_rl_2_d->channel10, (long long unsigned int)secondary_irts_rl_2_d->channel11, (long long unsigned int)secondary_irts_rl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rl_2_s, secondary_irts_rl_2_d, sizeof(secondary_IRTS_RL_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_3 */
    printf("secondary_IRTS_RL_3:\n");
    uint8_t* buffer_secondary_irts_rl_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_3));
    
    secondary_IRTS_RL_3 secondary_irts_rl_3_s = { 15006.0, 16534.0, 51734.0, 36479.0 };
    serialize_secondary_IRTS_RL_3(buffer_secondary_irts_rl_3, secondary_irts_rl_3_s.channel13, secondary_irts_rl_3_s.channel14, secondary_irts_rl_3_s.channel15, secondary_irts_rl_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_s.channel13, (long long unsigned int)secondary_irts_rl_3_s.channel14, (long long unsigned int)secondary_irts_rl_3_s.channel15, (long long unsigned int)secondary_irts_rl_3_s.channel16);
    
    secondary_IRTS_RL_3* secondary_irts_rl_3_d = (secondary_IRTS_RL_3*)malloc(sizeof(secondary_IRTS_RL_3));
    deserialize_secondary_IRTS_RL_3(buffer_secondary_irts_rl_3, secondary_irts_rl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_d->channel13, (long long unsigned int)secondary_irts_rl_3_d->channel14, (long long unsigned int)secondary_irts_rl_3_d->channel15, (long long unsigned int)secondary_irts_rl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rl_3_s, secondary_irts_rl_3_d, sizeof(secondary_IRTS_RL_3)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_0 */
    printf("secondary_IRTS_RR_0:\n");
    uint8_t* buffer_secondary_irts_rr_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_0));
    
    secondary_IRTS_RR_0 secondary_irts_rr_0_s = { 19408.0, 40485.0, 40511.0, 52025.0 };
    serialize_secondary_IRTS_RR_0(buffer_secondary_irts_rr_0, secondary_irts_rr_0_s.channel1, secondary_irts_rr_0_s.channel2, secondary_irts_rr_0_s.channel3, secondary_irts_rr_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_s.channel1, (long long unsigned int)secondary_irts_rr_0_s.channel2, (long long unsigned int)secondary_irts_rr_0_s.channel3, (long long unsigned int)secondary_irts_rr_0_s.channel4);
    
    secondary_IRTS_RR_0* secondary_irts_rr_0_d = (secondary_IRTS_RR_0*)malloc(sizeof(secondary_IRTS_RR_0));
    deserialize_secondary_IRTS_RR_0(buffer_secondary_irts_rr_0, secondary_irts_rr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_d->channel1, (long long unsigned int)secondary_irts_rr_0_d->channel2, (long long unsigned int)secondary_irts_rr_0_d->channel3, (long long unsigned int)secondary_irts_rr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rr_0_s, secondary_irts_rr_0_d, sizeof(secondary_IRTS_RR_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_1 */
    printf("secondary_IRTS_RR_1:\n");
    uint8_t* buffer_secondary_irts_rr_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_1));
    
    secondary_IRTS_RR_1 secondary_irts_rr_1_s = { 37652.0, 23803.0, 24547.0, 60352.0 };
    serialize_secondary_IRTS_RR_1(buffer_secondary_irts_rr_1, secondary_irts_rr_1_s.channel5, secondary_irts_rr_1_s.channel6, secondary_irts_rr_1_s.channel7, secondary_irts_rr_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_s.channel5, (long long unsigned int)secondary_irts_rr_1_s.channel6, (long long unsigned int)secondary_irts_rr_1_s.channel7, (long long unsigned int)secondary_irts_rr_1_s.channel8);
    
    secondary_IRTS_RR_1* secondary_irts_rr_1_d = (secondary_IRTS_RR_1*)malloc(sizeof(secondary_IRTS_RR_1));
    deserialize_secondary_IRTS_RR_1(buffer_secondary_irts_rr_1, secondary_irts_rr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_d->channel5, (long long unsigned int)secondary_irts_rr_1_d->channel6, (long long unsigned int)secondary_irts_rr_1_d->channel7, (long long unsigned int)secondary_irts_rr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rr_1_s, secondary_irts_rr_1_d, sizeof(secondary_IRTS_RR_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_2 */
    printf("secondary_IRTS_RR_2:\n");
    uint8_t* buffer_secondary_irts_rr_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_2));
    
    secondary_IRTS_RR_2 secondary_irts_rr_2_s = { 62981.0, 4680.0, 11173.0, 36279.0 };
    serialize_secondary_IRTS_RR_2(buffer_secondary_irts_rr_2, secondary_irts_rr_2_s.channel9, secondary_irts_rr_2_s.channel10, secondary_irts_rr_2_s.channel11, secondary_irts_rr_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_s.channel9, (long long unsigned int)secondary_irts_rr_2_s.channel10, (long long unsigned int)secondary_irts_rr_2_s.channel11, (long long unsigned int)secondary_irts_rr_2_s.channel12);
    
    secondary_IRTS_RR_2* secondary_irts_rr_2_d = (secondary_IRTS_RR_2*)malloc(sizeof(secondary_IRTS_RR_2));
    deserialize_secondary_IRTS_RR_2(buffer_secondary_irts_rr_2, secondary_irts_rr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_d->channel9, (long long unsigned int)secondary_irts_rr_2_d->channel10, (long long unsigned int)secondary_irts_rr_2_d->channel11, (long long unsigned int)secondary_irts_rr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rr_2_s, secondary_irts_rr_2_d, sizeof(secondary_IRTS_RR_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_3 */
    printf("secondary_IRTS_RR_3:\n");
    uint8_t* buffer_secondary_irts_rr_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_3));
    
    secondary_IRTS_RR_3 secondary_irts_rr_3_s = { 23686.0, 17014.0, 15365.0, 37730.0 };
    serialize_secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_s.channel13, secondary_irts_rr_3_s.channel14, secondary_irts_rr_3_s.channel15, secondary_irts_rr_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_s.channel13, (long long unsigned int)secondary_irts_rr_3_s.channel14, (long long unsigned int)secondary_irts_rr_3_s.channel15, (long long unsigned int)secondary_irts_rr_3_s.channel16);
    
    secondary_IRTS_RR_3* secondary_irts_rr_3_d = (secondary_IRTS_RR_3*)malloc(sizeof(secondary_IRTS_RR_3));
    deserialize_secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_d->channel13, (long long unsigned int)secondary_irts_rr_3_d->channel14, (long long unsigned int)secondary_irts_rr_3_d->channel15, (long long unsigned int)secondary_irts_rr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rr_3_s, secondary_irts_rr_3_d, sizeof(secondary_IRTS_RR_3)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_GPS_COORDS */
    printf("secondary_GPS_COORDS:\n");
    uint8_t* buffer_secondary_gps_coords = (uint8_t*)malloc(sizeof(secondary_GPS_COORDS));
    
    secondary_GPS_COORDS secondary_gps_coords_s = { 21779887.858, 910086971.126 };
    serialize_secondary_GPS_COORDS(buffer_secondary_gps_coords, secondary_gps_coords_s.latitude, secondary_gps_coords_s.longitude);
    printf("\tSerialized\n\t\n", (long long int)secondary_gps_coords_s.latitude, (long long int)secondary_gps_coords_s.longitude);
    
    secondary_GPS_COORDS* secondary_gps_coords_d = (secondary_GPS_COORDS*)malloc(sizeof(secondary_GPS_COORDS));
    deserialize_secondary_GPS_COORDS(buffer_secondary_gps_coords, secondary_gps_coords_d);
    printf("\tDeserialized\n\t\n", (long long int)secondary_gps_coords_d->latitude, (long long int)secondary_gps_coords_d->longitude);
    
    assert(memcmp(&secondary_gps_coords_s, secondary_gps_coords_d, sizeof(secondary_GPS_COORDS)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_GPS_SPEED */
    printf("secondary_GPS_SPEED:\n");
    uint8_t* buffer_secondary_gps_speed = (uint8_t*)malloc(sizeof(secondary_GPS_SPEED));
    
    secondary_GPS_SPEED secondary_gps_speed_s = { 37992.0 };
    serialize_secondary_GPS_SPEED(buffer_secondary_gps_speed, secondary_gps_speed_s.speed);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)secondary_gps_speed_s.speed);
    
    secondary_GPS_SPEED* secondary_gps_speed_d = (secondary_GPS_SPEED*)malloc(sizeof(secondary_GPS_SPEED));
    deserialize_secondary_GPS_SPEED(buffer_secondary_gps_speed, secondary_gps_speed_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)secondary_gps_speed_d->speed);
    
    assert(memcmp(&secondary_gps_speed_s, secondary_gps_speed_d, sizeof(secondary_GPS_SPEED)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_LAP_COUNT */
    printf("secondary_LAP_COUNT:\n");
    uint8_t* buffer_secondary_lap_count = (uint8_t*)malloc(sizeof(secondary_LAP_COUNT));
    
    secondary_LAP_COUNT secondary_lap_count_s = { 80.0, 0, 0, 0, 4047411032.0 };
    serialize_secondary_LAP_COUNT(buffer_secondary_lap_count, secondary_lap_count_s.lap_count, secondary_lap_count_s.timestamp);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)secondary_lap_count_s.lap_count, (long long unsigned int)secondary_lap_count_s.timestamp);
    
    secondary_LAP_COUNT* secondary_lap_count_d = (secondary_LAP_COUNT*)malloc(sizeof(secondary_LAP_COUNT));
    deserialize_secondary_LAP_COUNT(buffer_secondary_lap_count, secondary_lap_count_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)secondary_lap_count_d->lap_count, (long long unsigned int)secondary_lap_count_d->timestamp);
    
    assert(memcmp(&secondary_lap_count_s, secondary_lap_count_d, sizeof(secondary_LAP_COUNT)) == 0);
    puts("SUCCESS!\n");
        
}