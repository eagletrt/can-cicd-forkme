from enum import IntEnum, IntFlag
from struct import pack, unpack

# Bitsets

class PrimaryHvErrors(IntFlag):
    LTC_PEC_ERROR = 1
    CELL_UNDER_VOLTAGE = 2
    CELL_OVER_VOLTAGE = 4
    CELL_OVER_TEMPERATURE = 8
    OVER_CURRENT = 16
    ADC_INIT = 32
    ADC_TIMEOUT = 64
    INT_VOLTAGE_MISMATCH = 128
    FEEDBACK_HARD = 256
    FEEDBACK_SOFT = 512

class PrimaryDasErrors(IntFlag):
    PEDAL_ADC = 1
    PEDAL_IMPLAUSIBILITY = 2
    IMU_TOUT = 4
    IRTS_TOUT = 8
    TS_TOUT = 16
    INVL_TOUT = 32
    INVR_TOUT = 64
    FSM = 128

class PrimaryInvStatus(IntFlag):
    DRIVE_ENABLE = 1
    NCR0 = 2
    LIMP = 4
    LIMM = 8
    DRIVE_OK = 16
    ICNS = 32
    T_NLIM = 64
    P_N = 128
    N_I = 256
    N0 = 512
    RSW = 1024
    CAL0 = 2048
    CAL = 4096
    TOL = 8192
    DRIVE_READY = 16384
    BRK = 32768
    SIGN_MAG = 65536
    NCLIP = 131072
    NCLIPP = 262144
    NCLIPM = 524288
    IRD_DIG = 1048576
    IUSE_RCHD = 2097152
    IRD_N = 4194304
    IRD_TI = 8388608
    IRD_TIR = 16777216
    HZ10 = 33554432
    IRD_TM = 67108864
    IRD_ANA = 134217728
    IWCNS = 268435456
    RFE_PULSE = 536870912
    MD = 1073741824
    HND_WHL = 2147483648

class PrimaryInvErrors(IntFlag):
    BAD_PARAM = 1
    HW_FAULT = 2
    SAFETY_FAULT = 4
    CAN_TIMEOUT = 8
    ENCODER_ERR = 16
    NO_POWER_VOLTAGE = 32
    HI_MOTOR_TEMP = 64
    HI_DEVICE_TEMP = 128
    OVERVOLTAGE = 256
    OVERCURRENT = 512
    RACEAWAY = 1024
    USER_ERR = 2048
    UNKNOWN_ERR_12 = 4096
    UNKNOWN_ERR_13 = 8192
    CURRENT_ERR = 16384
    BALLAST_OVERLOAD = 32768
    DEVICE_ID_ERR = 65536
    RUN_SIG_FAULT = 131072
    UNKNOWN_ERR_19 = 262144
    UNKNOWN_ERR_20 = 524288
    POWERVOLTAGE_WARN = 1048576
    HI_MOTOR_TEMP_WARN = 2097152
    HI_DEVICE_TEMP_WARN = 4194304
    VOUT_LIMIT_WARN = 8388608
    OVERCURRENT_WARN = 16777216
    RACEAWAY_WARN = 33554432
    UNKNOWN_ERR_27 = 67108864
    UNKNOWN_ERR_28 = 134217728
    UNKNOWN_ERR_29 = 268435456
    UNKNOWN_ERR_30 = 536870912
    BALLAST_OVERLOAD_WARN = 1073741824

class PrimaryRegVal():
    inv_status = PrimaryInvStatus(0)
    inv_errors = PrimaryInvErrors(0)

# Enums

class PrimaryTlmStatus(IntEnum):
    OFF = 0
    ON = 1

class PrimaryRaceType(IntEnum):
    ACCELERATION = 0
    SKIDPAD = 1
    AUTOCROSS = 2
    ENDURANCE = 3

class PrimaryInverterStatus(IntEnum):
    OFF = 0
    IDLE = 1
    ON = 2

class PrimaryCarStatus(IntEnum):
    IDLE = 0
    SETUP = 1
    RUN = 2

class PrimaryTsStatus(IntEnum):
    OFF = 0
    PRECHARGE = 1
    ON = 2
    FATAL = 3

