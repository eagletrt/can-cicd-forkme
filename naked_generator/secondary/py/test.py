import secondary


print("***SecondaryImuAngularRateMsg***")

SecondaryImuAngularRate_s = secondary.SecondaryImuAngularRateMsg(17103, 21083, 59972)
    
print(f"Before: {SecondaryImuAngularRate_s.ang_rate_x} {SecondaryImuAngularRate_s.ang_rate_y} {SecondaryImuAngularRate_s.ang_rate_z}")
    
data = SecondaryImuAngularRate_s.serialize()

SecondaryImuAngularRate_d = secondary.SecondaryImuAngularRateMsg()
SecondaryImuAngularRate_d.deserialize(data)
    
print(f"After:  {SecondaryImuAngularRate_d.ang_rate_x} {SecondaryImuAngularRate_d.ang_rate_y} {SecondaryImuAngularRate_d.ang_rate_z}")

    
assert(SecondaryImuAngularRate_s == SecondaryImuAngularRate_d)
print("")

print("***SecondaryImuAccelerationMsg***")

SecondaryImuAcceleration_s = secondary.SecondaryImuAccelerationMsg(47321, 7926, 23266)
    
print(f"Before: {SecondaryImuAcceleration_s.accel_x} {SecondaryImuAcceleration_s.accel_y} {SecondaryImuAcceleration_s.accel_z}")
    
data = SecondaryImuAcceleration_s.serialize()

SecondaryImuAcceleration_d = secondary.SecondaryImuAccelerationMsg()
SecondaryImuAcceleration_d.deserialize(data)
    
print(f"After:  {SecondaryImuAcceleration_d.accel_x} {SecondaryImuAcceleration_d.accel_y} {SecondaryImuAcceleration_d.accel_z}")

    
assert(SecondaryImuAcceleration_s == SecondaryImuAcceleration_d)
print("")

print("***SecondaryIrtsFl0Msg***")

SecondaryIrtsFl0_s = secondary.SecondaryIrtsFl0Msg(46187, 20531, 54442, 53986)
    
print(f"Before: {SecondaryIrtsFl0_s.channel1} {SecondaryIrtsFl0_s.channel2} {SecondaryIrtsFl0_s.channel3} {SecondaryIrtsFl0_s.channel4}")
    
data = SecondaryIrtsFl0_s.serialize()

SecondaryIrtsFl0_d = secondary.SecondaryIrtsFl0Msg()
SecondaryIrtsFl0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl0_d.channel1} {SecondaryIrtsFl0_d.channel2} {SecondaryIrtsFl0_d.channel3} {SecondaryIrtsFl0_d.channel4}")

    
assert(SecondaryIrtsFl0_s == SecondaryIrtsFl0_d)
print("")

print("***SecondaryIrtsFl1Msg***")

SecondaryIrtsFl1_s = secondary.SecondaryIrtsFl1Msg(16277, 63972, 41907, 12392)
    
print(f"Before: {SecondaryIrtsFl1_s.channel5} {SecondaryIrtsFl1_s.channel6} {SecondaryIrtsFl1_s.channel7} {SecondaryIrtsFl1_s.channel8}")
    
data = SecondaryIrtsFl1_s.serialize()

SecondaryIrtsFl1_d = secondary.SecondaryIrtsFl1Msg()
SecondaryIrtsFl1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl1_d.channel5} {SecondaryIrtsFl1_d.channel6} {SecondaryIrtsFl1_d.channel7} {SecondaryIrtsFl1_d.channel8}")

    
assert(SecondaryIrtsFl1_s == SecondaryIrtsFl1_d)
print("")

print("***SecondaryIrtsFl2Msg***")

SecondaryIrtsFl2_s = secondary.SecondaryIrtsFl2Msg(51444, 50835, 49799, 25273)
    
print(f"Before: {SecondaryIrtsFl2_s.channel9} {SecondaryIrtsFl2_s.channel10} {SecondaryIrtsFl2_s.channel11} {SecondaryIrtsFl2_s.channel12}")
    
data = SecondaryIrtsFl2_s.serialize()

SecondaryIrtsFl2_d = secondary.SecondaryIrtsFl2Msg()
SecondaryIrtsFl2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl2_d.channel9} {SecondaryIrtsFl2_d.channel10} {SecondaryIrtsFl2_d.channel11} {SecondaryIrtsFl2_d.channel12}")

    
assert(SecondaryIrtsFl2_s == SecondaryIrtsFl2_d)
print("")

