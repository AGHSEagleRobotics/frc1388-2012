#ifndef DRIVETRAINSIM_H
#define DRIVETRAINSIM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Jarrett
 */
class DriveTrainSim: public Subsystem {
private:
	
	virtual float getGyroAngle();
	
public:
	DriveTrainSim();
	virtual void InitDefaultCommand();
	virtual void mecanumDrive_Polar(float direction, float power);
	virtual void mecanumDrive_Cartesian(float x, float y, float rotation);
	virtual void driveWithJoystick(Joystick *joystick);
};

#endif
