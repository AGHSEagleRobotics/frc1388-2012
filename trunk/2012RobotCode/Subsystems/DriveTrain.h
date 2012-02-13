#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "WPILib.h"
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "GyroWithTrim.h"
#include "DriveTrainBase.h"
#include "../util.h"

/**
 *
 *
 * @author Scott
 */
class DriveTrain: public DriveTrainBase {
private:
	// Create variables for each of the Jaguars
#if defined(COMPETITION)
	CANJaguar *frontLeft;
	CANJaguar *backLeft;
	CANJaguar *frontRight;
	CANJaguar *backRight;
#endif

	// Create a variable for the main robot drive
	RobotDrive *drive;
	
	// Create a variable for the Gyro
	GyroWithTrim *gyro;
//	Gyro *gyro;
	
	float desiredHeading;
	float prevRotation;

	virtual float headingHold();
	
	Timer timer;
	
	// Stuff for the PID
	SendablePIDController *gyroHeadingPID;
//	Preferences *prefs;
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
