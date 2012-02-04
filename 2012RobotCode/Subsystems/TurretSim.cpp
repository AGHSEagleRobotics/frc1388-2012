#include "TurretSim.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"

TurretSim::TurretSim() 
	: servoSim(1, 1)
{
	angleSim = 0;
}

double TurretSim::ReturnPIDInput() 
{
	return angleSim;
}

void TurretSim::UsePIDOutput(double output) 
{
	
}

void TurretSim::InitDefaultCommand() 
{
	
}
void TurretSim::TurnRelative(double angle)
{
	angleSim += angle;
	SetSetpoint(angleSim);
	servoSim.SetAngle(angleSim);
}
void TurretSim::TurnAbsolute(double angle)
{
	angleSim = angle;
	SetSetpoint(angleSim);
	servoSim.SetAngle(angleSim);
}
