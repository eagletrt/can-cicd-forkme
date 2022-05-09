from enum import IntEnum, IntFlag
from struct import pack, unpack

# Bitsets

class BmsErrors(IntFlag):
    CAN_COMM = 1
    LTC_COMM = 2
    TEMP_COMM_0 = 4
    TEMP_COMM_1 = 8
    TEMP_COMM_2 = 16
    TEMP_COMM_3 = 32
    TEMP_COMM_4 = 64
    TEMP_COMM_5 = 128

class BmsBalancingCells(IntFlag):
    CELL0 = 1
    CELL1 = 2
    CELL2 = 4
    CELL3 = 8
    CELL4 = 16
    CELL5 = 32
    CELL6 = 64
    CELL7 = 128
    CELL8 = 256
    CELL9 = 512
    CELL10 = 1024
    CELL11 = 2048
    CELL12 = 4096
    CELL13 = 8192
    CELL14 = 16384
    CELL15 = 32768
    CELL16 = 65536
    CELL17 = 131072

# Enums

class BmsBalancingStatus(IntEnum):
    OFF = 0
    DISCHARGE = 1

# Messages

class BmsBoardStatusMsg:
    def __init__(self, errors: bin = None, balancing_status: BmsBalancingStatus = None):
        if errors is not None:
            self.errors = bin(errors)
        if balancing_status is not None:
            self.balancing_status = BmsBalancingStatus(balancing_status)
        self.size = 2

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BB", (int(self.errors,2) >> 0) & 255, self.balancing_status << 7 & 255))
        return data

    def deserialize(self, data):
        self.errors = bin((unpack("<B", data[0:1])[0] << 0))
        self.balancing_status = BmsBalancingStatus((unpack("<xB", data[0:2])[0] & 128) >> 7)

    def __eq__(self, other):
        if not isinstance(other, BmsBoardStatusMsg):
            return False
        if self.errors != other.errors:
            return False
        if self.balancing_status != other.balancing_status:
            return False
        return True

class BmsTemperaturesMsg:
    def __init__(self, start_index: int = None, temp0: int = None, temp1: int = None, temp2: int = None, temp3: int = None, temp4: int = None, temp5: int = None):
        if start_index is not None:
            self.start_index = int(start_index)
        if temp0 is not None:
            self.temp0 = int(temp0)
        if temp1 is not None:
            self.temp1 = int(temp1)
        if temp2 is not None:
            self.temp2 = int(temp2)
        if temp3 is not None:
            self.temp3 = int(temp3)
        if temp4 is not None:
            self.temp4 = int(temp4)
        if temp5 is not None:
            self.temp5 = int(temp5)
        self.size = 7

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBBBBBB", self.start_index, self.temp0, self.temp1, self.temp2, self.temp3, self.temp4, self.temp5))
        return data

    def deserialize(self, data):
        self.start_index = int(unpack("<B", data[0:1])[0])
        self.temp0 = int(unpack("<xB", data[0:2])[0])
        self.temp1 = int(unpack("<xxB", data[0:3])[0])
        self.temp2 = int(unpack("<xxxB", data[0:4])[0])
        self.temp3 = int(unpack("<xxxxB", data[0:5])[0])
        self.temp4 = int(unpack("<xxxxxB", data[0:6])[0])
        self.temp5 = int(unpack("<xxxxxxB", data[0:7])[0])

    def __eq__(self, other):
        if not isinstance(other, BmsTemperaturesMsg):
            return False
        if self.start_index != other.start_index:
            return False
        if self.temp0 != other.temp0:
            return False
        if self.temp1 != other.temp1:
            return False
        if self.temp2 != other.temp2:
            return False
        if self.temp3 != other.temp3:
            return False
        if self.temp4 != other.temp4:
            return False
        if self.temp5 != other.temp5:
            return False
        return True

class BmsVoltagesMsg:
    def __init__(self, voltage0: int = None, voltage1: int = None, voltage2: int = None, start_index: int = None):
        if voltage0 is not None:
            self.voltage0 = int(voltage0)
        if voltage1 is not None:
            self.voltage1 = int(voltage1)
        if voltage2 is not None:
            self.voltage2 = int(voltage2)
        if start_index is not None:
            self.start_index = int(start_index)
        self.size = 7

    def serialize(self):
        data = bytearray()
        data.extend(pack("<HHHB", self.voltage0, self.voltage1, self.voltage2, self.start_index))
        return data

    def deserialize(self, data):
        self.voltage0 = int(unpack("<H", data[0:2])[0])
        self.voltage1 = int(unpack("<xxH", data[0:4])[0])
        self.voltage2 = int(unpack("<xxxxH", data[0:6])[0])
        self.start_index = int(unpack("<xxxxxxB", data[0:7])[0])

    def __eq__(self, other):
        if not isinstance(other, BmsVoltagesMsg):
            return False
        if self.voltage0 != other.voltage0:
            return False
        if self.voltage1 != other.voltage1:
            return False
        if self.voltage2 != other.voltage2:
            return False
        if self.start_index != other.start_index:
            return False
        return True

class BmsBalancingMsg:
    def __init__(self, cells: bin = None, board_index: int = None):
        if cells is not None:
            self.cells = bin(cells)
        if board_index is not None:
            self.board_index = int(board_index)
        self.size = 4

    def serialize(self):
        data = bytearray()
        data.extend(pack("<BBBB", (int(self.cells,2) >> 16) & 255, (int(self.cells,2) >> 8) & 255, (int(self.cells,2) >> 0) & 255, self.board_index))
        return data

    def deserialize(self, data):
        self.cells = bin((unpack("<BBB", data[0:3])[0] << 16) | (unpack("<BBB", data[0:3])[1] << 8) | (unpack("<BBB", data[0:3])[2] << 0))
        self.board_index = int(unpack("<xxxB", data[0:4])[0])

    def __eq__(self, other):
        if not isinstance(other, BmsBalancingMsg):
            return False
        if self.cells != other.cells:
            return False
        if self.board_index != other.board_index:
            return False
        return True

class BmsFwUpdateMsg:
    def __init__(self, board_index: int = None):
        if board_index is not None:
            self.board_index = int(board_index)
        self.size = 1

    def serialize(self):
        data = bytearray()
        data.extend(pack("<B", self.board_index))
        return data

    def deserialize(self, data):
        self.board_index = int(unpack("<B", data[0:1])[0])

    def __eq__(self, other):
        if not isinstance(other, BmsFwUpdateMsg):
            return False
        if self.board_index != other.board_index:
            return False
        return True

