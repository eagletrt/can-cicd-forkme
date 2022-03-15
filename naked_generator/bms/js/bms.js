const byteify = require('byteify');

function serializeBmsBoardStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.errors),
        ...byteify.serializeInt8(data.balancing_status),
    ]);
}
function deserializeBmsBoardStatus(bytes) {
    return {
        errors: byteify.deserializeInt8(bytes.slice(0, 1)),
        balancing_status: byteify.deserializeInt8(bytes.slice(1, 2)),
    }
}

function serializeBmsTemperatures(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.start_index),
        ...byteify.serializeUint8(data.temp0),
        ...byteify.serializeUint8(data.temp1),
        ...byteify.serializeUint8(data.temp2),
        ...byteify.serializeUint8(data.temp3),
        ...byteify.serializeUint8(data.temp4),
        ...byteify.serializeUint8(data.temp5),
    ]);
}
function deserializeBmsTemperatures(bytes) {
    return {
        start_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        temp0: byteify.deserializeUint8(bytes.slice(1, 2)),
        temp1: byteify.deserializeUint8(bytes.slice(2, 3)),
        temp2: byteify.deserializeUint8(bytes.slice(3, 4)),
        temp3: byteify.deserializeUint8(bytes.slice(4, 5)),
        temp4: byteify.deserializeUint8(bytes.slice(5, 6)),
        temp5: byteify.deserializeUint8(bytes.slice(6, 7)),
    }
}

function serializeBmsVoltages(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.start_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
    ]);
}
function deserializeBmsVoltages(bytes) {
    return {
        start_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage0: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage1: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage2: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsBalancing(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeInt8(data.cells),
    ]);
}
function deserializeBmsBalancing(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        cells: byteify.deserializeInt8(bytes.slice(1, 4)),
    }
}

function serializeBmsFwUpdate(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
    ]);
}
function deserializeBmsFwUpdate(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
    }
}
