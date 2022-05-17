import primary


print("***PrimarySteerVersionMsg***")

PrimarySteerVersion_s = primary.PrimarySteerVersionMsg(113, 192)
    
print(f"Before: {PrimarySteerVersion_s.component_version} {PrimarySteerVersion_s.cancicd_version}")
    
data = PrimarySteerVersion_s.serialize()

PrimarySteerVersion_d = primary.PrimarySteerVersionMsg()
PrimarySteerVersion_d.deserialize(data)
    
print(f"After:  {PrimarySteerVersion_d.component_version} {PrimarySteerVersion_d.cancicd_version}")

    
assert(PrimarySteerVersion_s == PrimarySteerVersion_d)
print("")

print("***PrimaryDasVersionMsg***")

PrimaryDasVersion_s = primary.PrimaryDasVersionMsg(251, 79)
    
print(f"Before: {PrimaryDasVersion_s.component_version} {PrimaryDasVersion_s.cancicd_version}")
    
data = PrimaryDasVersion_s.serialize()

PrimaryDasVersion_d = primary.PrimaryDasVersionMsg()
PrimaryDasVersion_d.deserialize(data)
    
print(f"After:  {PrimaryDasVersion_d.component_version} {PrimaryDasVersion_d.cancicd_version}")

    
assert(PrimaryDasVersion_s == PrimaryDasVersion_d)
print("")

print("***PrimaryHvVersionMsg***")

PrimaryHvVersion_s = primary.PrimaryHvVersionMsg(22, 77)
    
print(f"Before: {PrimaryHvVersion_s.component_version} {PrimaryHvVersion_s.cancicd_version}")
    
data = PrimaryHvVersion_s.serialize()

PrimaryHvVersion_d = primary.PrimaryHvVersionMsg()
PrimaryHvVersion_d.deserialize(data)
    
print(f"After:  {PrimaryHvVersion_d.component_version} {PrimaryHvVersion_d.cancicd_version}")

    
assert(PrimaryHvVersion_s == PrimaryHvVersion_d)
print("")

print("***PrimaryLvVersionMsg***")

PrimaryLvVersion_s = primary.PrimaryLvVersionMsg(26, 251)
    
print(f"Before: {PrimaryLvVersion_s.component_version} {PrimaryLvVersion_s.cancicd_version}")
    
data = PrimaryLvVersion_s.serialize()

PrimaryLvVersion_d = primary.PrimaryLvVersionMsg()
PrimaryLvVersion_d.deserialize(data)
    
print(f"After:  {PrimaryLvVersion_d.component_version} {PrimaryLvVersion_d.cancicd_version}")

    
assert(PrimaryLvVersion_s == PrimaryLvVersion_d)
print("")

print("***PrimaryTlmVersionMsg***")

PrimaryTlmVersion_s = primary.PrimaryTlmVersionMsg(13, 81)
    
print(f"Before: {PrimaryTlmVersion_s.component_version} {PrimaryTlmVersion_s.cancicd_version}")
    
data = PrimaryTlmVersion_s.serialize()

PrimaryTlmVersion_d = primary.PrimaryTlmVersionMsg()
PrimaryTlmVersion_d.deserialize(data)
    
print(f"After:  {PrimaryTlmVersion_d.component_version} {PrimaryTlmVersion_d.cancicd_version}")

    
assert(PrimaryTlmVersion_s == PrimaryTlmVersion_d)
print("")

print("***PrimaryTimestampMsg***")

PrimaryTimestamp_s = primary.PrimaryTimestampMsg(1922732701)
    
print(f"Before: {PrimaryTimestamp_s.timestamp}")
    
data = PrimaryTimestamp_s.serialize()

PrimaryTimestamp_d = primary.PrimaryTimestampMsg()
PrimaryTimestamp_d.deserialize(data)
    
print(f"After:  {PrimaryTimestamp_d.timestamp}")

    
assert(PrimaryTimestamp_s == PrimaryTimestamp_d)
print("")

print("***PrimarySetTlmStatusMsg***")

PrimarySetTlmStatus_s = primary.PrimarySetTlmStatusMsg(165, 141, 1, 0)
    
