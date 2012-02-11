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
	printf("AutoAim \n");
}

// Called repeatedly when this Command is scheduled to run
void AutoAim::Execute()
{
	// the Axis Camera field of vierw is 47 degrees
	printf("AutoAim \n");
	double angle;
	double xDistance;
//	int targets = vision->getNumberOfTargets();
	
//	int maxHeight = 0, maxIndex = 0; 
//	for (int i = 0; i<targets; i++)
//	{
//		vision->setTargetParticle(i);
//		if (vision->getYPosition()>maxHeight)
//		{
//			maxHeight = vision->getYPosition();
//			maxIndex = i;
//		}
//	}
	
//	vision->setTargetParticle(maxIndex);
	
	xDistance = vision->getNormalizedXPosition();
	angle = (23.5 * xDistance);
	turret->TurnRelative(angle);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoAim::IsFinished()
{
	// when the robot lose the target the AutoAim Command will terminate so
	// the boolean that knows if the target is there will terminate the command
	// when it turns false (the target is lost)
//	if (autoAimOff->WhenPressed)
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
