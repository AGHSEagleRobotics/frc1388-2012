#include "Fire.h"
#include "../SubSystems/ElevatorBase.h"

Fire::Fire()
{
	Requires(elevator);
}

// Called just before this Command runs the first time
void Fire::Initialize()
{
	
}
// Called repeatedly when this Command is scheduled to run
void Fire::Execute()
{
//	elevator->MoveUp();
//	printf("FIRE \n");
}

// Make this return true when this Command no longer needs to run execute()
bool Fire::IsFinished()
{
	return false;
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