print(f"Before: {PrimarySetTlmStatus_s.driver} {PrimarySetTlmStatus_s.circuit} {PrimarySetTlmStatus_s.race_type} {PrimarySetTlmStatus_s.tlm_status}")
    
data = PrimarySetTlmStatus_s.serialize()

PrimarySetTlmStatus_d = primary.PrimarySetTlmStatusMsg()
PrimarySetTlmStatus_d.deserialize(data)
    
print(f"After:  {PrimarySetTlmStatus_d.driver} {PrimarySetTlmStatus_d.circuit} {PrimarySetTlmStatus_d.race_type} {PrimarySetTlmStatus_d.tlm_status}")

    
assert(PrimarySetTlmStatus_s == PrimarySetTlmStatus_d)
print("")

print("***PrimarySteerSystemStatusMsg***")

PrimarySteerSystemStatus_s = primary.PrimarySteerSystemStatusMsg(59)
    
print(f"Before: {PrimarySteerSystemStatus_s.soc_temp}")
    
data = PrimarySteerSystemStatus_s.serialize()

PrimarySteerSystemStatus_d = primary.PrimarySteerSystemStatusMsg()
PrimarySteerSystemStatus_d.deserialize(data)
    
print(f"After:  {PrimarySteerSystemStatus_d.soc_temp}")

    
assert(PrimarySteerSystemStatus_s == PrimarySteerSystemStatus_d)
print("")

print("***PrimaryMarkerMsg***")

PrimaryMarker_s = primary.PrimaryMarkerMsg()
    
data = PrimaryMarker_s.serialize()

PrimaryMarker_d = primary.PrimaryMarkerMsg()
PrimaryMarker_d.deserialize(data)
    
assert(PrimaryMarker_s == PrimaryMarker_d)
print("")

print("***PrimaryTlmStatusMsg***")

PrimaryTlmStatus_s = primary.PrimaryTlmStatusMsg(145, 162, 2, 0)
    
print(f"Before: {PrimaryTlmStatus_s.driver} {PrimaryTlmStatus_s.circuit} {PrimaryTlmStatus_s.race_type} {PrimaryTlmStatus_s.tlm_status}")
    
data = PrimaryTlmStatus_s.serialize()

PrimaryTlmStatus_d = primary.PrimaryTlmStatusMsg()
PrimaryTlmStatus_d.deserialize(data)
    
print(f"After:  {PrimaryTlmStatus_d.driver} {PrimaryTlmStatus_d.circuit} {PrimaryTlmStatus_d.race_type} {PrimaryTlmStatus_d.tlm_status}")

    
assert(PrimaryTlmStatus_s == PrimaryTlmStatus_d)
print("")

print("***PrimaryCarStatusMsg***")

PrimaryCarStatus_s = primary.PrimaryCarStatusMsg(0, 2, 2)
    
print(f"Before: {PrimaryCarStatus_s.inverter_l} {PrimaryCarStatus_s.inverter_r} {PrimaryCarStatus_s.car_status}")
    
data = PrimaryCarStatus_s.serialize()

PrimaryCarStatus_d = primary.PrimaryCarStatusMsg()
PrimaryCarStatus_d.deserialize(data)
    
print(f"After:  {PrimaryCarStatus_d.inverter_l} {PrimaryCarStatus_d.inverter_r} {PrimaryCarStatus_d.car_status}")

    
assert(PrimaryCarStatus_s == PrimaryCarStatus_d)
print("")

print("***PrimaryDasErrorsMsg***")

PrimaryDasErrors_s = primary.PrimaryDasErrorsMsg(201)
    
print(f"Before: {PrimaryDasErrors_s.das_error}")
    
data = PrimaryDasErrors_s.serialize()

PrimaryDasErrors_d = primary.PrimaryDasErrorsMsg()
PrimaryDasErrors_d.deserialize(data)
    
print(f"After:  {PrimaryDasErrors_d.das_error}")

    
assert(PrimaryDasErrors_s == PrimaryDasErrors_d)
print("")

print("***PrimarySpeedMsg***")

PrimarySpeed_s = primary.PrimarySpeedMsg(13368, 19990, 18381, 2431)
    
