#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bms.h"

int main() {

/* bms_BOARD_STATUS */
    printf("bms_BOARD_STATUS:\n");
    uint8_t* buffer_bms_board_status = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS));
    
    bms_BOARD_STATUS bms_board_status_s = { {43}, 20 };
    serialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_s.errors, bms_board_status_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_s.errors[0], (long long int)bms_board_status_s.balancing_status);
    
    bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
    deserialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_d->errors[0], (long long int)bms_board_status_d->balancing_status);
    
    assert(memcmp(&bms_board_status_s, bms_board_status_d, sizeof(bms_BOARD_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS */
    printf("bms_TEMP_STATS:\n");
    uint8_t* buffer_bms_temp_stats = (uint8_t*)malloc(sizeof(bms_TEMP_STATS));
    
    bms_TEMP_STATS bms_temp_stats_s = { 210.0, 194.0, 165.0, 175.0, 126.0, 247.0, 117.0 };
    serialize_bms_TEMP_STATS(buffer_bms_temp_stats, bms_temp_stats_s.start_index, bms_temp_stats_s.temp0, bms_temp_stats_s.temp1, bms_temp_stats_s.temp2, bms_temp_stats_s.temp3, bms_temp_stats_s.temp4, bms_temp_stats_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_s.start_index, (long long unsigned int)bms_temp_stats_s.temp0, (long long unsigned int)bms_temp_stats_s.temp1, (long long unsigned int)bms_temp_stats_s.temp2, (long long unsigned int)bms_temp_stats_s.temp3, (long long unsigned int)bms_temp_stats_s.temp4, (long long unsigned int)bms_temp_stats_s.temp5);
    
    bms_TEMP_STATS* bms_temp_stats_d = (bms_TEMP_STATS*)malloc(sizeof(bms_TEMP_STATS));
    deserialize_bms_TEMP_STATS(buffer_bms_temp_stats, bms_temp_stats_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_d->start_index, (long long unsigned int)bms_temp_stats_d->temp0, (long long unsigned int)bms_temp_stats_d->temp1, (long long unsigned int)bms_temp_stats_d->temp2, (long long unsigned int)bms_temp_stats_d->temp3, (long long unsigned int)bms_temp_stats_d->temp4, (long long unsigned int)bms_temp_stats_d->temp5);
    
    assert(memcmp(&bms_temp_stats_s, bms_temp_stats_d, sizeof(bms_TEMP_STATS)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES */
    printf("bms_VOLTAGES:\n");
    uint8_t* buffer_bms_voltages = (uint8_t*)malloc(sizeof(bms_VOLTAGES));
    
    bms_VOLTAGES bms_voltages_s = { 233.0, 0, 48986.0, 50563.0, 46585.0 };
    serialize_bms_VOLTAGES(buffer_bms_voltages, bms_voltages_s.start_index, bms_voltages_s.voltage0, bms_voltages_s.voltage1, bms_voltages_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_s.start_index, (long long unsigned int)bms_voltages_s.voltage0, (long long unsigned int)bms_voltages_s.voltage1, (long long unsigned int)bms_voltages_s.voltage2);
    
    bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
    deserialize_bms_VOLTAGES(buffer_bms_voltages, bms_voltages_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_d->start_index, (long long unsigned int)bms_voltages_d->voltage0, (long long unsigned int)bms_voltages_d->voltage1, (long long unsigned int)bms_voltages_d->voltage2);
    
    assert(memcmp(&bms_voltages_s, bms_voltages_d, sizeof(bms_VOLTAGES)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BALANCING */
    printf("bms_BALANCING:\n");
    uint8_t* buffer_bms_balancing = (uint8_t*)malloc(sizeof(bms_BALANCING));
    
    bms_BALANCING bms_balancing_s = { 254.0, {232, 140, 17} };
    serialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_s.board_index, bms_balancing_s.cells);
    printf("\tSerialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_s.board_index, (long long unsigned int)bms_balancing_s.cells[0], (long long unsigned int)bms_balancing_s.cells[1], (long long unsigned int)bms_balancing_s.cells[2]);
    
    bms_BALANCING* bms_balancing_d = (bms_BALANCING*)malloc(sizeof(bms_BALANCING));
    deserialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_d);
    printf("\tDeserialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_d->board_index, (long long unsigned int)bms_balancing_d->cells[0], (long long unsigned int)bms_balancing_d->cells[1], (long long unsigned int)bms_balancing_d->cells[2]);
    
    assert(memcmp(&bms_balancing_s, bms_balancing_d, sizeof(bms_BALANCING)) == 0);
    puts("SUCCESS!\n");
        
}