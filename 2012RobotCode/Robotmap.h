#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "Debug.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

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

#endif