print(f"Before: {PrimarySpeed_s.encoder_r} {PrimarySpeed_s.encoder_l} {PrimarySpeed_s.inverter_r} {PrimarySpeed_s.inverter_l}")
    
data = PrimarySpeed_s.serialize()

PrimarySpeed_d = primary.PrimarySpeedMsg()
PrimarySpeed_d.deserialize(data)
    
print(f"After:  {PrimarySpeed_d.encoder_r} {PrimarySpeed_d.encoder_l} {PrimarySpeed_d.inverter_r} {PrimarySpeed_d.inverter_l}")

    
assert(PrimarySpeed_s == PrimarySpeed_d)
print("")

print("***PrimaryHvVoltageMsg***")

PrimaryHvVoltage_s = primary.PrimaryHvVoltageMsg(1393, 3803, 21429, 51136)
    
print(f"Before: {PrimaryHvVoltage_s.pack_voltage} {PrimaryHvVoltage_s.bus_voltage} {PrimaryHvVoltage_s.max_cell_voltage} {PrimaryHvVoltage_s.min_cell_voltage}")
    
data = PrimaryHvVoltage_s.serialize()

PrimaryHvVoltage_d = primary.PrimaryHvVoltageMsg()
PrimaryHvVoltage_d.deserialize(data)
    
print(f"After:  {PrimaryHvVoltage_d.pack_voltage} {PrimaryHvVoltage_d.bus_voltage} {PrimaryHvVoltage_d.max_cell_voltage} {PrimaryHvVoltage_d.min_cell_voltage}")

    
assert(PrimaryHvVoltage_s == PrimaryHvVoltage_d)
print("")

print("***PrimaryHvCurrentMsg***")

PrimaryHvCurrent_s = primary.PrimaryHvCurrentMsg(31723, -10322)
    
print(f"Before: {PrimaryHvCurrent_s.current} {PrimaryHvCurrent_s.power}")
    
data = PrimaryHvCurrent_s.serialize()

PrimaryHvCurrent_d = primary.PrimaryHvCurrentMsg()
PrimaryHvCurrent_d.deserialize(data)
    
print(f"After:  {PrimaryHvCurrent_d.current} {PrimaryHvCurrent_d.power}")

    
assert(PrimaryHvCurrent_s == PrimaryHvCurrent_d)
print("")

print("***PrimaryHvTempMsg***")

PrimaryHvTemp_s = primary.PrimaryHvTempMsg(38095, 10217, 33984)
    
print(f"Before: {PrimaryHvTemp_s.average_temp} {PrimaryHvTemp_s.max_temp} {PrimaryHvTemp_s.min_temp}")
    
data = PrimaryHvTemp_s.serialize()

PrimaryHvTemp_d = primary.PrimaryHvTempMsg()
PrimaryHvTemp_d.deserialize(data)
    
print(f"After:  {PrimaryHvTemp_d.average_temp} {PrimaryHvTemp_d.max_temp} {PrimaryHvTemp_d.min_temp}")

    
assert(PrimaryHvTemp_s == PrimaryHvTemp_d)
print("")

print("***PrimaryHvErrorsMsg***")

PrimaryHvErrors_s = primary.PrimaryHvErrorsMsg(21230, 9717)
    
print(f"Before: {PrimaryHvErrors_s.warnings} {PrimaryHvErrors_s.errors}")
    
data = PrimaryHvErrors_s.serialize()

PrimaryHvErrors_d = primary.PrimaryHvErrorsMsg()
PrimaryHvErrors_d.deserialize(data)
    
print(f"After:  {PrimaryHvErrors_d.warnings} {PrimaryHvErrors_d.errors}")

    
assert(PrimaryHvErrors_s == PrimaryHvErrors_d)
print("")

print("***PrimaryTsStatusMsg***")

PrimaryTsStatus_s = primary.PrimaryTsStatusMsg(2)
    
print(f"Before: {PrimaryTsStatus_s.ts_status}")
    
data = PrimaryTsStatus_s.serialize()

PrimaryTsStatus_d = primary.PrimaryTsStatusMsg()
PrimaryTsStatus_d.deserialize(data)
    
print(f"After:  {PrimaryTsStatus_d.ts_status}")

    
assert(PrimaryTsStatus_s == PrimaryTsStatus_d)
print("")

