#include <string>
#include <iostream>
#include "bms.pb.h"
#ifdef __cplusplus
extern "C" {
#include "../../../../naked_generator/bms/c/bms.h"
}
#endif

#define BITSET_VALUE(bitset, size) \
    bitset_value=0; \
    for(size_t i = 0; i < size*8; i++){ \
        bitset_value += getBit(bitset, i); \
    }

std::string bms_naked2protobuf(uint32_t id, uint8_t* payload){
    uint64_t bitset_value;
    switch(id) {

        case 1536:
        {
            bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
            deserialize_bms_BOARD_STATUS(payload, bms_board_status_d);

            bms::BoardStatus bms_board_status_p;
            BITSET_VALUE(bms_board_status_d->errors, sizeof(bms_board_status_d->errors))
            bms_board_status_p.set_errors(bitset_value);
            bms_board_status_p.set_balancing_status(static_cast<bms::BalancingStatusType>(bms_board_status_d->balancing_status));

            std::string serialized;
            bms_board_status_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1568:
        {
            bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
            deserialize_bms_BOARD_STATUS(payload, bms_board_status_d);

            bms::BoardStatus bms_board_status_p;
            BITSET_VALUE(bms_board_status_d->errors, sizeof(bms_board_status_d->errors))
            bms_board_status_p.set_errors(bitset_value);
            bms_board_status_p.set_balancing_status(static_cast<bms::BalancingStatusType>(bms_board_status_d->balancing_status));

            std::string serialized;
            bms_board_status_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1600:
        {
            bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
            deserialize_bms_BOARD_STATUS(payload, bms_board_status_d);

            bms::BoardStatus bms_board_status_p;
            BITSET_VALUE(bms_board_status_d->errors, sizeof(bms_board_status_d->errors))
            bms_board_status_p.set_errors(bitset_value);
            bms_board_status_p.set_balancing_status(static_cast<bms::BalancingStatusType>(bms_board_status_d->balancing_status));

            std::string serialized;
            bms_board_status_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1632:
        {
            bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
            deserialize_bms_BOARD_STATUS(payload, bms_board_status_d);

            bms::BoardStatus bms_board_status_p;
            BITSET_VALUE(bms_board_status_d->errors, sizeof(bms_board_status_d->errors))
            bms_board_status_p.set_errors(bitset_value);
            bms_board_status_p.set_balancing_status(static_cast<bms::BalancingStatusType>(bms_board_status_d->balancing_status));

            std::string serialized;
            bms_board_status_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1664:
        {
            bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
            deserialize_bms_BOARD_STATUS(payload, bms_board_status_d);

            bms::BoardStatus bms_board_status_p;
            BITSET_VALUE(bms_board_status_d->errors, sizeof(bms_board_status_d->errors))
            bms_board_status_p.set_errors(bitset_value);
            bms_board_status_p.set_balancing_status(static_cast<bms::BalancingStatusType>(bms_board_status_d->balancing_status));

            std::string serialized;
            bms_board_status_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1696:
        {
            bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
            deserialize_bms_BOARD_STATUS(payload, bms_board_status_d);

            bms::BoardStatus bms_board_status_p;
            BITSET_VALUE(bms_board_status_d->errors, sizeof(bms_board_status_d->errors))
            bms_board_status_p.set_errors(bitset_value);
            bms_board_status_p.set_balancing_status(static_cast<bms::BalancingStatusType>(bms_board_status_d->balancing_status));

            std::string serialized;
            bms_board_status_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1281:
        {
            bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
            deserialize_bms_TEMPERATURES(payload, bms_temperatures_d);

            bms::Temperatures bms_temperatures_p;
            bms_temperatures_p.set_start_index(static_cast<uint8_t>(bms_temperatures_d->start_index));
            bms_temperatures_p.set_temp0(static_cast<uint8_t>(bms_temperatures_d->temp0));
            bms_temperatures_p.set_temp1(static_cast<uint8_t>(bms_temperatures_d->temp1));
            bms_temperatures_p.set_temp2(static_cast<uint8_t>(bms_temperatures_d->temp2));
            bms_temperatures_p.set_temp3(static_cast<uint8_t>(bms_temperatures_d->temp3));
            bms_temperatures_p.set_temp4(static_cast<uint8_t>(bms_temperatures_d->temp4));
            bms_temperatures_p.set_temp5(static_cast<uint8_t>(bms_temperatures_d->temp5));

            std::string serialized;
            bms_temperatures_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1313:
        {
            bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
            deserialize_bms_TEMPERATURES(payload, bms_temperatures_d);

            bms::Temperatures bms_temperatures_p;
            bms_temperatures_p.set_start_index(static_cast<uint8_t>(bms_temperatures_d->start_index));
            bms_temperatures_p.set_temp0(static_cast<uint8_t>(bms_temperatures_d->temp0));
            bms_temperatures_p.set_temp1(static_cast<uint8_t>(bms_temperatures_d->temp1));
            bms_temperatures_p.set_temp2(static_cast<uint8_t>(bms_temperatures_d->temp2));
            bms_temperatures_p.set_temp3(static_cast<uint8_t>(bms_temperatures_d->temp3));
            bms_temperatures_p.set_temp4(static_cast<uint8_t>(bms_temperatures_d->temp4));
            bms_temperatures_p.set_temp5(static_cast<uint8_t>(bms_temperatures_d->temp5));

            std::string serialized;
            bms_temperatures_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1345:
        {
            bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
            deserialize_bms_TEMPERATURES(payload, bms_temperatures_d);

            bms::Temperatures bms_temperatures_p;
            bms_temperatures_p.set_start_index(static_cast<uint8_t>(bms_temperatures_d->start_index));
            bms_temperatures_p.set_temp0(static_cast<uint8_t>(bms_temperatures_d->temp0));
            bms_temperatures_p.set_temp1(static_cast<uint8_t>(bms_temperatures_d->temp1));
            bms_temperatures_p.set_temp2(static_cast<uint8_t>(bms_temperatures_d->temp2));
            bms_temperatures_p.set_temp3(static_cast<uint8_t>(bms_temperatures_d->temp3));
            bms_temperatures_p.set_temp4(static_cast<uint8_t>(bms_temperatures_d->temp4));
            bms_temperatures_p.set_temp5(static_cast<uint8_t>(bms_temperatures_d->temp5));

            std::string serialized;
            bms_temperatures_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1377:
        {
            bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
            deserialize_bms_TEMPERATURES(payload, bms_temperatures_d);

            bms::Temperatures bms_temperatures_p;
            bms_temperatures_p.set_start_index(static_cast<uint8_t>(bms_temperatures_d->start_index));
            bms_temperatures_p.set_temp0(static_cast<uint8_t>(bms_temperatures_d->temp0));
            bms_temperatures_p.set_temp1(static_cast<uint8_t>(bms_temperatures_d->temp1));
            bms_temperatures_p.set_temp2(static_cast<uint8_t>(bms_temperatures_d->temp2));
            bms_temperatures_p.set_temp3(static_cast<uint8_t>(bms_temperatures_d->temp3));
            bms_temperatures_p.set_temp4(static_cast<uint8_t>(bms_temperatures_d->temp4));
            bms_temperatures_p.set_temp5(static_cast<uint8_t>(bms_temperatures_d->temp5));

            std::string serialized;
            bms_temperatures_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1409:
        {
            bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
            deserialize_bms_TEMPERATURES(payload, bms_temperatures_d);

            bms::Temperatures bms_temperatures_p;
            bms_temperatures_p.set_start_index(static_cast<uint8_t>(bms_temperatures_d->start_index));
            bms_temperatures_p.set_temp0(static_cast<uint8_t>(bms_temperatures_d->temp0));
            bms_temperatures_p.set_temp1(static_cast<uint8_t>(bms_temperatures_d->temp1));
            bms_temperatures_p.set_temp2(static_cast<uint8_t>(bms_temperatures_d->temp2));
            bms_temperatures_p.set_temp3(static_cast<uint8_t>(bms_temperatures_d->temp3));
            bms_temperatures_p.set_temp4(static_cast<uint8_t>(bms_temperatures_d->temp4));
            bms_temperatures_p.set_temp5(static_cast<uint8_t>(bms_temperatures_d->temp5));

            std::string serialized;
            bms_temperatures_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 1441:
        {
            bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
            deserialize_bms_TEMPERATURES(payload, bms_temperatures_d);

            bms::Temperatures bms_temperatures_p;
            bms_temperatures_p.set_start_index(static_cast<uint8_t>(bms_temperatures_d->start_index));
            bms_temperatures_p.set_temp0(static_cast<uint8_t>(bms_temperatures_d->temp0));
            bms_temperatures_p.set_temp1(static_cast<uint8_t>(bms_temperatures_d->temp1));
            bms_temperatures_p.set_temp2(static_cast<uint8_t>(bms_temperatures_d->temp2));
            bms_temperatures_p.set_temp3(static_cast<uint8_t>(bms_temperatures_d->temp3));
            bms_temperatures_p.set_temp4(static_cast<uint8_t>(bms_temperatures_d->temp4));
            bms_temperatures_p.set_temp5(static_cast<uint8_t>(bms_temperatures_d->temp5));

            std::string serialized;
            bms_temperatures_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 514:
        {
            bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
            deserialize_bms_VOLTAGES(payload, bms_voltages_d);

            bms::Voltages bms_voltages_p;
            bms_voltages_p.set_start_index(static_cast<uint8_t>(bms_voltages_d->start_index));
            bms_voltages_p.set_voltage0(static_cast<uint16_t>(bms_voltages_d->voltage0));
            bms_voltages_p.set_voltage1(static_cast<uint16_t>(bms_voltages_d->voltage1));
            bms_voltages_p.set_voltage2(static_cast<uint16_t>(bms_voltages_d->voltage2));

            std::string serialized;
            bms_voltages_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 546:
        {
            bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
            deserialize_bms_VOLTAGES(payload, bms_voltages_d);

            bms::Voltages bms_voltages_p;
            bms_voltages_p.set_start_index(static_cast<uint8_t>(bms_voltages_d->start_index));
            bms_voltages_p.set_voltage0(static_cast<uint16_t>(bms_voltages_d->voltage0));
            bms_voltages_p.set_voltage1(static_cast<uint16_t>(bms_voltages_d->voltage1));
            bms_voltages_p.set_voltage2(static_cast<uint16_t>(bms_voltages_d->voltage2));

            std::string serialized;
            bms_voltages_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 578:
        {
            bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
            deserialize_bms_VOLTAGES(payload, bms_voltages_d);

            bms::Voltages bms_voltages_p;
            bms_voltages_p.set_start_index(static_cast<uint8_t>(bms_voltages_d->start_index));
            bms_voltages_p.set_voltage0(static_cast<uint16_t>(bms_voltages_d->voltage0));
            bms_voltages_p.set_voltage1(static_cast<uint16_t>(bms_voltages_d->voltage1));
            bms_voltages_p.set_voltage2(static_cast<uint16_t>(bms_voltages_d->voltage2));

            std::string serialized;
            bms_voltages_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 610:
        {
            bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
            deserialize_bms_VOLTAGES(payload, bms_voltages_d);

            bms::Voltages bms_voltages_p;
            bms_voltages_p.set_start_index(static_cast<uint8_t>(bms_voltages_d->start_index));
            bms_voltages_p.set_voltage0(static_cast<uint16_t>(bms_voltages_d->voltage0));
            bms_voltages_p.set_voltage1(static_cast<uint16_t>(bms_voltages_d->voltage1));
            bms_voltages_p.set_voltage2(static_cast<uint16_t>(bms_voltages_d->voltage2));

            std::string serialized;
            bms_voltages_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 642:
        {
            bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
            deserialize_bms_VOLTAGES(payload, bms_voltages_d);

            bms::Voltages bms_voltages_p;
            bms_voltages_p.set_start_index(static_cast<uint8_t>(bms_voltages_d->start_index));
            bms_voltages_p.set_voltage0(static_cast<uint16_t>(bms_voltages_d->voltage0));
            bms_voltages_p.set_voltage1(static_cast<uint16_t>(bms_voltages_d->voltage1));
            bms_voltages_p.set_voltage2(static_cast<uint16_t>(bms_voltages_d->voltage2));

            std::string serialized;
            bms_voltages_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 674:
        {
            bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
            deserialize_bms_VOLTAGES(payload, bms_voltages_d);

            bms::Voltages bms_voltages_p;
            bms_voltages_p.set_start_index(static_cast<uint8_t>(bms_voltages_d->start_index));
            bms_voltages_p.set_voltage0(static_cast<uint16_t>(bms_voltages_d->voltage0));
            bms_voltages_p.set_voltage1(static_cast<uint16_t>(bms_voltages_d->voltage1));
            bms_voltages_p.set_voltage2(static_cast<uint16_t>(bms_voltages_d->voltage2));

            std::string serialized;
            bms_voltages_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 515:
        {
            bms_BALANCING* bms_balancing_d = (bms_BALANCING*)malloc(sizeof(bms_BALANCING));
            deserialize_bms_BALANCING(payload, bms_balancing_d);

            bms::Balancing bms_balancing_p;
            bms_balancing_p.set_board_index(static_cast<uint8_t>(bms_balancing_d->board_index));
            BITSET_VALUE(bms_balancing_d->cells, sizeof(bms_balancing_d->cells))
            bms_balancing_p.set_cells(bitset_value);

            std::string serialized;
            bms_balancing_p.SerializeToString(&serialized);
            return serialized;
        }
    
        case 260:
        {
            bms_FW_UPDATE* bms_fw_update_d = (bms_FW_UPDATE*)malloc(sizeof(bms_FW_UPDATE));
            deserialize_bms_FW_UPDATE(payload, bms_fw_update_d);

            bms::FwUpdate bms_fw_update_p;
            bms_fw_update_p.set_board_index(static_cast<uint8_t>(bms_fw_update_d->board_index));

            std::string serialized;
            bms_fw_update_p.SerializeToString(&serialized);
            return serialized;
        }
    
    }
    throw std::runtime_error("Unknown message id");
}