class PrimaryTsStatusSet(IntEnum):
    OFF = 0
    ON = 1

class PrimarySetBalancingStatus(IntEnum):
    OFF = 0
    ON = 1

class PrimaryTractionControl(IntEnum):
    OFF = 0
    SLIP_CONTROL = 1
    TORQUE_VECTORING = 2
    COMPLETE = 3

class PrimaryMap(IntEnum):
    R = 0
    D20 = 1
    D40 = 2
    D60 = 3
    D80 = 4
    D100 = 5

class PrimaryCarStatusSet(IntEnum):
    IDLE = 0
    RUN = 1

class PrimaryBound(IntEnum):
    SET_MAX = 0
    SET_MIN = 1

class PrimaryPedal(IntEnum):
    ACCELERATOR = 0
    BRAKE = 1

class PrimaryBalancingStatus(IntEnum):
    OFF = 0
    ON = 1

# Messages

class PrimarySteerVersionMsg:
    def __init__(self, component_version: int = None, cancicd_version: int = None):
        if component_version is not None:
            self.component_version = int(component_version)
        if cancicd_version is not None:
            self.cancicd_version = int(cancicd_version)
        self.size = 2
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BB", self.component_version, self.cancicd_version))
        return data

    def deserialize(self, data):
        self.component_version = int(unpack("<B", data[0:1])[0])
        self.cancicd_version = int(unpack("<xB", data[0:2])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimarySteerVersionMsg):
            return False
        if self.component_version != other.component_version:
            return False
        if self.cancicd_version != other.cancicd_version:
            return False
        return True

class PrimaryDasVersionMsg:
    def __init__(self, component_version: int = None, cancicd_version: int = None):
        if component_version is not None:
            self.component_version = int(component_version)
        if cancicd_version is not None:
            self.cancicd_version = int(cancicd_version)
        self.size = 2
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BB", self.component_version, self.cancicd_version))
        return data

    def deserialize(self, data):
        self.component_version = int(unpack("<B", data[0:1])[0])
        self.cancicd_version = int(unpack("<xB", data[0:2])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryDasVersionMsg):
            return False
        if self.component_version != other.component_version:
            return False
        if self.cancicd_version != other.cancicd_version:
            return False
        return True

class PrimaryHvVersionMsg:
    def __init__(self, component_version: int = None, cancicd_version: int = None):
        if component_version is not None:
            self.component_version = int(component_version)
        if cancicd_version is not None:
            self.cancicd_version = int(cancicd_version)
        self.size = 2
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BB", self.component_version, self.cancicd_version))
        return data

    def deserialize(self, data):
        self.component_version = int(unpack("<B", data[0:1])[0])
        self.cancicd_version = int(unpack("<xB", data[0:2])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvVersionMsg):
            return False
        if self.component_version != other.component_version:
            return False
        if self.cancicd_version != other.cancicd_version:
            return False
        return True

class PrimaryLvVersionMsg:
    def __init__(self, component_version: int = None, cancicd_version: int = None):
        if component_version is not None:
            self.component_version = int(component_version)
        if cancicd_version is not None:
            self.cancicd_version = int(cancicd_version)
        self.size = 2
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BB", self.component_version, self.cancicd_version))
        return data

    def deserialize(self, data):
        self.component_version = int(unpack("<B", data[0:1])[0])
        self.cancicd_version = int(unpack("<xB", data[0:2])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryLvVersionMsg):
            return False
        if self.component_version != other.component_version:
            return False
        if self.cancicd_version != other.cancicd_version:
            return False
        return True

class PrimaryTlmVersionMsg:
    def __init__(self, component_version: int = None, cancicd_version: int = None):
        if component_version is not None:
            self.component_version = int(component_version)
        if cancicd_version is not None:
            self.cancicd_version = int(cancicd_version)
        self.size = 2
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BB", self.component_version, self.cancicd_version))
        return data

    def deserialize(self, data):
        self.component_version = int(unpack("<B", data[0:1])[0])
        self.cancicd_version = int(unpack("<xB", data[0:2])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryTlmVersionMsg):
            return False
        if self.component_version != other.component_version:
            return False
        if self.cancicd_version != other.cancicd_version:
            return False
        return True

