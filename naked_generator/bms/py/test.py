import bms


print("***BmsBoardStatusMsg***")

BmsBoardStatus_s = bms.BmsBoardStatusMsg(200, 1)
    
print(f"Before: {BmsBoardStatus_s.errors} {BmsBoardStatus_s.balancing_status}")
    
data = BmsBoardStatus_s.serialize()

BmsBoardStatus_d = bms.BmsBoardStatusMsg()
BmsBoardStatus_d.deserialize(data)
    
print(f"After:  {BmsBoardStatus_d.errors} {BmsBoardStatus_d.balancing_status}")

    
assert(BmsBoardStatus_s == BmsBoardStatus_d)
print("")

print("***BmsTemperaturesMsg***")

BmsTemperatures_s = bms.BmsTemperaturesMsg(191, 229, 101, 63, 237, 210, 225)
    
print(f"Before: {BmsTemperatures_s.start_index} {BmsTemperatures_s.temp0} {BmsTemperatures_s.temp1} {BmsTemperatures_s.temp2} {BmsTemperatures_s.temp3} {BmsTemperatures_s.temp4} {BmsTemperatures_s.temp5}")
    
data = BmsTemperatures_s.serialize()

BmsTemperatures_d = bms.BmsTemperaturesMsg()
BmsTemperatures_d.deserialize(data)
    
print(f"After:  {BmsTemperatures_d.start_index} {BmsTemperatures_d.temp0} {BmsTemperatures_d.temp1} {BmsTemperatures_d.temp2} {BmsTemperatures_d.temp3} {BmsTemperatures_d.temp4} {BmsTemperatures_d.temp5}")

    
assert(BmsTemperatures_s == BmsTemperatures_d)
print("")

print("***BmsVoltagesMsg***")

BmsVoltages_s = bms.BmsVoltagesMsg(57013, 40804, 22299, 46)
    
print(f"Before: {BmsVoltages_s.voltage0} {BmsVoltages_s.voltage1} {BmsVoltages_s.voltage2} {BmsVoltages_s.start_index}")
    
data = BmsVoltages_s.serialize()

BmsVoltages_d = bms.BmsVoltagesMsg()
BmsVoltages_d.deserialize(data)
    
print(f"After:  {BmsVoltages_d.voltage0} {BmsVoltages_d.voltage1} {BmsVoltages_d.voltage2} {BmsVoltages_d.start_index}")

    
assert(BmsVoltages_s == BmsVoltages_d)
print("")

print("***BmsBalancingMsg***")

BmsBalancing_s = bms.BmsBalancingMsg(5194720, 191)
    
print(f"Before: {BmsBalancing_s.cells} {BmsBalancing_s.board_index}")
    
data = BmsBalancing_s.serialize()

BmsBalancing_d = bms.BmsBalancingMsg()
BmsBalancing_d.deserialize(data)
    
print(f"After:  {BmsBalancing_d.cells} {BmsBalancing_d.board_index}")

    
assert(BmsBalancing_s == BmsBalancing_d)
print("")

print("***BmsFwUpdateMsg***")

BmsFwUpdate_s = bms.BmsFwUpdateMsg(148)
    
print(f"Before: {BmsFwUpdate_s.board_index}")
    
data = BmsFwUpdate_s.serialize()

BmsFwUpdate_d = bms.BmsFwUpdateMsg()
BmsFwUpdate_d.deserialize(data)
    
print(f"After:  {BmsFwUpdate_d.board_index}")

    
assert(BmsFwUpdate_s == BmsFwUpdate_d)
print("")