print("***PrimarySetTsStatusMsg***")

PrimarySetTsStatus_s = primary.PrimarySetTsStatusMsg(1)
    
print(f"Before: {PrimarySetTsStatus_s.ts_status_set}")
    
data = PrimarySetTsStatus_s.serialize()

PrimarySetTsStatus_d = primary.PrimarySetTsStatusMsg()
PrimarySetTsStatus_d.deserialize(data)
    
print(f"After:  {PrimarySetTsStatus_d.ts_status_set}")

    
assert(PrimarySetTsStatus_s == PrimarySetTsStatus_d)
print("")

print("***PrimarySetCellBalancingStatusMsg***")

PrimarySetCellBalancingStatus_s = primary.PrimarySetCellBalancingStatusMsg(1)
    
print(f"Before: {PrimarySetCellBalancingStatus_s.set_balancing_status}")
    
data = PrimarySetCellBalancingStatus_s.serialize()

PrimarySetCellBalancingStatus_d = primary.PrimarySetCellBalancingStatusMsg()
PrimarySetCellBalancingStatus_d.deserialize(data)
    
print(f"After:  {PrimarySetCellBalancingStatus_d.set_balancing_status}")

    
assert(PrimarySetCellBalancingStatus_s == PrimarySetCellBalancingStatus_d)
print("")

print("***PrimaryHandcartStatusMsg***")

PrimaryHandcartStatus_s = primary.PrimaryHandcartStatusMsg(0)
    
print(f"Before: {PrimaryHandcartStatus_s.connected}")
    
data = PrimaryHandcartStatus_s.serialize()

PrimaryHandcartStatus_d = primary.PrimaryHandcartStatusMsg()
PrimaryHandcartStatus_d.deserialize(data)
    
print(f"After:  {PrimaryHandcartStatus_d.connected}")

    
assert(PrimaryHandcartStatus_s == PrimaryHandcartStatus_d)
print("")

print("***PrimarySteerStatusMsg***")

PrimarySteerStatus_s = primary.PrimarySteerStatusMsg(0, 2)
    
print(f"Before: {PrimarySteerStatus_s.map} {PrimarySteerStatus_s.traction_control}")
    
data = PrimarySteerStatus_s.serialize()

PrimarySteerStatus_d = primary.PrimarySteerStatusMsg()
PrimarySteerStatus_d.deserialize(data)
    
print(f"After:  {PrimarySteerStatus_d.map} {PrimarySteerStatus_d.traction_control}")

    
assert(PrimarySteerStatus_s == PrimarySteerStatus_d)
print("")

print("***PrimarySetCarStatusMsg***")

PrimarySetCarStatus_s = primary.PrimarySetCarStatusMsg(1)
    
print(f"Before: {PrimarySetCarStatus_s.car_status_set}")
    
data = PrimarySetCarStatus_s.serialize()

PrimarySetCarStatus_d = primary.PrimarySetCarStatusMsg()
PrimarySetCarStatus_d.deserialize(data)
    
print(f"After:  {PrimarySetCarStatus_d.car_status_set}")

    
assert(PrimarySetCarStatus_s == PrimarySetCarStatus_d)
print("")

print("***PrimarySetPedalsRangeMsg***")

PrimarySetPedalsRange_s = primary.PrimarySetPedalsRangeMsg(0, 1)
    
print(f"Before: {PrimarySetPedalsRange_s.bound} {PrimarySetPedalsRange_s.pedal}")
    
data = PrimarySetPedalsRange_s.serialize()

PrimarySetPedalsRange_d = primary.PrimarySetPedalsRangeMsg()
PrimarySetPedalsRange_d.deserialize(data)
    
print(f"After:  {PrimarySetPedalsRange_d.bound} {PrimarySetPedalsRange_d.pedal}")

    
assert(PrimarySetPedalsRange_s == PrimarySetPedalsRange_d)
print("")

print("***PrimaryLvCurrentMsg***")

PrimaryLvCurrent_s = primary.PrimaryLvCurrentMsg(98)
    
print(f"Before: {PrimaryLvCurrent_s.current}")
    
data = PrimaryLvCurrent_s.serialize()

