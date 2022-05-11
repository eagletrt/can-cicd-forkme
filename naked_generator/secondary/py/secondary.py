from enum import IntEnum, IntFlag
from struct import pack, unpack

# Bitsets

# Enums

# Messages

class SecondaryImuAngularRateMsg:
    def __init__(self, ang_rate_x: int = None, ang_rate_y: int = None, ang_rate_z: int = None):
        self.ang_rate_x = int(ang_rate_x) if ang_rate_x is not None else None
        self.ang_rate_y = int(ang_rate_y) if ang_rate_y is not None else None
        self.ang_rate_z = int(ang_rate_z) if ang_rate_z is not None else None
        self.timestamp=int()
        self.size = 6

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHH", self.ang_rate_x, self.ang_rate_y, self.ang_rate_z))
        return data

    def deserialize(self, data):
        self.ang_rate_x = int(unpack("<H", data[0:2])[0])
        self.ang_rate_y = int(unpack("<xxH", data[0:4])[0])
        self.ang_rate_z = int(unpack("<xxxxH", data[0:6])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryImuAngularRateMsg):
            return False
        if self.ang_rate_x != other.ang_rate_x:
            return False
        if self.ang_rate_y != other.ang_rate_y:
            return False
        if self.ang_rate_z != other.ang_rate_z:
            return False
        return True

class SecondaryImuAccelerationMsg:
    def __init__(self, accel_x: int = None, accel_y: int = None, accel_z: int = None):
        self.accel_x = int(accel_x) if accel_x is not None else None
        self.accel_y = int(accel_y) if accel_y is not None else None
        self.accel_z = int(accel_z) if accel_z is not None else None
        self.timestamp=int()
        self.size = 6

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHH", self.accel_x, self.accel_y, self.accel_z))
        return data

    def deserialize(self, data):
        self.accel_x = int(unpack("<H", data[0:2])[0])
        self.accel_y = int(unpack("<xxH", data[0:4])[0])
        self.accel_z = int(unpack("<xxxxH", data[0:6])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryImuAccelerationMsg):
            return False
        if self.accel_x != other.accel_x:
            return False
        if self.accel_y != other.accel_y:
            return False
        if self.accel_z != other.accel_z:
            return False
        return True

class SecondaryIrtsFl0Msg:
    def __init__(self, channel1: int = None, channel2: int = None, channel3: int = None, channel4: int = None):
        self.channel1 = int(channel1) if channel1 is not None else None
        self.channel2 = int(channel2) if channel2 is not None else None
        self.channel3 = int(channel3) if channel3 is not None else None
        self.channel4 = int(channel4) if channel4 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel1, self.channel2, self.channel3, self.channel4))
        return data

    def deserialize(self, data):
        self.channel1 = int(unpack("<H", data[0:2])[0])
        self.channel2 = int(unpack("<xxH", data[0:4])[0])
        self.channel3 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel4 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFl0Msg):
            return False
        if self.channel1 != other.channel1:
            return False
        if self.channel2 != other.channel2:
            return False
        if self.channel3 != other.channel3:
            return False
        if self.channel4 != other.channel4:
            return False
        return True

class SecondaryIrtsFl1Msg:
    def __init__(self, channel5: int = None, channel6: int = None, channel7: int = None, channel8: int = None):
        self.channel5 = int(channel5) if channel5 is not None else None
        self.channel6 = int(channel6) if channel6 is not None else None
        self.channel7 = int(channel7) if channel7 is not None else None
        self.channel8 = int(channel8) if channel8 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel5, self.channel6, self.channel7, self.channel8))
        return data

    def deserialize(self, data):
        self.channel5 = int(unpack("<H", data[0:2])[0])
        self.channel6 = int(unpack("<xxH", data[0:4])[0])
        self.channel7 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel8 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFl1Msg):
            return False
        if self.channel5 != other.channel5:
            return False
        if self.channel6 != other.channel6:
            return False
        if self.channel7 != other.channel7:
            return False
        if self.channel8 != other.channel8:
            return False
        return True

class SecondaryIrtsFl2Msg:
    def __init__(self, channel9: int = None, channel10: int = None, channel11: int = None, channel12: int = None):
        self.channel9 = int(channel9) if channel9 is not None else None
        self.channel10 = int(channel10) if channel10 is not None else None
        self.channel11 = int(channel11) if channel11 is not None else None
        self.channel12 = int(channel12) if channel12 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel9, self.channel10, self.channel11, self.channel12))
        return data

    def deserialize(self, data):
        self.channel9 = int(unpack("<H", data[0:2])[0])
        self.channel10 = int(unpack("<xxH", data[0:4])[0])
        self.channel11 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel12 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFl2Msg):
            return False
        if self.channel9 != other.channel9:
            return False
        if self.channel10 != other.channel10:
            return False
        if self.channel11 != other.channel11:
            return False
        if self.channel12 != other.channel12:
            return False
        return True

