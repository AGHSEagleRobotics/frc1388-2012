#include "DriveTrainBase.h"
#include "../Robotmap.h"

DriveTrainBase::DriveTrainBase() : Subsystem("DriveTrainBase") {
	
}
    
void DriveTrainBase::driveWithJoystick(Joystick *joystick)
{
	mecanumDrive_Cartesian(joystick->GetAxis(Joystick::kXAxis), joystick->GetAxis(Joystick::kYAxis), joystick->GetAxis(Joystick::kZAxis));
}
