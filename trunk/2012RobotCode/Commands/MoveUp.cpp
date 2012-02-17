#include "MoveUp.h"
#include "../Subsystems/Elevator.h"

MoveUp::MoveUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(elevator);
}

// Called just before this Command runs the first time
void MoveUp::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void MoveUp::Execute() {
	elevator->moveElevator(Elevator::moveUp);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveUp::IsFinished() {
	//the logic on my whiteboard will go here.
	return false;
}

// Called once after isFinished returns true
void MoveUp::End() {
	elevator->moveElevator(Elevator::stop);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveUp::Interrupted() {
}
