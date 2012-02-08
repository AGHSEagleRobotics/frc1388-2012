#include "TurretBase.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"

TurretBase::TurretBase() : PIDSubsystem("TurretBase", Kp, Ki, Kd) {
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
}

double TurretBase::ReturnPIDInput() 
{
	return 0;
}

void TurretBase::UsePIDOutput(double output) 
{
}

void TurretBase::InitDefaultCommand() 
{
	
}
void TurretBase::TurnRelative(double angle)
{
	
}
void TurretBase::TurnAbsolute(double angle)
{
	
}
