#include "MoveDown.h"
#include "../Subsystems/Elevator.h"

MoveDown::MoveDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(elevator);
}

// Called just before this Command runs the first time
void MoveDown::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void MoveDown::Execute() {
	elevator->moveElevator(Elevator::moveUp);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveDown::IsFinished() {
	//more logic from my whiteboard.
	return true;
}

// Called once after isFinished returns true
void MoveDown::End() {
	elevator->moveElevator(Elevator::stop);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveDown::Interrupted() {
}
