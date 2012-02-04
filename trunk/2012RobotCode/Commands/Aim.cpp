#include "Aim.h"

Aim::Aim() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void Aim::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void Aim::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool Aim::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Aim::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Aim::Interrupted() {
}