class PrimaryTimestampMsg:
    def __init__(self, timestamp: int = None):
        if timestamp is not None:
            self.timestamp = int(timestamp)
        self.size = 4
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<I", self.timestamp))
        return data

    def deserialize(self, data):
        self.timestamp = int(unpack("<I", data[0:4])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryTimestampMsg):
            return False
        if self.timestamp != other.timestamp:
            return False
        return True

class PrimarySetTlmStatusMsg:
    def __init__(self, driver: int = None, circuit: int = None, race_type: PrimaryRaceType = None, tlm_status: PrimaryTlmStatus = None):
        if driver is not None:
            self.driver = int(driver)
        if circuit is not None:
            self.circuit = int(circuit)
        if race_type is not None:
            self.race_type = PrimaryRaceType(race_type)
        if tlm_status is not None:
            self.tlm_status = PrimaryTlmStatus(tlm_status)
        self.size = 3

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBB", self.driver, self.circuit, self.race_type << 6 & 255 | self.tlm_status << 5 & 255))
        return data

    def deserialize(self, data):
        self.driver = int(unpack("<B", data[0:1])[0])
        self.circuit = int(unpack("<xB", data[0:2])[0])
        self.race_type = PrimaryRaceType((unpack("<xxB", data[0:3])[0] & 192) >> 6)
        self.tlm_status = PrimaryTlmStatus((unpack("<xxB", data[0:3])[0] & 32) >> 5)

    def __eq__(self, other):
        if not isinstance(other, PrimarySetTlmStatusMsg):
            return False
        if self.driver != other.driver:
            return False
        if self.circuit != other.circuit:
            return False
        if self.race_type != other.race_type:
            return False
        if self.tlm_status != other.tlm_status:
            return False
        return True

class PrimarySteerSystemStatusMsg:
    def __init__(self, soc_temp: int = None):
        if soc_temp is not None:
            self.soc_temp = int(soc_temp)
        self.size = 1
        self.millis = 2000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.soc_temp))
        return data

    def deserialize(self, data):
        self.soc_temp = int(unpack("<B", data[0:1])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimarySteerSystemStatusMsg):
            return False
        if self.soc_temp != other.soc_temp:
            return False
        return True

class PrimaryMarkerMsg:
    def __init__(self):
        self.size = 0

    def serialize(self):
        return bytearray()

    def deserialize(self, data):
        pass

    def __eq__(self, other):
        if not isinstance(other, PrimaryMarkerMsg):
            return False
        return True

class PrimaryTlmStatusMsg:
    def __init__(self, driver: int = None, circuit: int = None, race_type: PrimaryRaceType = None, tlm_status: PrimaryTlmStatus = None):
        if driver is not None:
            self.driver = int(driver)
        if circuit is not None:
            self.circuit = int(circuit)
        if race_type is not None:
            self.race_type = PrimaryRaceType(race_type)
        if tlm_status is not None:
            self.tlm_status = PrimaryTlmStatus(tlm_status)
        self.size = 3
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBB", self.driver, self.circuit, self.race_type << 6 & 255 | self.tlm_status << 5 & 255))
        return data

    def deserialize(self, data):
        self.driver = int(unpack("<B", data[0:1])[0])
        self.circuit = int(unpack("<xB", data[0:2])[0])
        self.race_type = PrimaryRaceType((unpack("<xxB", data[0:3])[0] & 192) >> 6)
        self.tlm_status = PrimaryTlmStatus((unpack("<xxB", data[0:3])[0] & 32) >> 5)

    def __eq__(self, other):
        if not isinstance(other, PrimaryTlmStatusMsg):
            return False
        if self.driver != other.driver:
            return False
        if self.circuit != other.circuit:
            return False
        if self.race_type != other.race_type:
            return False
        if self.tlm_status != other.tlm_status:
            return False
        return True