class SecondaryIrtsFl3Msg:
    def __init__(self, channel13: int = None, channel14: int = None, channel15: int = None, channel16: int = None):
        self.channel13 = int(channel13) if channel13 is not None else None
        self.channel14 = int(channel14) if channel14 is not None else None
        self.channel15 = int(channel15) if channel15 is not None else None
        self.channel16 = int(channel16) if channel16 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel13, self.channel14, self.channel15, self.channel16))
        return data

    def deserialize(self, data):
        self.channel13 = int(unpack("<H", data[0:2])[0])
        self.channel14 = int(unpack("<xxH", data[0:4])[0])
        self.channel15 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel16 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFl3Msg):
            return False
        if self.channel13 != other.channel13:
            return False
        if self.channel14 != other.channel14:
            return False
        if self.channel15 != other.channel15:
            return False
        if self.channel16 != other.channel16:
            return False
        return True

class SecondaryIrtsFr0Msg:
    def __init__(self, channel1: int = None, channel2: int = None, channel3: int = None, channel4: int = None):
        self.channel1 = int(channel1) if channel1 is not None else None
        self.channel2 = int(channel2) if channel2 is not None else None
        self.channel3 = int(channel3) if channel3 is not None else None
        self.channel4 = int(channel4) if channel4 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel1, self.channel2, self.channel3, self.channel4))
        return data

    def deserialize(self, data):
        self.channel1 = int(unpack("<H", data[0:2])[0])
        self.channel2 = int(unpack("<xxH", data[0:4])[0])
        self.channel3 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel4 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFr0Msg):
            return False
        if self.channel1 != other.channel1:
            return False
        if self.channel2 != other.channel2:
            return False
        if self.channel3 != other.channel3:
            return False
        if self.channel4 != other.channel4:
            return False
        return True

class SecondaryIrtsFr1Msg:
    def __init__(self, channel5: int = None, channel6: int = None, channel7: int = None, channel8: int = None):
        self.channel5 = int(channel5) if channel5 is not None else None
        self.channel6 = int(channel6) if channel6 is not None else None
        self.channel7 = int(channel7) if channel7 is not None else None
        self.channel8 = int(channel8) if channel8 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel5, self.channel6, self.channel7, self.channel8))
        return data

    def deserialize(self, data):
        self.channel5 = int(unpack("<H", data[0:2])[0])
        self.channel6 = int(unpack("<xxH", data[0:4])[0])
        self.channel7 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel8 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFr1Msg):
            return False
        if self.channel5 != other.channel5:
            return False
        if self.channel6 != other.channel6:
            return False
        if self.channel7 != other.channel7:
            return False
        if self.channel8 != other.channel8:
            return False
        return True

class SecondaryIrtsFr2Msg:
    def __init__(self, channel9: int = None, channel10: int = None, channel11: int = None, channel12: int = None):
        self.channel9 = int(channel9) if channel9 is not None else None
        self.channel10 = int(channel10) if channel10 is not None else None
        self.channel11 = int(channel11) if channel11 is not None else None
        self.channel12 = int(channel12) if channel12 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel9, self.channel10, self.channel11, self.channel12))
        return data

    def deserialize(self, data):
        self.channel9 = int(unpack("<H", data[0:2])[0])
        self.channel10 = int(unpack("<xxH", data[0:4])[0])
        self.channel11 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel12 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFr2Msg):
            return False
        if self.channel9 != other.channel9:
            return False
        if self.channel10 != other.channel10:
            return False
        if self.channel11 != other.channel11:
            return False
        if self.channel12 != other.channel12:
            return False
        return True

class SecondaryIrtsFr3Msg:
    def __init__(self, channel13: int = None, channel14: int = None, channel15: int = None, channel16: int = None):
        self.channel13 = int(channel13) if channel13 is not None else None
        self.channel14 = int(channel14) if channel14 is not None else None
        self.channel15 = int(channel15) if channel15 is not None else None
        self.channel16 = int(channel16) if channel16 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel13, self.channel14, self.channel15, self.channel16))
        return data

    def deserialize(self, data):
        self.channel13 = int(unpack("<H", data[0:2])[0])
        self.channel14 = int(unpack("<xxH", data[0:4])[0])
        self.channel15 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel16 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsFr3Msg):
            return False
        if self.channel13 != other.channel13:
            return False
        if self.channel14 != other.channel14:
            return False
        if self.channel15 != other.channel15:
            return False
        if self.channel16 != other.channel16:
            return False
        return True

