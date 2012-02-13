#include "RotateLeft.h"
#include "../SubSystems/TurretBase.h"

RotateLeft::RotateLeft()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(turret);
}

// Called just before this Command runs the first time
void RotateLeft::Initialize()
{
	
}

// Called repeatedly when this Command is scheduled to run
void RotateLeft::Execute()
{
	turret->TurnRelative(-5);
}

// Make this return true when this Command no longer needs to run execute()
bool RotateLeft::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void RotateLeft::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RotateLeft::Interrupted()
{
	
}