PrimaryLvCurrent_d = primary.PrimaryLvCurrentMsg()
PrimaryLvCurrent_d.deserialize(data)
    
print(f"After:  {PrimaryLvCurrent_d.current}")

    
assert(PrimaryLvCurrent_s == PrimaryLvCurrent_d)
print("")

print("***PrimaryLvVoltageMsg***")

PrimaryLvVoltage_s = primary.PrimaryLvVoltageMsg(11489, 56106, 3061, 53969)
    
print(f"Before: {PrimaryLvVoltage_s.voltage_1} {PrimaryLvVoltage_s.voltage_2} {PrimaryLvVoltage_s.voltage_3} {PrimaryLvVoltage_s.voltage_4}")
    
data = PrimaryLvVoltage_s.serialize()

PrimaryLvVoltage_d = primary.PrimaryLvVoltageMsg()
PrimaryLvVoltage_d.deserialize(data)
    
print(f"After:  {PrimaryLvVoltage_d.voltage_1} {PrimaryLvVoltage_d.voltage_2} {PrimaryLvVoltage_d.voltage_3} {PrimaryLvVoltage_d.voltage_4}")

    
assert(PrimaryLvVoltage_s == PrimaryLvVoltage_d)
print("")

print("***PrimaryLvTotalVoltageMsg***")

PrimaryLvTotalVoltage_s = primary.PrimaryLvTotalVoltageMsg(10089)
    
print(f"Before: {PrimaryLvTotalVoltage_s.total_voltage}")
    
data = PrimaryLvTotalVoltage_s.serialize()

PrimaryLvTotalVoltage_d = primary.PrimaryLvTotalVoltageMsg()
PrimaryLvTotalVoltage_d.deserialize(data)
    
print(f"After:  {PrimaryLvTotalVoltage_d.total_voltage}")

    
assert(PrimaryLvTotalVoltage_s == PrimaryLvTotalVoltage_d)
print("")

print("***PrimaryLvTemperatureMsg***")

PrimaryLvTemperature_s = primary.PrimaryLvTemperatureMsg(124, 123)
    
print(f"Before: {PrimaryLvTemperature_s.bp_temperature} {PrimaryLvTemperature_s.dcdc_temperature}")
    
data = PrimaryLvTemperature_s.serialize()

PrimaryLvTemperature_d = primary.PrimaryLvTemperatureMsg()
PrimaryLvTemperature_d.deserialize(data)
    
print(f"After:  {PrimaryLvTemperature_d.bp_temperature} {PrimaryLvTemperature_d.dcdc_temperature}")

    
assert(PrimaryLvTemperature_s == PrimaryLvTemperature_d)
print("")

print("***PrimaryCoolingStatusMsg***")

PrimaryCoolingStatus_s = primary.PrimaryCoolingStatusMsg(218, 177, 250)
    
print(f"Before: {PrimaryCoolingStatus_s.hv_fan_speed} {PrimaryCoolingStatus_s.lv_fan_speed} {PrimaryCoolingStatus_s.pump_speed}")
    
data = PrimaryCoolingStatus_s.serialize()

PrimaryCoolingStatus_d = primary.PrimaryCoolingStatusMsg()
PrimaryCoolingStatus_d.deserialize(data)
    
print(f"After:  {PrimaryCoolingStatus_d.hv_fan_speed} {PrimaryCoolingStatus_d.lv_fan_speed} {PrimaryCoolingStatus_d.pump_speed}")

    
assert(PrimaryCoolingStatus_s == PrimaryCoolingStatus_d)
print("")

print("***PrimaryHvCellsVoltageMsg***")

PrimaryHvCellsVoltage_s = primary.PrimaryHvCellsVoltageMsg(47262, 61304, 14711, 188)
    
print(f"Before: {PrimaryHvCellsVoltage_s.voltage_0} {PrimaryHvCellsVoltage_s.voltage_1} {PrimaryHvCellsVoltage_s.voltage_2} {PrimaryHvCellsVoltage_s.cell_index}")
    
data = PrimaryHvCellsVoltage_s.serialize()

PrimaryHvCellsVoltage_d = primary.PrimaryHvCellsVoltageMsg()
PrimaryHvCellsVoltage_d.deserialize(data)
    