class SecondaryIrtsRl0Msg:
    def __init__(self, channel1: int = None, channel2: int = None, channel3: int = None, channel4: int = None):
        self.channel1 = int(channel1) if channel1 is not None else None
        self.channel2 = int(channel2) if channel2 is not None else None
        self.channel3 = int(channel3) if channel3 is not None else None
        self.channel4 = int(channel4) if channel4 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel1, self.channel2, self.channel3, self.channel4))
        return data

    def deserialize(self, data):
        self.channel1 = int(unpack("<H", data[0:2])[0])
        self.channel2 = int(unpack("<xxH", data[0:4])[0])
        self.channel3 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel4 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRl0Msg):
            return False
        if self.channel1 != other.channel1:
            return False
        if self.channel2 != other.channel2:
            return False
        if self.channel3 != other.channel3:
            return False
        if self.channel4 != other.channel4:
            return False
        return True

class SecondaryIrtsRl1Msg:
    def __init__(self, channel5: int = None, channel6: int = None, channel7: int = None, channel8: int = None):
        self.channel5 = int(channel5) if channel5 is not None else None
        self.channel6 = int(channel6) if channel6 is not None else None
        self.channel7 = int(channel7) if channel7 is not None else None
        self.channel8 = int(channel8) if channel8 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel5, self.channel6, self.channel7, self.channel8))
        return data

    def deserialize(self, data):
        self.channel5 = int(unpack("<H", data[0:2])[0])
        self.channel6 = int(unpack("<xxH", data[0:4])[0])
        self.channel7 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel8 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRl1Msg):
            return False
        if self.channel5 != other.channel5:
            return False
        if self.channel6 != other.channel6:
            return False
        if self.channel7 != other.channel7:
            return False
        if self.channel8 != other.channel8:
            return False
        return True

class SecondaryIrtsRl2Msg:
    def __init__(self, channel9: int = None, channel10: int = None, channel11: int = None, channel12: int = None):
        self.channel9 = int(channel9) if channel9 is not None else None
        self.channel10 = int(channel10) if channel10 is not None else None
        self.channel11 = int(channel11) if channel11 is not None else None
        self.channel12 = int(channel12) if channel12 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel9, self.channel10, self.channel11, self.channel12))
        return data

    def deserialize(self, data):
        self.channel9 = int(unpack("<H", data[0:2])[0])
        self.channel10 = int(unpack("<xxH", data[0:4])[0])
        self.channel11 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel12 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRl2Msg):
            return False
        if self.channel9 != other.channel9:
            return False
        if self.channel10 != other.channel10:
            return False
        if self.channel11 != other.channel11:
            return False
        if self.channel12 != other.channel12:
            return False
        return True

class SecondaryIrtsRl3Msg:
    def __init__(self, channel13: int = None, channel14: int = None, channel15: int = None, channel16: int = None):
        self.channel13 = int(channel13) if channel13 is not None else None
        self.channel14 = int(channel14) if channel14 is not None else None
        self.channel15 = int(channel15) if channel15 is not None else None
        self.channel16 = int(channel16) if channel16 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel13, self.channel14, self.channel15, self.channel16))
        return data

    def deserialize(self, data):
        self.channel13 = int(unpack("<H", data[0:2])[0])
        self.channel14 = int(unpack("<xxH", data[0:4])[0])
        self.channel15 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel16 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRl3Msg):
            return False
        if self.channel13 != other.channel13:
            return False
        if self.channel14 != other.channel14:
            return False
        if self.channel15 != other.channel15:
            return False
        if self.channel16 != other.channel16:
            return False
        return True

class SecondaryIrtsRr0Msg:
    def __init__(self, channel1: int = None, channel2: int = None, channel3: int = None, channel4: int = None):
        self.channel1 = int(channel1) if channel1 is not None else None
        self.channel2 = int(channel2) if channel2 is not None else None
        self.channel3 = int(channel3) if channel3 is not None else None
        self.channel4 = int(channel4) if channel4 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel1, self.channel2, self.channel3, self.channel4))
        return data

    def deserialize(self, data):
        self.channel1 = int(unpack("<H", data[0:2])[0])
        self.channel2 = int(unpack("<xxH", data[0:4])[0])
        self.channel3 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel4 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRr0Msg):
            return False
        if self.channel1 != other.channel1:
            return False
        if self.channel2 != other.channel2:
            return False
        if self.channel3 != other.channel3:
            return False
        if self.channel4 != other.channel4:
            return False
        return True

