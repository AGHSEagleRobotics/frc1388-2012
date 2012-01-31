#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Scott
 */
class DriveTrain: public Subsystem {
private:
	// Create variables for each of the Jaguars
	CANJaguar *frontLeft;
	CANJaguar *backLeft;
	CANJaguar *frontRight;
	CANJaguar *backRight;
	
	// Create a variable for the main robot drive
	RobotDrive *drive;
	
	// Create a variable for le Gyro
	Gyro *gyro;
	
	// Declare a function for getting the gyro angle in case we decide
	// go add compensation for drift
	float getGyroAngle();
	
public:
	DriveTrain();
	void InitDefaultCommand();
	void mecanumDrive_Polar(float direction, float power);
	void mecanumDrive_Cartesian(float x, float y, float rotation);
	void driveWithJoystick(Joystick *joystick);
};

#endif
