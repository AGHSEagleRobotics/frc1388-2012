#include "AutoAim.h"

AutoAim::AutoAim()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(turret);
}

// Called just before this Command runs the first time
void AutoAim::Initialize()
{
	
}

// Called repeatedly when this Command is scheduled to run
void AutoAim::Execute()
{
	// it will move the turret to stay locked on to the turret so the turret will
	// be controlled by the vision system outputs
	// target = vision->getNormalizedXPosition();
	// the constant that the target is being multiplied by is subject to cahnge as
	// it does not precisely reflect the p value for turning the turret
	// turretMtr->Set((target * (4/10000)));
}

// Make this return true when this Command no longer needs to run execute()
bool AutoAim::IsFinished()
{
	// when the robot lose the target the AutoAim Command will terminate so
	// the boolean that knows if the target is there will terminate the command
	// when it turns false (the target is lost)
	return false;
}

// Called once after isFinished returns true
void AutoAim::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoAim::Interrupted()
{
	
}
