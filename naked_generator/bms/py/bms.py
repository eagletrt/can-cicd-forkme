from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple

class errors(IntFlag):
    CAN_COMM = 1
    LTC_COMM = 2
    TEMP_COMM_0 = 4
    TEMP_COMM_1 = 8
    TEMP_COMM_2 = 16
    TEMP_COMM_3 = 32
    TEMP_COMM_4 = 64
    TEMP_COMM_5 = 128

class balancing_cells(IntFlag):
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
    
class balancing_status(IntEnum):
    OFF = 0
    DISCHARGE = 1


# BoardStatus
class BoardStatus:
    struct = namedtuple("BoardStatus_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus.struct":
        return BoardStatus.struct._make(unpack(BoardStatus.schema, buffer))

# Temperatures
class Temperatures:
    struct = namedtuple("Temperatures_struct", "start_index temp0 temp1 temp2 temp3 temp4 temp5", rename=True)
    schema = "<bbbbbbb"
    @staticmethod
    def serialize(start_index, temp0, temp1, temp2, temp3, temp4, temp5) -> bytes:
        return pack(Temperatures.schema, start_index, temp0, temp1, temp2, temp3, temp4, temp5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Temperatures.struct":
        return Temperatures.struct._make(unpack(Temperatures.schema, buffer))

# Voltages
class Voltages:
    struct = namedtuple("Voltages_struct", "start_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bXhhh"
    @staticmethod
    def serialize(start_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages.schema, start_index, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages.struct":
        return Voltages.struct._make(unpack(Voltages.schema, buffer))

# Balancing
class Balancing:
    struct = namedtuple("Balancing_struct", "board_index cells", rename=True)
    schema = "<bi"
    @staticmethod
    def serialize(board_index, cells) -> bytes:
        return pack(Balancing.schema, board_index, cells)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Balancing.struct":
        return Balancing.struct._make(unpack(Balancing.schema, buffer))

# FwUpdate
class FwUpdate:
    struct = namedtuple("FwUpdate_struct", "board_index", rename=True)
    schema = "<b"
    @staticmethod
    def serialize(board_index) -> bytes:
        return pack(FwUpdate.schema, board_index)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "FwUpdate.struct":
        return FwUpdate.struct._make(unpack(FwUpdate.schema, buffer))