print(f"After:  {PrimaryHvCellsVoltage_d.voltage_0} {PrimaryHvCellsVoltage_d.voltage_1} {PrimaryHvCellsVoltage_d.voltage_2} {PrimaryHvCellsVoltage_d.cell_index}")

    
assert(PrimaryHvCellsVoltage_s == PrimaryHvCellsVoltage_d)
print("")

print("***PrimaryHvCellsTempMsg***")

PrimaryHvCellsTemp_s = primary.PrimaryHvCellsTempMsg(39, 39, 43, 150, 188, 235, 144, 1)
    
print(f"Before: {PrimaryHvCellsTemp_s.cell_index} {PrimaryHvCellsTemp_s.temp_0} {PrimaryHvCellsTemp_s.temp_1} {PrimaryHvCellsTemp_s.temp_2} {PrimaryHvCellsTemp_s.temp_3} {PrimaryHvCellsTemp_s.temp_4} {PrimaryHvCellsTemp_s.temp_5} {PrimaryHvCellsTemp_s.temp_6}")
    
data = PrimaryHvCellsTemp_s.serialize()

PrimaryHvCellsTemp_d = primary.PrimaryHvCellsTempMsg()
PrimaryHvCellsTemp_d.deserialize(data)
    
print(f"After:  {PrimaryHvCellsTemp_d.cell_index} {PrimaryHvCellsTemp_d.temp_0} {PrimaryHvCellsTemp_d.temp_1} {PrimaryHvCellsTemp_d.temp_2} {PrimaryHvCellsTemp_d.temp_3} {PrimaryHvCellsTemp_d.temp_4} {PrimaryHvCellsTemp_d.temp_5} {PrimaryHvCellsTemp_d.temp_6}")

    
assert(PrimaryHvCellsTemp_s == PrimaryHvCellsTemp_d)
print("")

print("***PrimaryHvCellBalancingStatusMsg***")

PrimaryHvCellBalancingStatus_s = primary.PrimaryHvCellBalancingStatusMsg(0)
    
print(f"Before: {PrimaryHvCellBalancingStatus_s.balancing_status}")
    
data = PrimaryHvCellBalancingStatus_s.serialize()

PrimaryHvCellBalancingStatus_d = primary.PrimaryHvCellBalancingStatusMsg()
PrimaryHvCellBalancingStatus_d.deserialize(data)
    
print(f"After:  {PrimaryHvCellBalancingStatus_d.balancing_status}")

    
assert(PrimaryHvCellBalancingStatus_s == PrimaryHvCellBalancingStatus_d)
print("")

print("***PrimaryInvLSetTorqueMsg***")

PrimaryInvLSetTorque_s = primary.PrimaryInvLSetTorqueMsg(131, 24, 179)
    
print(f"Before: {PrimaryInvLSetTorque_s.regid} {PrimaryInvLSetTorque_s.lsb} {PrimaryInvLSetTorque_s.msb}")
    
data = PrimaryInvLSetTorque_s.serialize()

PrimaryInvLSetTorque_d = primary.PrimaryInvLSetTorqueMsg()
PrimaryInvLSetTorque_d.deserialize(data)
    
print(f"After:  {PrimaryInvLSetTorque_d.regid} {PrimaryInvLSetTorque_d.lsb} {PrimaryInvLSetTorque_d.msb}")

    
assert(PrimaryInvLSetTorque_s == PrimaryInvLSetTorque_d)
print("")

print("***PrimaryInvLResponseMsg***")

PrimaryInvLResponse_s = primary.PrimaryInvLResponseMsg(1634078613, 30)
    
print(f"Before: {PrimaryInvLResponse_s.reg_val} {PrimaryInvLResponse_s.reg_id}")
    
data = PrimaryInvLResponse_s.serialize()

PrimaryInvLResponse_d = primary.PrimaryInvLResponseMsg()
PrimaryInvLResponse_d.deserialize(data)
    
print(f"After:  {PrimaryInvLResponse_d.reg_val} {PrimaryInvLResponse_d.reg_id}")

    
assert(PrimaryInvLResponse_s == PrimaryInvLResponse_d)
print("")
