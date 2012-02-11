#include "ManualRange.h"
#include "../SubSystems/ShooterBase.h"

ManualRange::ManualRange() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void ManualRange::Initialize() 
{
	
}

// Called repeatedly when this Command is scheduled to run
void ManualRange::Execute() 
{
	float yAxis = oi->getSliderPower();
	float upPower = (yAxis +1 )/2;
	shooter->SetRange(upPower);
}

// Make this return true when this Command no longer needs to run execute()
bool ManualRange::IsFinished() 
{
	return false;
}

// Called once after isFinished returns true
void ManualRange::End() 
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ManualRange::Interrupted() 
{
	
}
