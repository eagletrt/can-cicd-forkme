import secondary


print("***SecondaryImuAngularRate***")

SecondaryImuAngularRate_s = secondary.SecondaryImuAngularRateMsg(56292, 8280, 8973)
    
print(f"Before: {SecondaryImuAngularRate_s.ang_rate_x} {SecondaryImuAngularRate_s.ang_rate_y} {SecondaryImuAngularRate_s.ang_rate_z}")
    
data = SecondaryImuAngularRate_s.serialize()

SecondaryImuAngularRate_d = secondary.SecondaryImuAngularRateMsg()
SecondaryImuAngularRate_d.deserialize(data)
    
print(f"After:  {SecondaryImuAngularRate_d.ang_rate_x} {SecondaryImuAngularRate_d.ang_rate_y} {SecondaryImuAngularRate_d.ang_rate_z}")

    
assert(SecondaryImuAngularRate_s == SecondaryImuAngularRate_d)
print("")

print("***SecondaryImuAcceleration***")

SecondaryImuAcceleration_s = secondary.SecondaryImuAccelerationMsg(52681, 25300, 63517)
    
print(f"Before: {SecondaryImuAcceleration_s.accel_x} {SecondaryImuAcceleration_s.accel_y} {SecondaryImuAcceleration_s.accel_z}")
    
data = SecondaryImuAcceleration_s.serialize()

SecondaryImuAcceleration_d = secondary.SecondaryImuAccelerationMsg()
SecondaryImuAcceleration_d.deserialize(data)
    
print(f"After:  {SecondaryImuAcceleration_d.accel_x} {SecondaryImuAcceleration_d.accel_y} {SecondaryImuAcceleration_d.accel_z}")

    
assert(SecondaryImuAcceleration_s == SecondaryImuAcceleration_d)
print("")

print("***SecondaryIrtsFl0***")

SecondaryIrtsFl0_s = secondary.SecondaryIrtsFl0Msg(13679, 10332, 50335, 20359)
    
print(f"Before: {SecondaryIrtsFl0_s.channel1} {SecondaryIrtsFl0_s.channel2} {SecondaryIrtsFl0_s.channel3} {SecondaryIrtsFl0_s.channel4}")
    
data = SecondaryIrtsFl0_s.serialize()

SecondaryIrtsFl0_d = secondary.SecondaryIrtsFl0Msg()
SecondaryIrtsFl0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl0_d.channel1} {SecondaryIrtsFl0_d.channel2} {SecondaryIrtsFl0_d.channel3} {SecondaryIrtsFl0_d.channel4}")

    
assert(SecondaryIrtsFl0_s == SecondaryIrtsFl0_d)
print("")

print("***SecondaryIrtsFl1***")

SecondaryIrtsFl1_s = secondary.SecondaryIrtsFl1Msg(61891, 6602, 43760, 19513)
    
print(f"Before: {SecondaryIrtsFl1_s.channel5} {SecondaryIrtsFl1_s.channel6} {SecondaryIrtsFl1_s.channel7} {SecondaryIrtsFl1_s.channel8}")
    
data = SecondaryIrtsFl1_s.serialize()

SecondaryIrtsFl1_d = secondary.SecondaryIrtsFl1Msg()
SecondaryIrtsFl1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl1_d.channel5} {SecondaryIrtsFl1_d.channel6} {SecondaryIrtsFl1_d.channel7} {SecondaryIrtsFl1_d.channel8}")

    
assert(SecondaryIrtsFl1_s == SecondaryIrtsFl1_d)
print("")

print("***SecondaryIrtsFl2***")

SecondaryIrtsFl2_s = secondary.SecondaryIrtsFl2Msg(46967, 32732, 17029, 32124)
    
print(f"Before: {SecondaryIrtsFl2_s.channel9} {SecondaryIrtsFl2_s.channel10} {SecondaryIrtsFl2_s.channel11} {SecondaryIrtsFl2_s.channel12}")
    
data = SecondaryIrtsFl2_s.serialize()

SecondaryIrtsFl2_d = secondary.SecondaryIrtsFl2Msg()
SecondaryIrtsFl2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl2_d.channel9} {SecondaryIrtsFl2_d.channel10} {SecondaryIrtsFl2_d.channel11} {SecondaryIrtsFl2_d.channel12}")

    
assert(SecondaryIrtsFl2_s == SecondaryIrtsFl2_d)
print("")

