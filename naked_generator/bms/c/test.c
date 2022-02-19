#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bms.h"

int main() {

/* bms_BOARD_STATUS_0 */
    printf("bms_BOARD_STATUS_0:\n");
    uint8_t* buffer_bms_board_status_0 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_0));
    
    bms_BOARD_STATUS_0 bms_board_status_0_s = { {234}, 105 };
    serialize_bms_BOARD_STATUS_0(buffer_bms_board_status_0, bms_board_status_0_s.errors, bms_board_status_0_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_0_s.errors[0], (long long int)bms_board_status_0_s.balancing_status);
    
    bms_BOARD_STATUS_0* bms_board_status_0_d = (bms_BOARD_STATUS_0*)malloc(sizeof(bms_BOARD_STATUS_0));
    deserialize_bms_BOARD_STATUS_0(buffer_bms_board_status_0, bms_board_status_0_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_0_d->errors[0], (long long int)bms_board_status_0_d->balancing_status);
    
    assert(memcmp(&bms_board_status_0_s, bms_board_status_0_d, sizeof(bms_BOARD_STATUS_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_1 */
    printf("bms_BOARD_STATUS_1:\n");
    uint8_t* buffer_bms_board_status_1 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_1));
    
    bms_BOARD_STATUS_1 bms_board_status_1_s = { {232}, 23 };
    serialize_bms_BOARD_STATUS_1(buffer_bms_board_status_1, bms_board_status_1_s.errors, bms_board_status_1_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_1_s.errors[0], (long long int)bms_board_status_1_s.balancing_status);
    
    bms_BOARD_STATUS_1* bms_board_status_1_d = (bms_BOARD_STATUS_1*)malloc(sizeof(bms_BOARD_STATUS_1));
    deserialize_bms_BOARD_STATUS_1(buffer_bms_board_status_1, bms_board_status_1_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_1_d->errors[0], (long long int)bms_board_status_1_d->balancing_status);
    
    assert(memcmp(&bms_board_status_1_s, bms_board_status_1_d, sizeof(bms_BOARD_STATUS_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_2 */
    printf("bms_BOARD_STATUS_2:\n");
    uint8_t* buffer_bms_board_status_2 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_2));
    
    bms_BOARD_STATUS_2 bms_board_status_2_s = { {140}, -120 };
    serialize_bms_BOARD_STATUS_2(buffer_bms_board_status_2, bms_board_status_2_s.errors, bms_board_status_2_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_2_s.errors[0], (long long int)bms_board_status_2_s.balancing_status);
    
    bms_BOARD_STATUS_2* bms_board_status_2_d = (bms_BOARD_STATUS_2*)malloc(sizeof(bms_BOARD_STATUS_2));
    deserialize_bms_BOARD_STATUS_2(buffer_bms_board_status_2, bms_board_status_2_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_2_d->errors[0], (long long int)bms_board_status_2_d->balancing_status);
    
    assert(memcmp(&bms_board_status_2_s, bms_board_status_2_d, sizeof(bms_BOARD_STATUS_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_3 */
    printf("bms_BOARD_STATUS_3:\n");
    uint8_t* buffer_bms_board_status_3 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_3));
    
    bms_BOARD_STATUS_3 bms_board_status_3_s = { {169}, -99 };
    serialize_bms_BOARD_STATUS_3(buffer_bms_board_status_3, bms_board_status_3_s.errors, bms_board_status_3_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_3_s.errors[0], (long long int)bms_board_status_3_s.balancing_status);
    
    bms_BOARD_STATUS_3* bms_board_status_3_d = (bms_BOARD_STATUS_3*)malloc(sizeof(bms_BOARD_STATUS_3));
    deserialize_bms_BOARD_STATUS_3(buffer_bms_board_status_3, bms_board_status_3_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_3_d->errors[0], (long long int)bms_board_status_3_d->balancing_status);
    
    assert(memcmp(&bms_board_status_3_s, bms_board_status_3_d, sizeof(bms_BOARD_STATUS_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_4 */
    printf("bms_BOARD_STATUS_4:\n");
    uint8_t* buffer_bms_board_status_4 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_4));
    
    bms_BOARD_STATUS_4 bms_board_status_4_s = { {7}, 12 };
    serialize_bms_BOARD_STATUS_4(buffer_bms_board_status_4, bms_board_status_4_s.errors, bms_board_status_4_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_4_s.errors[0], (long long int)bms_board_status_4_s.balancing_status);
    
    bms_BOARD_STATUS_4* bms_board_status_4_d = (bms_BOARD_STATUS_4*)malloc(sizeof(bms_BOARD_STATUS_4));
    deserialize_bms_BOARD_STATUS_4(buffer_bms_board_status_4, bms_board_status_4_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_4_d->errors[0], (long long int)bms_board_status_4_d->balancing_status);
    
    assert(memcmp(&bms_board_status_4_s, bms_board_status_4_d, sizeof(bms_BOARD_STATUS_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_5 */
    printf("bms_BOARD_STATUS_5:\n");
    uint8_t* buffer_bms_board_status_5 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_5));
    
    bms_BOARD_STATUS_5 bms_board_status_5_s = { {195}, 107 };
    serialize_bms_BOARD_STATUS_5(buffer_bms_board_status_5, bms_board_status_5_s.errors, bms_board_status_5_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_5_s.errors[0], (long long int)bms_board_status_5_s.balancing_status);
    
    bms_BOARD_STATUS_5* bms_board_status_5_d = (bms_BOARD_STATUS_5*)malloc(sizeof(bms_BOARD_STATUS_5));
    deserialize_bms_BOARD_STATUS_5(buffer_bms_board_status_5, bms_board_status_5_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_5_d->errors[0], (long long int)bms_board_status_5_d->balancing_status);
    
    assert(memcmp(&bms_board_status_5_s, bms_board_status_5_d, sizeof(bms_BOARD_STATUS_5)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_0 */
    printf("bms_TEMP_STATS_0:\n");
    uint8_t* buffer_bms_temp_stats_0 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_0));
    
    bms_TEMP_STATS_0 bms_temp_stats_0_s = { 51.0, 44.0, 212.0, 206.0, 105.0, 179.0, 126.0 };
    serialize_bms_TEMP_STATS_0(buffer_bms_temp_stats_0, bms_temp_stats_0_s.start_index, bms_temp_stats_0_s.temp0, bms_temp_stats_0_s.temp1, bms_temp_stats_0_s.temp2, bms_temp_stats_0_s.temp3, bms_temp_stats_0_s.temp4, bms_temp_stats_0_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_0_s.start_index, (long long unsigned int)bms_temp_stats_0_s.temp0, (long long unsigned int)bms_temp_stats_0_s.temp1, (long long unsigned int)bms_temp_stats_0_s.temp2, (long long unsigned int)bms_temp_stats_0_s.temp3, (long long unsigned int)bms_temp_stats_0_s.temp4, (long long unsigned int)bms_temp_stats_0_s.temp5);
    
    bms_TEMP_STATS_0* bms_temp_stats_0_d = (bms_TEMP_STATS_0*)malloc(sizeof(bms_TEMP_STATS_0));
    deserialize_bms_TEMP_STATS_0(buffer_bms_temp_stats_0, bms_temp_stats_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_0_d->start_index, (long long unsigned int)bms_temp_stats_0_d->temp0, (long long unsigned int)bms_temp_stats_0_d->temp1, (long long unsigned int)bms_temp_stats_0_d->temp2, (long long unsigned int)bms_temp_stats_0_d->temp3, (long long unsigned int)bms_temp_stats_0_d->temp4, (long long unsigned int)bms_temp_stats_0_d->temp5);
    
    assert(memcmp(&bms_temp_stats_0_s, bms_temp_stats_0_d, sizeof(bms_TEMP_STATS_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_1 */
    printf("bms_TEMP_STATS_1:\n");
    uint8_t* buffer_bms_temp_stats_1 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_1));
    
    bms_TEMP_STATS_1 bms_temp_stats_1_s = { 74.0, 107.0, 217.0, 13.0, 127.0, 6.0, 15.0 };
    serialize_bms_TEMP_STATS_1(buffer_bms_temp_stats_1, bms_temp_stats_1_s.start_index, bms_temp_stats_1_s.temp0, bms_temp_stats_1_s.temp1, bms_temp_stats_1_s.temp2, bms_temp_stats_1_s.temp3, bms_temp_stats_1_s.temp4, bms_temp_stats_1_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_1_s.start_index, (long long unsigned int)bms_temp_stats_1_s.temp0, (long long unsigned int)bms_temp_stats_1_s.temp1, (long long unsigned int)bms_temp_stats_1_s.temp2, (long long unsigned int)bms_temp_stats_1_s.temp3, (long long unsigned int)bms_temp_stats_1_s.temp4, (long long unsigned int)bms_temp_stats_1_s.temp5);
    
    bms_TEMP_STATS_1* bms_temp_stats_1_d = (bms_TEMP_STATS_1*)malloc(sizeof(bms_TEMP_STATS_1));
    deserialize_bms_TEMP_STATS_1(buffer_bms_temp_stats_1, bms_temp_stats_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_1_d->start_index, (long long unsigned int)bms_temp_stats_1_d->temp0, (long long unsigned int)bms_temp_stats_1_d->temp1, (long long unsigned int)bms_temp_stats_1_d->temp2, (long long unsigned int)bms_temp_stats_1_d->temp3, (long long unsigned int)bms_temp_stats_1_d->temp4, (long long unsigned int)bms_temp_stats_1_d->temp5);
    
    assert(memcmp(&bms_temp_stats_1_s, bms_temp_stats_1_d, sizeof(bms_TEMP_STATS_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_2 */
    printf("bms_TEMP_STATS_2:\n");
    uint8_t* buffer_bms_temp_stats_2 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_2));
    
    bms_TEMP_STATS_2 bms_temp_stats_2_s = { 141.0, 148.0, 190.0, 163.0, 149.0, 10.0, 66.0 };
    serialize_bms_TEMP_STATS_2(buffer_bms_temp_stats_2, bms_temp_stats_2_s.start_index, bms_temp_stats_2_s.temp0, bms_temp_stats_2_s.temp1, bms_temp_stats_2_s.temp2, bms_temp_stats_2_s.temp3, bms_temp_stats_2_s.temp4, bms_temp_stats_2_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_2_s.start_index, (long long unsigned int)bms_temp_stats_2_s.temp0, (long long unsigned int)bms_temp_stats_2_s.temp1, (long long unsigned int)bms_temp_stats_2_s.temp2, (long long unsigned int)bms_temp_stats_2_s.temp3, (long long unsigned int)bms_temp_stats_2_s.temp4, (long long unsigned int)bms_temp_stats_2_s.temp5);
    
    bms_TEMP_STATS_2* bms_temp_stats_2_d = (bms_TEMP_STATS_2*)malloc(sizeof(bms_TEMP_STATS_2));
    deserialize_bms_TEMP_STATS_2(buffer_bms_temp_stats_2, bms_temp_stats_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_2_d->start_index, (long long unsigned int)bms_temp_stats_2_d->temp0, (long long unsigned int)bms_temp_stats_2_d->temp1, (long long unsigned int)bms_temp_stats_2_d->temp2, (long long unsigned int)bms_temp_stats_2_d->temp3, (long long unsigned int)bms_temp_stats_2_d->temp4, (long long unsigned int)bms_temp_stats_2_d->temp5);
    
    assert(memcmp(&bms_temp_stats_2_s, bms_temp_stats_2_d, sizeof(bms_TEMP_STATS_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_3 */
    printf("bms_TEMP_STATS_3:\n");
    uint8_t* buffer_bms_temp_stats_3 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_3));
    
    bms_TEMP_STATS_3 bms_temp_stats_3_s = { 125.0, 48.0, 163.0, 205.0, 95.0, 88.0, 78.0 };
    serialize_bms_TEMP_STATS_3(buffer_bms_temp_stats_3, bms_temp_stats_3_s.start_index, bms_temp_stats_3_s.temp0, bms_temp_stats_3_s.temp1, bms_temp_stats_3_s.temp2, bms_temp_stats_3_s.temp3, bms_temp_stats_3_s.temp4, bms_temp_stats_3_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_3_s.start_index, (long long unsigned int)bms_temp_stats_3_s.temp0, (long long unsigned int)bms_temp_stats_3_s.temp1, (long long unsigned int)bms_temp_stats_3_s.temp2, (long long unsigned int)bms_temp_stats_3_s.temp3, (long long unsigned int)bms_temp_stats_3_s.temp4, (long long unsigned int)bms_temp_stats_3_s.temp5);
    
    bms_TEMP_STATS_3* bms_temp_stats_3_d = (bms_TEMP_STATS_3*)malloc(sizeof(bms_TEMP_STATS_3));
    deserialize_bms_TEMP_STATS_3(buffer_bms_temp_stats_3, bms_temp_stats_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_3_d->start_index, (long long unsigned int)bms_temp_stats_3_d->temp0, (long long unsigned int)bms_temp_stats_3_d->temp1, (long long unsigned int)bms_temp_stats_3_d->temp2, (long long unsigned int)bms_temp_stats_3_d->temp3, (long long unsigned int)bms_temp_stats_3_d->temp4, (long long unsigned int)bms_temp_stats_3_d->temp5);
    
    assert(memcmp(&bms_temp_stats_3_s, bms_temp_stats_3_d, sizeof(bms_TEMP_STATS_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_4 */
    printf("bms_TEMP_STATS_4:\n");
    uint8_t* buffer_bms_temp_stats_4 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_4));
    
    bms_TEMP_STATS_4 bms_temp_stats_4_s = { 82.0, 33.0, 64.0, 99.0, 116.0, 230.0, 24.0 };
    serialize_bms_TEMP_STATS_4(buffer_bms_temp_stats_4, bms_temp_stats_4_s.start_index, bms_temp_stats_4_s.temp0, bms_temp_stats_4_s.temp1, bms_temp_stats_4_s.temp2, bms_temp_stats_4_s.temp3, bms_temp_stats_4_s.temp4, bms_temp_stats_4_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_4_s.start_index, (long long unsigned int)bms_temp_stats_4_s.temp0, (long long unsigned int)bms_temp_stats_4_s.temp1, (long long unsigned int)bms_temp_stats_4_s.temp2, (long long unsigned int)bms_temp_stats_4_s.temp3, (long long unsigned int)bms_temp_stats_4_s.temp4, (long long unsigned int)bms_temp_stats_4_s.temp5);
    
    bms_TEMP_STATS_4* bms_temp_stats_4_d = (bms_TEMP_STATS_4*)malloc(sizeof(bms_TEMP_STATS_4));
    deserialize_bms_TEMP_STATS_4(buffer_bms_temp_stats_4, bms_temp_stats_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_4_d->start_index, (long long unsigned int)bms_temp_stats_4_d->temp0, (long long unsigned int)bms_temp_stats_4_d->temp1, (long long unsigned int)bms_temp_stats_4_d->temp2, (long long unsigned int)bms_temp_stats_4_d->temp3, (long long unsigned int)bms_temp_stats_4_d->temp4, (long long unsigned int)bms_temp_stats_4_d->temp5);
    
    assert(memcmp(&bms_temp_stats_4_s, bms_temp_stats_4_d, sizeof(bms_TEMP_STATS_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_5 */
    printf("bms_TEMP_STATS_5:\n");
    uint8_t* buffer_bms_temp_stats_5 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_5));
    
    bms_TEMP_STATS_5 bms_temp_stats_5_s = { 42.0, 166.0, 33.0, 219.0, 118.0, 184.0, 167.0 };
    serialize_bms_TEMP_STATS_5(buffer_bms_temp_stats_5, bms_temp_stats_5_s.start_index, bms_temp_stats_5_s.temp0, bms_temp_stats_5_s.temp1, bms_temp_stats_5_s.temp2, bms_temp_stats_5_s.temp3, bms_temp_stats_5_s.temp4, bms_temp_stats_5_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_5_s.start_index, (long long unsigned int)bms_temp_stats_5_s.temp0, (long long unsigned int)bms_temp_stats_5_s.temp1, (long long unsigned int)bms_temp_stats_5_s.temp2, (long long unsigned int)bms_temp_stats_5_s.temp3, (long long unsigned int)bms_temp_stats_5_s.temp4, (long long unsigned int)bms_temp_stats_5_s.temp5);
    
    bms_TEMP_STATS_5* bms_temp_stats_5_d = (bms_TEMP_STATS_5*)malloc(sizeof(bms_TEMP_STATS_5));
    deserialize_bms_TEMP_STATS_5(buffer_bms_temp_stats_5, bms_temp_stats_5_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_5_d->start_index, (long long unsigned int)bms_temp_stats_5_d->temp0, (long long unsigned int)bms_temp_stats_5_d->temp1, (long long unsigned int)bms_temp_stats_5_d->temp2, (long long unsigned int)bms_temp_stats_5_d->temp3, (long long unsigned int)bms_temp_stats_5_d->temp4, (long long unsigned int)bms_temp_stats_5_d->temp5);
    
    assert(memcmp(&bms_temp_stats_5_s, bms_temp_stats_5_d, sizeof(bms_TEMP_STATS_5)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BALANCING */
    printf("bms_BALANCING:\n");
    uint8_t* buffer_bms_balancing = (uint8_t*)malloc(sizeof(bms_BALANCING));
    
    bms_BALANCING bms_balancing_s = { 3.0, {174, 20, 249} };
    serialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_s.board_index, bms_balancing_s.cells);
    printf("\tSerialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_s.board_index, (long long unsigned int)bms_balancing_s.cells[0], (long long unsigned int)bms_balancing_s.cells[1], (long long unsigned int)bms_balancing_s.cells[2]);
    
    bms_BALANCING* bms_balancing_d = (bms_BALANCING*)malloc(sizeof(bms_BALANCING));
    deserialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_d);
    printf("\tDeserialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_d->board_index, (long long unsigned int)bms_balancing_d->cells[0], (long long unsigned int)bms_balancing_d->cells[1], (long long unsigned int)bms_balancing_d->cells[2]);
    
    assert(memcmp(&bms_balancing_s, bms_balancing_d, sizeof(bms_BALANCING)) == 0);
    puts("SUCCESS!\n");
        

/* bms_MASTER_SYNC */
    printf("bms_MASTER_SYNC:\n");
    uint8_t* buffer_bms_master_sync = (uint8_t*)malloc(sizeof(bms_MASTER_SYNC));
    
    bms_MASTER_SYNC bms_master_sync_s = { 577041047.0 };
    serialize_bms_MASTER_SYNC(buffer_bms_master_sync, bms_master_sync_s.time);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)bms_master_sync_s.time);
    
    bms_MASTER_SYNC* bms_master_sync_d = (bms_MASTER_SYNC*)malloc(sizeof(bms_MASTER_SYNC));
    deserialize_bms_MASTER_SYNC(buffer_bms_master_sync, bms_master_sync_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)bms_master_sync_d->time);
    
    assert(memcmp(&bms_master_sync_s, bms_master_sync_d, sizeof(bms_MASTER_SYNC)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_0 */
    printf("bms_VOLTAGES_0:\n");
    uint8_t* buffer_bms_voltages_0 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_0));
    
    bms_VOLTAGES_0 bms_voltages_0_s = { 172.0, 0, 9381.0, 44311.0, 16295.0 };
    serialize_bms_VOLTAGES_0(buffer_bms_voltages_0, bms_voltages_0_s.start_index, bms_voltages_0_s.voltage0, bms_voltages_0_s.voltage1, bms_voltages_0_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_0_s.start_index, (long long unsigned int)bms_voltages_0_s.voltage0, (long long unsigned int)bms_voltages_0_s.voltage1);
    
    bms_VOLTAGES_0* bms_voltages_0_d = (bms_VOLTAGES_0*)malloc(sizeof(bms_VOLTAGES_0));
    deserialize_bms_VOLTAGES_0(buffer_bms_voltages_0, bms_voltages_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_0_d->start_index, (long long unsigned int)bms_voltages_0_d->voltage0, (long long unsigned int)bms_voltages_0_d->voltage1);
    
    assert(memcmp(&bms_voltages_0_s, bms_voltages_0_d, sizeof(bms_VOLTAGES_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_1 */
    printf("bms_VOLTAGES_1:\n");
    uint8_t* buffer_bms_voltages_1 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_1));
    
    bms_VOLTAGES_1 bms_voltages_1_s = { 4.0, 0, 5488.0, 36691.0, 50652.0 };
    serialize_bms_VOLTAGES_1(buffer_bms_voltages_1, bms_voltages_1_s.start_index, bms_voltages_1_s.voltage0, bms_voltages_1_s.voltage1, bms_voltages_1_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_1_s.start_index, (long long unsigned int)bms_voltages_1_s.voltage0, (long long unsigned int)bms_voltages_1_s.voltage1);
    
    bms_VOLTAGES_1* bms_voltages_1_d = (bms_VOLTAGES_1*)malloc(sizeof(bms_VOLTAGES_1));
    deserialize_bms_VOLTAGES_1(buffer_bms_voltages_1, bms_voltages_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_1_d->start_index, (long long unsigned int)bms_voltages_1_d->voltage0, (long long unsigned int)bms_voltages_1_d->voltage1);
    
    assert(memcmp(&bms_voltages_1_s, bms_voltages_1_d, sizeof(bms_VOLTAGES_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_2 */
    printf("bms_VOLTAGES_2:\n");
    uint8_t* buffer_bms_voltages_2 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_2));
    
    bms_VOLTAGES_2 bms_voltages_2_s = { 1.0, 0, 56203.0, 19487.0, 56493.0 };
    serialize_bms_VOLTAGES_2(buffer_bms_voltages_2, bms_voltages_2_s.start_index, bms_voltages_2_s.voltage0, bms_voltages_2_s.voltage1, bms_voltages_2_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_2_s.start_index, (long long unsigned int)bms_voltages_2_s.voltage0, (long long unsigned int)bms_voltages_2_s.voltage1);
    
    bms_VOLTAGES_2* bms_voltages_2_d = (bms_VOLTAGES_2*)malloc(sizeof(bms_VOLTAGES_2));
    deserialize_bms_VOLTAGES_2(buffer_bms_voltages_2, bms_voltages_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_2_d->start_index, (long long unsigned int)bms_voltages_2_d->voltage0, (long long unsigned int)bms_voltages_2_d->voltage1);
    
    assert(memcmp(&bms_voltages_2_s, bms_voltages_2_d, sizeof(bms_VOLTAGES_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_3 */
    printf("bms_VOLTAGES_3:\n");
    uint8_t* buffer_bms_voltages_3 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_3));
    
    bms_VOLTAGES_3 bms_voltages_3_s = { 134.0, 0, 45615.0, 65323.0, 61683.0 };
    serialize_bms_VOLTAGES_3(buffer_bms_voltages_3, bms_voltages_3_s.start_index, bms_voltages_3_s.voltage0, bms_voltages_3_s.voltage1, bms_voltages_3_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_3_s.start_index, (long long unsigned int)bms_voltages_3_s.voltage0, (long long unsigned int)bms_voltages_3_s.voltage1);
    
    bms_VOLTAGES_3* bms_voltages_3_d = (bms_VOLTAGES_3*)malloc(sizeof(bms_VOLTAGES_3));
    deserialize_bms_VOLTAGES_3(buffer_bms_voltages_3, bms_voltages_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_3_d->start_index, (long long unsigned int)bms_voltages_3_d->voltage0, (long long unsigned int)bms_voltages_3_d->voltage1);
    
    assert(memcmp(&bms_voltages_3_s, bms_voltages_3_d, sizeof(bms_VOLTAGES_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_4 */
    printf("bms_VOLTAGES_4:\n");
    uint8_t* buffer_bms_voltages_4 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_4));
    
    bms_VOLTAGES_4 bms_voltages_4_s = { 31.0, 0, 64226.0, 24633.0, 7734.0 };
    serialize_bms_VOLTAGES_4(buffer_bms_voltages_4, bms_voltages_4_s.start_index, bms_voltages_4_s.voltage0, bms_voltages_4_s.voltage1, bms_voltages_4_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_4_s.start_index, (long long unsigned int)bms_voltages_4_s.voltage0, (long long unsigned int)bms_voltages_4_s.voltage1);
    
    bms_VOLTAGES_4* bms_voltages_4_d = (bms_VOLTAGES_4*)malloc(sizeof(bms_VOLTAGES_4));
    deserialize_bms_VOLTAGES_4(buffer_bms_voltages_4, bms_voltages_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_4_d->start_index, (long long unsigned int)bms_voltages_4_d->voltage0, (long long unsigned int)bms_voltages_4_d->voltage1);
    
    assert(memcmp(&bms_voltages_4_s, bms_voltages_4_d, sizeof(bms_VOLTAGES_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_5 */
    printf("bms_VOLTAGES_5:\n");
    uint8_t* buffer_bms_voltages_5 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_5));
    
    bms_VOLTAGES_5 bms_voltages_5_s = { 37.0, 0, 54841.0, 25218.0, 15620.0 };
    serialize_bms_VOLTAGES_5(buffer_bms_voltages_5, bms_voltages_5_s.start_index, bms_voltages_5_s.voltage0, bms_voltages_5_s.voltage1, bms_voltages_5_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_5_s.start_index, (long long unsigned int)bms_voltages_5_s.voltage0, (long long unsigned int)bms_voltages_5_s.voltage1);
    
    bms_VOLTAGES_5* bms_voltages_5_d = (bms_VOLTAGES_5*)malloc(sizeof(bms_VOLTAGES_5));
    deserialize_bms_VOLTAGES_5(buffer_bms_voltages_5, bms_voltages_5_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_5_d->start_index, (long long unsigned int)bms_voltages_5_d->voltage0, (long long unsigned int)bms_voltages_5_d->voltage1);
    
    assert(memcmp(&bms_voltages_5_s, bms_voltages_5_d, sizeof(bms_VOLTAGES_5)) == 0);
    puts("SUCCESS!\n");
        
}