print("***SecondaryIrtsFl3Msg***")

SecondaryIrtsFl3_s = secondary.SecondaryIrtsFl3Msg(42142, 33267, 57746, 27247)
    
print(f"Before: {SecondaryIrtsFl3_s.channel13} {SecondaryIrtsFl3_s.channel14} {SecondaryIrtsFl3_s.channel15} {SecondaryIrtsFl3_s.channel16}")
    
data = SecondaryIrtsFl3_s.serialize()

SecondaryIrtsFl3_d = secondary.SecondaryIrtsFl3Msg()
SecondaryIrtsFl3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFl3_d.channel13} {SecondaryIrtsFl3_d.channel14} {SecondaryIrtsFl3_d.channel15} {SecondaryIrtsFl3_d.channel16}")

    
assert(SecondaryIrtsFl3_s == SecondaryIrtsFl3_d)
print("")

print("***SecondaryIrtsFr0Msg***")

SecondaryIrtsFr0_s = secondary.SecondaryIrtsFr0Msg(44646, 44407, 5278, 5069)
    
print(f"Before: {SecondaryIrtsFr0_s.channel1} {SecondaryIrtsFr0_s.channel2} {SecondaryIrtsFr0_s.channel3} {SecondaryIrtsFr0_s.channel4}")
    
data = SecondaryIrtsFr0_s.serialize()

SecondaryIrtsFr0_d = secondary.SecondaryIrtsFr0Msg()
SecondaryIrtsFr0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr0_d.channel1} {SecondaryIrtsFr0_d.channel2} {SecondaryIrtsFr0_d.channel3} {SecondaryIrtsFr0_d.channel4}")

    
assert(SecondaryIrtsFr0_s == SecondaryIrtsFr0_d)
print("")

print("***SecondaryIrtsFr1Msg***")

SecondaryIrtsFr1_s = secondary.SecondaryIrtsFr1Msg(7715, 43254, 25973, 45659)
    
print(f"Before: {SecondaryIrtsFr1_s.channel5} {SecondaryIrtsFr1_s.channel6} {SecondaryIrtsFr1_s.channel7} {SecondaryIrtsFr1_s.channel8}")
    
data = SecondaryIrtsFr1_s.serialize()

SecondaryIrtsFr1_d = secondary.SecondaryIrtsFr1Msg()
SecondaryIrtsFr1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr1_d.channel5} {SecondaryIrtsFr1_d.channel6} {SecondaryIrtsFr1_d.channel7} {SecondaryIrtsFr1_d.channel8}")

    
assert(SecondaryIrtsFr1_s == SecondaryIrtsFr1_d)
print("")

print("***SecondaryIrtsFr2Msg***")

SecondaryIrtsFr2_s = secondary.SecondaryIrtsFr2Msg(22485, 15224, 18230, 10174)
    
print(f"Before: {SecondaryIrtsFr2_s.channel9} {SecondaryIrtsFr2_s.channel10} {SecondaryIrtsFr2_s.channel11} {SecondaryIrtsFr2_s.channel12}")
    
data = SecondaryIrtsFr2_s.serialize()

SecondaryIrtsFr2_d = secondary.SecondaryIrtsFr2Msg()
SecondaryIrtsFr2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr2_d.channel9} {SecondaryIrtsFr2_d.channel10} {SecondaryIrtsFr2_d.channel11} {SecondaryIrtsFr2_d.channel12}")

    
assert(SecondaryIrtsFr2_s == SecondaryIrtsFr2_d)
print("")

print("***SecondaryIrtsFr3Msg***")

SecondaryIrtsFr3_s = secondary.SecondaryIrtsFr3Msg(1625, 27435, 43530, 15939)
    
print(f"Before: {SecondaryIrtsFr3_s.channel13} {SecondaryIrtsFr3_s.channel14} {SecondaryIrtsFr3_s.channel15} {SecondaryIrtsFr3_s.channel16}")
    
data = SecondaryIrtsFr3_s.serialize()

SecondaryIrtsFr3_d = secondary.SecondaryIrtsFr3Msg()
SecondaryIrtsFr3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsFr3_d.channel13} {SecondaryIrtsFr3_d.channel14} {SecondaryIrtsFr3_d.channel15} {SecondaryIrtsFr3_d.channel16}")

    
assert(SecondaryIrtsFr3_s == SecondaryIrtsFr3_d)
print("")

print("***SecondaryIrtsRl0Msg***")