class PrimaryCarStatusMsg:
    def __init__(self, inverter_l: PrimaryInverterStatus = None, inverter_r: PrimaryInverterStatus = None, car_status: PrimaryCarStatus = None):
        if inverter_l is not None:
            self.inverter_l = PrimaryInverterStatus(inverter_l)
        if inverter_r is not None:
            self.inverter_r = PrimaryInverterStatus(inverter_r)
        if car_status is not None:
            self.car_status = PrimaryCarStatus(car_status)
        self.size = 1
        self.millis = 100

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.inverter_l << 6 & 255 | self.inverter_r << 4 & 255 | self.car_status << 2 & 255))
        return data

    def deserialize(self, data):
        self.inverter_l = PrimaryInverterStatus((unpack("<B", data[0:1])[0] & 192) >> 6)
        self.inverter_r = PrimaryInverterStatus((unpack("<B", data[0:1])[0] & 48) >> 4)
        self.car_status = PrimaryCarStatus((unpack("<B", data[0:1])[0] & 12) >> 2)

    def __eq__(self, other):
        if not isinstance(other, PrimaryCarStatusMsg):
            return False
        if self.inverter_l != other.inverter_l:
            return False
        if self.inverter_r != other.inverter_r:
            return False
        if self.car_status != other.car_status:
            return False
        return True

class PrimaryDasErrorsMsg:
    def __init__(self, das_error: bin = None):
        if das_error is not None:
            self.das_error = bin(das_error)
        self.size = 1
        self.millis = 20

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", (int(self.das_error,2) >> 0) & 255))
        return data

    def deserialize(self, data):
        self.das_error = bin((unpack("<B", data[0:1])[0] << 0))

    def __eq__(self, other):
        if not isinstance(other, PrimaryDasErrorsMsg):
            return False
        if self.das_error != other.das_error:
            return False
        return True

class PrimarySpeedMsg:
    def __init__(self, encoder_r: int = None, encoder_l: int = None, inverter_r: int = None, inverter_l: int = None):
        if encoder_r is not None:
            self.encoder_r = int(encoder_r)
        if encoder_l is not None:
            self.encoder_l = int(encoder_l)
        if inverter_r is not None:
            self.inverter_r = int(inverter_r)
        if inverter_l is not None:
            self.inverter_l = int(inverter_l)
        self.size = 8
        self.millis = 100

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.encoder_r, self.encoder_l, self.inverter_r, self.inverter_l))
        return data

    def deserialize(self, data):
        self.encoder_r = int(unpack("<H", data[0:2])[0])
        self.encoder_l = int(unpack("<xxH", data[0:4])[0])
        self.inverter_r = int(unpack("<xxxxH", data[0:6])[0])
        self.inverter_l = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimarySpeedMsg):
            return False
        if self.encoder_r != other.encoder_r:
            return False
        if self.encoder_l != other.encoder_l:
            return False
        if self.inverter_r != other.inverter_r:
            return False
        if self.inverter_l != other.inverter_l:
            return False
        return True

class PrimaryHvVoltageMsg:
    def __init__(self, pack_voltage: int = None, bus_voltage: int = None, max_cell_voltage: int = None, min_cell_voltage: int = None):
        if pack_voltage is not None:
            self.pack_voltage = int(pack_voltage)
        if bus_voltage is not None:
            self.bus_voltage = int(bus_voltage)
        if max_cell_voltage is not None:
            self.max_cell_voltage = int(max_cell_voltage)
        if min_cell_voltage is not None:
            self.min_cell_voltage = int(min_cell_voltage)
        self.size = 8
        self.millis = 20

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.pack_voltage, self.bus_voltage, self.max_cell_voltage, self.min_cell_voltage))
        return data

    def deserialize(self, data):
        self.pack_voltage = int(unpack("<H", data[0:2])[0])
        self.bus_voltage = int(unpack("<xxH", data[0:4])[0])
        self.max_cell_voltage = int(unpack("<xxxxH", data[0:6])[0])
        self.min_cell_voltage = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvVoltageMsg):
            return False
        if self.pack_voltage != other.pack_voltage:
            return False
        if self.bus_voltage != other.bus_voltage:
            return False
        if self.max_cell_voltage != other.max_cell_voltage:
            return False
        if self.min_cell_voltage != other.min_cell_voltage:
            return False
        return True

