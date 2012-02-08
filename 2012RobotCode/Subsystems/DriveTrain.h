#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "WPILib.h"
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "GyroWithTrim.h"

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
	GyroWithTrim *gyro;
	
	float desiredHeading;
	
	// Declare a function for getting the gyro angle in case we decide
	// go add compensation for drift
	virtual float getGyroAngle();
	
	virtual float headingHold();
	
	// Stuff for the PID
	SendablePIDController *gyroHeadingPID;
	Preferences *prefs;
	manualPIDOutput *pidOut;
	
public:
	DriveTrain();
	virtual void InitDefaultCommand();
	virtual void mecanumDrive_Polar(float direction, float power);
	virtual void mecanumDrive_Cartesian(float x, float y, float rotation);
	
	virtual void fineTrimLeft();
	virtual void coarseTrimLeft();
	virtual void fineTrimRight();
	virtual void coarseTrimRight();
	virtual void zeroGyro();
};

#endif
