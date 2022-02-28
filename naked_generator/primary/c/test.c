#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "primary.h"

int main() {

/* primary_STEER_VERSION */
    printf("primary_STEER_VERSION:\n");
    uint8_t* buffer_primary_steer_version = (uint8_t*)malloc(sizeof(primary_STEER_VERSION));
    
    primary_STEER_VERSION primary_steer_version_s = { 142.0, 250.0 };
    serialize_primary_STEER_VERSION(buffer_primary_steer_version, primary_steer_version_s.component_version, primary_steer_version_s.cancicd_version);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_steer_version_s.component_version, (long long unsigned int)primary_steer_version_s.cancicd_version);
    
    primary_STEER_VERSION* primary_steer_version_d = (primary_STEER_VERSION*)malloc(sizeof(primary_STEER_VERSION));
    deserialize_primary_STEER_VERSION(buffer_primary_steer_version, primary_steer_version_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_steer_version_d->component_version, (long long unsigned int)primary_steer_version_d->cancicd_version);
    
    assert(memcmp(&primary_steer_version_s, primary_steer_version_d, sizeof(primary_STEER_VERSION)) == 0);
    puts("SUCCESS!\n");
        

/* primary_DAS_VERSION */
    printf("primary_DAS_VERSION:\n");
    uint8_t* buffer_primary_das_version = (uint8_t*)malloc(sizeof(primary_DAS_VERSION));
    
    primary_DAS_VERSION primary_das_version_s = { 231.0, 214.0 };
    serialize_primary_DAS_VERSION(buffer_primary_das_version, primary_das_version_s.component_version, primary_das_version_s.cancicd_version);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_das_version_s.component_version, (long long unsigned int)primary_das_version_s.cancicd_version);
    
    primary_DAS_VERSION* primary_das_version_d = (primary_DAS_VERSION*)malloc(sizeof(primary_DAS_VERSION));
    deserialize_primary_DAS_VERSION(buffer_primary_das_version, primary_das_version_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_das_version_d->component_version, (long long unsigned int)primary_das_version_d->cancicd_version);
    
    assert(memcmp(&primary_das_version_s, primary_das_version_d, sizeof(primary_DAS_VERSION)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_VERSION */
    printf("primary_HV_VERSION:\n");
    uint8_t* buffer_primary_hv_version = (uint8_t*)malloc(sizeof(primary_HV_VERSION));
    
    primary_HV_VERSION primary_hv_version_s = { 91.0, 21.0 };
    serialize_primary_HV_VERSION(buffer_primary_hv_version, primary_hv_version_s.component_version, primary_hv_version_s.cancicd_version);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_hv_version_s.component_version, (long long unsigned int)primary_hv_version_s.cancicd_version);
    
    primary_HV_VERSION* primary_hv_version_d = (primary_HV_VERSION*)malloc(sizeof(primary_HV_VERSION));
    deserialize_primary_HV_VERSION(buffer_primary_hv_version, primary_hv_version_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_hv_version_d->component_version, (long long unsigned int)primary_hv_version_d->cancicd_version);
    
    assert(memcmp(&primary_hv_version_s, primary_hv_version_d, sizeof(primary_HV_VERSION)) == 0);
    puts("SUCCESS!\n");
        

/* primary_LV_VERSION */
    printf("primary_LV_VERSION:\n");
    uint8_t* buffer_primary_lv_version = (uint8_t*)malloc(sizeof(primary_LV_VERSION));
    
    primary_LV_VERSION primary_lv_version_s = { 150.0, 92.0 };
    serialize_primary_LV_VERSION(buffer_primary_lv_version, primary_lv_version_s.component_version, primary_lv_version_s.cancicd_version);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_version_s.component_version, (long long unsigned int)primary_lv_version_s.cancicd_version);
    
    primary_LV_VERSION* primary_lv_version_d = (primary_LV_VERSION*)malloc(sizeof(primary_LV_VERSION));
    deserialize_primary_LV_VERSION(buffer_primary_lv_version, primary_lv_version_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_version_d->component_version, (long long unsigned int)primary_lv_version_d->cancicd_version);
    
    assert(memcmp(&primary_lv_version_s, primary_lv_version_d, sizeof(primary_LV_VERSION)) == 0);
    puts("SUCCESS!\n");
        

