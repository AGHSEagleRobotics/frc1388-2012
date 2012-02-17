#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#define COMPETITION
//#define SIMULATE
//#define KITBOT

#include "Debug.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

#define CAMERA_IP "10.13.88.11"
#define LIGHT_RING_PORT 1

// Define the CAN IDs
#define FRONT_LEFT_CAN_ID 5
#define BACK_LEFT_CAN_ID 2
#define FRONT_RIGHT_CAN_ID 4
#define BACK_RIGHT_CAN_ID 3

// Define the default Modules
#define DEFAULT_ANALOG_MODULE 1
#define DEFAULT_DIGITAL_MODULE 1

#define DRIVETRAIN_GYRO_CHANNEL 1

//DEFINE THE TURRET

#define TURRET_VICTOR_ID 1
#define TURRET_GYRO_ID   1
#define TURRET_ENCODER_A 1
#define TURRET_ENCODER_B 2

// define the bridge control
#define BRIDGE_CONTROL_MOTOR 2
#define BRIDGE_CONTROL_EXTENDED_SWITCH 7
#define BRIDGE_CONTROL_RETRACTED_SWITCH 8

//define the shooter
#define TOP_AXEL_VICTOR 3
#define BOTTOM_AXEL_VICTOR 4
#define TOP_AXEL_ENCODER_A 3
#define TOP_AXEL_ENCODER_B 4
#define BOTTOM_AXEL_ENCODER_A 5
#define BOTTOM_AXEL_ENCODER_B 6
#define TOP_AXEL_PID 1
#define BOTTOM_AXEL_PID 1
#define CONVEYOR_BELT_VICTOR 6
#define BALL_DETECT 9
#define BALL_PASSED 10

// define the ball colletor
#define BALL_COLLECTION_2 5
#define SLOT_1_LIGHT_SENSOR 9
#define SLOT_2_LIGHT_SENSOR 10
#define SLOT_3_LIGHT_SENSOR 11
#define SWEEPER_LIGHT_SENSOR 1

// define the fan
#define FAN 8

#endif
