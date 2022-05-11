#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "bms.h"

int main() {

    printf("***BmsBoardStatusMsg***\n");
    uint8_t buffer_BmsBoardStatus[BMS_BOARD_STATUS_SIZE];
    BmsBoardStatusMsg BmsBoardStatus_s = { { 81 }, 0 };
    
    printf("Before: %hhx %d\n", BmsBoardStatus_s.errors[0], BmsBoardStatus_s.balancing_status);
    
    serialize_BmsBoardStatus(buffer_BmsBoardStatus, &BmsBoardStatus_s);
    BmsBoardStatusMsg BmsBoardStatus_d;
    deserialize_BmsBoardStatus(buffer_BmsBoardStatus, &BmsBoardStatus_d);
    
    printf("After:  %hhx %d\n", BmsBoardStatus_d.errors[0], BmsBoardStatus_d.balancing_status);
    
    assert(memcmp(&BmsBoardStatus_s, &BmsBoardStatus_d, BMS_BOARD_STATUS_SIZE) == 0);
    printf("\n");

    printf("***BmsTemperaturesMsg***\n");
    uint8_t buffer_BmsTemperatures[BMS_TEMPERATURES_SIZE];
    BmsTemperaturesMsg BmsTemperatures_s = { 197, 100, 66, 195, 109, 6, 14 };
    
    printf("Before: %hhu %hhu %hhu %hhu %hhu %hhu %hhu\n", BmsTemperatures_s.start_index, BmsTemperatures_s.temp0, BmsTemperatures_s.temp1, BmsTemperatures_s.temp2, BmsTemperatures_s.temp3, BmsTemperatures_s.temp4, BmsTemperatures_s.temp5);
    
    serialize_BmsTemperatures(buffer_BmsTemperatures, &BmsTemperatures_s);
    BmsTemperaturesMsg BmsTemperatures_d;
    deserialize_BmsTemperatures(buffer_BmsTemperatures, &BmsTemperatures_d);
    
    printf("After:  %hhu %hhu %hhu %hhu %hhu %hhu %hhu\n", BmsTemperatures_d.start_index, BmsTemperatures_d.temp0, BmsTemperatures_d.temp1, BmsTemperatures_d.temp2, BmsTemperatures_d.temp3, BmsTemperatures_d.temp4, BmsTemperatures_d.temp5);
    
    assert(memcmp(&BmsTemperatures_s, &BmsTemperatures_d, BMS_TEMPERATURES_SIZE) == 0);
    printf("\n");

    printf("***BmsVoltagesMsg***\n");
    uint8_t buffer_BmsVoltages[BMS_VOLTAGES_SIZE];
    BmsVoltagesMsg BmsVoltages_s = { 64691, 6863, 16843, 138 };
    
    printf("Before: %hu %hu %hu %hhu\n", BmsVoltages_s.voltage0, BmsVoltages_s.voltage1, BmsVoltages_s.voltage2, BmsVoltages_s.start_index);
    
    serialize_BmsVoltages(buffer_BmsVoltages, &BmsVoltages_s);
    BmsVoltagesMsg BmsVoltages_d;
    deserialize_BmsVoltages(buffer_BmsVoltages, &BmsVoltages_d);
    
    printf("After:  %hu %hu %hu %hhu\n", BmsVoltages_d.voltage0, BmsVoltages_d.voltage1, BmsVoltages_d.voltage2, BmsVoltages_d.start_index);
    
    assert(memcmp(&BmsVoltages_s, &BmsVoltages_d, BMS_VOLTAGES_SIZE) == 0);
    printf("\n");

    printf("***BmsBalancingMsg***\n");
    uint8_t buffer_BmsBalancing[BMS_BALANCING_SIZE];
    BmsBalancingMsg BmsBalancing_s = { { 196, 165, 100 }, 107 };
    
    printf("Before: %hhx.%hhx.%hhx %hhu\n", BmsBalancing_s.cells[0], BmsBalancing_s.cells[1], BmsBalancing_s.cells[2], BmsBalancing_s.board_index);
    
    serialize_BmsBalancing(buffer_BmsBalancing, &BmsBalancing_s);
    BmsBalancingMsg BmsBalancing_d;
    deserialize_BmsBalancing(buffer_BmsBalancing, &BmsBalancing_d);
    
    printf("After:  %hhx.%hhx.%hhx %hhu\n", BmsBalancing_d.cells[0], BmsBalancing_d.cells[1], BmsBalancing_d.cells[2], BmsBalancing_d.board_index);
    
    assert(memcmp(&BmsBalancing_s, &BmsBalancing_d, BMS_BALANCING_SIZE) == 0);
    printf("\n");

    printf("***BmsFwUpdateMsg***\n");
    uint8_t buffer_BmsFwUpdate[BMS_FW_UPDATE_SIZE];
    BmsFwUpdateMsg BmsFwUpdate_s = { 3 };
    
    printf("Before: %hhu\n", BmsFwUpdate_s.board_index);
    
    serialize_BmsFwUpdate(buffer_BmsFwUpdate, &BmsFwUpdate_s);
    BmsFwUpdateMsg BmsFwUpdate_d;
    deserialize_BmsFwUpdate(buffer_BmsFwUpdate, &BmsFwUpdate_d);
    
    printf("After:  %hhu\n", BmsFwUpdate_d.board_index);
    
    assert(memcmp(&BmsFwUpdate_s, &BmsFwUpdate_d, BMS_FW_UPDATE_SIZE) == 0);
    printf("\n");

    return 0;
}