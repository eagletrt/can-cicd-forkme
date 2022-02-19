#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "primary.h"

int main() {

/* primary_SET_ACCELERATOR_RANGE */
    printf("primary_SET_ACCELERATOR_RANGE:\n");
    uint8_t* buffer_primary_set_accelerator_range = (uint8_t*)malloc(sizeof(primary_SET_ACCELERATOR_RANGE));
    
    primary_SET_ACCELERATOR_RANGE primary_set_accelerator_range_s = { -110 };
    serialize_primary_SET_ACCELERATOR_RANGE(buffer_primary_set_accelerator_range, primary_set_accelerator_range_s.sync_state);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_accelerator_range_s.sync_state);
    
    primary_SET_ACCELERATOR_RANGE* primary_set_accelerator_range_d = (primary_SET_ACCELERATOR_RANGE*)malloc(sizeof(primary_SET_ACCELERATOR_RANGE));
    deserialize_primary_SET_ACCELERATOR_RANGE(buffer_primary_set_accelerator_range, primary_set_accelerator_range_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_accelerator_range_d->sync_state);
    
    assert(memcmp(&primary_set_accelerator_range_s, primary_set_accelerator_range_d, sizeof(primary_SET_ACCELERATOR_RANGE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_PEDALS_ADC_RANGES */
    printf("primary_PEDALS_ADC_RANGES:\n");
    uint8_t* buffer_primary_pedals_adc_ranges = (uint8_t*)malloc(sizeof(primary_PEDALS_ADC_RANGES));
    
    primary_PEDALS_ADC_RANGES primary_pedals_adc_ranges_s = { 32339.0, 58729.0, 45549.0, 37992.0 };
    serialize_primary_PEDALS_ADC_RANGES(buffer_primary_pedals_adc_ranges, primary_pedals_adc_ranges_s.accel1_raw_adc_min, primary_pedals_adc_ranges_s.accel1_raw_adc_max, primary_pedals_adc_ranges_s.accel2_raw_adc_min, primary_pedals_adc_ranges_s.accel2_raw_adc_max);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_pedals_adc_ranges_s.accel1_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_s.accel1_raw_adc_max, (long long unsigned int)primary_pedals_adc_ranges_s.accel2_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_s.accel2_raw_adc_max);
    
    primary_PEDALS_ADC_RANGES* primary_pedals_adc_ranges_d = (primary_PEDALS_ADC_RANGES*)malloc(sizeof(primary_PEDALS_ADC_RANGES));
    deserialize_primary_PEDALS_ADC_RANGES(buffer_primary_pedals_adc_ranges, primary_pedals_adc_ranges_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_pedals_adc_ranges_d->accel1_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_d->accel1_raw_adc_max, (long long unsigned int)primary_pedals_adc_ranges_d->accel2_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_d->accel2_raw_adc_max);
    
    assert(memcmp(&primary_pedals_adc_ranges_s, primary_pedals_adc_ranges_d, sizeof(primary_PEDALS_ADC_RANGES)) == 0);
    puts("SUCCESS!\n");
        

/* primary_ACCELERATOR_PEDAL_VAL */
    printf("primary_ACCELERATOR_PEDAL_VAL:\n");
    uint8_t* buffer_primary_accelerator_pedal_val = (uint8_t*)malloc(sizeof(primary_ACCELERATOR_PEDAL_VAL));
    
    primary_ACCELERATOR_PEDAL_VAL primary_accelerator_pedal_val_s = { 80.0 };
    serialize_primary_ACCELERATOR_PEDAL_VAL(buffer_primary_accelerator_pedal_val, primary_accelerator_pedal_val_s.level);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_accelerator_pedal_val_s.level);
    
    primary_ACCELERATOR_PEDAL_VAL* primary_accelerator_pedal_val_d = (primary_ACCELERATOR_PEDAL_VAL*)malloc(sizeof(primary_ACCELERATOR_PEDAL_VAL));
    deserialize_primary_ACCELERATOR_PEDAL_VAL(buffer_primary_accelerator_pedal_val, primary_accelerator_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_accelerator_pedal_val_d->level);
    
    assert(memcmp(&primary_accelerator_pedal_val_s, primary_accelerator_pedal_val_d, sizeof(primary_ACCELERATOR_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* primary_BRAKE_PEDAL_VAL */
    printf("primary_BRAKE_PEDAL_VAL:\n");
    uint8_t* buffer_primary_brake_pedal_val = (uint8_t*)malloc(sizeof(primary_BRAKE_PEDAL_VAL));
    
    primary_BRAKE_PEDAL_VAL primary_brake_pedal_val_s = { 241.0 };
    serialize_primary_BRAKE_PEDAL_VAL(buffer_primary_brake_pedal_val, primary_brake_pedal_val_s.level);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_brake_pedal_val_s.level);
    
    primary_BRAKE_PEDAL_VAL* primary_brake_pedal_val_d = (primary_BRAKE_PEDAL_VAL*)malloc(sizeof(primary_BRAKE_PEDAL_VAL));
    deserialize_primary_BRAKE_PEDAL_VAL(buffer_primary_brake_pedal_val, primary_brake_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_brake_pedal_val_d->level);
    
    assert(memcmp(&primary_brake_pedal_val_s, primary_brake_pedal_val_d, sizeof(primary_BRAKE_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* primary_PCU_STATUS */
    printf("primary_PCU_STATUS:\n");
    uint8_t* buffer_primary_pcu_status = (uint8_t*)malloc(sizeof(primary_PCU_STATUS));
    
    primary_PCU_STATUS primary_pcu_status_s = { {183}, {42} };
    serialize_primary_PCU_STATUS(buffer_primary_pcu_status, primary_pcu_status_s.warnings, primary_pcu_status_s.errors);
    printf("\tSerialized\n\t%hhx %hhx\n", (long long unsigned int)primary_pcu_status_s.warnings[0], (long long unsigned int)primary_pcu_status_s.errors[0]);
    
    primary_PCU_STATUS* primary_pcu_status_d = (primary_PCU_STATUS*)malloc(sizeof(primary_PCU_STATUS));
    deserialize_primary_PCU_STATUS(buffer_primary_pcu_status, primary_pcu_status_d);
    printf("\tDeserialized\n\t%hhx %hhx\n", (long long unsigned int)primary_pcu_status_d->warnings[0], (long long unsigned int)primary_pcu_status_d->errors[0]);
    
    assert(memcmp(&primary_pcu_status_s, primary_pcu_status_d, sizeof(primary_PCU_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_TIMESTAMP */
    printf("primary_TIMESTAMP:\n");
    uint8_t* buffer_primary_timestamp = (uint8_t*)malloc(sizeof(primary_TIMESTAMP));
    
    primary_TIMESTAMP primary_timestamp_s = { 2525501153.0 };
    serialize_primary_TIMESTAMP(buffer_primary_timestamp, primary_timestamp_s.timestamp);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_timestamp_s.timestamp);
    
    primary_TIMESTAMP* primary_timestamp_d = (primary_TIMESTAMP*)malloc(sizeof(primary_TIMESTAMP));
    deserialize_primary_TIMESTAMP(buffer_primary_timestamp, primary_timestamp_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_timestamp_d->timestamp);
    
    assert(memcmp(&primary_timestamp_s, primary_timestamp_d, sizeof(primary_TIMESTAMP)) == 0);
    puts("SUCCESS!\n");
        

/* primary_TLM_STATUS */
    printf("primary_TLM_STATUS:\n");
    uint8_t* buffer_primary_tlm_status = (uint8_t*)malloc(sizeof(primary_TLM_STATUS));
    
    primary_TLM_STATUS primary_tlm_status_s = { -36, -73, 220.0, 106.0 };
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
    
    primary_CAR_STATUS primary_car_status_s = { -81, -78, -54 };
    serialize_primary_CAR_STATUS(buffer_primary_car_status, primary_car_status_s.car_status, primary_car_status_s.inverter_l, primary_car_status_s.inverter_r);
    printf("\tSerialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_s.car_status, (long long int)primary_car_status_s.inverter_l, (long long int)primary_car_status_s.inverter_r);
    
    primary_CAR_STATUS* primary_car_status_d = (primary_CAR_STATUS*)malloc(sizeof(primary_CAR_STATUS));
    deserialize_primary_CAR_STATUS(buffer_primary_car_status, primary_car_status_d);
    printf("\tDeserialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_d->car_status, (long long int)primary_car_status_d->inverter_l, (long long int)primary_car_status_d->inverter_r);
    
    assert(memcmp(&primary_car_status_s, primary_car_status_d, sizeof(primary_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_TLM_STATUS */
    printf("primary_SET_TLM_STATUS:\n");
    uint8_t* buffer_primary_set_tlm_status = (uint8_t*)malloc(sizeof(primary_SET_TLM_STATUS));
    
    primary_SET_TLM_STATUS primary_set_tlm_status_s = { 99, 111, 169.0, 61.0 };
    serialize_primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_s.tlm_status, primary_set_tlm_status_s.race_type, primary_set_tlm_status_s.driver, primary_set_tlm_status_s.circuit);
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_s.tlm_status, (long long int)primary_set_tlm_status_s.race_type, (long long unsigned int)primary_set_tlm_status_s.driver, (long long unsigned int)primary_set_tlm_status_s.circuit);
    
    primary_SET_TLM_STATUS* primary_set_tlm_status_d = (primary_SET_TLM_STATUS*)malloc(sizeof(primary_SET_TLM_STATUS));
    deserialize_primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_d->tlm_status, (long long int)primary_set_tlm_status_d->race_type, (long long unsigned int)primary_set_tlm_status_d->driver, (long long unsigned int)primary_set_tlm_status_d->circuit);
    
    assert(memcmp(&primary_set_tlm_status_s, primary_set_tlm_status_d, sizeof(primary_SET_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_GPS_COORDS */
    printf("primary_GPS_COORDS:\n");
    uint8_t* buffer_primary_gps_coords = (uint8_t*)malloc(sizeof(primary_GPS_COORDS));
    
    primary_GPS_COORDS primary_gps_coords_s = { -1808917313.719, -594628396.814 };
    serialize_primary_GPS_COORDS(buffer_primary_gps_coords, primary_gps_coords_s.latitude, primary_gps_coords_s.longitude);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)primary_gps_coords_s.latitude, (long long int)primary_gps_coords_s.longitude);
    
    primary_GPS_COORDS* primary_gps_coords_d = (primary_GPS_COORDS*)malloc(sizeof(primary_GPS_COORDS));
    deserialize_primary_GPS_COORDS(buffer_primary_gps_coords, primary_gps_coords_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)primary_gps_coords_d->latitude, (long long int)primary_gps_coords_d->longitude);
    
    assert(memcmp(&primary_gps_coords_s, primary_gps_coords_d, sizeof(primary_GPS_COORDS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_GPS_SPEED */
    printf("primary_GPS_SPEED:\n");
    uint8_t* buffer_primary_gps_speed = (uint8_t*)malloc(sizeof(primary_GPS_SPEED));
    
    primary_GPS_SPEED primary_gps_speed_s = { 58738.0 };
    serialize_primary_GPS_SPEED(buffer_primary_gps_speed, primary_gps_speed_s.speed);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_gps_speed_s.speed);
    
    primary_GPS_SPEED* primary_gps_speed_d = (primary_GPS_SPEED*)malloc(sizeof(primary_GPS_SPEED));
    deserialize_primary_GPS_SPEED(buffer_primary_gps_speed, primary_gps_speed_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_gps_speed_d->speed);
    
    assert(memcmp(&primary_gps_speed_s, primary_gps_speed_d, sizeof(primary_GPS_SPEED)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_VOLTAGE */
    printf("primary_HV_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_voltage = (uint8_t*)malloc(sizeof(primary_HV_VOLTAGE));
    
    primary_HV_VOLTAGE primary_hv_voltage_s = { 5453.0, 36230.0, 54485.0, 23378.0 };
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
    
    primary_HV_CURRENT primary_hv_current_s = { 35508.0, -104.0 };
    serialize_primary_HV_CURRENT(buffer_primary_hv_current, primary_hv_current_s.current, primary_hv_current_s.power);
    printf("\tSerialized\n\t%llu %lld\n", (long long unsigned int)primary_hv_current_s.current, (long long int)primary_hv_current_s.power);
    
    primary_HV_CURRENT* primary_hv_current_d = (primary_HV_CURRENT*)malloc(sizeof(primary_HV_CURRENT));
    deserialize_primary_HV_CURRENT(buffer_primary_hv_current, primary_hv_current_d);
    printf("\tDeserialized\n\t%llu %lld\n", (long long unsigned int)primary_hv_current_d->current, (long long int)primary_hv_current_d->power);
    
    assert(memcmp(&primary_hv_current_s, primary_hv_current_d, sizeof(primary_HV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_TEMP */
    printf("primary_HV_TEMP:\n");
    uint8_t* buffer_primary_hv_temp = (uint8_t*)malloc(sizeof(primary_HV_TEMP));
    
    primary_HV_TEMP primary_hv_temp_s = { 4846.0, 10468.0, 18557.0 };
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
    
    primary_HV_ERRORS primary_hv_errors_s = { {77, 236}, {117, 28} };
    serialize_primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_s.warnings, primary_hv_errors_s.errors);
    printf("\tSerialized\n\t%hhx.%hhx %hhx.%hhx\n", (long long unsigned int)primary_hv_errors_s.warnings[0], (long long unsigned int)primary_hv_errors_s.warnings[1], (long long unsigned int)primary_hv_errors_s.errors[0], (long long unsigned int)primary_hv_errors_s.errors[1]);
    
    primary_HV_ERRORS* primary_hv_errors_d = (primary_HV_ERRORS*)malloc(sizeof(primary_HV_ERRORS));
    deserialize_primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_d);
    printf("\tDeserialized\n\t%hhx.%hhx %hhx.%hhx\n", (long long unsigned int)primary_hv_errors_d->warnings[0], (long long unsigned int)primary_hv_errors_d->warnings[1], (long long unsigned int)primary_hv_errors_d->errors[0], (long long unsigned int)primary_hv_errors_d->errors[1]);
    
    assert(memcmp(&primary_hv_errors_s, primary_hv_errors_d, sizeof(primary_HV_ERRORS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_TS_STATUS */
    printf("primary_TS_STATUS:\n");
    uint8_t* buffer_primary_ts_status = (uint8_t*)malloc(sizeof(primary_TS_STATUS));
    
    primary_TS_STATUS primary_ts_status_s = { 95 };
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
    
    primary_SET_TS_STATUS primary_set_ts_status_s = { 91 };
    serialize_primary_SET_TS_STATUS(buffer_primary_set_ts_status, primary_set_ts_status_s.ts_status_set);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_ts_status_s.ts_status_set);
    
    primary_SET_TS_STATUS* primary_set_ts_status_d = (primary_SET_TS_STATUS*)malloc(sizeof(primary_SET_TS_STATUS));
    deserialize_primary_SET_TS_STATUS(buffer_primary_set_ts_status, primary_set_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_ts_status_d->ts_status_set);
    
    assert(memcmp(&primary_set_ts_status_s, primary_set_ts_status_d, sizeof(primary_SET_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_STEER_STATUS */
    printf("primary_STEER_STATUS:\n");
    uint8_t* buffer_primary_steer_status = (uint8_t*)malloc(sizeof(primary_STEER_STATUS));
    
    primary_STEER_STATUS primary_steer_status_s = { -118, -38, 0.0 };
    serialize_primary_STEER_STATUS(buffer_primary_steer_status, primary_steer_status_s.traction_control, primary_steer_status_s.map, primary_steer_status_s.radio_on);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)primary_steer_status_s.traction_control, (long long int)primary_steer_status_s.map, (long long unsigned int)primary_steer_status_s.radio_on);
    
    primary_STEER_STATUS* primary_steer_status_d = (primary_STEER_STATUS*)malloc(sizeof(primary_STEER_STATUS));
    deserialize_primary_STEER_STATUS(buffer_primary_steer_status, primary_steer_status_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)primary_steer_status_d->traction_control, (long long int)primary_steer_status_d->map, (long long unsigned int)primary_steer_status_d->radio_on);
    
    assert(memcmp(&primary_steer_status_s, primary_steer_status_d, sizeof(primary_STEER_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_CAR_STATUS */
    printf("primary_SET_CAR_STATUS:\n");
    uint8_t* buffer_primary_set_car_status = (uint8_t*)malloc(sizeof(primary_SET_CAR_STATUS));
    
    primary_SET_CAR_STATUS primary_set_car_status_s = { -49 };
    serialize_primary_SET_CAR_STATUS(buffer_primary_set_car_status, primary_set_car_status_s.car_status_set);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_car_status_s.car_status_set);
    
    primary_SET_CAR_STATUS* primary_set_car_status_d = (primary_SET_CAR_STATUS*)malloc(sizeof(primary_SET_CAR_STATUS));
    deserialize_primary_SET_CAR_STATUS(buffer_primary_set_car_status, primary_set_car_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_car_status_d->car_status_set);
    
    assert(memcmp(&primary_set_car_status_s, primary_set_car_status_d, sizeof(primary_SET_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_LV_CURRENT */
    printf("primary_LV_CURRENT:\n");
    uint8_t* buffer_primary_lv_current = (uint8_t*)malloc(sizeof(primary_LV_CURRENT));
    
    primary_LV_CURRENT primary_lv_current_s = { 50.0 };
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
    
    primary_LV_VOLTAGE primary_lv_voltage_s = { 106.0, 84.0, 170.0, 110.0, 43725.0 };
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
    
    primary_LV_TEMPERATURE primary_lv_temperature_s = { 23.0, 0, 7569.0 };
    serialize_primary_LV_TEMPERATURE(buffer_primary_lv_temperature, primary_lv_temperature_s.dcdc_temperature, primary_lv_temperature_s.battery_temperature);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_s.dcdc_temperature);
    
    primary_LV_TEMPERATURE* primary_lv_temperature_d = (primary_LV_TEMPERATURE*)malloc(sizeof(primary_LV_TEMPERATURE));
    deserialize_primary_LV_TEMPERATURE(buffer_primary_lv_temperature, primary_lv_temperature_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_d->dcdc_temperature);
    
    assert(memcmp(&primary_lv_temperature_s, primary_lv_temperature_d, sizeof(primary_LV_TEMPERATURE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_COOLING_STATUS */
    printf("primary_COOLING_STATUS:\n");
    uint8_t* buffer_primary_cooling_status = (uint8_t*)malloc(sizeof(primary_COOLING_STATUS));
    
    primary_COOLING_STATUS primary_cooling_status_s = { 187.0, 30.0, 55.0 };
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
    
    primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage_s = { 55.0, 0, 2260.0, 65221.0, 62758.0 };
    serialize_primary_HV_CELLS_VOLTAGE(buffer_primary_hv_cells_voltage, primary_hv_cells_voltage_s.cell_index, primary_hv_cells_voltage_s.voltage_0, primary_hv_cells_voltage_s.voltage_1, primary_hv_cells_voltage_s.voltage_2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_s.cell_index, (long long unsigned int)primary_hv_cells_voltage_s.voltage_0, (long long unsigned int)primary_hv_cells_voltage_s.voltage_1);
    
    primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage_d = (primary_HV_CELLS_VOLTAGE*)malloc(sizeof(primary_HV_CELLS_VOLTAGE));
    deserialize_primary_HV_CELLS_VOLTAGE(buffer_primary_hv_cells_voltage, primary_hv_cells_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_d->cell_index, (long long unsigned int)primary_hv_cells_voltage_d->voltage_0, (long long unsigned int)primary_hv_cells_voltage_d->voltage_1);
    
    assert(memcmp(&primary_hv_cells_voltage_s, primary_hv_cells_voltage_d, sizeof(primary_HV_CELLS_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* primary_HV_CELLS_TEMP */
    printf("primary_HV_CELLS_TEMP:\n");
    uint8_t* buffer_primary_hv_cells_temp = (uint8_t*)malloc(sizeof(primary_HV_CELLS_TEMP));
    
    primary_HV_CELLS_TEMP primary_hv_cells_temp_s = { 173.0, 127.0, 162.0, 24.0, 252.0, 110.0, 21.0, 148.0 };
    serialize_primary_HV_CELLS_TEMP(buffer_primary_hv_cells_temp, primary_hv_cells_temp_s.cell_index, primary_hv_cells_temp_s.temp_0, primary_hv_cells_temp_s.temp_1, primary_hv_cells_temp_s.temp_2, primary_hv_cells_temp_s.temp_3, primary_hv_cells_temp_s.temp_4, primary_hv_cells_temp_s.temp_5, primary_hv_cells_temp_s.temp_6);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_s.cell_index, (long long unsigned int)primary_hv_cells_temp_s.temp_0, (long long unsigned int)primary_hv_cells_temp_s.temp_1, (long long unsigned int)primary_hv_cells_temp_s.temp_2, (long long unsigned int)primary_hv_cells_temp_s.temp_3, (long long unsigned int)primary_hv_cells_temp_s.temp_4, (long long unsigned int)primary_hv_cells_temp_s.temp_5, (long long unsigned int)primary_hv_cells_temp_s.temp_6);
    
    primary_HV_CELLS_TEMP* primary_hv_cells_temp_d = (primary_HV_CELLS_TEMP*)malloc(sizeof(primary_HV_CELLS_TEMP));
    deserialize_primary_HV_CELLS_TEMP(buffer_primary_hv_cells_temp, primary_hv_cells_temp_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_d->cell_index, (long long unsigned int)primary_hv_cells_temp_d->temp_0, (long long unsigned int)primary_hv_cells_temp_d->temp_1, (long long unsigned int)primary_hv_cells_temp_d->temp_2, (long long unsigned int)primary_hv_cells_temp_d->temp_3, (long long unsigned int)primary_hv_cells_temp_d->temp_4, (long long unsigned int)primary_hv_cells_temp_d->temp_5, (long long unsigned int)primary_hv_cells_temp_d->temp_6);
    
    assert(memcmp(&primary_hv_cells_temp_s, primary_hv_cells_temp_d, sizeof(primary_HV_CELLS_TEMP)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_CHG_POWER */
    printf("primary_SET_CHG_POWER:\n");
    uint8_t* buffer_primary_set_chg_power = (uint8_t*)malloc(sizeof(primary_SET_CHG_POWER));
    
    primary_SET_CHG_POWER primary_set_chg_power_s = { 53915.0, 49725.0 };
    serialize_primary_SET_CHG_POWER(buffer_primary_set_chg_power, primary_set_chg_power_s.current, primary_set_chg_power_s.voltage);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_set_chg_power_s.current, (long long unsigned int)primary_set_chg_power_s.voltage);
    
    primary_SET_CHG_POWER* primary_set_chg_power_d = (primary_SET_CHG_POWER*)malloc(sizeof(primary_SET_CHG_POWER));
    deserialize_primary_SET_CHG_POWER(buffer_primary_set_chg_power, primary_set_chg_power_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_set_chg_power_d->current, (long long unsigned int)primary_set_chg_power_d->voltage);
    
    assert(memcmp(&primary_set_chg_power_s, primary_set_chg_power_d, sizeof(primary_SET_CHG_POWER)) == 0);
    puts("SUCCESS!\n");
        

/* primary_CHG_STATUS */
    printf("primary_CHG_STATUS:\n");
    uint8_t* buffer_primary_chg_status = (uint8_t*)malloc(sizeof(primary_CHG_STATUS));
    
    primary_CHG_STATUS primary_chg_status_s = { 37 };
    serialize_primary_CHG_STATUS(buffer_primary_chg_status, primary_chg_status_s.status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_chg_status_s.status);
    
    primary_CHG_STATUS* primary_chg_status_d = (primary_CHG_STATUS*)malloc(sizeof(primary_CHG_STATUS));
    deserialize_primary_CHG_STATUS(buffer_primary_chg_status, primary_chg_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_chg_status_d->status);
    
    assert(memcmp(&primary_chg_status_s, primary_chg_status_d, sizeof(primary_CHG_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_SET_CHG_STATUS */
    printf("primary_SET_CHG_STATUS:\n");
    uint8_t* buffer_primary_set_chg_status = (uint8_t*)malloc(sizeof(primary_SET_CHG_STATUS));
    
    primary_SET_CHG_STATUS primary_set_chg_status_s = { 47 };
    serialize_primary_SET_CHG_STATUS(buffer_primary_set_chg_status, primary_set_chg_status_s.status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_chg_status_s.status);
    
    primary_SET_CHG_STATUS* primary_set_chg_status_d = (primary_SET_CHG_STATUS*)malloc(sizeof(primary_SET_CHG_STATUS));
    deserialize_primary_SET_CHG_STATUS(buffer_primary_set_chg_status, primary_set_chg_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_chg_status_d->status);
    
    assert(memcmp(&primary_set_chg_status_s, primary_set_chg_status_d, sizeof(primary_SET_CHG_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* primary_CHG_SETTINGS */
    printf("primary_CHG_SETTINGS:\n");
    uint8_t* buffer_primary_chg_settings = (uint8_t*)malloc(sizeof(primary_CHG_SETTINGS));
    
    primary_CHG_SETTINGS primary_chg_settings_s = { 126.0 };
    serialize_primary_CHG_SETTINGS(buffer_primary_chg_settings, primary_chg_settings_s.v_cutoff);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_s.v_cutoff);
    
    primary_CHG_SETTINGS* primary_chg_settings_d = (primary_CHG_SETTINGS*)malloc(sizeof(primary_CHG_SETTINGS));
    deserialize_primary_CHG_SETTINGS(buffer_primary_chg_settings, primary_chg_settings_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_d->v_cutoff);
    
    assert(memcmp(&primary_chg_settings_s, primary_chg_settings_d, sizeof(primary_CHG_SETTINGS)) == 0);
    puts("SUCCESS!\n");
        
}