#ifndef secondary_IDS_H
#define secondary_IDS_H

#define secondary_IDS_VERSION 1.0f

/* TOPIC FIXED_IDS */
#define TOPIC_FIXED_IDS_MASK 0b00000011111
/*
* Inertial Measurement Unit [x,y,z]-axis angular rate value. 0.01dps per bit, Big-Endian, 16bit Total, signed
*/
#define SECONDARY_ID_IMU_ANGULAR_RATE 0b10011101100
/*
* Inertial Measurement Unit [x,y,z]-axis acceleration value. 0.01g per bit, Big-Endian, 16bit Total, signed
*/
#define SECONDARY_ID_IMU_ACCELERATION 0b10011101101
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FL_0 0b10110110100
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FL_1 0b10110110101
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FL_2 0b10110110110
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FL_3 0b10110110111
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FR_0 0b10110111000
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FR_1 0b10110111001
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FR_2 0b10110111010
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_FR_3 0b10110111011
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RL_0 0b10110111100
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RL_1 0b10110111101
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RL_2 0b10110111110
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RL_3 0b10110111111
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RR_0 0b10111000000
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RR_1 0b10111000001
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RR_2 0b10111000010
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define SECONDARY_ID_IRTS_RR_3 0b10111000011

/* TOPIC STEER */
#define TOPIC_STEER_MASK 0b00000011111
#define TOPIC_STEER_FILTER 0b00000000001
/*
* Coordinates received from GPS
*/
#define SECONDARY_ID_GPS_COORDS 0b10000000001
/*
* Speed received from GPS
*/
#define SECONDARY_ID_GPS_SPEED 0b10000100001
/*
* Lap counter and associated timestamp
*/
#define SECONDARY_ID_LAP_COUNT 0b10001000001

#endif