class PrimaryHvCurrentMsg:
    def __init__(self, current: int = None, power: int = None):
        if current is not None:
            self.current = int(current)
        if power is not None:
            self.power = int(power)
        self.size = 4
        self.millis = 20

    def serialize(self):
        data = bytearray()
        data.extend(pack("<Hh", self.current, self.power))
        return data

    def deserialize(self, data):
        self.current = int(unpack("<H", data[0:2])[0])
        self.power = int(unpack("<xxh", data[0:4])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvCurrentMsg):
            return False
        if self.current != other.current:
            return False
        if self.power != other.power:
            return False
        return True

class PrimaryHvTempMsg:
    def __init__(self, average_temp: int = None, max_temp: int = None, min_temp: int = None):
        if average_temp is not None:
            self.average_temp = int(average_temp)
        if max_temp is not None:
            self.max_temp = int(max_temp)
        if min_temp is not None:
            self.min_temp = int(min_temp)
        self.size = 6
        self.millis = 200

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHH", self.average_temp, self.max_temp, self.min_temp))
        return data

    def deserialize(self, data):
        self.average_temp = int(unpack("<H", data[0:2])[0])
        self.max_temp = int(unpack("<xxH", data[0:4])[0])
        self.min_temp = int(unpack("<xxxxH", data[0:6])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvTempMsg):
            return False
        if self.average_temp != other.average_temp:
            return False
        if self.max_temp != other.max_temp:
            return False
        if self.min_temp != other.min_temp:
            return False
        return True

class PrimaryHvErrorsMsg:
    def __init__(self, warnings: bin = None, errors: bin = None):
        if warnings is not None:
            self.warnings = bin(warnings)
        if errors is not None:
            self.errors = bin(errors)
        self.size = 4
        self.millis = 20

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBBB", (int(self.warnings,2) >> 8) & 255, (int(self.warnings,2) >> 0) & 255, (int(self.errors,2) >> 8) & 255, (int(self.errors,2) >> 0) & 255))
        return data

    def deserialize(self, data):
        self.warnings = bin((unpack("<BB", data[0:2])[0] << 8) | (unpack("<BB", data[0:2])[1] << 0))
        self.errors = bin((unpack("<xxBB", data[0:4])[0] << 8) | (unpack("<xxBB", data[0:4])[1] << 0))

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvErrorsMsg):
            return False
        if self.warnings != other.warnings:
            return False
        if self.errors != other.errors:
            return False
        return True

class PrimaryTsStatusMsg:
    def __init__(self, ts_status: PrimaryTsStatus = None):
        if ts_status is not None:
            self.ts_status = PrimaryTsStatus(ts_status)
        self.size = 1
        self.millis = 20

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.ts_status << 6 & 255))
        return data

    def deserialize(self, data):
        self.ts_status = PrimaryTsStatus((unpack("<B", data[0:1])[0] & 192) >> 6)

    def __eq__(self, other):
        if not isinstance(other, PrimaryTsStatusMsg):
            return False
        if self.ts_status != other.ts_status:
            return False
        return True

class PrimarySetTsStatusMsg:
    def __init__(self, ts_status_set: PrimaryTsStatusSet = None):
        if ts_status_set is not None:
            self.ts_status_set = PrimaryTsStatusSet(ts_status_set)
        self.size = 1

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.ts_status_set << 7 & 255))
        return data

    def deserialize(self, data):
        self.ts_status_set = PrimaryTsStatusSet((unpack("<B", data[0:1])[0] & 128) >> 7)

    def __eq__(self, other):
        if not isinstance(other, PrimarySetTsStatusMsg):
            return False
        if self.ts_status_set != other.ts_status_set:
            return False
        return True

class PrimarySetCellBalancingStatusMsg:
    def __init__(self, set_balancing_status: PrimarySetBalancingStatus = None):
        if set_balancing_status is not None:
            self.set_balancing_status = PrimarySetBalancingStatus(set_balancing_status)
        self.size = 1

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.set_balancing_status << 7 & 255))
        return data

    def deserialize(self, data):
        self.set_balancing_status = PrimarySetBalancingStatus((unpack("<B", data[0:1])[0] & 128) >> 7)

    def __eq__(self, other):
        if not isinstance(other, PrimarySetCellBalancingStatusMsg):
            return False
        if self.set_balancing_status != other.set_balancing_status:
            return False
        return True

