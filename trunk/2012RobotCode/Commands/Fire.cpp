#include "Fire.h"
#include "../SubSystems/ShooterBase.h"

Fire::Fire()
{
	Requires(shooter);
}

// Called just before this Command runs the first time
void Fire::Initialize()
{
	
}
// Called repeatedly when this Command is scheduled to run
void Fire::Execute()
{
	shooter->MoveConveyor();
	printf("FIRE \n");
}

// Make this return true when this Command no longer needs to run execute()
bool Fire::IsFinished()
{
	return (shooter->Passed());
}

// Called once after isFinished returns true
void Fire::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Fire::Interrupted()
{
	
}
