#include "Fire.h"

Fire::Fire()
{
	Requires(shooter);
}

// Called just before this Command runs the first time
void Fire::Initialize()
{
	Joystick *opsStick = oi->GetOpsStick();
	DigitalInput openedStop = new Victor(1, OPENED_LIMIT_SWITCH);
	DigitalInput closedStop = new Victor(1, CLOSED_LIMIT_SWITCH);
	DigitalInput passed = new Victor(1, PASSED_LIMIT_SWITCH);
	Victor ballStop = new Victor(1, BALL_STOP_MOTOR);

// Called repeatedly when this Command is scheduled to run
void Fire::Execute()
{
	bool trigger = opsStick->GetButton(Joystick::kTriggerButton);
	bool opened = shooter->openedStop;
	bool closed = shooter->closedStop;
	if(trigger)
	{
		if(closed)
		{
			ballStop = -0.5;
		}
		
		if(open)
		{
			ballStop = 0;
		}
	
		if(passed)
		{
			ballStop = 0.5;
		}
		
	}


	}
	
	
			
}

// Make this return true when this Command no longer needs to run execute()
bool Fire::IsFinished(passed)
{
	return true;
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