class PrimaryHandcartStatusMsg:
    def __init__(self, connected: bool = None):
        if connected is not None:
            self.connected = bool(connected)
        self.size = 1
        self.millis = 500

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.connected << 7 & 255))
        return data

    def deserialize(self, data):
        self.connected = bool((unpack("<B", data[0:1])[0] & 128) >> 7)

    def __eq__(self, other):
        if not isinstance(other, PrimaryHandcartStatusMsg):
            return False
        if self.connected != other.connected:
            return False
        return True

class PrimarySteerStatusMsg:
    def __init__(self, map: PrimaryMap = None, traction_control: PrimaryTractionControl = None):
        if map is not None:
            self.map = PrimaryMap(map)
        if traction_control is not None:
            self.traction_control = PrimaryTractionControl(traction_control)
        self.size = 1
        self.millis = 100

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.map << 5 & 255 | self.traction_control << 3 & 255))
        return data

    def deserialize(self, data):
        self.map = PrimaryMap((unpack("<B", data[0:1])[0] & 224) >> 5)
        self.traction_control = PrimaryTractionControl((unpack("<B", data[0:1])[0] & 24) >> 3)

    def __eq__(self, other):
        if not isinstance(other, PrimarySteerStatusMsg):
            return False
        if self.map != other.map:
            return False
        if self.traction_control != other.traction_control:
            return False
        return True

class PrimarySetCarStatusMsg:
    def __init__(self, car_status_set: PrimaryCarStatusSet = None):
        if car_status_set is not None:
            self.car_status_set = PrimaryCarStatusSet(car_status_set)
        self.size = 1

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.car_status_set << 7 & 255))
        return data

    def deserialize(self, data):
        self.car_status_set = PrimaryCarStatusSet((unpack("<B", data[0:1])[0] & 128) >> 7)

    def __eq__(self, other):
        if not isinstance(other, PrimarySetCarStatusMsg):
            return False
        if self.car_status_set != other.car_status_set:
            return False
        return True

class PrimarySetPedalsRangeMsg:
    def __init__(self, bound: PrimaryBound = None, pedal: PrimaryPedal = None):
        if bound is not None:
            self.bound = PrimaryBound(bound)
        if pedal is not None:
            self.pedal = PrimaryPedal(pedal)
        self.size = 1

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.bound << 7 & 255 | self.pedal << 6 & 255))
        return data

    def deserialize(self, data):
        self.bound = PrimaryBound((unpack("<B", data[0:1])[0] & 128) >> 7)
        self.pedal = PrimaryPedal((unpack("<B", data[0:1])[0] & 64) >> 6)

    def __eq__(self, other):
        if not isinstance(other, PrimarySetPedalsRangeMsg):
            return False
        if self.bound != other.bound:
            return False
        if self.pedal != other.pedal:
            return False
        return True

class PrimaryLvCurrentMsg:
    def __init__(self, current: int = None):
        if current is not None:
            self.current = int(current)
        self.size = 1
        self.millis = 500

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.current))
        return data

    def deserialize(self, data):
        self.current = int(unpack("<B", data[0:1])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryLvCurrentMsg):
            return False
        if self.current != other.current:
            return False
        return True

class PrimaryLvVoltageMsg:
    def __init__(self, total_voltage: int = None, voltage_1: int = None, voltage_2: int = None, voltage_3: int = None, voltage_4: int = None):
        if total_voltage is not None:
            self.total_voltage = int(total_voltage)
        if voltage_1 is not None:
            self.voltage_1 = int(voltage_1)
        if voltage_2 is not None:
            self.voltage_2 = int(voltage_2)
        if voltage_3 is not None:
            self.voltage_3 = int(voltage_3)
        if voltage_4 is not None:
            self.voltage_4 = int(voltage_4)
        self.size = 6
        self.millis = 200

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HBBBB", self.total_voltage, self.voltage_1, self.voltage_2, self.voltage_3, self.voltage_4))
        return data

    def deserialize(self, data):
        self.total_voltage = int(unpack("<H", data[0:2])[0])
        self.voltage_1 = int(unpack("<xxB", data[0:3])[0])
        self.voltage_2 = int(unpack("<xxxB", data[0:4])[0])
        self.voltage_3 = int(unpack("<xxxxB", data[0:5])[0])
        self.voltage_4 = int(unpack("<xxxxxB", data[0:6])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryLvVoltageMsg):
            return False
        if self.total_voltage != other.total_voltage:
            return False
        if self.voltage_1 != other.voltage_1:
            return False
        if self.voltage_2 != other.voltage_2:
            return False
        if self.voltage_3 != other.voltage_3:
            return False
        if self.voltage_4 != other.voltage_4:
            return False
        return True

