from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple

class Hv_Errors(IntFlag):
    LTC_PEC_ERROR = 1
    CELL_UNDER_VOLTAGE = 2
    CELL_OVER_VOLTAGE = 4
    CELL_OVER_TEMPERATURE = 8
    OVER_CURRENT = 16
    ADC_INIT = 32
    ADC_TIMEOUT = 64
    
class Tlm_Status_Set(IntEnum):
    OFF = 0
    ON = 1
    
class Race_Type(IntEnum):
    ACCELERATION = 0
    SKIDPAD = 1
    AUTOCROSS = 2
    ENDURANCE = 3
    
class Tlm_Status(IntEnum):
    ON = 0
    OFF = 1
    
class Inverter_Status(IntEnum):
    OFF = 0
    IDLE = 1
    ON = 2
    
class Car_Status(IntEnum):
    IDLE = 0
    SETUP = 1
    RUN = 2
    
class Ts_Status(IntEnum):
    OFF = 0
    PRECHARGE = 1
    ON = 2
    FATAL = 3
    
class Ts_Status_Set(IntEnum):
    OFF = 0
    ON = 1
    
class Set_Balancing_Status(IntEnum):
    OFF = 0
    ON = 1
    
class Traction_Control(IntEnum):
    OFF = 0
    SLIP_CONTROL = 1
    TORQUE_VECTORING = 2
    COMPLETE = 3
    
class Map(IntEnum):
    R = 0
    D20 = 1
    D40 = 2
    D60 = 3
    D80 = 4
    D100 = 5
    
class Car_Status_Set(IntEnum):
    IDLE = 0
    RUN = 1
    
class Bound(IntEnum):
    SET_MAX = 0
    SET_MIN = 1
    
class Pedal(IntEnum):
    ACCELERATOR = 0
    BRAKE = 1
    
class Balancing_Status(IntEnum):
    ON = 0
    OFF = 1