class SecondaryIrtsRr1Msg:
    def __init__(self, channel5: int = None, channel6: int = None, channel7: int = None, channel8: int = None):
        self.channel5 = int(channel5) if channel5 is not None else None
        self.channel6 = int(channel6) if channel6 is not None else None
        self.channel7 = int(channel7) if channel7 is not None else None
        self.channel8 = int(channel8) if channel8 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel5, self.channel6, self.channel7, self.channel8))
        return data

    def deserialize(self, data):
        self.channel5 = int(unpack("<H", data[0:2])[0])
        self.channel6 = int(unpack("<xxH", data[0:4])[0])
        self.channel7 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel8 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRr1Msg):
            return False
        if self.channel5 != other.channel5:
            return False
        if self.channel6 != other.channel6:
            return False
        if self.channel7 != other.channel7:
            return False
        if self.channel8 != other.channel8:
            return False
        return True

class SecondaryIrtsRr2Msg:
    def __init__(self, channel9: int = None, channel10: int = None, channel11: int = None, channel12: int = None):
        self.channel9 = int(channel9) if channel9 is not None else None
        self.channel10 = int(channel10) if channel10 is not None else None
        self.channel11 = int(channel11) if channel11 is not None else None
        self.channel12 = int(channel12) if channel12 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel9, self.channel10, self.channel11, self.channel12))
        return data

    def deserialize(self, data):
        self.channel9 = int(unpack("<H", data[0:2])[0])
        self.channel10 = int(unpack("<xxH", data[0:4])[0])
        self.channel11 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel12 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRr2Msg):
            return False
        if self.channel9 != other.channel9:
            return False
        if self.channel10 != other.channel10:
            return False
        if self.channel11 != other.channel11:
            return False
        if self.channel12 != other.channel12:
            return False
        return True

class SecondaryIrtsRr3Msg:
    def __init__(self, channel13: int = None, channel14: int = None, channel15: int = None, channel16: int = None):
        self.channel13 = int(channel13) if channel13 is not None else None
        self.channel14 = int(channel14) if channel14 is not None else None
        self.channel15 = int(channel15) if channel15 is not None else None
        self.channel16 = int(channel16) if channel16 is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHH", self.channel13, self.channel14, self.channel15, self.channel16))
        return data

    def deserialize(self, data):
        self.channel13 = int(unpack("<H", data[0:2])[0])
        self.channel14 = int(unpack("<xxH", data[0:4])[0])
        self.channel15 = int(unpack("<xxxxH", data[0:6])[0])
        self.channel16 = int(unpack("<xxxxxxH", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryIrtsRr3Msg):
            return False
        if self.channel13 != other.channel13:
            return False
        if self.channel14 != other.channel14:
            return False
        if self.channel15 != other.channel15:
            return False
        if self.channel16 != other.channel16:
            return False
        return True

class SecondaryGpsCoordsMsg:
    def __init__(self, latitude: float = None, longitude: float = None):
        self.latitude = float(latitude) if latitude is not None else None
        self.longitude = float(longitude) if longitude is not None else None
        self.timestamp=int()
        self.size = 8

    def serialize(self):
        data = bytearray()
        data.extend(pack("<ff", self.latitude, self.longitude))
        return data

    def deserialize(self, data):
        self.latitude = float(unpack("<f", data[0:4])[0])
        self.longitude = float(unpack("<xxxxf", data[0:8])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryGpsCoordsMsg):
            return False
        if abs(self.latitude-other.latitude) > 0.001:
            return False
            return False
        if abs(self.longitude-other.longitude) > 0.001:
            return False
            return False
        return True

class SecondaryGpsSpeedMsg:
    def __init__(self, speed: int = None):
        self.speed = int(speed) if speed is not None else None
        self.timestamp=int()
        self.size = 2

    def serialize(self):
        data = bytearray()
        data.extend(pack("<H", self.speed))
        return data

    def deserialize(self, data):
        self.speed = int(unpack("<H", data[0:2])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryGpsSpeedMsg):
            return False
        if self.speed != other.speed:
            return False
        return True

class SecondaryLapCountMsg:
    def __init__(self, timestamp: int = None, lap_count: int = None):
        self.timestamp = int(timestamp) if timestamp is not None else None
        self.lap_count = int(lap_count) if lap_count is not None else None
        self.size = 5

    def serialize(self):
        data = bytearray()
        data.extend(pack("<IB", self.timestamp, self.lap_count))
        return data

    def deserialize(self, data):
        self.timestamp = int(unpack("<I", data[0:4])[0])
        self.lap_count = int(unpack("<xxxxB", data[0:5])[0])

    def __eq__(self, other):
        if not isinstance(other, SecondaryLapCountMsg):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.lap_count != other.lap_count:
            return False
        return True

