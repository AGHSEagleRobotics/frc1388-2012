#include "MoveElevator.h"
#include "../Subsystems/Elevator.h"
//MoveElevator - Needs to prime the ball, move the elevator up, and
//move the elevator down. 


MoveElevator::MoveElevator(Elevator::elevatorMode mode) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	//Requires();
	this->mode = mode;
	Requires(elevator);
}

// Called just before this Command runs the first time
void MoveElevator::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void MoveElevator::Execute() 
{
	elevator->moveElevator(mode);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveElevator::IsFinished() {
	//when target sensor tripped 
	return false;
}

// Called once after isFinished returns true
void MoveElevator::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveElevator::Interrupted() {
}
