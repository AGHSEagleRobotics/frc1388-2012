#include "Collect.h"

Collect::Collect() {
	// Use requires() here to declare subsystem dependencies
	Requires(ballCollection);
}

// Called just before this Command runs the first time
void Collect::Initialize() {
	ballCollection->moveRollers(1.0);
}

// Called repeatedly when this Command is scheduled to run
void Collect::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool Collect::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Collect::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Collect::Interrupted() {
}
