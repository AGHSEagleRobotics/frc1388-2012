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
	
	// Create a variable for the Gyro
	Gyro *gyro;
	
	// Declare a function for getting the gyro angle in case we decide
	// go add compensation for drift
	virtual float getGyroAngle();
	
	// Creat some variables for gyro trim.
	bool *prevOpButtons;
	float gyroTrim;
	
	static const int FINE_LEFT_BUTTON = 3; //CHANGE TO CORRECT NUMBERS.
	static const int FINE_RIGHT_BUTTON = 4;
	static const int COARSE_LEFT_BUTTON = 5;
	static const int COARSE_RIGHT_BUTTON = 6;
	
public:
	DriveTrain();
	virtual void InitDefaultCommand();
	virtual void mecanumDrive_Polar(float direction, float power);
	virtual void mecanumDrive_Cartesian(float x, float y, float rotation);
	virtual void driveWithJoystick(Joystick *joystick);
};

#endif