# SteerVersion
class SteerVersion:
    struct = namedtuple("SteerVersion_struct", "component_version cancicd_version", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(component_version, cancicd_version) -> bytes:
        return pack(SteerVersion.schema, component_version, cancicd_version)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SteerVersion.struct":
        return SteerVersion.struct._make(unpack(SteerVersion.schema, buffer))

# DasVersion
class DasVersion:
    struct = namedtuple("DasVersion_struct", "component_version cancicd_version", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(component_version, cancicd_version) -> bytes:
        return pack(DasVersion.schema, component_version, cancicd_version)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "DasVersion.struct":
        return DasVersion.struct._make(unpack(DasVersion.schema, buffer))

# HvVersion
class HvVersion:
    struct = namedtuple("HvVersion_struct", "component_version cancicd_version", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(component_version, cancicd_version) -> bytes:
        return pack(HvVersion.schema, component_version, cancicd_version)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvVersion.struct":
        return HvVersion.struct._make(unpack(HvVersion.schema, buffer))

# LvVersion
class LvVersion:
    struct = namedtuple("LvVersion_struct", "component_version cancicd_version", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(component_version, cancicd_version) -> bytes:
        return pack(LvVersion.schema, component_version, cancicd_version)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "LvVersion.struct":
        return LvVersion.struct._make(unpack(LvVersion.schema, buffer))

# TlmVersion
class TlmVersion:
    struct = namedtuple("TlmVersion_struct", "component_version cancicd_version", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(component_version, cancicd_version) -> bytes:
        return pack(TlmVersion.schema, component_version, cancicd_version)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TlmVersion.struct":
        return TlmVersion.struct._make(unpack(TlmVersion.schema, buffer))

# Timestamp
class Timestamp:
    struct = namedtuple("Timestamp_struct", "timestamp", rename=True)
    schema = "<i"
    
    @staticmethod
    def serialize(timestamp) -> bytes:
        return pack(Timestamp.schema, timestamp)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Timestamp.struct":
        return Timestamp.struct._make(unpack(Timestamp.schema, buffer))

# SetTlmStatus
class SetTlmStatus:
    struct = namedtuple("SetTlmStatus_struct", "tlm_status_set race_type driver circuit", rename=True)
    schema = "<BBbb"
    
    @staticmethod
    def serialize(tlm_status_set, race_type, driver, circuit) -> bytes:
        return pack(SetTlmStatus.schema, tlm_status_set, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetTlmStatus.struct":
        return SetTlmStatus.struct._make(unpack(SetTlmStatus.schema, buffer))

# SteerSystemStatus
class SteerSystemStatus:
    struct = namedtuple("SteerSystemStatus_struct", "soc_temp", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(soc_temp) -> bytes:
        return pack(SteerSystemStatus.schema, soc_temp)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SteerSystemStatus.struct":
        return SteerSystemStatus.struct._make(unpack(SteerSystemStatus.schema, buffer))

# TlmStatus
class TlmStatus:
    struct = namedtuple("TlmStatus_struct", "tlm_status race_type driver circuit", rename=True)
    schema = "<BBbb"
    
    @staticmethod
    def serialize(tlm_status, race_type, driver, circuit) -> bytes:
        return pack(TlmStatus.schema, tlm_status, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TlmStatus.struct":
        return TlmStatus.struct._make(unpack(TlmStatus.schema, buffer))

# CarStatus
class CarStatus:
    struct = namedtuple("CarStatus_struct", "inverter_l inverter_r car_status", rename=True)
    schema = "<BBB"
    
    @staticmethod
    def serialize(inverter_l, inverter_r, car_status) -> bytes:
        return pack(CarStatus.schema, inverter_l, inverter_r, car_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CarStatus.struct":
        return CarStatus.struct._make(unpack(CarStatus.schema, buffer))

# Speed
class Speed:
    struct = namedtuple("Speed_struct", "encoder_r encoder_l inverter_r inverter_l", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(encoder_r, encoder_l, inverter_r, inverter_l) -> bytes:
        return pack(Speed.schema, encoder_r, encoder_l, inverter_r, inverter_l)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Speed.struct":
        return Speed.struct._make(unpack(Speed.schema, buffer))

# HvVoltage
class HvVoltage:
    struct = namedtuple("HvVoltage_struct", "pack_voltage bus_voltage max_cell_voltage min_cell_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage) -> bytes:
        return pack(HvVoltage.schema, pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvVoltage.struct":
        return HvVoltage.struct._make(unpack(HvVoltage.schema, buffer))

# HvCurrent
class HvCurrent:
    struct = namedtuple("HvCurrent_struct", "current power", rename=True)
    schema = "<HH"
    
    @staticmethod
    def serialize(current, power) -> bytes:
        return pack(HvCurrent.schema, current, power)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCurrent.struct":
        return HvCurrent.struct._make(unpack(HvCurrent.schema, buffer))

# HvTemp
class HvTemp:
    struct = namedtuple("HvTemp_struct", "average_temp max_temp min_temp", rename=True)
    schema = "<hhh"
    
    @staticmethod
    def serialize(average_temp, max_temp, min_temp) -> bytes:
        return pack(HvTemp.schema, average_temp, max_temp, min_temp)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvTemp.struct":
        return HvTemp.struct._make(unpack(HvTemp.schema, buffer))

# HvErrors
class HvErrors:
    struct = namedtuple("HvErrors_struct", "warnings errors", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(warnings, errors) -> bytes:
        return pack(HvErrors.schema, warnings, errors)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvErrors.struct":
        return HvErrors.struct._make(unpack(HvErrors.schema, buffer))

# TsStatus
class TsStatus:
    struct = namedtuple("TsStatus_struct", "ts_status", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(ts_status) -> bytes:
        return pack(TsStatus.schema, ts_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TsStatus.struct":
        return TsStatus.struct._make(unpack(TsStatus.schema, buffer))

# SetTsStatus
class SetTsStatus:
    struct = namedtuple("SetTsStatus_struct", "ts_status_set", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(ts_status_set) -> bytes:
        return pack(SetTsStatus.schema, ts_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetTsStatus.struct":
        return SetTsStatus.struct._make(unpack(SetTsStatus.schema, buffer))

# SetCellBalancingStatus
class SetCellBalancingStatus:
    struct = namedtuple("SetCellBalancingStatus_struct", "set_balancing_status", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(set_balancing_status) -> bytes:
        return pack(SetCellBalancingStatus.schema, set_balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetCellBalancingStatus.struct":
        return SetCellBalancingStatus.struct._make(unpack(SetCellBalancingStatus.schema, buffer))

# HandcartStatus
class HandcartStatus:
    struct = namedtuple("HandcartStatus_struct", "connected", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(connected) -> bytes:
        return pack(HandcartStatus.schema, connected)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HandcartStatus.struct":
        return HandcartStatus.struct._make(unpack(HandcartStatus.schema, buffer))

# SteerStatus
class SteerStatus:
    struct = namedtuple("SteerStatus_struct", "traction_control map", rename=True)
    schema = "<BB"
    
    @staticmethod
    def serialize(traction_control, map) -> bytes:
        return pack(SteerStatus.schema, traction_control, map)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SteerStatus.struct":
        return SteerStatus.struct._make(unpack(SteerStatus.schema, buffer))

# SetCarStatus
class SetCarStatus:
    struct = namedtuple("SetCarStatus_struct", "car_status_set", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(car_status_set) -> bytes:
        return pack(SetCarStatus.schema, car_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetCarStatus.struct":
        return SetCarStatus.struct._make(unpack(SetCarStatus.schema, buffer))

# SetPedalsRange
class SetPedalsRange:
    struct = namedtuple("SetPedalsRange_struct", "bound pedal", rename=True)
    schema = "<BB"
    
    @staticmethod
    def serialize(bound, pedal) -> bytes:
        return pack(SetPedalsRange.schema, bound, pedal)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetPedalsRange.struct":
        return SetPedalsRange.struct._make(unpack(SetPedalsRange.schema, buffer))

# LvCurrent
class LvCurrent:
    struct = namedtuple("LvCurrent_struct", "current", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(current) -> bytes:
        return pack(LvCurrent.schema, current)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "LvCurrent.struct":
        return LvCurrent.struct._make(unpack(LvCurrent.schema, buffer))

# LvVoltage
class LvVoltage:
    struct = namedtuple("LvVoltage_struct", "voltage_1 voltage_2 voltage_3 voltage_4 total_voltage", rename=True)
    schema = "<bbbbh"
    
    @staticmethod
    def serialize(voltage_1, voltage_2, voltage_3, voltage_4, total_voltage) -> bytes:
        return pack(LvVoltage.schema, voltage_1, voltage_2, voltage_3, voltage_4, total_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "LvVoltage.struct":
        return LvVoltage.struct._make(unpack(LvVoltage.schema, buffer))

# LvTemperature
class LvTemperature:
    struct = namedtuple("LvTemperature_struct", "dcdc_temperature __unused_padding_1 bp_temperature", rename=True)
    schema = "<bXh"
    
    @staticmethod
    def serialize(dcdc_temperature, bp_temperature) -> bytes:
        return pack(LvTemperature.schema, dcdc_temperature, bp_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "LvTemperature.struct":
        return LvTemperature.struct._make(unpack(LvTemperature.schema, buffer))

# CoolingStatus
class CoolingStatus:
    struct = namedtuple("CoolingStatus_struct", "hv_fan_speed lv_fan_speed pump_speed", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(hv_fan_speed, lv_fan_speed, pump_speed) -> bytes:
        return pack(CoolingStatus.schema, hv_fan_speed, lv_fan_speed, pump_speed)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CoolingStatus.struct":
        return CoolingStatus.struct._make(unpack(CoolingStatus.schema, buffer))

# HvCellsVoltage
class HvCellsVoltage:
    struct = namedtuple("HvCellsVoltage_struct", "cell_index __unused_padding_1 voltage_0 voltage_1 voltage_2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(cell_index, voltage_0, voltage_1, voltage_2) -> bytes:
        return pack(HvCellsVoltage.schema, cell_index, voltage_0, voltage_1, voltage_2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCellsVoltage.struct":
        return HvCellsVoltage.struct._make(unpack(HvCellsVoltage.schema, buffer))

# HvCellsTemp
class HvCellsTemp:
    struct = namedtuple("HvCellsTemp_struct", "cell_index temp_0 temp_1 temp_2 temp_3 temp_4 temp_5 temp_6", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6) -> bytes:
        return pack(HvCellsTemp.schema, cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCellsTemp.struct":
        return HvCellsTemp.struct._make(unpack(HvCellsTemp.schema, buffer))

# HvCellBalancingStatus
class HvCellBalancingStatus:
    struct = namedtuple("HvCellBalancingStatus_struct", "balancing_status", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(balancing_status) -> bytes:
        return pack(HvCellBalancingStatus.schema, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCellBalancingStatus.struct":
        return HvCellBalancingStatus.struct._make(unpack(HvCellBalancingStatus.schema, buffer))
