# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: secondary.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0fsecondary.proto\x12\tsecondary\"L\n\x0eImuAngularRate\x12\x12\n\nang_rate_x\x18\x01 \x01(\r\x12\x12\n\nang_rate_y\x18\x02 \x01(\r\x12\x12\n\nang_rate_z\x18\x03 \x01(\r\"D\n\x0fImuAcceleration\x12\x0f\n\x07\x61\x63\x63\x65l_x\x18\x01 \x01(\r\x12\x0f\n\x07\x61\x63\x63\x65l_y\x18\x02 \x01(\r\x12\x0f\n\x07\x61\x63\x63\x65l_z\x18\x03 \x01(\r\"Q\n\x07IrtsFl0\x12\x10\n\x08\x63hannel1\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel2\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel3\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel4\x18\x04 \x01(\r\"Q\n\x07IrtsFl1\x12\x10\n\x08\x63hannel5\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel6\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel7\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel8\x18\x04 \x01(\r\"T\n\x07IrtsFl2\x12\x10\n\x08\x63hannel9\x18\x01 \x01(\r\x12\x11\n\tchannel10\x18\x02 \x01(\r\x12\x11\n\tchannel11\x18\x03 \x01(\r\x12\x11\n\tchannel12\x18\x04 \x01(\r\"U\n\x07IrtsFl3\x12\x11\n\tchannel13\x18\x01 \x01(\r\x12\x11\n\tchannel14\x18\x02 \x01(\r\x12\x11\n\tchannel15\x18\x03 \x01(\r\x12\x11\n\tchannel16\x18\x04 \x01(\r\"Q\n\x07IrtsFr0\x12\x10\n\x08\x63hannel1\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel2\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel3\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel4\x18\x04 \x01(\r\"Q\n\x07IrtsFr1\x12\x10\n\x08\x63hannel5\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel6\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel7\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel8\x18\x04 \x01(\r\"T\n\x07IrtsFr2\x12\x10\n\x08\x63hannel9\x18\x01 \x01(\r\x12\x11\n\tchannel10\x18\x02 \x01(\r\x12\x11\n\tchannel11\x18\x03 \x01(\r\x12\x11\n\tchannel12\x18\x04 \x01(\r\"U\n\x07IrtsFr3\x12\x11\n\tchannel13\x18\x01 \x01(\r\x12\x11\n\tchannel14\x18\x02 \x01(\r\x12\x11\n\tchannel15\x18\x03 \x01(\r\x12\x11\n\tchannel16\x18\x04 \x01(\r\"Q\n\x07IrtsRl0\x12\x10\n\x08\x63hannel1\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel2\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel3\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel4\x18\x04 \x01(\r\"Q\n\x07IrtsRl1\x12\x10\n\x08\x63hannel5\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel6\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel7\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel8\x18\x04 \x01(\r\"T\n\x07IrtsRl2\x12\x10\n\x08\x63hannel9\x18\x01 \x01(\r\x12\x11\n\tchannel10\x18\x02 \x01(\r\x12\x11\n\tchannel11\x18\x03 \x01(\r\x12\x11\n\tchannel12\x18\x04 \x01(\r\"U\n\x07IrtsRl3\x12\x11\n\tchannel13\x18\x01 \x01(\r\x12\x11\n\tchannel14\x18\x02 \x01(\r\x12\x11\n\tchannel15\x18\x03 \x01(\r\x12\x11\n\tchannel16\x18\x04 \x01(\r\"Q\n\x07IrtsRr0\x12\x10\n\x08\x63hannel1\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel2\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel3\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel4\x18\x04 \x01(\r\"Q\n\x07IrtsRr1\x12\x10\n\x08\x63hannel5\x18\x01 \x01(\r\x12\x10\n\x08\x63hannel6\x18\x02 \x01(\r\x12\x10\n\x08\x63hannel7\x18\x03 \x01(\r\x12\x10\n\x08\x63hannel8\x18\x04 \x01(\r\"T\n\x07IrtsRr2\x12\x10\n\x08\x63hannel9\x18\x01 \x01(\r\x12\x11\n\tchannel10\x18\x02 \x01(\r\x12\x11\n\tchannel11\x18\x03 \x01(\r\x12\x11\n\tchannel12\x18\x04 \x01(\r\"U\n\x07IrtsRr3\x12\x11\n\tchannel13\x18\x01 \x01(\r\x12\x11\n\tchannel14\x18\x02 \x01(\r\x12\x11\n\tchannel15\x18\x03 \x01(\r\x12\x11\n\tchannel16\x18\x04 \x01(\r\"0\n\tGpsCoords\x12\x10\n\x08latitude\x18\x01 \x01(\x02\x12\x11\n\tlongitude\x18\x02 \x01(\x02\"\x19\n\x08GpsSpeed\x12\r\n\x05speed\x18\x01 \x01(\r\"0\n\x08LapCount\x12\x11\n\tlap_count\x18\x01 \x01(\r\x12\x11\n\ttimestamp\x18\x02 \x01(\r\"\xe6\x06\n\x0fSecondaryFenice\x12\x33\n\x10imu_angular_rate\x18\x01 \x03(\x0b\x32\x19.secondary.ImuAngularRate\x12\x34\n\x10imu_acceleration\x18\x02 \x03(\x0b\x32\x1a.secondary.ImuAcceleration\x12%\n\tirts_fl_0\x18\x03 \x03(\x0b\x32\x12.secondary.IrtsFl0\x12%\n\tirts_fl_1\x18\x04 \x03(\x0b\x32\x12.secondary.IrtsFl1\x12%\n\tirts_fl_2\x18\x05 \x03(\x0b\x32\x12.secondary.IrtsFl2\x12%\n\tirts_fl_3\x18\x06 \x03(\x0b\x32\x12.secondary.IrtsFl3\x12%\n\tirts_fr_0\x18\x07 \x03(\x0b\x32\x12.secondary.IrtsFr0\x12%\n\tirts_fr_1\x18\x08 \x03(\x0b\x32\x12.secondary.IrtsFr1\x12%\n\tirts_fr_2\x18\t \x03(\x0b\x32\x12.secondary.IrtsFr2\x12%\n\tirts_fr_3\x18\n \x03(\x0b\x32\x12.secondary.IrtsFr3\x12%\n\tirts_rl_0\x18\x0b \x03(\x0b\x32\x12.secondary.IrtsRl0\x12%\n\tirts_rl_1\x18\x0c \x03(\x0b\x32\x12.secondary.IrtsRl1\x12%\n\tirts_rl_2\x18\r \x03(\x0b\x32\x12.secondary.IrtsRl2\x12%\n\tirts_rl_3\x18\x0e \x03(\x0b\x32\x12.secondary.IrtsRl3\x12%\n\tirts_rr_0\x18\x0f \x03(\x0b\x32\x12.secondary.IrtsRr0\x12%\n\tirts_rr_1\x18\x10 \x03(\x0b\x32\x12.secondary.IrtsRr1\x12%\n\tirts_rr_2\x18\x11 \x03(\x0b\x32\x12.secondary.IrtsRr2\x12%\n\tirts_rr_3\x18\x12 \x03(\x0b\x32\x12.secondary.IrtsRr3\x12(\n\ngps_coords\x18\x13 \x03(\x0b\x32\x14.secondary.GpsCoords\x12&\n\tgps_speed\x18\x14 \x03(\x0b\x32\x13.secondary.GpsSpeed\x12&\n\tlap_count\x18\x15 \x03(\x0b\x32\x13.secondary.LapCountb\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'secondary_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _IMUANGULARRATE._serialized_start=30
  _IMUANGULARRATE._serialized_end=106
  _IMUACCELERATION._serialized_start=108
  _IMUACCELERATION._serialized_end=176
  _IRTSFL0._serialized_start=178
  _IRTSFL0._serialized_end=259
  _IRTSFL1._serialized_start=261
  _IRTSFL1._serialized_end=342
  _IRTSFL2._serialized_start=344
  _IRTSFL2._serialized_end=428
  _IRTSFL3._serialized_start=430
  _IRTSFL3._serialized_end=515
  _IRTSFR0._serialized_start=517
  _IRTSFR0._serialized_end=598
  _IRTSFR1._serialized_start=600
  _IRTSFR1._serialized_end=681
  _IRTSFR2._serialized_start=683
  _IRTSFR2._serialized_end=767
  _IRTSFR3._serialized_start=769
  _IRTSFR3._serialized_end=854
  _IRTSRL0._serialized_start=856
  _IRTSRL0._serialized_end=937
  _IRTSRL1._serialized_start=939
  _IRTSRL1._serialized_end=1020
  _IRTSRL2._serialized_start=1022
  _IRTSRL2._serialized_end=1106
  _IRTSRL3._serialized_start=1108
  _IRTSRL3._serialized_end=1193
  _IRTSRR0._serialized_start=1195
  _IRTSRR0._serialized_end=1276
  _IRTSRR1._serialized_start=1278
  _IRTSRR1._serialized_end=1359
  _IRTSRR2._serialized_start=1361
  _IRTSRR2._serialized_end=1445
  _IRTSRR3._serialized_start=1447
  _IRTSRR3._serialized_end=1532
  _GPSCOORDS._serialized_start=1534
  _GPSCOORDS._serialized_end=1582
  _GPSSPEED._serialized_start=1584
  _GPSSPEED._serialized_end=1609
  _LAPCOUNT._serialized_start=1611
  _LAPCOUNT._serialized_end=1659
  _SECONDARYFENICE._serialized_start=1662
  _SECONDARYFENICE._serialized_end=2532
# @@protoc_insertion_point(module_scope)