class PrimaryLvTemperatureMsg:
    def __init__(self, bp_temperature: int = None, dcdc_temperature: int = None):
        if bp_temperature is not None:
            self.bp_temperature = int(bp_temperature)
        if dcdc_temperature is not None:
            self.dcdc_temperature = int(dcdc_temperature)
        self.size = 2
        self.millis = 200

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BB", self.bp_temperature, self.dcdc_temperature))
        return data

    def deserialize(self, data):
        self.bp_temperature = int(unpack("<B", data[0:1])[0])
        self.dcdc_temperature = int(unpack("<xB", data[0:2])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryLvTemperatureMsg):
            return False
        if self.bp_temperature != other.bp_temperature:
            return False
        if self.dcdc_temperature != other.dcdc_temperature:
            return False
        return True

class PrimaryCoolingStatusMsg:
    def __init__(self, hv_fan_speed: int = None, lv_fan_speed: int = None, pump_speed: int = None):
        if hv_fan_speed is not None:
            self.hv_fan_speed = int(hv_fan_speed)
        if lv_fan_speed is not None:
            self.lv_fan_speed = int(lv_fan_speed)
        if pump_speed is not None:
            self.pump_speed = int(pump_speed)
        self.size = 3
        self.millis = 1000

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBB", self.hv_fan_speed, self.lv_fan_speed, self.pump_speed))
        return data

    def deserialize(self, data):
        self.hv_fan_speed = int(unpack("<B", data[0:1])[0])
        self.lv_fan_speed = int(unpack("<xB", data[0:2])[0])
        self.pump_speed = int(unpack("<xxB", data[0:3])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryCoolingStatusMsg):
            return False
        if self.hv_fan_speed != other.hv_fan_speed:
            return False
        if self.lv_fan_speed != other.lv_fan_speed:
            return False
        if self.pump_speed != other.pump_speed:
            return False
        return True

class PrimaryHvCellsVoltageMsg:
    def __init__(self, voltage_0: int = None, voltage_1: int = None, voltage_2: int = None, cell_index: int = None):
        if voltage_0 is not None:
            self.voltage_0 = int(voltage_0)
        if voltage_1 is not None:
            self.voltage_1 = int(voltage_1)
        if voltage_2 is not None:
            self.voltage_2 = int(voltage_2)
        if cell_index is not None:
            self.cell_index = int(cell_index)
        self.size = 7
        self.millis = 200

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHB", self.voltage_0, self.voltage_1, self.voltage_2, self.cell_index))
        return data

    def deserialize(self, data):
        self.voltage_0 = int(unpack("<H", data[0:2])[0])
        self.voltage_1 = int(unpack("<xxH", data[0:4])[0])
        self.voltage_2 = int(unpack("<xxxxH", data[0:6])[0])
        self.cell_index = int(unpack("<xxxxxxB", data[0:7])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvCellsVoltageMsg):
            return False
        if self.voltage_0 != other.voltage_0:
            return False
        if self.voltage_1 != other.voltage_1:
            return False
        if self.voltage_2 != other.voltage_2:
            return False
        if self.cell_index != other.cell_index:
            return False
        return True