/* primary_TLM_VERSION */
    printf("primary_TLM_VERSION:\n");
    uint8_t* buffer_primary_tlm_version = (uint8_t*)malloc(sizeof(primary_TLM_VERSION));
    
    primary_TLM_VERSION primary_tlm_version_s = { 55.0, 220.0 };
    serialize_primary_TLM_VERSION(buffer_primary_tlm_version, primary_tlm_version_s.component_version, primary_tlm_version_s.cancicd_version);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_tlm_version_s.component_version, (long long unsigned int)primary_tlm_version_s.cancicd_version);
    
    primary_TLM_VERSION* primary_tlm_version_d = (primary_TLM_VERSION*)malloc(sizeof(primary_TLM_VERSION));
    deserialize_primary_TLM_VERSION(buffer_primary_tlm_version, primary_tlm_version_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_tlm_version_d->component_version, (long long unsigned int)primary_tlm_version_d->cancicd_version);
    
    assert(memcmp(&primary_tlm_version_s, primary_tlm_version_d, sizeof(primary_TLM_VERSION)) == 0);
    puts("SUCCESS!\n");
        

/* primary_TIMESTAMP */
    printf("primary_TIMESTAMP:\n");
    uint8_t* buffer_primary_timestamp = (uint8_t*)malloc(sizeof(primary_TIMESTAMP));
    
    primary_TIMESTAMP primary_timestamp_s = { 1781418525.0 };
    serialize_primary_TIMESTAMP(buffer_primary_timestamp, primary_timestamp_s.timestamp);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_timestamp_s.timestamp);
    
    primary_TIMESTAMP* primary_timestamp_d = (primary_TIMESTAMP*)malloc(sizeof(primary_TIMESTAMP));
    deserialize_primary_TIMESTAMP(buffer_primary_timestamp, primary_timestamp_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_timestamp_d->timestamp);
    
    assert(memcmp(&primary_timestamp_s, primary_timestamp_d, sizeof(primary_TIMESTAMP)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_TLM_STATUS */
    printf("primary_SET_TLM_STATUS:\n");
    uint8_t* buffer_primary_set_tlm_status = (uint8_t*)malloc(sizeof(primary_SET_TLM_STATUS));
    
    primary_SET_TLM_STATUS primary_set_tlm_status_s = { -81, -78, 74.0, 227.0 };
    serialize_primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_s.tlm_status_set, primary_set_tlm_status_s.race_type, primary_set_tlm_status_s.driver, primary_set_tlm_status_s.circuit);
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_s.tlm_status_set, (long long int)primary_set_tlm_status_s.race_type, (long long unsigned int)primary_set_tlm_status_s.driver, (long long unsigned int)primary_set_tlm_status_s.circuit);
    
    primary_SET_TLM_STATUS* primary_set_tlm_status_d = (primary_SET_TLM_STATUS*)malloc(sizeof(primary_SET_TLM_STATUS));
    deserialize_primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_d->tlm_status_set, (long long int)primary_set_tlm_status_d->race_type, (long long unsigned int)primary_set_tlm_status_d->driver, (long long unsigned int)primary_set_tlm_status_d->circuit);
    
    assert(memcmp(&primary_set_tlm_status_s, primary_set_tlm_status_d, sizeof(primary_SET_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_STEER_SYSTEM_STATUS */
    printf("primary_STEER_SYSTEM_STATUS:\n");
    uint8_t* buffer_primary_steer_system_status = (uint8_t*)malloc(sizeof(primary_STEER_SYSTEM_STATUS));
    
    primary_STEER_SYSTEM_STATUS primary_steer_system_status_s = { 239.0 };
    serialize_primary_STEER_SYSTEM_STATUS(buffer_primary_steer_system_status, primary_steer_system_status_s.soc_temp);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_steer_system_status_s.soc_temp);
    
    primary_STEER_SYSTEM_STATUS* primary_steer_system_status_d = (primary_STEER_SYSTEM_STATUS*)malloc(sizeof(primary_STEER_SYSTEM_STATUS));
    deserialize_primary_STEER_SYSTEM_STATUS(buffer_primary_steer_system_status, primary_steer_system_status_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_steer_system_status_d->soc_temp);
    
    assert(memcmp(&primary_steer_system_status_s, primary_steer_system_status_d, sizeof(primary_STEER_SYSTEM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_TLM_STATUS */
    printf("primary_TLM_STATUS:\n");
    uint8_t* buffer_primary_tlm_status = (uint8_t*)malloc(sizeof(primary_TLM_STATUS));
    
    primary_TLM_STATUS primary_tlm_status_s = { 41, -67, 212.0, 19.0 };
    serialize_primary_TLM_STATUS(buffer_primary_tlm_status, primary_tlm_status_s.tlm_status, primary_tlm_status_s.race_type, primary_tlm_status_s.driver, primary_tlm_status_s.circuit);
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_tlm_status_s.tlm_status, (long long int)primary_tlm_status_s.race_type, (long long unsigned int)primary_tlm_status_s.driver, (long long unsigned int)primary_tlm_status_s.circuit);
    
    primary_TLM_STATUS* primary_tlm_status_d = (primary_TLM_STATUS*)malloc(sizeof(primary_TLM_STATUS));
    deserialize_primary_TLM_STATUS(buffer_primary_tlm_status, primary_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_tlm_status_d->tlm_status, (long long int)primary_tlm_status_d->race_type, (long long unsigned int)primary_tlm_status_d->driver, (long long unsigned int)primary_tlm_status_d->circuit);
    
    assert(memcmp(&primary_tlm_status_s, primary_tlm_status_d, sizeof(primary_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_CAR_STATUS */
    printf("primary_CAR_STATUS:\n");
    uint8_t* buffer_primary_car_status = (uint8_t*)malloc(sizeof(primary_CAR_STATUS));
    
    primary_CAR_STATUS primary_car_status_s = { 13, -38, 101 };
    serialize_primary_CAR_STATUS(buffer_primary_car_status, primary_car_status_s.inverter_l, primary_car_status_s.inverter_r, primary_car_status_s.car_status);
    printf("\tSerialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_s.inverter_l, (long long int)primary_car_status_s.inverter_r, (long long int)primary_car_status_s.car_status);
    
    primary_CAR_STATUS* primary_car_status_d = (primary_CAR_STATUS*)malloc(sizeof(primary_CAR_STATUS));
    deserialize_primary_CAR_STATUS(buffer_primary_car_status, primary_car_status_d);
    printf("\tDeserialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_d->inverter_l, (long long int)primary_car_status_d->inverter_r, (long long int)primary_car_status_d->car_status);
    
    assert(memcmp(&primary_car_status_s, primary_car_status_d, sizeof(primary_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SPEED */
    printf("primary_SPEED:\n");
    uint8_t* buffer_primary_speed = (uint8_t*)malloc(sizeof(primary_SPEED));
    
    primary_SPEED primary_speed_s = { 5453.0, 36230.0, 54485.0, 23378.0 };
    serialize_primary_SPEED(buffer_primary_speed, primary_speed_s.encoder_r, primary_speed_s.encoder_l, primary_speed_s.inverter_r, primary_speed_s.inverter_l);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_speed_s.encoder_r, (long long unsigned int)primary_speed_s.encoder_l, (long long unsigned int)primary_speed_s.inverter_r, (long long unsigned int)primary_speed_s.inverter_l);
    
    primary_SPEED* primary_speed_d = (primary_SPEED*)malloc(sizeof(primary_SPEED));
    deserialize_primary_SPEED(buffer_primary_speed, primary_speed_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_speed_d->encoder_r, (long long unsigned int)primary_speed_d->encoder_l, (long long unsigned int)primary_speed_d->inverter_r, (long long unsigned int)primary_speed_d->inverter_l);
    
    assert(memcmp(&primary_speed_s, primary_speed_d, sizeof(primary_SPEED)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_VOLTAGE */
    printf("primary_HV_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_voltage = (uint8_t*)malloc(sizeof(primary_HV_VOLTAGE));
    
    primary_HV_VOLTAGE primary_hv_voltage_s = { 35508.0, 19503.0, 4846.0, 10468.0 };
    serialize_primary_HV_VOLTAGE(buffer_primary_hv_voltage, primary_hv_voltage_s.pack_voltage, primary_hv_voltage_s.bus_voltage, primary_hv_voltage_s.max_cell_voltage, primary_hv_voltage_s.min_cell_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_voltage_s.pack_voltage, (long long unsigned int)primary_hv_voltage_s.bus_voltage, (long long unsigned int)primary_hv_voltage_s.max_cell_voltage, (long long unsigned int)primary_hv_voltage_s.min_cell_voltage);
    
    primary_HV_VOLTAGE* primary_hv_voltage_d = (primary_HV_VOLTAGE*)malloc(sizeof(primary_HV_VOLTAGE));
    deserialize_primary_HV_VOLTAGE(buffer_primary_hv_voltage, primary_hv_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_voltage_d->pack_voltage, (long long unsigned int)primary_hv_voltage_d->bus_voltage, (long long unsigned int)primary_hv_voltage_d->max_cell_voltage, (long long unsigned int)primary_hv_voltage_d->min_cell_voltage);
    
    assert(memcmp(&primary_hv_voltage_s, primary_hv_voltage_d, sizeof(primary_HV_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_CURRENT */
    printf("primary_HV_CURRENT:\n");
    uint8_t* buffer_primary_hv_current = (uint8_t*)malloc(sizeof(primary_HV_CURRENT));
    
    primary_HV_CURRENT primary_hv_current_s = { -112.0, 115.0 };
    serialize_primary_HV_CURRENT(buffer_primary_hv_current, primary_hv_current_s.current, primary_hv_current_s.power);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)primary_hv_current_s.current, (long long int)primary_hv_current_s.power);
    
    primary_HV_CURRENT* primary_hv_current_d = (primary_HV_CURRENT*)malloc(sizeof(primary_HV_CURRENT));
    deserialize_primary_HV_CURRENT(buffer_primary_hv_current, primary_hv_current_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)primary_hv_current_d->current, (long long int)primary_hv_current_d->power);
    
    assert(memcmp(&primary_hv_current_s, primary_hv_current_d, sizeof(primary_HV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_TEMP */
    printf("primary_HV_TEMP:\n");
    uint8_t* buffer_primary_hv_temp = (uint8_t*)malloc(sizeof(primary_HV_TEMP));
    
    primary_HV_TEMP primary_hv_temp_s = { 40440.0, 40639.0, 33920.0 };
    serialize_primary_HV_TEMP(buffer_primary_hv_temp, primary_hv_temp_s.average_temp, primary_hv_temp_s.max_temp, primary_hv_temp_s.min_temp);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_temp_s.average_temp, (long long unsigned int)primary_hv_temp_s.max_temp, (long long unsigned int)primary_hv_temp_s.min_temp);
    
    primary_HV_TEMP* primary_hv_temp_d = (primary_HV_TEMP*)malloc(sizeof(primary_HV_TEMP));
    deserialize_primary_HV_TEMP(buffer_primary_hv_temp, primary_hv_temp_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_temp_d->average_temp, (long long unsigned int)primary_hv_temp_d->max_temp, (long long unsigned int)primary_hv_temp_d->min_temp);
    
    assert(memcmp(&primary_hv_temp_s, primary_hv_temp_d, sizeof(primary_HV_TEMP)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_ERRORS */
    printf("primary_HV_ERRORS:\n");
    uint8_t* buffer_primary_hv_errors = (uint8_t*)malloc(sizeof(primary_HV_ERRORS));
    
    primary_HV_ERRORS primary_hv_errors_s = { {77}, {236} };
    serialize_primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_s.warnings, primary_hv_errors_s.errors);
    printf("\tSerialized\n\t%hhx %hhx\n", (long long unsigned int)primary_hv_errors_s.warnings[0], (long long unsigned int)primary_hv_errors_s.errors[0]);
    
    primary_HV_ERRORS* primary_hv_errors_d = (primary_HV_ERRORS*)malloc(sizeof(primary_HV_ERRORS));
    deserialize_primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_d);
    printf("\tDeserialized\n\t%hhx %hhx\n", (long long unsigned int)primary_hv_errors_d->warnings[0], (long long unsigned int)primary_hv_errors_d->errors[0]);
    
    assert(memcmp(&primary_hv_errors_s, primary_hv_errors_d, sizeof(primary_HV_ERRORS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_TS_STATUS */
    printf("primary_TS_STATUS:\n");
    uint8_t* buffer_primary_ts_status = (uint8_t*)malloc(sizeof(primary_TS_STATUS));
    
    primary_TS_STATUS primary_ts_status_s = { 24 };
    serialize_primary_TS_STATUS(buffer_primary_ts_status, primary_ts_status_s.ts_status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_ts_status_s.ts_status);
    
    primary_TS_STATUS* primary_ts_status_d = (primary_TS_STATUS*)malloc(sizeof(primary_TS_STATUS));
    deserialize_primary_TS_STATUS(buffer_primary_ts_status, primary_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_ts_status_d->ts_status);
    
    assert(memcmp(&primary_ts_status_s, primary_ts_status_d, sizeof(primary_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_TS_STATUS */
    printf("primary_SET_TS_STATUS:\n");
    uint8_t* buffer_primary_set_ts_status = (uint8_t*)malloc(sizeof(primary_SET_TS_STATUS));
    
    primary_SET_TS_STATUS primary_set_ts_status_s = { -70 };
    serialize_primary_SET_TS_STATUS(buffer_primary_set_ts_status, primary_set_ts_status_s.ts_status_set);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_ts_status_s.ts_status_set);
    
    primary_SET_TS_STATUS* primary_set_ts_status_d = (primary_SET_TS_STATUS*)malloc(sizeof(primary_SET_TS_STATUS));
    deserialize_primary_SET_TS_STATUS(buffer_primary_set_ts_status, primary_set_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_ts_status_d->ts_status_set);
    
    assert(memcmp(&primary_set_ts_status_s, primary_set_ts_status_d, sizeof(primary_SET_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_CELL_BALANCING_STATUS */
    printf("primary_SET_CELL_BALANCING_STATUS:\n");
    uint8_t* buffer_primary_set_cell_balancing_status = (uint8_t*)malloc(sizeof(primary_SET_CELL_BALANCING_STATUS));
    
    primary_SET_CELL_BALANCING_STATUS primary_set_cell_balancing_status_s = { 65 };
    serialize_primary_SET_CELL_BALANCING_STATUS(buffer_primary_set_cell_balancing_status, primary_set_cell_balancing_status_s.set_balancing_status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_cell_balancing_status_s.set_balancing_status);
    
    primary_SET_CELL_BALANCING_STATUS* primary_set_cell_balancing_status_d = (primary_SET_CELL_BALANCING_STATUS*)malloc(sizeof(primary_SET_CELL_BALANCING_STATUS));
    deserialize_primary_SET_CELL_BALANCING_STATUS(buffer_primary_set_cell_balancing_status, primary_set_cell_balancing_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_cell_balancing_status_d->set_balancing_status);
    
    assert(memcmp(&primary_set_cell_balancing_status_s, primary_set_cell_balancing_status_d, sizeof(primary_SET_CELL_BALANCING_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HANDCART_STATUS */
    printf("primary_HANDCART_STATUS:\n");
    uint8_t* buffer_primary_handcart_status = (uint8_t*)malloc(sizeof(primary_HANDCART_STATUS));
    
    primary_HANDCART_STATUS primary_handcart_status_s = { 0.0 };
    serialize_primary_HANDCART_STATUS(buffer_primary_handcart_status, primary_handcart_status_s.connected);
    printf("\tSerialized\n\t%lld\n", (long long unsigned int)primary_handcart_status_s.connected);
    
    primary_HANDCART_STATUS* primary_handcart_status_d = (primary_HANDCART_STATUS*)malloc(sizeof(primary_HANDCART_STATUS));
    deserialize_primary_HANDCART_STATUS(buffer_primary_handcart_status, primary_handcart_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long unsigned int)primary_handcart_status_d->connected);
    
    assert(memcmp(&primary_handcart_status_s, primary_handcart_status_d, sizeof(primary_HANDCART_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_STEER_STATUS */
    printf("primary_STEER_STATUS:\n");
    uint8_t* buffer_primary_steer_status = (uint8_t*)malloc(sizeof(primary_STEER_STATUS));
    
    primary_STEER_STATUS primary_steer_status_s = { 95, 91 };
    serialize_primary_STEER_STATUS(buffer_primary_steer_status, primary_steer_status_s.traction_control, primary_steer_status_s.map);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)primary_steer_status_s.traction_control, (long long int)primary_steer_status_s.map);
    
    primary_STEER_STATUS* primary_steer_status_d = (primary_STEER_STATUS*)malloc(sizeof(primary_STEER_STATUS));
    deserialize_primary_STEER_STATUS(buffer_primary_steer_status, primary_steer_status_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)primary_steer_status_d->traction_control, (long long int)primary_steer_status_d->map);
    
    assert(memcmp(&primary_steer_status_s, primary_steer_status_d, sizeof(primary_STEER_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_CAR_STATUS */
    printf("primary_SET_CAR_STATUS:\n");
    uint8_t* buffer_primary_set_car_status = (uint8_t*)malloc(sizeof(primary_SET_CAR_STATUS));
    
    primary_SET_CAR_STATUS primary_set_car_status_s = { -118 };
    serialize_primary_SET_CAR_STATUS(buffer_primary_set_car_status, primary_set_car_status_s.car_status_set);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_car_status_s.car_status_set);
    
    primary_SET_CAR_STATUS* primary_set_car_status_d = (primary_SET_CAR_STATUS*)malloc(sizeof(primary_SET_CAR_STATUS));
    deserialize_primary_SET_CAR_STATUS(buffer_primary_set_car_status, primary_set_car_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_car_status_d->car_status_set);
    
    assert(memcmp(&primary_set_car_status_s, primary_set_car_status_d, sizeof(primary_SET_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_PEDALS_RANGE */
    printf("primary_SET_PEDALS_RANGE:\n");
    uint8_t* buffer_primary_set_pedals_range = (uint8_t*)malloc(sizeof(primary_SET_PEDALS_RANGE));
    
    primary_SET_PEDALS_RANGE primary_set_pedals_range_s = { -38, 0 };
    serialize_primary_SET_PEDALS_RANGE(buffer_primary_set_pedals_range, primary_set_pedals_range_s.bound, primary_set_pedals_range_s.pedal);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)primary_set_pedals_range_s.bound, (long long int)primary_set_pedals_range_s.pedal);
    
    primary_SET_PEDALS_RANGE* primary_set_pedals_range_d = (primary_SET_PEDALS_RANGE*)malloc(sizeof(primary_SET_PEDALS_RANGE));
    deserialize_primary_SET_PEDALS_RANGE(buffer_primary_set_pedals_range, primary_set_pedals_range_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)primary_set_pedals_range_d->bound, (long long int)primary_set_pedals_range_d->pedal);
    
    assert(memcmp(&primary_set_pedals_range_s, primary_set_pedals_range_d, sizeof(primary_SET_PEDALS_RANGE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_LV_CURRENT */
    printf("primary_LV_CURRENT:\n");
    uint8_t* buffer_primary_lv_current = (uint8_t*)malloc(sizeof(primary_LV_CURRENT));
    
    primary_LV_CURRENT primary_lv_current_s = { 249.0 };
    serialize_primary_LV_CURRENT(buffer_primary_lv_current, primary_lv_current_s.current);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_lv_current_s.current);
    
    primary_LV_CURRENT* primary_lv_current_d = (primary_LV_CURRENT*)malloc(sizeof(primary_LV_CURRENT));
    deserialize_primary_LV_CURRENT(buffer_primary_lv_current, primary_lv_current_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_lv_current_d->current);
    
    assert(memcmp(&primary_lv_current_s, primary_lv_current_d, sizeof(primary_LV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* primary_LV_VOLTAGE */
    printf("primary_LV_VOLTAGE:\n");
    uint8_t* buffer_primary_lv_voltage = (uint8_t*)malloc(sizeof(primary_LV_VOLTAGE));
    
    primary_LV_VOLTAGE primary_lv_voltage_s = { 58.0, 79.0, 50.0, 106.0, 21588.0 };
    serialize_primary_LV_VOLTAGE(buffer_primary_lv_voltage, primary_lv_voltage_s.voltage_1, primary_lv_voltage_s.voltage_2, primary_lv_voltage_s.voltage_3, primary_lv_voltage_s.voltage_4, primary_lv_voltage_s.total_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)primary_lv_voltage_s.voltage_1, (long long unsigned int)primary_lv_voltage_s.voltage_2, (long long unsigned int)primary_lv_voltage_s.voltage_3, (long long unsigned int)primary_lv_voltage_s.voltage_4, (long long unsigned int)primary_lv_voltage_s.total_voltage);
    
    primary_LV_VOLTAGE* primary_lv_voltage_d = (primary_LV_VOLTAGE*)malloc(sizeof(primary_LV_VOLTAGE));
    deserialize_primary_LV_VOLTAGE(buffer_primary_lv_voltage, primary_lv_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)primary_lv_voltage_d->voltage_1, (long long unsigned int)primary_lv_voltage_d->voltage_2, (long long unsigned int)primary_lv_voltage_d->voltage_3, (long long unsigned int)primary_lv_voltage_d->voltage_4, (long long unsigned int)primary_lv_voltage_d->total_voltage);
    
    assert(memcmp(&primary_lv_voltage_s, primary_lv_voltage_d, sizeof(primary_LV_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_LV_TEMPERATURE */
    printf("primary_LV_TEMPERATURE:\n");
    uint8_t* buffer_primary_lv_temperature = (uint8_t*)malloc(sizeof(primary_LV_TEMPERATURE));
    
    primary_LV_TEMPERATURE primary_lv_temperature_s = { 170.0, 0, 28203.0 };
    serialize_primary_LV_TEMPERATURE(buffer_primary_lv_temperature, primary_lv_temperature_s.dcdc_temperature, primary_lv_temperature_s.bp_temperature);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_s.dcdc_temperature, (long long unsigned int)primary_lv_temperature_s.bp_temperature);
    
    primary_LV_TEMPERATURE* primary_lv_temperature_d = (primary_LV_TEMPERATURE*)malloc(sizeof(primary_LV_TEMPERATURE));
    deserialize_primary_LV_TEMPERATURE(buffer_primary_lv_temperature, primary_lv_temperature_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_d->dcdc_temperature, (long long unsigned int)primary_lv_temperature_d->bp_temperature);
    
    assert(memcmp(&primary_lv_temperature_s, primary_lv_temperature_d, sizeof(primary_LV_TEMPERATURE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_COOLING_STATUS */
    printf("primary_COOLING_STATUS:\n");
    uint8_t* buffer_primary_cooling_status = (uint8_t*)malloc(sizeof(primary_COOLING_STATUS));
    
    primary_COOLING_STATUS primary_cooling_status_s = { 170.0, 23.0, 29.0 };
    serialize_primary_COOLING_STATUS(buffer_primary_cooling_status, primary_cooling_status_s.hv_fan_speed, primary_cooling_status_s.lv_fan_speed, primary_cooling_status_s.pump_speed);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_cooling_status_s.hv_fan_speed, (long long unsigned int)primary_cooling_status_s.lv_fan_speed, (long long unsigned int)primary_cooling_status_s.pump_speed);
    
    primary_COOLING_STATUS* primary_cooling_status_d = (primary_COOLING_STATUS*)malloc(sizeof(primary_COOLING_STATUS));
    deserialize_primary_COOLING_STATUS(buffer_primary_cooling_status, primary_cooling_status_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_cooling_status_d->hv_fan_speed, (long long unsigned int)primary_cooling_status_d->lv_fan_speed, (long long unsigned int)primary_cooling_status_d->pump_speed);
    
    assert(memcmp(&primary_cooling_status_s, primary_cooling_status_d, sizeof(primary_COOLING_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_CELLS_VOLTAGE */
    printf("primary_HV_CELLS_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_cells_voltage = (uint8_t*)malloc(sizeof(primary_HV_CELLS_VOLTAGE));
    
    primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage_s = { 187.0, 0, 7893.0, 14256.0, 14246.0 };
    serialize_primary_HV_CELLS_VOLTAGE(buffer_primary_hv_cells_voltage, primary_hv_cells_voltage_s.cell_index, primary_hv_cells_voltage_s.voltage_0, primary_hv_cells_voltage_s.voltage_1, primary_hv_cells_voltage_s.voltage_2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_s.cell_index, (long long unsigned int)primary_hv_cells_voltage_s.voltage_0, (long long unsigned int)primary_hv_cells_voltage_s.voltage_1, (long long unsigned int)primary_hv_cells_voltage_s.voltage_2);
    
    primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage_d = (primary_HV_CELLS_VOLTAGE*)malloc(sizeof(primary_HV_CELLS_VOLTAGE));
    deserialize_primary_HV_CELLS_VOLTAGE(buffer_primary_hv_cells_voltage, primary_hv_cells_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_d->cell_index, (long long unsigned int)primary_hv_cells_voltage_d->voltage_0, (long long unsigned int)primary_hv_cells_voltage_d->voltage_1, (long long unsigned int)primary_hv_cells_voltage_d->voltage_2);
    
    assert(memcmp(&primary_hv_cells_voltage_s, primary_hv_cells_voltage_d, sizeof(primary_HV_CELLS_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_CELLS_TEMP */
    printf("primary_HV_CELLS_TEMP:\n");
    uint8_t* buffer_primary_hv_cells_temp = (uint8_t*)malloc(sizeof(primary_HV_CELLS_TEMP));
    
    primary_HV_CELLS_TEMP primary_hv_cells_temp_s = { 8.0, 254.0, 245.0, 173.0, 127.0, 162.0, 24.0, 252.0 };
    serialize_primary_HV_CELLS_TEMP(buffer_primary_hv_cells_temp, primary_hv_cells_temp_s.cell_index, primary_hv_cells_temp_s.temp_0, primary_hv_cells_temp_s.temp_1, primary_hv_cells_temp_s.temp_2, primary_hv_cells_temp_s.temp_3, primary_hv_cells_temp_s.temp_4, primary_hv_cells_temp_s.temp_5, primary_hv_cells_temp_s.temp_6);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_s.cell_index, (long long unsigned int)primary_hv_cells_temp_s.temp_0, (long long unsigned int)primary_hv_cells_temp_s.temp_1, (long long unsigned int)primary_hv_cells_temp_s.temp_2, (long long unsigned int)primary_hv_cells_temp_s.temp_3, (long long unsigned int)primary_hv_cells_temp_s.temp_4, (long long unsigned int)primary_hv_cells_temp_s.temp_5, (long long unsigned int)primary_hv_cells_temp_s.temp_6);
    
    primary_HV_CELLS_TEMP* primary_hv_cells_temp_d = (primary_HV_CELLS_TEMP*)malloc(sizeof(primary_HV_CELLS_TEMP));
    deserialize_primary_HV_CELLS_TEMP(buffer_primary_hv_cells_temp, primary_hv_cells_temp_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_d->cell_index, (long long unsigned int)primary_hv_cells_temp_d->temp_0, (long long unsigned int)primary_hv_cells_temp_d->temp_1, (long long unsigned int)primary_hv_cells_temp_d->temp_2, (long long unsigned int)primary_hv_cells_temp_d->temp_3, (long long unsigned int)primary_hv_cells_temp_d->temp_4, (long long unsigned int)primary_hv_cells_temp_d->temp_5, (long long unsigned int)primary_hv_cells_temp_d->temp_6);
    
    assert(memcmp(&primary_hv_cells_temp_s, primary_hv_cells_temp_d, sizeof(primary_HV_CELLS_TEMP)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_CELL_BALANCING_STATUS */
    printf("primary_HV_CELL_BALANCING_STATUS:\n");
    uint8_t* buffer_primary_hv_cell_balancing_status = (uint8_t*)malloc(sizeof(primary_HV_CELL_BALANCING_STATUS));
    
    primary_HV_CELL_BALANCING_STATUS primary_hv_cell_balancing_status_s = { -18 };
    serialize_primary_HV_CELL_BALANCING_STATUS(buffer_primary_hv_cell_balancing_status, primary_hv_cell_balancing_status_s.balancing_status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_hv_cell_balancing_status_s.balancing_status);
    
    primary_HV_CELL_BALANCING_STATUS* primary_hv_cell_balancing_status_d = (primary_HV_CELL_BALANCING_STATUS*)malloc(sizeof(primary_HV_CELL_BALANCING_STATUS));
    deserialize_primary_HV_CELL_BALANCING_STATUS(buffer_primary_hv_cell_balancing_status, primary_hv_cell_balancing_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_hv_cell_balancing_status_d->balancing_status);
    
    assert(memcmp(&primary_hv_cell_balancing_status_s, primary_hv_cell_balancing_status_d, sizeof(primary_HV_CELL_BALANCING_STATUS)) == 0);
    puts("SUCCESS!\n");
        
}