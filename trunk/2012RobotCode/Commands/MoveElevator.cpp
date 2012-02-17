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
	if (!elevator->isBallSlot3())
	{
		if (elevator->isBallSweeperArea())
		{
			elevator->moveElevator(mode);
			// Review: use timer function.
			Wait(0.2);
			// Review: Following code needs to be verified.
			do {} while (!elevator->isBallSlot1() && !elevator->isBallSlot3());
			elevator->moveElevator(Elevator::stop);
		}
	}
}

// Make this return true when this Command no longer needs to run execute()
bool MoveElevator::IsFinished() {
	//when sweeper not on
	return !oi->getButtonStick()->GetRawButton(5);
}

// Called once after isFinished returns true
void MoveElevator::End() {
	elevator->moveElevator(Elevator::stop);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveElevator::Interrupted() {
}
