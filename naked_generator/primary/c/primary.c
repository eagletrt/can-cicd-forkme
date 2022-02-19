#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "primary.h"

/* primary_SET_ACCELERATOR_RANGE */
size_t serialize_primary_SET_ACCELERATOR_RANGE(uint8_t* buffer, primary_Sync_State sync_state) {
    primary_SET_ACCELERATOR_RANGE primary_set_accelerator_range = { sync_state };
	// assert(buf_len >= sizeof(primary_SET_ACCELERATOR_RANGE));
	memcpy(buffer, &primary_set_accelerator_range, sizeof(primary_SET_ACCELERATOR_RANGE));
    return sizeof(primary_SET_ACCELERATOR_RANGE);
} 
size_t deserialize_primary_SET_ACCELERATOR_RANGE(uint8_t* buffer, primary_SET_ACCELERATOR_RANGE* primary_set_accelerator_range) {
	// assert(buf_len >= sizeof(primary_SET_ACCELERATOR_RANGE));
	memcpy(primary_set_accelerator_range, buffer, sizeof(primary_SET_ACCELERATOR_RANGE));
    return sizeof(primary_SET_ACCELERATOR_RANGE);
}
/* primary_PEDALS_ADC_RANGES */
size_t serialize_primary_PEDALS_ADC_RANGES(uint8_t* buffer, uint16_t accel1_raw_adc_min, uint16_t accel1_raw_adc_max, uint16_t accel2_raw_adc_min, uint16_t accel2_raw_adc_max) {
    primary_PEDALS_ADC_RANGES primary_pedals_adc_ranges = { accel1_raw_adc_min, accel1_raw_adc_max, accel2_raw_adc_min, accel2_raw_adc_max };
	// assert(buf_len >= sizeof(primary_PEDALS_ADC_RANGES));
	memcpy(buffer, &primary_pedals_adc_ranges, sizeof(primary_PEDALS_ADC_RANGES));
    return sizeof(primary_PEDALS_ADC_RANGES);
} 
size_t deserialize_primary_PEDALS_ADC_RANGES(uint8_t* buffer, primary_PEDALS_ADC_RANGES* primary_pedals_adc_ranges) {
	// assert(buf_len >= sizeof(primary_PEDALS_ADC_RANGES));
	memcpy(primary_pedals_adc_ranges, buffer, sizeof(primary_PEDALS_ADC_RANGES));
    return sizeof(primary_PEDALS_ADC_RANGES);
}
/* primary_ACCELERATOR_PEDAL_VAL */
size_t serialize_primary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, uint8_t level) {
    primary_ACCELERATOR_PEDAL_VAL primary_accelerator_pedal_val = { level };
	// assert(buf_len >= sizeof(primary_ACCELERATOR_PEDAL_VAL));
	memcpy(buffer, &primary_accelerator_pedal_val, sizeof(primary_ACCELERATOR_PEDAL_VAL));
    return sizeof(primary_ACCELERATOR_PEDAL_VAL);
} 
size_t deserialize_primary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, primary_ACCELERATOR_PEDAL_VAL* primary_accelerator_pedal_val) {
	// assert(buf_len >= sizeof(primary_ACCELERATOR_PEDAL_VAL));
	memcpy(primary_accelerator_pedal_val, buffer, sizeof(primary_ACCELERATOR_PEDAL_VAL));
    return sizeof(primary_ACCELERATOR_PEDAL_VAL);
}
/* primary_BRAKE_PEDAL_VAL */
size_t serialize_primary_BRAKE_PEDAL_VAL(uint8_t* buffer, uint8_t level) {
    primary_BRAKE_PEDAL_VAL primary_brake_pedal_val = { level };
	// assert(buf_len >= sizeof(primary_BRAKE_PEDAL_VAL));
	memcpy(buffer, &primary_brake_pedal_val, sizeof(primary_BRAKE_PEDAL_VAL));
    return sizeof(primary_BRAKE_PEDAL_VAL);
} 
size_t deserialize_primary_BRAKE_PEDAL_VAL(uint8_t* buffer, primary_BRAKE_PEDAL_VAL* primary_brake_pedal_val) {
	// assert(buf_len >= sizeof(primary_BRAKE_PEDAL_VAL));
	memcpy(primary_brake_pedal_val, buffer, sizeof(primary_BRAKE_PEDAL_VAL));
    return sizeof(primary_BRAKE_PEDAL_VAL);
}
/* primary_PCU_STATUS */
size_t serialize_primary_PCU_STATUS(uint8_t* buffer, primary_pcu_flags warnings, primary_pcu_flags errors) {
    primary_PCU_STATUS primary_pcu_status = { {warnings[0]}, {errors[0]} };
	// assert(buf_len >= sizeof(primary_PCU_STATUS));
	memcpy(buffer, &primary_pcu_status, sizeof(primary_PCU_STATUS));
    return sizeof(primary_PCU_STATUS);
} 
size_t deserialize_primary_PCU_STATUS(uint8_t* buffer, primary_PCU_STATUS* primary_pcu_status) {
	// assert(buf_len >= sizeof(primary_PCU_STATUS));
	memcpy(primary_pcu_status, buffer, sizeof(primary_PCU_STATUS));
    return sizeof(primary_PCU_STATUS);
}
/* primary_TIMESTAMP */
size_t serialize_primary_TIMESTAMP(uint8_t* buffer, uint32_t timestamp) {
    primary_TIMESTAMP primary_timestamp = { timestamp };
	// assert(buf_len >= sizeof(primary_TIMESTAMP));
	memcpy(buffer, &primary_timestamp, sizeof(primary_TIMESTAMP));
    return sizeof(primary_TIMESTAMP);
} 
size_t deserialize_primary_TIMESTAMP(uint8_t* buffer, primary_TIMESTAMP* primary_timestamp) {
	// assert(buf_len >= sizeof(primary_TIMESTAMP));
	memcpy(primary_timestamp, buffer, sizeof(primary_TIMESTAMP));
    return sizeof(primary_TIMESTAMP);
}
/* primary_TLM_STATUS */
size_t serialize_primary_TLM_STATUS(uint8_t* buffer, primary_Tlm_Status tlm_status, primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    primary_TLM_STATUS primary_tlm_status = { tlm_status, race_type, driver, circuit };
	// assert(buf_len >= sizeof(primary_TLM_STATUS));
	memcpy(buffer, &primary_tlm_status, sizeof(primary_TLM_STATUS));
    return sizeof(primary_TLM_STATUS);
} 
size_t deserialize_primary_TLM_STATUS(uint8_t* buffer, primary_TLM_STATUS* primary_tlm_status) {
	// assert(buf_len >= sizeof(primary_TLM_STATUS));
	memcpy(primary_tlm_status, buffer, sizeof(primary_TLM_STATUS));
    return sizeof(primary_TLM_STATUS);
}
/* primary_CAR_STATUS */
size_t serialize_primary_CAR_STATUS(uint8_t* buffer, primary_Car_Status car_status, primary_Inverter_Status inverter_l, primary_Inverter_Status inverter_r) {
    primary_CAR_STATUS primary_car_status = { car_status, inverter_l, inverter_r };
	// assert(buf_len >= sizeof(primary_CAR_STATUS));
	memcpy(buffer, &primary_car_status, sizeof(primary_CAR_STATUS));
    return sizeof(primary_CAR_STATUS);
} 
size_t deserialize_primary_CAR_STATUS(uint8_t* buffer, primary_CAR_STATUS* primary_car_status) {
	// assert(buf_len >= sizeof(primary_CAR_STATUS));
	memcpy(primary_car_status, buffer, sizeof(primary_CAR_STATUS));
    return sizeof(primary_CAR_STATUS);
}
/* primary_SET_TLM_STATUS */
size_t serialize_primary_SET_TLM_STATUS(uint8_t* buffer, primary_Tlm_Status tlm_status, primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    primary_SET_TLM_STATUS primary_set_tlm_status = { tlm_status, race_type, driver, circuit };
	// assert(buf_len >= sizeof(primary_SET_TLM_STATUS));
	memcpy(buffer, &primary_set_tlm_status, sizeof(primary_SET_TLM_STATUS));
    return sizeof(primary_SET_TLM_STATUS);
} 
size_t deserialize_primary_SET_TLM_STATUS(uint8_t* buffer, primary_SET_TLM_STATUS* primary_set_tlm_status) {
	// assert(buf_len >= sizeof(primary_SET_TLM_STATUS));
	memcpy(primary_set_tlm_status, buffer, sizeof(primary_SET_TLM_STATUS));
    return sizeof(primary_SET_TLM_STATUS);
}
/* primary_GPS_COORDS */
size_t serialize_primary_GPS_COORDS(uint8_t* buffer, float latitude, float longitude) {
    primary_GPS_COORDS primary_gps_coords = { latitude, longitude };
	// assert(buf_len >= sizeof(primary_GPS_COORDS));
	memcpy(buffer, &primary_gps_coords, sizeof(primary_GPS_COORDS));
    return sizeof(primary_GPS_COORDS);
} 
size_t deserialize_primary_GPS_COORDS(uint8_t* buffer, primary_GPS_COORDS* primary_gps_coords) {
	// assert(buf_len >= sizeof(primary_GPS_COORDS));
	memcpy(primary_gps_coords, buffer, sizeof(primary_GPS_COORDS));
    return sizeof(primary_GPS_COORDS);
}
/* primary_GPS_SPEED */
size_t serialize_primary_GPS_SPEED(uint8_t* buffer, uint16_t speed) {
    primary_GPS_SPEED primary_gps_speed = { speed };
	// assert(buf_len >= sizeof(primary_GPS_SPEED));
	memcpy(buffer, &primary_gps_speed, sizeof(primary_GPS_SPEED));
    return sizeof(primary_GPS_SPEED);
} 
size_t deserialize_primary_GPS_SPEED(uint8_t* buffer, primary_GPS_SPEED* primary_gps_speed) {
	// assert(buf_len >= sizeof(primary_GPS_SPEED));
	memcpy(primary_gps_speed, buffer, sizeof(primary_GPS_SPEED));
    return sizeof(primary_GPS_SPEED);
}
/* primary_HV_VOLTAGE */
size_t serialize_primary_HV_VOLTAGE(uint8_t* buffer, uint16_t pack_voltage, uint16_t bus_voltage, uint16_t max_cell_voltage, uint16_t min_cell_voltage) {
    primary_HV_VOLTAGE primary_hv_voltage = { pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage };
	// assert(buf_len >= sizeof(primary_HV_VOLTAGE));
	memcpy(buffer, &primary_hv_voltage, sizeof(primary_HV_VOLTAGE));
    return sizeof(primary_HV_VOLTAGE);
} 
size_t deserialize_primary_HV_VOLTAGE(uint8_t* buffer, primary_HV_VOLTAGE* primary_hv_voltage) {
	// assert(buf_len >= sizeof(primary_HV_VOLTAGE));
	memcpy(primary_hv_voltage, buffer, sizeof(primary_HV_VOLTAGE));
    return sizeof(primary_HV_VOLTAGE);
}
/* primary_HV_CURRENT */
size_t serialize_primary_HV_CURRENT(uint8_t* buffer, uint16_t current, int16_t power) {
    primary_HV_CURRENT primary_hv_current = { current, power };
	// assert(buf_len >= sizeof(primary_HV_CURRENT));
	memcpy(buffer, &primary_hv_current, sizeof(primary_HV_CURRENT));
    return sizeof(primary_HV_CURRENT);
} 
size_t deserialize_primary_HV_CURRENT(uint8_t* buffer, primary_HV_CURRENT* primary_hv_current) {
	// assert(buf_len >= sizeof(primary_HV_CURRENT));
	memcpy(primary_hv_current, buffer, sizeof(primary_HV_CURRENT));
    return sizeof(primary_HV_CURRENT);
}
/* primary_HV_TEMP */
size_t serialize_primary_HV_TEMP(uint8_t* buffer, uint16_t average_temp, uint16_t max_temp, uint16_t min_temp) {
    primary_HV_TEMP primary_hv_temp = { average_temp, max_temp, min_temp };
	// assert(buf_len >= sizeof(primary_HV_TEMP));
	memcpy(buffer, &primary_hv_temp, sizeof(primary_HV_TEMP));
    return sizeof(primary_HV_TEMP);
} 
size_t deserialize_primary_HV_TEMP(uint8_t* buffer, primary_HV_TEMP* primary_hv_temp) {
	// assert(buf_len >= sizeof(primary_HV_TEMP));
	memcpy(primary_hv_temp, buffer, sizeof(primary_HV_TEMP));
    return sizeof(primary_HV_TEMP);
}
/* primary_HV_ERRORS */
size_t serialize_primary_HV_ERRORS(uint8_t* buffer, primary_Hv_Errors warnings, primary_Hv_Errors errors) {
    primary_HV_ERRORS primary_hv_errors = { {warnings[0], warnings[1]}, {errors[0], errors[1]} };
	// assert(buf_len >= sizeof(primary_HV_ERRORS));
	memcpy(buffer, &primary_hv_errors, sizeof(primary_HV_ERRORS));
    return sizeof(primary_HV_ERRORS);
} 
size_t deserialize_primary_HV_ERRORS(uint8_t* buffer, primary_HV_ERRORS* primary_hv_errors) {
	// assert(buf_len >= sizeof(primary_HV_ERRORS));
	memcpy(primary_hv_errors, buffer, sizeof(primary_HV_ERRORS));
    return sizeof(primary_HV_ERRORS);
}
/* primary_TS_STATUS */
size_t serialize_primary_TS_STATUS(uint8_t* buffer, primary_Ts_Status ts_status) {
    primary_TS_STATUS primary_ts_status = { ts_status };
	// assert(buf_len >= sizeof(primary_TS_STATUS));
	memcpy(buffer, &primary_ts_status, sizeof(primary_TS_STATUS));
    return sizeof(primary_TS_STATUS);
} 
size_t deserialize_primary_TS_STATUS(uint8_t* buffer, primary_TS_STATUS* primary_ts_status) {
	// assert(buf_len >= sizeof(primary_TS_STATUS));
	memcpy(primary_ts_status, buffer, sizeof(primary_TS_STATUS));
    return sizeof(primary_TS_STATUS);
}
/* primary_SET_TS_STATUS */
size_t serialize_primary_SET_TS_STATUS(uint8_t* buffer, primary_Ts_Status_Set ts_status_set) {
    primary_SET_TS_STATUS primary_set_ts_status = { ts_status_set };
	// assert(buf_len >= sizeof(primary_SET_TS_STATUS));
	memcpy(buffer, &primary_set_ts_status, sizeof(primary_SET_TS_STATUS));
    return sizeof(primary_SET_TS_STATUS);
} 
size_t deserialize_primary_SET_TS_STATUS(uint8_t* buffer, primary_SET_TS_STATUS* primary_set_ts_status) {
	// assert(buf_len >= sizeof(primary_SET_TS_STATUS));
	memcpy(primary_set_ts_status, buffer, sizeof(primary_SET_TS_STATUS));
    return sizeof(primary_SET_TS_STATUS);
}
/* primary_STEER_STATUS */
size_t serialize_primary_STEER_STATUS(uint8_t* buffer, primary_Traction_Control traction_control, primary_Map map, bool radio_on) {
    primary_STEER_STATUS primary_steer_status = { traction_control, map, radio_on };
	// assert(buf_len >= sizeof(primary_STEER_STATUS));
	memcpy(buffer, &primary_steer_status, sizeof(primary_STEER_STATUS));
    return sizeof(primary_STEER_STATUS);
} 
size_t deserialize_primary_STEER_STATUS(uint8_t* buffer, primary_STEER_STATUS* primary_steer_status) {
	// assert(buf_len >= sizeof(primary_STEER_STATUS));
	memcpy(primary_steer_status, buffer, sizeof(primary_STEER_STATUS));
    return sizeof(primary_STEER_STATUS);
}
/* primary_SET_CAR_STATUS */
size_t serialize_primary_SET_CAR_STATUS(uint8_t* buffer, primary_Car_Status_Set car_status_set) {
    primary_SET_CAR_STATUS primary_set_car_status = { car_status_set };
	// assert(buf_len >= sizeof(primary_SET_CAR_STATUS));
	memcpy(buffer, &primary_set_car_status, sizeof(primary_SET_CAR_STATUS));
    return sizeof(primary_SET_CAR_STATUS);
} 
size_t deserialize_primary_SET_CAR_STATUS(uint8_t* buffer, primary_SET_CAR_STATUS* primary_set_car_status) {
	// assert(buf_len >= sizeof(primary_SET_CAR_STATUS));
	memcpy(primary_set_car_status, buffer, sizeof(primary_SET_CAR_STATUS));
    return sizeof(primary_SET_CAR_STATUS);
}
/* primary_LV_CURRENT */
size_t serialize_primary_LV_CURRENT(uint8_t* buffer, uint8_t current) {
    primary_LV_CURRENT primary_lv_current = { current };
	// assert(buf_len >= sizeof(primary_LV_CURRENT));
	memcpy(buffer, &primary_lv_current, sizeof(primary_LV_CURRENT));
    return sizeof(primary_LV_CURRENT);
} 
size_t deserialize_primary_LV_CURRENT(uint8_t* buffer, primary_LV_CURRENT* primary_lv_current) {
	// assert(buf_len >= sizeof(primary_LV_CURRENT));
	memcpy(primary_lv_current, buffer, sizeof(primary_LV_CURRENT));
    return sizeof(primary_LV_CURRENT);
}
/* primary_LV_VOLTAGE */
size_t serialize_primary_LV_VOLTAGE(uint8_t* buffer, uint8_t voltage_1, uint8_t voltage_2, uint8_t voltage_3, uint8_t voltage_4, uint16_t total_voltage) {
    primary_LV_VOLTAGE primary_lv_voltage = { voltage_1, voltage_2, voltage_3, voltage_4, total_voltage };
	// assert(buf_len >= sizeof(primary_LV_VOLTAGE));
	memcpy(buffer, &primary_lv_voltage, sizeof(primary_LV_VOLTAGE));
    return sizeof(primary_LV_VOLTAGE);
} 
size_t deserialize_primary_LV_VOLTAGE(uint8_t* buffer, primary_LV_VOLTAGE* primary_lv_voltage) {
	// assert(buf_len >= sizeof(primary_LV_VOLTAGE));
	memcpy(primary_lv_voltage, buffer, sizeof(primary_LV_VOLTAGE));
    return sizeof(primary_LV_VOLTAGE);
}
/* primary_LV_TEMPERATURE */
size_t serialize_primary_LV_TEMPERATURE(uint8_t* buffer, uint8_t dcdc_temperature, uint16_t battery_temperature) {
    primary_LV_TEMPERATURE primary_lv_temperature = { dcdc_temperature, 0x00, battery_temperature };
	// assert(buf_len >= sizeof(primary_LV_TEMPERATURE));
	memcpy(buffer, &primary_lv_temperature, sizeof(primary_LV_TEMPERATURE));
    return sizeof(primary_LV_TEMPERATURE);
} 
size_t deserialize_primary_LV_TEMPERATURE(uint8_t* buffer, primary_LV_TEMPERATURE* primary_lv_temperature) {
	// assert(buf_len >= sizeof(primary_LV_TEMPERATURE));
	memcpy(primary_lv_temperature, buffer, sizeof(primary_LV_TEMPERATURE));
    return sizeof(primary_LV_TEMPERATURE);
}
/* primary_COOLING_STATUS */
size_t serialize_primary_COOLING_STATUS(uint8_t* buffer, uint8_t hv_fan_speed, uint8_t lv_fan_speed, uint8_t pump_speed) {
    primary_COOLING_STATUS primary_cooling_status = { hv_fan_speed, lv_fan_speed, pump_speed };
	// assert(buf_len >= sizeof(primary_COOLING_STATUS));
	memcpy(buffer, &primary_cooling_status, sizeof(primary_COOLING_STATUS));
    return sizeof(primary_COOLING_STATUS);
} 
size_t deserialize_primary_COOLING_STATUS(uint8_t* buffer, primary_COOLING_STATUS* primary_cooling_status) {
	// assert(buf_len >= sizeof(primary_COOLING_STATUS));
	memcpy(primary_cooling_status, buffer, sizeof(primary_COOLING_STATUS));
    return sizeof(primary_COOLING_STATUS);
}
/* primary_HV_CELLS_VOLTAGE */
size_t serialize_primary_HV_CELLS_VOLTAGE(uint8_t* buffer, uint8_t cell_index, uint16_t voltage_0, uint16_t voltage_1, uint16_t voltage_2) {
    primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage = { cell_index, 0x00, voltage_0, voltage_1, voltage_2 };
	// assert(buf_len >= sizeof(primary_HV_CELLS_VOLTAGE));
	memcpy(buffer, &primary_hv_cells_voltage, sizeof(primary_HV_CELLS_VOLTAGE));
    return sizeof(primary_HV_CELLS_VOLTAGE);
} 
size_t deserialize_primary_HV_CELLS_VOLTAGE(uint8_t* buffer, primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage) {
	// assert(buf_len >= sizeof(primary_HV_CELLS_VOLTAGE));
	memcpy(primary_hv_cells_voltage, buffer, sizeof(primary_HV_CELLS_VOLTAGE));
    return sizeof(primary_HV_CELLS_VOLTAGE);
}
/* primary_HV_CELLS_TEMP */
size_t serialize_primary_HV_CELLS_TEMP(uint8_t* buffer, uint8_t cell_index, uint8_t temp_0, uint8_t temp_1, uint8_t temp_2, uint8_t temp_3, uint8_t temp_4, uint8_t temp_5, uint8_t temp_6) {
    primary_HV_CELLS_TEMP primary_hv_cells_temp = { cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6 };
	// assert(buf_len >= sizeof(primary_HV_CELLS_TEMP));
	memcpy(buffer, &primary_hv_cells_temp, sizeof(primary_HV_CELLS_TEMP));
    return sizeof(primary_HV_CELLS_TEMP);
} 
size_t deserialize_primary_HV_CELLS_TEMP(uint8_t* buffer, primary_HV_CELLS_TEMP* primary_hv_cells_temp) {
	// assert(buf_len >= sizeof(primary_HV_CELLS_TEMP));
	memcpy(primary_hv_cells_temp, buffer, sizeof(primary_HV_CELLS_TEMP));
    return sizeof(primary_HV_CELLS_TEMP);
}
/* primary_SET_CHG_POWER */
size_t serialize_primary_SET_CHG_POWER(uint8_t* buffer, uint16_t current, uint16_t voltage) {
    primary_SET_CHG_POWER primary_set_chg_power = { current, voltage };
	// assert(buf_len >= sizeof(primary_SET_CHG_POWER));
	memcpy(buffer, &primary_set_chg_power, sizeof(primary_SET_CHG_POWER));
    return sizeof(primary_SET_CHG_POWER);
} 
size_t deserialize_primary_SET_CHG_POWER(uint8_t* buffer, primary_SET_CHG_POWER* primary_set_chg_power) {
	// assert(buf_len >= sizeof(primary_SET_CHG_POWER));
	memcpy(primary_set_chg_power, buffer, sizeof(primary_SET_CHG_POWER));
    return sizeof(primary_SET_CHG_POWER);
}
/* primary_CHG_STATUS */
size_t serialize_primary_CHG_STATUS(uint8_t* buffer, primary_Status status) {
    primary_CHG_STATUS primary_chg_status = { status };
	// assert(buf_len >= sizeof(primary_CHG_STATUS));
	memcpy(buffer, &primary_chg_status, sizeof(primary_CHG_STATUS));
    return sizeof(primary_CHG_STATUS);
} 
size_t deserialize_primary_CHG_STATUS(uint8_t* buffer, primary_CHG_STATUS* primary_chg_status) {
	// assert(buf_len >= sizeof(primary_CHG_STATUS));
	memcpy(primary_chg_status, buffer, sizeof(primary_CHG_STATUS));
    return sizeof(primary_CHG_STATUS);
}
/* primary_SET_CHG_STATUS */
size_t serialize_primary_SET_CHG_STATUS(uint8_t* buffer, primary_Status status) {
    primary_SET_CHG_STATUS primary_set_chg_status = { status };
	// assert(buf_len >= sizeof(primary_SET_CHG_STATUS));
	memcpy(buffer, &primary_set_chg_status, sizeof(primary_SET_CHG_STATUS));
    return sizeof(primary_SET_CHG_STATUS);
} 
size_t deserialize_primary_SET_CHG_STATUS(uint8_t* buffer, primary_SET_CHG_STATUS* primary_set_chg_status) {
	// assert(buf_len >= sizeof(primary_SET_CHG_STATUS));
	memcpy(primary_set_chg_status, buffer, sizeof(primary_SET_CHG_STATUS));
    return sizeof(primary_SET_CHG_STATUS);
}
/* primary_CHG_SETTINGS */
size_t serialize_primary_CHG_SETTINGS(uint8_t* buffer, uint8_t v_cutoff) {
    primary_CHG_SETTINGS primary_chg_settings = { v_cutoff };
	// assert(buf_len >= sizeof(primary_CHG_SETTINGS));
	memcpy(buffer, &primary_chg_settings, sizeof(primary_CHG_SETTINGS));
    return sizeof(primary_CHG_SETTINGS);
} 
size_t deserialize_primary_CHG_SETTINGS(uint8_t* buffer, primary_CHG_SETTINGS* primary_chg_settings) {
	// assert(buf_len >= sizeof(primary_CHG_SETTINGS));
	memcpy(primary_chg_settings, buffer, sizeof(primary_CHG_SETTINGS));
    return sizeof(primary_CHG_SETTINGS);
}
