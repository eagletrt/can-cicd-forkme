#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "primary.h"

int main() {

    printf("***PrimarySteerVersionMsg***\n");
    uint8_t buffer_PrimarySteerVersion[PRIMARY_STEER_VERSION_SIZE];
    PrimarySteerVersionMsg PrimarySteerVersion_s = { 63, 100 };
    
    printf("Before: %hhu %hhu\n", PrimarySteerVersion_s.component_version, PrimarySteerVersion_s.cancicd_version);
    
    serialize_PrimarySteerVersion(buffer_PrimarySteerVersion, &PrimarySteerVersion_s);
    PrimarySteerVersionMsg PrimarySteerVersion_d;
    deserialize_PrimarySteerVersion(buffer_PrimarySteerVersion, &PrimarySteerVersion_d);
    
    printf("After:  %hhu %hhu\n", PrimarySteerVersion_d.component_version, PrimarySteerVersion_d.cancicd_version);
    
    assert(memcmp(&PrimarySteerVersion_s, &PrimarySteerVersion_d, sizeof(PrimarySteerVersionMsg)) == 0);
    printf("\n");

    printf("***PrimaryDasVersionMsg***\n");
    uint8_t buffer_PrimaryDasVersion[PRIMARY_DAS_VERSION_SIZE];
    PrimaryDasVersionMsg PrimaryDasVersion_s = { 46, 36 };
    
    printf("Before: %hhu %hhu\n", PrimaryDasVersion_s.component_version, PrimaryDasVersion_s.cancicd_version);
    
    serialize_PrimaryDasVersion(buffer_PrimaryDasVersion, &PrimaryDasVersion_s);
    PrimaryDasVersionMsg PrimaryDasVersion_d;
    deserialize_PrimaryDasVersion(buffer_PrimaryDasVersion, &PrimaryDasVersion_d);
    
    printf("After:  %hhu %hhu\n", PrimaryDasVersion_d.component_version, PrimaryDasVersion_d.cancicd_version);
    
    assert(memcmp(&PrimaryDasVersion_s, &PrimaryDasVersion_d, sizeof(PrimaryDasVersionMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvVersionMsg***\n");
    uint8_t buffer_PrimaryHvVersion[PRIMARY_HV_VERSION_SIZE];
    PrimaryHvVersionMsg PrimaryHvVersion_s = { 202, 223 };
    
    printf("Before: %hhu %hhu\n", PrimaryHvVersion_s.component_version, PrimaryHvVersion_s.cancicd_version);
    
    serialize_PrimaryHvVersion(buffer_PrimaryHvVersion, &PrimaryHvVersion_s);
    PrimaryHvVersionMsg PrimaryHvVersion_d;
    deserialize_PrimaryHvVersion(buffer_PrimaryHvVersion, &PrimaryHvVersion_d);
    
    printf("After:  %hhu %hhu\n", PrimaryHvVersion_d.component_version, PrimaryHvVersion_d.cancicd_version);
    
    assert(memcmp(&PrimaryHvVersion_s, &PrimaryHvVersion_d, sizeof(PrimaryHvVersionMsg)) == 0);
    printf("\n");

    printf("***PrimaryLvVersionMsg***\n");
    uint8_t buffer_PrimaryLvVersion[PRIMARY_LV_VERSION_SIZE];
    PrimaryLvVersionMsg PrimaryLvVersion_s = { 187, 36 };
    
    printf("Before: %hhu %hhu\n", PrimaryLvVersion_s.component_version, PrimaryLvVersion_s.cancicd_version);
    
    serialize_PrimaryLvVersion(buffer_PrimaryLvVersion, &PrimaryLvVersion_s);
    PrimaryLvVersionMsg PrimaryLvVersion_d;
    deserialize_PrimaryLvVersion(buffer_PrimaryLvVersion, &PrimaryLvVersion_d);
    
    printf("After:  %hhu %hhu\n", PrimaryLvVersion_d.component_version, PrimaryLvVersion_d.cancicd_version);
    
    assert(memcmp(&PrimaryLvVersion_s, &PrimaryLvVersion_d, sizeof(PrimaryLvVersionMsg)) == 0);
    printf("\n");

    printf("***PrimaryTlmVersionMsg***\n");
    uint8_t buffer_PrimaryTlmVersion[PRIMARY_TLM_VERSION_SIZE];
    PrimaryTlmVersionMsg PrimaryTlmVersion_s = { 129, 33 };
    
    printf("Before: %hhu %hhu\n", PrimaryTlmVersion_s.component_version, PrimaryTlmVersion_s.cancicd_version);
    
    serialize_PrimaryTlmVersion(buffer_PrimaryTlmVersion, &PrimaryTlmVersion_s);
    PrimaryTlmVersionMsg PrimaryTlmVersion_d;
    deserialize_PrimaryTlmVersion(buffer_PrimaryTlmVersion, &PrimaryTlmVersion_d);
    
    printf("After:  %hhu %hhu\n", PrimaryTlmVersion_d.component_version, PrimaryTlmVersion_d.cancicd_version);
    
    assert(memcmp(&PrimaryTlmVersion_s, &PrimaryTlmVersion_d, sizeof(PrimaryTlmVersionMsg)) == 0);
    printf("\n");

    printf("***PrimaryTimestampMsg***\n");
    uint8_t buffer_PrimaryTimestamp[PRIMARY_TIMESTAMP_SIZE];
    PrimaryTimestampMsg PrimaryTimestamp_s = { 2525192796 };
    
    printf("Before: %u\n", PrimaryTimestamp_s.timestamp);
    
    serialize_PrimaryTimestamp(buffer_PrimaryTimestamp, &PrimaryTimestamp_s);
    PrimaryTimestampMsg PrimaryTimestamp_d;
    deserialize_PrimaryTimestamp(buffer_PrimaryTimestamp, &PrimaryTimestamp_d);
    
    printf("After:  %u\n", PrimaryTimestamp_d.timestamp);
    
    assert(memcmp(&PrimaryTimestamp_s, &PrimaryTimestamp_d, sizeof(PrimaryTimestampMsg)) == 0);
    printf("\n");

    printf("***PrimarySetTlmStatusMsg***\n");
    uint8_t buffer_PrimarySetTlmStatus[PRIMARY_SET_TLM_STATUS_SIZE];
    PrimarySetTlmStatusMsg PrimarySetTlmStatus_s = { 97, 72, 1, 0 };
    
    printf("Before: %hhu %hhu %d %d\n", PrimarySetTlmStatus_s.driver, PrimarySetTlmStatus_s.circuit, PrimarySetTlmStatus_s.race_type, PrimarySetTlmStatus_s.tlm_status);
    
    serialize_PrimarySetTlmStatus(buffer_PrimarySetTlmStatus, &PrimarySetTlmStatus_s);
    PrimarySetTlmStatusMsg PrimarySetTlmStatus_d;
    deserialize_PrimarySetTlmStatus(buffer_PrimarySetTlmStatus, &PrimarySetTlmStatus_d);
    
    printf("After:  %hhu %hhu %d %d\n", PrimarySetTlmStatus_d.driver, PrimarySetTlmStatus_d.circuit, PrimarySetTlmStatus_d.race_type, PrimarySetTlmStatus_d.tlm_status);
    
    assert(memcmp(&PrimarySetTlmStatus_s, &PrimarySetTlmStatus_d, sizeof(PrimarySetTlmStatusMsg)) == 0);
    printf("\n");

    printf("***PrimarySteerSystemStatusMsg***\n");
    uint8_t buffer_PrimarySteerSystemStatus[PRIMARY_STEER_SYSTEM_STATUS_SIZE];
    PrimarySteerSystemStatusMsg PrimarySteerSystemStatus_s = { 230 };
    
    printf("Before: %hhu\n", PrimarySteerSystemStatus_s.soc_temp);
    
    serialize_PrimarySteerSystemStatus(buffer_PrimarySteerSystemStatus, &PrimarySteerSystemStatus_s);
    PrimarySteerSystemStatusMsg PrimarySteerSystemStatus_d;
    deserialize_PrimarySteerSystemStatus(buffer_PrimarySteerSystemStatus, &PrimarySteerSystemStatus_d);
    
    printf("After:  %hhu\n", PrimarySteerSystemStatus_d.soc_temp);
    
    assert(memcmp(&PrimarySteerSystemStatus_s, &PrimarySteerSystemStatus_d, sizeof(PrimarySteerSystemStatusMsg)) == 0);
    printf("\n");

    printf("***PrimaryMarkerMsg***\n");
    uint8_t buffer_PrimaryMarker[PRIMARY_MARKER_SIZE];
    PrimaryMarkerMsg PrimaryMarker_s = {  };
    
    serialize_PrimaryMarker(buffer_PrimaryMarker, &PrimaryMarker_s);
    PrimaryMarkerMsg PrimaryMarker_d;
    deserialize_PrimaryMarker(buffer_PrimaryMarker, &PrimaryMarker_d);
    
    assert(memcmp(&PrimaryMarker_s, &PrimaryMarker_d, sizeof(PrimaryMarkerMsg)) == 0);
    printf("\n");

    printf("***PrimaryTlmStatusMsg***\n");
    uint8_t buffer_PrimaryTlmStatus[PRIMARY_TLM_STATUS_SIZE];
    PrimaryTlmStatusMsg PrimaryTlmStatus_s = { 93, 233, 1, 0 };
    
    printf("Before: %hhu %hhu %d %d\n", PrimaryTlmStatus_s.driver, PrimaryTlmStatus_s.circuit, PrimaryTlmStatus_s.race_type, PrimaryTlmStatus_s.tlm_status);
    
    serialize_PrimaryTlmStatus(buffer_PrimaryTlmStatus, &PrimaryTlmStatus_s);
    PrimaryTlmStatusMsg PrimaryTlmStatus_d;
    deserialize_PrimaryTlmStatus(buffer_PrimaryTlmStatus, &PrimaryTlmStatus_d);
    
    printf("After:  %hhu %hhu %d %d\n", PrimaryTlmStatus_d.driver, PrimaryTlmStatus_d.circuit, PrimaryTlmStatus_d.race_type, PrimaryTlmStatus_d.tlm_status);
    
    assert(memcmp(&PrimaryTlmStatus_s, &PrimaryTlmStatus_d, sizeof(PrimaryTlmStatusMsg)) == 0);
    printf("\n");

    printf("***PrimaryCarStatusMsg***\n");
    uint8_t buffer_PrimaryCarStatus[PRIMARY_CAR_STATUS_SIZE];
    PrimaryCarStatusMsg PrimaryCarStatus_s = { 0, 2, 2 };
    
    printf("Before: %d %d %d\n", PrimaryCarStatus_s.inverter_l, PrimaryCarStatus_s.inverter_r, PrimaryCarStatus_s.car_status);
    
    serialize_PrimaryCarStatus(buffer_PrimaryCarStatus, &PrimaryCarStatus_s);
    PrimaryCarStatusMsg PrimaryCarStatus_d;
    deserialize_PrimaryCarStatus(buffer_PrimaryCarStatus, &PrimaryCarStatus_d);
    
    printf("After:  %d %d %d\n", PrimaryCarStatus_d.inverter_l, PrimaryCarStatus_d.inverter_r, PrimaryCarStatus_d.car_status);
    
    assert(memcmp(&PrimaryCarStatus_s, &PrimaryCarStatus_d, sizeof(PrimaryCarStatusMsg)) == 0);
    printf("\n");

    printf("***PrimaryDasErrorsMsg***\n");
    uint8_t buffer_PrimaryDasErrors[PRIMARY_DAS_ERRORS_SIZE];
    PrimaryDasErrorsMsg PrimaryDasErrors_s = { { 57 } };
    
    printf("Before: %hhx\n", PrimaryDasErrors_s.das_error[0]);
    
    serialize_PrimaryDasErrors(buffer_PrimaryDasErrors, &PrimaryDasErrors_s);
    PrimaryDasErrorsMsg PrimaryDasErrors_d;
    deserialize_PrimaryDasErrors(buffer_PrimaryDasErrors, &PrimaryDasErrors_d);
    
    printf("After:  %hhx\n", PrimaryDasErrors_d.das_error[0]);
    
    assert(memcmp(&PrimaryDasErrors_s, &PrimaryDasErrors_d, sizeof(PrimaryDasErrorsMsg)) == 0);
    printf("\n");

    printf("***PrimarySpeedMsg***\n");
    uint8_t buffer_PrimarySpeed[PRIMARY_SPEED_SIZE];
    PrimarySpeedMsg PrimarySpeed_s = { 23499, 17783, 32955, 59664 };
    
    printf("Before: %hu %hu %hu %hu\n", PrimarySpeed_s.encoder_r, PrimarySpeed_s.encoder_l, PrimarySpeed_s.inverter_r, PrimarySpeed_s.inverter_l);
    
    serialize_PrimarySpeed(buffer_PrimarySpeed, &PrimarySpeed_s);
    PrimarySpeedMsg PrimarySpeed_d;
    deserialize_PrimarySpeed(buffer_PrimarySpeed, &PrimarySpeed_d);
    
    printf("After:  %hu %hu %hu %hu\n", PrimarySpeed_d.encoder_r, PrimarySpeed_d.encoder_l, PrimarySpeed_d.inverter_r, PrimarySpeed_d.inverter_l);
    
    assert(memcmp(&PrimarySpeed_s, &PrimarySpeed_d, sizeof(PrimarySpeedMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvVoltageMsg***\n");
    uint8_t buffer_PrimaryHvVoltage[PRIMARY_HV_VOLTAGE_SIZE];
    PrimaryHvVoltageMsg PrimaryHvVoltage_s = { 22960, 50375, 13445, 6836 };
    
    printf("Before: %hu %hu %hu %hu\n", PrimaryHvVoltage_s.pack_voltage, PrimaryHvVoltage_s.bus_voltage, PrimaryHvVoltage_s.max_cell_voltage, PrimaryHvVoltage_s.min_cell_voltage);
    
    serialize_PrimaryHvVoltage(buffer_PrimaryHvVoltage, &PrimaryHvVoltage_s);
    PrimaryHvVoltageMsg PrimaryHvVoltage_d;
    deserialize_PrimaryHvVoltage(buffer_PrimaryHvVoltage, &PrimaryHvVoltage_d);
    
    printf("After:  %hu %hu %hu %hu\n", PrimaryHvVoltage_d.pack_voltage, PrimaryHvVoltage_d.bus_voltage, PrimaryHvVoltage_d.max_cell_voltage, PrimaryHvVoltage_d.min_cell_voltage);
    
    assert(memcmp(&PrimaryHvVoltage_s, &PrimaryHvVoltage_d, sizeof(PrimaryHvVoltageMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvCurrentMsg***\n");
    uint8_t buffer_PrimaryHvCurrent[PRIMARY_HV_CURRENT_SIZE];
    PrimaryHvCurrentMsg PrimaryHvCurrent_s = { 94, 28533 };
    
    printf("Before: %hu %hd\n", PrimaryHvCurrent_s.current, PrimaryHvCurrent_s.power);
    
    serialize_PrimaryHvCurrent(buffer_PrimaryHvCurrent, &PrimaryHvCurrent_s);
    PrimaryHvCurrentMsg PrimaryHvCurrent_d;
    deserialize_PrimaryHvCurrent(buffer_PrimaryHvCurrent, &PrimaryHvCurrent_d);
    
    printf("After:  %hu %hd\n", PrimaryHvCurrent_d.current, PrimaryHvCurrent_d.power);
    
    assert(memcmp(&PrimaryHvCurrent_s, &PrimaryHvCurrent_d, sizeof(PrimaryHvCurrentMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvTempMsg***\n");
    uint8_t buffer_PrimaryHvTemp[PRIMARY_HV_TEMP_SIZE];
    PrimaryHvTempMsg PrimaryHvTemp_s = { 43331, 2070, 32502 };
    
    printf("Before: %hu %hu %hu\n", PrimaryHvTemp_s.average_temp, PrimaryHvTemp_s.max_temp, PrimaryHvTemp_s.min_temp);
    
    serialize_PrimaryHvTemp(buffer_PrimaryHvTemp, &PrimaryHvTemp_s);
    PrimaryHvTempMsg PrimaryHvTemp_d;
    deserialize_PrimaryHvTemp(buffer_PrimaryHvTemp, &PrimaryHvTemp_d);
    
    printf("After:  %hu %hu %hu\n", PrimaryHvTemp_d.average_temp, PrimaryHvTemp_d.max_temp, PrimaryHvTemp_d.min_temp);
    
    assert(memcmp(&PrimaryHvTemp_s, &PrimaryHvTemp_d, sizeof(PrimaryHvTempMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvErrorsMsg***\n");
    uint8_t buffer_PrimaryHvErrors[PRIMARY_HV_ERRORS_SIZE];
    PrimaryHvErrorsMsg PrimaryHvErrors_s = { { 13, 200 }, { 31, 22 } };
    
    printf("Before: %hhx.%hhx %hhx.%hhx\n", PrimaryHvErrors_s.warnings[0], PrimaryHvErrors_s.warnings[1], PrimaryHvErrors_s.errors[0], PrimaryHvErrors_s.errors[1]);
    
    serialize_PrimaryHvErrors(buffer_PrimaryHvErrors, &PrimaryHvErrors_s);
    PrimaryHvErrorsMsg PrimaryHvErrors_d;
    deserialize_PrimaryHvErrors(buffer_PrimaryHvErrors, &PrimaryHvErrors_d);
    
    printf("After:  %hhx.%hhx %hhx.%hhx\n", PrimaryHvErrors_d.warnings[0], PrimaryHvErrors_d.warnings[1], PrimaryHvErrors_d.errors[0], PrimaryHvErrors_d.errors[1]);
    
    assert(memcmp(&PrimaryHvErrors_s, &PrimaryHvErrors_d, sizeof(PrimaryHvErrorsMsg)) == 0);
    printf("\n");

    printf("***PrimaryTsStatusMsg***\n");
    uint8_t buffer_PrimaryTsStatus[PRIMARY_TS_STATUS_SIZE];
    PrimaryTsStatusMsg PrimaryTsStatus_s = { 2 };
    
    printf("Before: %d\n", PrimaryTsStatus_s.ts_status);
    
    serialize_PrimaryTsStatus(buffer_PrimaryTsStatus, &PrimaryTsStatus_s);
    PrimaryTsStatusMsg PrimaryTsStatus_d;
    deserialize_PrimaryTsStatus(buffer_PrimaryTsStatus, &PrimaryTsStatus_d);
    
    printf("After:  %d\n", PrimaryTsStatus_d.ts_status);
    
    assert(memcmp(&PrimaryTsStatus_s, &PrimaryTsStatus_d, sizeof(PrimaryTsStatusMsg)) == 0);
    printf("\n");

    printf("***PrimarySetTsStatusMsg***\n");
    uint8_t buffer_PrimarySetTsStatus[PRIMARY_SET_TS_STATUS_SIZE];
    PrimarySetTsStatusMsg PrimarySetTsStatus_s = { 0 };
    
    printf("Before: %d\n", PrimarySetTsStatus_s.ts_status_set);
    
    serialize_PrimarySetTsStatus(buffer_PrimarySetTsStatus, &PrimarySetTsStatus_s);
    PrimarySetTsStatusMsg PrimarySetTsStatus_d;
    deserialize_PrimarySetTsStatus(buffer_PrimarySetTsStatus, &PrimarySetTsStatus_d);
    
    printf("After:  %d\n", PrimarySetTsStatus_d.ts_status_set);
    
    assert(memcmp(&PrimarySetTsStatus_s, &PrimarySetTsStatus_d, sizeof(PrimarySetTsStatusMsg)) == 0);
    printf("\n");

    printf("***PrimarySetCellBalancingStatusMsg***\n");
    uint8_t buffer_PrimarySetCellBalancingStatus[PRIMARY_SET_CELL_BALANCING_STATUS_SIZE];
    PrimarySetCellBalancingStatusMsg PrimarySetCellBalancingStatus_s = { 1 };
    
    printf("Before: %d\n", PrimarySetCellBalancingStatus_s.set_balancing_status);
    
    serialize_PrimarySetCellBalancingStatus(buffer_PrimarySetCellBalancingStatus, &PrimarySetCellBalancingStatus_s);
    PrimarySetCellBalancingStatusMsg PrimarySetCellBalancingStatus_d;
    deserialize_PrimarySetCellBalancingStatus(buffer_PrimarySetCellBalancingStatus, &PrimarySetCellBalancingStatus_d);
    
    printf("After:  %d\n", PrimarySetCellBalancingStatus_d.set_balancing_status);
    
    assert(memcmp(&PrimarySetCellBalancingStatus_s, &PrimarySetCellBalancingStatus_d, sizeof(PrimarySetCellBalancingStatusMsg)) == 0);
    printf("\n");

    printf("***PrimaryHandcartStatusMsg***\n");
    uint8_t buffer_PrimaryHandcartStatus[PRIMARY_HANDCART_STATUS_SIZE];
    PrimaryHandcartStatusMsg PrimaryHandcartStatus_s = { 1 };
    
    printf("Before: %d\n", PrimaryHandcartStatus_s.connected);
    
    serialize_PrimaryHandcartStatus(buffer_PrimaryHandcartStatus, &PrimaryHandcartStatus_s);
    PrimaryHandcartStatusMsg PrimaryHandcartStatus_d;
    deserialize_PrimaryHandcartStatus(buffer_PrimaryHandcartStatus, &PrimaryHandcartStatus_d);
    
    printf("After:  %d\n", PrimaryHandcartStatus_d.connected);
    
    assert(memcmp(&PrimaryHandcartStatus_s, &PrimaryHandcartStatus_d, sizeof(PrimaryHandcartStatusMsg)) == 0);
    printf("\n");

    printf("***PrimarySteerStatusMsg***\n");
    uint8_t buffer_PrimarySteerStatus[PRIMARY_STEER_STATUS_SIZE];
    PrimarySteerStatusMsg PrimarySteerStatus_s = { 3, 2 };
    
    printf("Before: %d %d\n", PrimarySteerStatus_s.map, PrimarySteerStatus_s.traction_control);
    
    serialize_PrimarySteerStatus(buffer_PrimarySteerStatus, &PrimarySteerStatus_s);
    PrimarySteerStatusMsg PrimarySteerStatus_d;
    deserialize_PrimarySteerStatus(buffer_PrimarySteerStatus, &PrimarySteerStatus_d);
    
    printf("After:  %d %d\n", PrimarySteerStatus_d.map, PrimarySteerStatus_d.traction_control);
    
    assert(memcmp(&PrimarySteerStatus_s, &PrimarySteerStatus_d, sizeof(PrimarySteerStatusMsg)) == 0);
    printf("\n");

    printf("***PrimarySetCarStatusMsg***\n");
    uint8_t buffer_PrimarySetCarStatus[PRIMARY_SET_CAR_STATUS_SIZE];
    PrimarySetCarStatusMsg PrimarySetCarStatus_s = { 1 };
    
    printf("Before: %d\n", PrimarySetCarStatus_s.car_status_set);
    
    serialize_PrimarySetCarStatus(buffer_PrimarySetCarStatus, &PrimarySetCarStatus_s);
    PrimarySetCarStatusMsg PrimarySetCarStatus_d;
    deserialize_PrimarySetCarStatus(buffer_PrimarySetCarStatus, &PrimarySetCarStatus_d);
    
    printf("After:  %d\n", PrimarySetCarStatus_d.car_status_set);
    
    assert(memcmp(&PrimarySetCarStatus_s, &PrimarySetCarStatus_d, sizeof(PrimarySetCarStatusMsg)) == 0);
    printf("\n");

    printf("***PrimarySetPedalsRangeMsg***\n");
    uint8_t buffer_PrimarySetPedalsRange[PRIMARY_SET_PEDALS_RANGE_SIZE];
    PrimarySetPedalsRangeMsg PrimarySetPedalsRange_s = { 0, 1 };
    
    printf("Before: %d %d\n", PrimarySetPedalsRange_s.bound, PrimarySetPedalsRange_s.pedal);
    
    serialize_PrimarySetPedalsRange(buffer_PrimarySetPedalsRange, &PrimarySetPedalsRange_s);
    PrimarySetPedalsRangeMsg PrimarySetPedalsRange_d;
    deserialize_PrimarySetPedalsRange(buffer_PrimarySetPedalsRange, &PrimarySetPedalsRange_d);
    
    printf("After:  %d %d\n", PrimarySetPedalsRange_d.bound, PrimarySetPedalsRange_d.pedal);
    
    assert(memcmp(&PrimarySetPedalsRange_s, &PrimarySetPedalsRange_d, sizeof(PrimarySetPedalsRangeMsg)) == 0);
    printf("\n");

    printf("***PrimaryLvCurrentMsg***\n");
    uint8_t buffer_PrimaryLvCurrent[PRIMARY_LV_CURRENT_SIZE];
    PrimaryLvCurrentMsg PrimaryLvCurrent_s = { 195 };
    
    printf("Before: %hhu\n", PrimaryLvCurrent_s.current);
    
    serialize_PrimaryLvCurrent(buffer_PrimaryLvCurrent, &PrimaryLvCurrent_s);
    PrimaryLvCurrentMsg PrimaryLvCurrent_d;
    deserialize_PrimaryLvCurrent(buffer_PrimaryLvCurrent, &PrimaryLvCurrent_d);
    
    printf("After:  %hhu\n", PrimaryLvCurrent_d.current);
    
    assert(memcmp(&PrimaryLvCurrent_s, &PrimaryLvCurrent_d, sizeof(PrimaryLvCurrentMsg)) == 0);
    printf("\n");

    printf("***PrimaryLvVoltageMsg***\n");
    uint8_t buffer_PrimaryLvVoltage[PRIMARY_LV_VOLTAGE_SIZE];
    PrimaryLvVoltageMsg PrimaryLvVoltage_s = { 20023, 14, 134, 171, 189 };
    
    printf("Before: %hu %hhu %hhu %hhu %hhu\n", PrimaryLvVoltage_s.total_voltage, PrimaryLvVoltage_s.voltage_1, PrimaryLvVoltage_s.voltage_2, PrimaryLvVoltage_s.voltage_3, PrimaryLvVoltage_s.voltage_4);
    
    serialize_PrimaryLvVoltage(buffer_PrimaryLvVoltage, &PrimaryLvVoltage_s);
    PrimaryLvVoltageMsg PrimaryLvVoltage_d;
    deserialize_PrimaryLvVoltage(buffer_PrimaryLvVoltage, &PrimaryLvVoltage_d);
    
    printf("After:  %hu %hhu %hhu %hhu %hhu\n", PrimaryLvVoltage_d.total_voltage, PrimaryLvVoltage_d.voltage_1, PrimaryLvVoltage_d.voltage_2, PrimaryLvVoltage_d.voltage_3, PrimaryLvVoltage_d.voltage_4);
    
    assert(memcmp(&PrimaryLvVoltage_s, &PrimaryLvVoltage_d, sizeof(PrimaryLvVoltageMsg)) == 0);
    printf("\n");

    printf("***PrimaryLvTemperatureMsg***\n");
    uint8_t buffer_PrimaryLvTemperature[PRIMARY_LV_TEMPERATURE_SIZE];
    PrimaryLvTemperatureMsg PrimaryLvTemperature_s = { 229, 139 };
    
    printf("Before: %hhu %hhu\n", PrimaryLvTemperature_s.bp_temperature, PrimaryLvTemperature_s.dcdc_temperature);
    
    serialize_PrimaryLvTemperature(buffer_PrimaryLvTemperature, &PrimaryLvTemperature_s);
    PrimaryLvTemperatureMsg PrimaryLvTemperature_d;
    deserialize_PrimaryLvTemperature(buffer_PrimaryLvTemperature, &PrimaryLvTemperature_d);
    
    printf("After:  %hhu %hhu\n", PrimaryLvTemperature_d.bp_temperature, PrimaryLvTemperature_d.dcdc_temperature);
    
    assert(memcmp(&PrimaryLvTemperature_s, &PrimaryLvTemperature_d, sizeof(PrimaryLvTemperatureMsg)) == 0);
    printf("\n");

    printf("***PrimaryCoolingStatusMsg***\n");
    uint8_t buffer_PrimaryCoolingStatus[PRIMARY_COOLING_STATUS_SIZE];
    PrimaryCoolingStatusMsg PrimaryCoolingStatus_s = { 76, 141, 167 };
    
    printf("Before: %hhu %hhu %hhu\n", PrimaryCoolingStatus_s.hv_fan_speed, PrimaryCoolingStatus_s.lv_fan_speed, PrimaryCoolingStatus_s.pump_speed);
    
    serialize_PrimaryCoolingStatus(buffer_PrimaryCoolingStatus, &PrimaryCoolingStatus_s);
    PrimaryCoolingStatusMsg PrimaryCoolingStatus_d;
    deserialize_PrimaryCoolingStatus(buffer_PrimaryCoolingStatus, &PrimaryCoolingStatus_d);
    
    printf("After:  %hhu %hhu %hhu\n", PrimaryCoolingStatus_d.hv_fan_speed, PrimaryCoolingStatus_d.lv_fan_speed, PrimaryCoolingStatus_d.pump_speed);
    
    assert(memcmp(&PrimaryCoolingStatus_s, &PrimaryCoolingStatus_d, sizeof(PrimaryCoolingStatusMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvCellsVoltageMsg***\n");
    uint8_t buffer_PrimaryHvCellsVoltage[PRIMARY_HV_CELLS_VOLTAGE_SIZE];
    PrimaryHvCellsVoltageMsg PrimaryHvCellsVoltage_s = { 51916, 16683, 34619, 126 };
    
    printf("Before: %hu %hu %hu %hhu\n", PrimaryHvCellsVoltage_s.voltage_0, PrimaryHvCellsVoltage_s.voltage_1, PrimaryHvCellsVoltage_s.voltage_2, PrimaryHvCellsVoltage_s.cell_index);
    
    serialize_PrimaryHvCellsVoltage(buffer_PrimaryHvCellsVoltage, &PrimaryHvCellsVoltage_s);
    PrimaryHvCellsVoltageMsg PrimaryHvCellsVoltage_d;
    deserialize_PrimaryHvCellsVoltage(buffer_PrimaryHvCellsVoltage, &PrimaryHvCellsVoltage_d);
    
    printf("After:  %hu %hu %hu %hhu\n", PrimaryHvCellsVoltage_d.voltage_0, PrimaryHvCellsVoltage_d.voltage_1, PrimaryHvCellsVoltage_d.voltage_2, PrimaryHvCellsVoltage_d.cell_index);
    
    assert(memcmp(&PrimaryHvCellsVoltage_s, &PrimaryHvCellsVoltage_d, sizeof(PrimaryHvCellsVoltageMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvCellsTempMsg***\n");
    uint8_t buffer_PrimaryHvCellsTemp[PRIMARY_HV_CELLS_TEMP_SIZE];
    PrimaryHvCellsTempMsg PrimaryHvCellsTemp_s = { 153, 14, 165, 100, 219, 186, 225, 177 };
    
    printf("Before: %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu\n", PrimaryHvCellsTemp_s.cell_index, PrimaryHvCellsTemp_s.temp_0, PrimaryHvCellsTemp_s.temp_1, PrimaryHvCellsTemp_s.temp_2, PrimaryHvCellsTemp_s.temp_3, PrimaryHvCellsTemp_s.temp_4, PrimaryHvCellsTemp_s.temp_5, PrimaryHvCellsTemp_s.temp_6);
    
    serialize_PrimaryHvCellsTemp(buffer_PrimaryHvCellsTemp, &PrimaryHvCellsTemp_s);
    PrimaryHvCellsTempMsg PrimaryHvCellsTemp_d;
    deserialize_PrimaryHvCellsTemp(buffer_PrimaryHvCellsTemp, &PrimaryHvCellsTemp_d);
    
    printf("After:  %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu\n", PrimaryHvCellsTemp_d.cell_index, PrimaryHvCellsTemp_d.temp_0, PrimaryHvCellsTemp_d.temp_1, PrimaryHvCellsTemp_d.temp_2, PrimaryHvCellsTemp_d.temp_3, PrimaryHvCellsTemp_d.temp_4, PrimaryHvCellsTemp_d.temp_5, PrimaryHvCellsTemp_d.temp_6);
    
    assert(memcmp(&PrimaryHvCellsTemp_s, &PrimaryHvCellsTemp_d, sizeof(PrimaryHvCellsTempMsg)) == 0);
    printf("\n");

    printf("***PrimaryHvCellBalancingStatusMsg***\n");
    uint8_t buffer_PrimaryHvCellBalancingStatus[PRIMARY_HV_CELL_BALANCING_STATUS_SIZE];
    PrimaryHvCellBalancingStatusMsg PrimaryHvCellBalancingStatus_s = { 1 };
    
    printf("Before: %d\n", PrimaryHvCellBalancingStatus_s.balancing_status);
    
    serialize_PrimaryHvCellBalancingStatus(buffer_PrimaryHvCellBalancingStatus, &PrimaryHvCellBalancingStatus_s);
    PrimaryHvCellBalancingStatusMsg PrimaryHvCellBalancingStatus_d;
    deserialize_PrimaryHvCellBalancingStatus(buffer_PrimaryHvCellBalancingStatus, &PrimaryHvCellBalancingStatus_d);
    
    printf("After:  %d\n", PrimaryHvCellBalancingStatus_d.balancing_status);
    
    assert(memcmp(&PrimaryHvCellBalancingStatus_s, &PrimaryHvCellBalancingStatus_d, sizeof(PrimaryHvCellBalancingStatusMsg)) == 0);
    printf("\n");

    printf("***PrimaryInvLSetTorqueMsg***\n");
    uint8_t buffer_PrimaryInvLSetTorque[PRIMARY_INV_L_SET_TORQUE_SIZE];
    PrimaryInvLSetTorqueMsg PrimaryInvLSetTorque_s = { 20, 26, 123 };
    
    printf("Before: %hhu %hhu %hhu\n", PrimaryInvLSetTorque_s.regid, PrimaryInvLSetTorque_s.lsb, PrimaryInvLSetTorque_s.msb);
    
    serialize_PrimaryInvLSetTorque(buffer_PrimaryInvLSetTorque, &PrimaryInvLSetTorque_s);
    PrimaryInvLSetTorqueMsg PrimaryInvLSetTorque_d;
    deserialize_PrimaryInvLSetTorque(buffer_PrimaryInvLSetTorque, &PrimaryInvLSetTorque_d);
    
    printf("After:  %hhu %hhu %hhu\n", PrimaryInvLSetTorque_d.regid, PrimaryInvLSetTorque_d.lsb, PrimaryInvLSetTorque_d.msb);
    
    assert(memcmp(&PrimaryInvLSetTorque_s, &PrimaryInvLSetTorque_d, sizeof(PrimaryInvLSetTorqueMsg)) == 0);
    printf("\n");

    printf("***PrimaryInvLResponseMsg***\n");
    uint8_t buffer_PrimaryInvLResponse[PRIMARY_INV_L_RESPONSE_SIZE];
    PrimaryInvLResponseMsg PrimaryInvLResponse_s = { { 176, 57, 153, 230 }, 208 };
    
    printf("Before: %hhx.%hhx.%hhx.%hhx %hhu\n", PrimaryInvLResponse_s.reg_val[0], PrimaryInvLResponse_s.reg_val[1], PrimaryInvLResponse_s.reg_val[2], PrimaryInvLResponse_s.reg_val[3], PrimaryInvLResponse_s.reg_id);
    
    serialize_PrimaryInvLResponse(buffer_PrimaryInvLResponse, &PrimaryInvLResponse_s);
    PrimaryInvLResponseMsg PrimaryInvLResponse_d;
    deserialize_PrimaryInvLResponse(buffer_PrimaryInvLResponse, &PrimaryInvLResponse_d);
    
    printf("After:  %hhx.%hhx.%hhx.%hhx %hhu\n", PrimaryInvLResponse_d.reg_val[0], PrimaryInvLResponse_d.reg_val[1], PrimaryInvLResponse_d.reg_val[2], PrimaryInvLResponse_d.reg_val[3], PrimaryInvLResponse_d.reg_id);
    
    assert(memcmp(&PrimaryInvLResponse_s, &PrimaryInvLResponse_d, sizeof(PrimaryInvLResponseMsg)) == 0);
    printf("\n");

    return 0;
}