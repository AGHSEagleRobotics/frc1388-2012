#include "MoveTipper.h"

MoveTipper::MoveTipper(Tipper::tipperMode mode) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	this->mode = mode;
	Requires(tipper);
}

// Called just before this Command runs the first time
void MoveTipper::Initialize() 
{
	
}

// Called repeatedly when this Command is scheduled to run
void MoveTipper::Execute() 
{
	tipper->MoveTipper(mode);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveTipper::IsFinished() 
{
	return false;
}

// Called once after isFinished returns true
void MoveTipper::End() 
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveTipper::Interrupted() 
{
}
