#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#define SIMULATE

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
#define FRONT_LEFT_CAN_ID 1
#define BACK_LEFT_CAN_ID 1
#define FRONT_RIGHT_CAN_ID 1
#define BACK_RIGHT_CAN_ID 1

// Define the default Modules
#define DEFAULT_ANALOG_MODULE 1
#define DEFAULT_DIGITAL_MODULE 1

#define DRIVETRAIN_GYRO_CHANNEL 1

//DEFINE THE TURRET

#define TURRET_VICTOR_ID 1
#define TURRET_GYRO_ID   1
#define TURRET_ENCODER_A 1
#define TURRET_ENCODER_B 1

// define the bridge control
#define BRIDGE_CONTROL_MOTOR 1

//define the shooter
#define TOP_AXEL_VICTOR 1	
#define BOTTOM_AXEL_VICTOR 1
#define TOP_AXEL_ENCODER_A 1
#define TOP_AXEL_ENCODER_B 1
#define BOTTOM_AXEL_ENCODER_A 1
#define BOTTOM_AXEL_ENCODER_B 1
#define TOP_AXEL_PID 1
#define BOTTOM_AXEL_PID 1
#define BALL_DETECT 1
#define CONVEYOR_BELT_VICTOR 1
#define BALL_PASSED 1

// define the ball colletor
#define BALL_COLLECTION_2

#endif
