#include "DriveTrainBase.h"
#include "../Robotmap.h"

DriveTrainBase::DriveTrainBase() : Subsystem("DriveTrainBase") {
	
}
    
void DriveTrainBase::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void DriveTrainBase::mecanumDrive_Polar(float direction, float power)
{

}

void DriveTrainBase::mecanumDrive_Cartesian(float x, float y, float rotation)
{
	
}

void DriveTrainBase::driveWithJoystick(Joystick *joystick)
{
	
}

float DriveTrainBase::getGyroAngle()
{
	return 0;
}

void DriveTrainBase::autoLevel()
{
	
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