print("***SecondaryIrtsFl3***")

SecondaryIrtsFl3_s = secondary.SecondaryIrtsFl3Msg(21962, 25529, 24413, 50819)
    
print(f"Before: {SecondaryIrtsFl3_s.channel13} {SecondaryIrtsFl3_s.channel14} {SecondaryIrtsFl3_s.channel15} {SecondaryIrtsFl3_s.channel16}")
    
data = SecondaryIrtsFl3_s.serialize()

SecondaryIrtsFl3_d = secondary.SecondaryIrtsFl3Msg()
SecondaryIrtsFl3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl3_d.channel13} {SecondaryIrtsFl3_d.channel14} {SecondaryIrtsFl3_d.channel15} {SecondaryIrtsFl3_d.channel16}")

    
assert(SecondaryIrtsFl3_s == SecondaryIrtsFl3_d)
print("")

print("***SecondaryIrtsFr0***")

SecondaryIrtsFr0_s = secondary.SecondaryIrtsFr0Msg(6266, 6744, 65438, 49953)
    
print(f"Before: {SecondaryIrtsFr0_s.channel1} {SecondaryIrtsFr0_s.channel2} {SecondaryIrtsFr0_s.channel3} {SecondaryIrtsFr0_s.channel4}")
    
data = SecondaryIrtsFr0_s.serialize()

SecondaryIrtsFr0_d = secondary.SecondaryIrtsFr0Msg()
SecondaryIrtsFr0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr0_d.channel1} {SecondaryIrtsFr0_d.channel2} {SecondaryIrtsFr0_d.channel3} {SecondaryIrtsFr0_d.channel4}")

    
assert(SecondaryIrtsFr0_s == SecondaryIrtsFr0_d)
print("")

print("***SecondaryIrtsFr1***")

SecondaryIrtsFr1_s = secondary.SecondaryIrtsFr1Msg(38696, 47058, 2748, 41316)
    
print(f"Before: {SecondaryIrtsFr1_s.channel5} {SecondaryIrtsFr1_s.channel6} {SecondaryIrtsFr1_s.channel7} {SecondaryIrtsFr1_s.channel8}")
    
data = SecondaryIrtsFr1_s.serialize()

SecondaryIrtsFr1_d = secondary.SecondaryIrtsFr1Msg()
SecondaryIrtsFr1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr1_d.channel5} {SecondaryIrtsFr1_d.channel6} {SecondaryIrtsFr1_d.channel7} {SecondaryIrtsFr1_d.channel8}")

    
assert(SecondaryIrtsFr1_s == SecondaryIrtsFr1_d)
print("")

print("***SecondaryIrtsFr2***")

SecondaryIrtsFr2_s = secondary.SecondaryIrtsFr2Msg(21691, 24063, 64229, 48795)
    
print(f"Before: {SecondaryIrtsFr2_s.channel9} {SecondaryIrtsFr2_s.channel10} {SecondaryIrtsFr2_s.channel11} {SecondaryIrtsFr2_s.channel12}")
    
data = SecondaryIrtsFr2_s.serialize()

SecondaryIrtsFr2_d = secondary.SecondaryIrtsFr2Msg()
SecondaryIrtsFr2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr2_d.channel9} {SecondaryIrtsFr2_d.channel10} {SecondaryIrtsFr2_d.channel11} {SecondaryIrtsFr2_d.channel12}")

    
assert(SecondaryIrtsFr2_s == SecondaryIrtsFr2_d)
print("")

print("***SecondaryIrtsFr3***")

SecondaryIrtsFr3_s = secondary.SecondaryIrtsFr3Msg(22044, 42154, 4266, 24130)
    
print(f"Before: {SecondaryIrtsFr3_s.channel13} {SecondaryIrtsFr3_s.channel14} {SecondaryIrtsFr3_s.channel15} {SecondaryIrtsFr3_s.channel16}")
    
data = SecondaryIrtsFr3_s.serialize()

SecondaryIrtsFr3_d = secondary.SecondaryIrtsFr3Msg()
SecondaryIrtsFr3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr3_d.channel13} {SecondaryIrtsFr3_d.channel14} {SecondaryIrtsFr3_d.channel15} {SecondaryIrtsFr3_d.channel16}")

    
assert(SecondaryIrtsFr3_s == SecondaryIrtsFr3_d)
print("")

print("***SecondaryIrtsRl0***")

