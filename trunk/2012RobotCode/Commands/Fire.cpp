#include "Fire.h"

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
	// design has decided not to use a pice of metal to stop the ball before it
	// enters the shooter so the code below in comments is obsolete and the 
	// conveyer will turn off and on to control the balls that go into the shooter.
	
//	bool trigger = oi->getOpsStick()->GetButton(Joystick::kTriggerButton);
//	bool opened = shooter->openedStop.Get();
//	bool closed = shooter->closedStop.Get();
//	float ballStop = shooter->ballStop.Get();
//	bool passed = shooter->passed.Get();
//	if(trigger)
//	{
//		if(closed)
//		{
//			ballStop = -0.75;
//		}
//		
//		if(opened)
//		{
//			ballStop = 0;
//		}
//	
//		if(passed)
//		{
//			ballStop = 0.75;
//		}
//		
//	}
	
	shooter->MoveConveyor();
	
	
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