SecondaryIrtsRl0_s = secondary.SecondaryIrtsRl0Msg(3866, 62770, 31803, 55276)
    
print(f"Before: {SecondaryIrtsRl0_s.channel1} {SecondaryIrtsRl0_s.channel2} {SecondaryIrtsRl0_s.channel3} {SecondaryIrtsRl0_s.channel4}")
    
data = SecondaryIrtsRl0_s.serialize()

SecondaryIrtsRl0_d = secondary.SecondaryIrtsRl0Msg()
SecondaryIrtsRl0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl0_d.channel1} {SecondaryIrtsRl0_d.channel2} {SecondaryIrtsRl0_d.channel3} {SecondaryIrtsRl0_d.channel4}")

    
assert(SecondaryIrtsRl0_s == SecondaryIrtsRl0_d)
print("")

print("***SecondaryIrtsRl1Msg***")

SecondaryIrtsRl1_s = secondary.SecondaryIrtsRl1Msg(27041, 4925, 64862, 1281)
    
print(f"Before: {SecondaryIrtsRl1_s.channel5} {SecondaryIrtsRl1_s.channel6} {SecondaryIrtsRl1_s.channel7} {SecondaryIrtsRl1_s.channel8}")
    
data = SecondaryIrtsRl1_s.serialize()

SecondaryIrtsRl1_d = secondary.SecondaryIrtsRl1Msg()
SecondaryIrtsRl1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl1_d.channel5} {SecondaryIrtsRl1_d.channel6} {SecondaryIrtsRl1_d.channel7} {SecondaryIrtsRl1_d.channel8}")

    
assert(SecondaryIrtsRl1_s == SecondaryIrtsRl1_d)
print("")

print("***SecondaryIrtsRl2Msg***")

SecondaryIrtsRl2_s = secondary.SecondaryIrtsRl2Msg(43017, 60934, 19617, 47312)
    
print(f"Before: {SecondaryIrtsRl2_s.channel9} {SecondaryIrtsRl2_s.channel10} {SecondaryIrtsRl2_s.channel11} {SecondaryIrtsRl2_s.channel12}")
    
data = SecondaryIrtsRl2_s.serialize()

SecondaryIrtsRl2_d = secondary.SecondaryIrtsRl2Msg()
SecondaryIrtsRl2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl2_d.channel9} {SecondaryIrtsRl2_d.channel10} {SecondaryIrtsRl2_d.channel11} {SecondaryIrtsRl2_d.channel12}")

    
assert(SecondaryIrtsRl2_s == SecondaryIrtsRl2_d)
print("")

print("***SecondaryIrtsRl3Msg***")

SecondaryIrtsRl3_s = secondary.SecondaryIrtsRl3Msg(62603, 30739, 25086, 50845)
    
print(f"Before: {SecondaryIrtsRl3_s.channel13} {SecondaryIrtsRl3_s.channel14} {SecondaryIrtsRl3_s.channel15} {SecondaryIrtsRl3_s.channel16}")
    
data = SecondaryIrtsRl3_s.serialize()

SecondaryIrtsRl3_d = secondary.SecondaryIrtsRl3Msg()
SecondaryIrtsRl3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRl3_d.channel13} {SecondaryIrtsRl3_d.channel14} {SecondaryIrtsRl3_d.channel15} {SecondaryIrtsRl3_d.channel16}")

    
assert(SecondaryIrtsRl3_s == SecondaryIrtsRl3_d)
print("")

print("***SecondaryIrtsRr0Msg***")

SecondaryIrtsRr0_s = secondary.SecondaryIrtsRr0Msg(51061, 38093, 65401, 13995)
    
print(f"Before: {SecondaryIrtsRr0_s.channel1} {SecondaryIrtsRr0_s.channel2} {SecondaryIrtsRr0_s.channel3} {SecondaryIrtsRr0_s.channel4}")
    
data = SecondaryIrtsRr0_s.serialize()

SecondaryIrtsRr0_d = secondary.SecondaryIrtsRr0Msg()
SecondaryIrtsRr0_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr0_d.channel1} {SecondaryIrtsRr0_d.channel2} {SecondaryIrtsRr0_d.channel3} {SecondaryIrtsRr0_d.channel4}")

    
assert(SecondaryIrtsRr0_s == SecondaryIrtsRr0_d)
print("")

print("***SecondaryIrtsRr1Msg***")

SecondaryIrtsRr1_s = secondary.SecondaryIrtsRr1Msg(35795, 47097, 59430, 60938)
    