SecondaryIrtsRl0_s = secondary.SecondaryIrtsRl0Msg(50853, 19063, 14234, 3207)
    
print(f"Before: {SecondaryIrtsRl0_s.channel1} {SecondaryIrtsRl0_s.channel2} {SecondaryIrtsRl0_s.channel3} {SecondaryIrtsRl0_s.channel4}")
    
data = SecondaryIrtsRl0_s.serialize()

SecondaryIrtsRl0_d = secondary.SecondaryIrtsRl0Msg()
SecondaryIrtsRl0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl0_d.channel1} {SecondaryIrtsRl0_d.channel2} {SecondaryIrtsRl0_d.channel3} {SecondaryIrtsRl0_d.channel4}")

    
assert(SecondaryIrtsRl0_s == SecondaryIrtsRl0_d)
print("")

print("***SecondaryIrtsRl1***")

SecondaryIrtsRl1_s = secondary.SecondaryIrtsRl1Msg(40262, 1064, 46005, 45906)
    
print(f"Before: {SecondaryIrtsRl1_s.channel5} {SecondaryIrtsRl1_s.channel6} {SecondaryIrtsRl1_s.channel7} {SecondaryIrtsRl1_s.channel8}")
    
data = SecondaryIrtsRl1_s.serialize()

SecondaryIrtsRl1_d = secondary.SecondaryIrtsRl1Msg()
SecondaryIrtsRl1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl1_d.channel5} {SecondaryIrtsRl1_d.channel6} {SecondaryIrtsRl1_d.channel7} {SecondaryIrtsRl1_d.channel8}")

    
assert(SecondaryIrtsRl1_s == SecondaryIrtsRl1_d)
print("")

print("***SecondaryIrtsRl2***")

SecondaryIrtsRl2_s = secondary.SecondaryIrtsRl2Msg(47633, 7310, 39869, 48035)
    
print(f"Before: {SecondaryIrtsRl2_s.channel9} {SecondaryIrtsRl2_s.channel10} {SecondaryIrtsRl2_s.channel11} {SecondaryIrtsRl2_s.channel12}")
    
data = SecondaryIrtsRl2_s.serialize()

SecondaryIrtsRl2_d = secondary.SecondaryIrtsRl2Msg()
SecondaryIrtsRl2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl2_d.channel9} {SecondaryIrtsRl2_d.channel10} {SecondaryIrtsRl2_d.channel11} {SecondaryIrtsRl2_d.channel12}")

    
assert(SecondaryIrtsRl2_s == SecondaryIrtsRl2_d)
print("")

print("***SecondaryIrtsRl3***")

SecondaryIrtsRl3_s = secondary.SecondaryIrtsRl3Msg(45847, 2520, 38681, 30789)
    
print(f"Before: {SecondaryIrtsRl3_s.channel13} {SecondaryIrtsRl3_s.channel14} {SecondaryIrtsRl3_s.channel15} {SecondaryIrtsRl3_s.channel16}")
    
data = SecondaryIrtsRl3_s.serialize()

SecondaryIrtsRl3_d = secondary.SecondaryIrtsRl3Msg()
SecondaryIrtsRl3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl3_d.channel13} {SecondaryIrtsRl3_d.channel14} {SecondaryIrtsRl3_d.channel15} {SecondaryIrtsRl3_d.channel16}")

    
assert(SecondaryIrtsRl3_s == SecondaryIrtsRl3_d)
print("")

print("***SecondaryIrtsRr0***")

SecondaryIrtsRr0_s = secondary.SecondaryIrtsRr0Msg(11552, 26356, 22639, 5033)
    
print(f"Before: {SecondaryIrtsRr0_s.channel1} {SecondaryIrtsRr0_s.channel2} {SecondaryIrtsRr0_s.channel3} {SecondaryIrtsRr0_s.channel4}")
    
data = SecondaryIrtsRr0_s.serialize()

SecondaryIrtsRr0_d = secondary.SecondaryIrtsRr0Msg()
SecondaryIrtsRr0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr0_d.channel1} {SecondaryIrtsRr0_d.channel2} {SecondaryIrtsRr0_d.channel3} {SecondaryIrtsRr0_d.channel4}")

    
assert(SecondaryIrtsRr0_s == SecondaryIrtsRr0_d)
print("")

print("***SecondaryIrtsRr1***")

SecondaryIrtsRr1_s = secondary.SecondaryIrtsRr1Msg(50846, 49250, 15944, 41494)
    
