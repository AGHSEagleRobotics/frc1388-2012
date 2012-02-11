#include "BallCollect.h"
#include "../SubSystems/BallCollectionBase.h"

BallCollect::BallCollect() {
	// Use requires() here to declare subsystem dependencies
	Requires(ballCollection);
}

// Called just before this Command runs the first time
void BallCollect::Initialize() {
	ballCollection->moveRollers(1.0);
}

// Called repeatedly when this Command is scheduled to run
void BallCollect::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool BallCollect::IsFinished() {
	return !oi->getButtonStick()->GetRawButton(5);
}

// Called once after isFinished returns true
void BallCollect::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BallCollect::Interrupted() {
}