print(f"Before: {SecondaryIrtsRr1_s.channel5} {SecondaryIrtsRr1_s.channel6} {SecondaryIrtsRr1_s.channel7} {SecondaryIrtsRr1_s.channel8}")
    
data = SecondaryIrtsRr1_s.serialize()

SecondaryIrtsRr1_d = secondary.SecondaryIrtsRr1Msg()
SecondaryIrtsRr1_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr1_d.channel5} {SecondaryIrtsRr1_d.channel6} {SecondaryIrtsRr1_d.channel7} {SecondaryIrtsRr1_d.channel8}")

    
assert(SecondaryIrtsRr1_s == SecondaryIrtsRr1_d)
print("")

print("***SecondaryIrtsRr2Msg***")

SecondaryIrtsRr2_s = secondary.SecondaryIrtsRr2Msg(35004, 10852, 27194, 6483)
    
print(f"Before: {SecondaryIrtsRr2_s.channel9} {SecondaryIrtsRr2_s.channel10} {SecondaryIrtsRr2_s.channel11} {SecondaryIrtsRr2_s.channel12}")
    
data = SecondaryIrtsRr2_s.serialize()

SecondaryIrtsRr2_d = secondary.SecondaryIrtsRr2Msg()
SecondaryIrtsRr2_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr2_d.channel9} {SecondaryIrtsRr2_d.channel10} {SecondaryIrtsRr2_d.channel11} {SecondaryIrtsRr2_d.channel12}")

    
assert(SecondaryIrtsRr2_s == SecondaryIrtsRr2_d)
print("")

print("***SecondaryIrtsRr3Msg***")

SecondaryIrtsRr3_s = secondary.SecondaryIrtsRr3Msg(7527, 8246, 24591, 44452)
    
print(f"Before: {SecondaryIrtsRr3_s.channel13} {SecondaryIrtsRr3_s.channel14} {SecondaryIrtsRr3_s.channel15} {SecondaryIrtsRr3_s.channel16}")
    
data = SecondaryIrtsRr3_s.serialize()

SecondaryIrtsRr3_d = secondary.SecondaryIrtsRr3Msg()
SecondaryIrtsRr3_d.deserialize(data)
    
print(f"After:  {SecondaryIrtsRr3_d.channel13} {SecondaryIrtsRr3_d.channel14} {SecondaryIrtsRr3_d.channel15} {SecondaryIrtsRr3_d.channel16}")

    
assert(SecondaryIrtsRr3_s == SecondaryIrtsRr3_d)
print("")

print("***SecondaryGpsCoordsMsg***")

SecondaryGpsCoords_s = secondary.SecondaryGpsCoordsMsg(0.41746808918062184, 0.25179066086696145)
    
print(f"Before: {SecondaryGpsCoords_s.latitude} {SecondaryGpsCoords_s.longitude}")
    
data = SecondaryGpsCoords_s.serialize()

SecondaryGpsCoords_d = secondary.SecondaryGpsCoordsMsg()
SecondaryGpsCoords_d.deserialize(data)
    
print(f"After:  {SecondaryGpsCoords_d.latitude} {SecondaryGpsCoords_d.longitude}")

    
assert(SecondaryGpsCoords_s == SecondaryGpsCoords_d)
print("")

print("***SecondaryGpsSpeedMsg***")

SecondaryGpsSpeed_s = secondary.SecondaryGpsSpeedMsg(8855)
    
print(f"Before: {SecondaryGpsSpeed_s.speed}")
    
data = SecondaryGpsSpeed_s.serialize()

SecondaryGpsSpeed_d = secondary.SecondaryGpsSpeedMsg()
SecondaryGpsSpeed_d.deserialize(data)
    
print(f"After:  {SecondaryGpsSpeed_d.speed}")

    
assert(SecondaryGpsSpeed_s == SecondaryGpsSpeed_d)
print("")

print("***SecondaryLapCountMsg***")

SecondaryLapCount_s = secondary.SecondaryLapCountMsg(2034690377, 236)
    
print(f"Before: {SecondaryLapCount_s.timestamp} {SecondaryLapCount_s.lap_count}")
    
data = SecondaryLapCount_s.serialize()

SecondaryLapCount_d = secondary.SecondaryLapCountMsg()
SecondaryLapCount_d.deserialize(data)
    
print(f"After:  {SecondaryLapCount_d.timestamp} {SecondaryLapCount_d.lap_count}")

    
assert(SecondaryLapCount_s == SecondaryLapCount_d)
print("")