print(f"Before: {SecondaryIrtsRr1_s.channel5} {SecondaryIrtsRr1_s.channel6} {SecondaryIrtsRr1_s.channel7} {SecondaryIrtsRr1_s.channel8}")
    
data = SecondaryIrtsRr1_s.serialize()

SecondaryIrtsRr1_d = secondary.SecondaryIrtsRr1Msg()
SecondaryIrtsRr1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr1_d.channel5} {SecondaryIrtsRr1_d.channel6} {SecondaryIrtsRr1_d.channel7} {SecondaryIrtsRr1_d.channel8}")

    
assert(SecondaryIrtsRr1_s == SecondaryIrtsRr1_d)
print("")

print("***SecondaryIrtsRr2***")

SecondaryIrtsRr2_s = secondary.SecondaryIrtsRr2Msg(47984, 27622, 60781, 26691)
    
print(f"Before: {SecondaryIrtsRr2_s.channel9} {SecondaryIrtsRr2_s.channel10} {SecondaryIrtsRr2_s.channel11} {SecondaryIrtsRr2_s.channel12}")
    
data = SecondaryIrtsRr2_s.serialize()

SecondaryIrtsRr2_d = secondary.SecondaryIrtsRr2Msg()
SecondaryIrtsRr2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr2_d.channel9} {SecondaryIrtsRr2_d.channel10} {SecondaryIrtsRr2_d.channel11} {SecondaryIrtsRr2_d.channel12}")

    
assert(SecondaryIrtsRr2_s == SecondaryIrtsRr2_d)
print("")

print("***SecondaryIrtsRr3***")

SecondaryIrtsRr3_s = secondary.SecondaryIrtsRr3Msg(18549, 50537, 43481, 21167)
    
print(f"Before: {SecondaryIrtsRr3_s.channel13} {SecondaryIrtsRr3_s.channel14} {SecondaryIrtsRr3_s.channel15} {SecondaryIrtsRr3_s.channel16}")
    
data = SecondaryIrtsRr3_s.serialize()

SecondaryIrtsRr3_d = secondary.SecondaryIrtsRr3Msg()
SecondaryIrtsRr3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr3_d.channel13} {SecondaryIrtsRr3_d.channel14} {SecondaryIrtsRr3_d.channel15} {SecondaryIrtsRr3_d.channel16}")

    
assert(SecondaryIrtsRr3_s == SecondaryIrtsRr3_d)
print("")

print("***SecondaryGpsCoords***")

SecondaryGpsCoords_s = secondary.SecondaryGpsCoordsMsg(0.8874117049773907, 0.2727387642339063)
    
print(f"Before: {SecondaryGpsCoords_s.latitude} {SecondaryGpsCoords_s.longitude}")
    
data = SecondaryGpsCoords_s.serialize()

SecondaryGpsCoords_d = secondary.SecondaryGpsCoordsMsg()
SecondaryGpsCoords_d.deserialize(data)
    
print(f"After:  {SecondaryGpsCoords_d.latitude} {SecondaryGpsCoords_d.longitude}")

    
assert(SecondaryGpsCoords_s == SecondaryGpsCoords_d)
print("")

print("***SecondaryGpsSpeed***")

SecondaryGpsSpeed_s = secondary.SecondaryGpsSpeedMsg(58030)
    
print(f"Before: {SecondaryGpsSpeed_s.speed}")
    
data = SecondaryGpsSpeed_s.serialize()

SecondaryGpsSpeed_d = secondary.SecondaryGpsSpeedMsg()
SecondaryGpsSpeed_d.deserialize(data)
    
print(f"After:  {SecondaryGpsSpeed_d.speed}")

    
assert(SecondaryGpsSpeed_s == SecondaryGpsSpeed_d)
print("")

print("***SecondaryLapCount***")

SecondaryLapCount_s = secondary.SecondaryLapCountMsg(3122991859, 55)
    
print(f"Before: {SecondaryLapCount_s.timestamp} {SecondaryLapCount_s.lap_count}")
    
data = SecondaryLapCount_s.serialize()

SecondaryLapCount_d = secondary.SecondaryLapCountMsg()
SecondaryLapCount_d.deserialize(data)
    
print(f"After:  {SecondaryLapCount_d.timestamp} {SecondaryLapCount_d.lap_count}")

    
assert(SecondaryLapCount_s == SecondaryLapCount_d)
print("")