class PrimaryHvCellsTempMsg:
    def __init__(self, cell_index: int = None, temp_0: int = None, temp_1: int = None, temp_2: int = None, temp_3: int = None, temp_4: int = None, temp_5: int = None, temp_6: int = None):
        if cell_index is not None:
            self.cell_index = int(cell_index)
        if temp_0 is not None:
            self.temp_0 = int(temp_0)
        if temp_1 is not None:
            self.temp_1 = int(temp_1)
        if temp_2 is not None:
            self.temp_2 = int(temp_2)
        if temp_3 is not None:
            self.temp_3 = int(temp_3)
        if temp_4 is not None:
            self.temp_4 = int(temp_4)
        if temp_5 is not None:
            self.temp_5 = int(temp_5)
        if temp_6 is not None:
            self.temp_6 = int(temp_6)
        self.size = 8
        self.millis = 100

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBBBBBBB", self.cell_index, self.temp_0, self.temp_1, self.temp_2, self.temp_3, self.temp_4, self.temp_5, self.temp_6))
        return data

    def deserialize(self, data):
        self.cell_index = int(unpack("<B", data[0:1])[0])
        self.temp_0 = int(unpack("<xB", data[0:2])[0])
        self.temp_1 = int(unpack("<xxB", data[0:3])[0])
        self.temp_2 = int(unpack("<xxxB", data[0:4])[0])
        self.temp_3 = int(unpack("<xxxxB", data[0:5])[0])
        self.temp_4 = int(unpack("<xxxxxB", data[0:6])[0])
        self.temp_5 = int(unpack("<xxxxxxB", data[0:7])[0])
        self.temp_6 = int(unpack("<xxxxxxxB", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvCellsTempMsg):
            return False
        if self.cell_index != other.cell_index:
            return False
        if self.temp_0 != other.temp_0:
            return False
        if self.temp_1 != other.temp_1:
            return False
        if self.temp_2 != other.temp_2:
            return False
        if self.temp_3 != other.temp_3:
            return False
        if self.temp_4 != other.temp_4:
            return False
        if self.temp_5 != other.temp_5:
            return False
        if self.temp_6 != other.temp_6:
            return False
        return True

class PrimaryHvCellBalancingStatusMsg:
    def __init__(self, balancing_status: PrimaryBalancingStatus = None):
        if balancing_status is not None:
            self.balancing_status = PrimaryBalancingStatus(balancing_status)
        self.size = 1
        self.millis = 500

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.balancing_status << 7 & 255))
        return data

    def deserialize(self, data):
        self.balancing_status = PrimaryBalancingStatus((unpack("<B", data[0:1])[0] & 128) >> 7)

    def __eq__(self, other):
        if not isinstance(other, PrimaryHvCellBalancingStatusMsg):
            return False
        if self.balancing_status != other.balancing_status:
            return False
        return True

class PrimaryInvLSetTorqueMsg:
    def __init__(self, regid: int = None, lsb: int = None, msb: int = None):
        if regid is not None:
            self.regid = int(regid)
        if lsb is not None:
            self.lsb = int(lsb)
        if msb is not None:
            self.msb = int(msb)
        self.size = 3
        self.millis = 20

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBB", self.regid, self.lsb, self.msb))
        return data

    def deserialize(self, data):
        self.regid = int(unpack("<B", data[0:1])[0])
        self.lsb = int(unpack("<xB", data[0:2])[0])
        self.msb = int(unpack("<xxB", data[0:3])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryInvLSetTorqueMsg):
            return False
        if self.regid != other.regid:
            return False
        if self.lsb != other.lsb:
            return False
        if self.msb != other.msb:
            return False
        return True

class PrimaryInvLResponseMsg:
    def __init__(self, reg_val: bin = None, reg_id: int = None):
        if reg_val is not None:
            self.reg_val = bin(reg_val)
        if reg_id is not None:
            self.reg_id = int(reg_id)
        self.size = 5
        self.millis = 100

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBBBB", (int(self.reg_val,2) >> 24) & 255, (int(self.reg_val,2) >> 16) & 255, (int(self.reg_val,2) >> 8) & 255, (int(self.reg_val,2) >> 0) & 255, self.reg_id))
        return data

    def deserialize(self, data):
        self.reg_val = bin((unpack("<BBBB", data[0:4])[0] << 24) | (unpack("<BBBB", data[0:4])[1] << 16) | (unpack("<BBBB", data[0:4])[2] << 8) | (unpack("<BBBB", data[0:4])[3] << 0))
        self.reg_id = int(unpack("<xxxxB", data[0:5])[0])

    def __eq__(self, other):
        if not isinstance(other, PrimaryInvLResponseMsg):
            return False
        if self.reg_val != other.reg_val:
            return False
        if self.reg_id != other.reg_id:
            return False
        return True

