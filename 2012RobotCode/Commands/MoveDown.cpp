#include "MoveDown.h"
#include "../Subsystems/Elevator.h"

MoveDown::MoveDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(elevator);
}

// Called just before this Command runs the first time
void MoveDown::Initialize() {
	if(elevator->isBallSlot3())
		targetslot=2;
	else if(elevator->isBallSlot2())
		targetslot=1;
	else targetslot=0;
	
	timer.Start();
}

// Called repeatedly when this Command is scheduled to run
void MoveDown::Execute() {
	elevator->moveElevator(Elevator::moveDown);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveDown::IsFinished() {
	if(timer.Get()<.25)
		return false;
	if(targetslot==2)
		return elevator->isBallSlot2();
	else if(targetslot==1)
		return elevator->isBallSlot1();
	else if(targetslot==0)
		return !elevator->isBallSlot1();
	else return false;
}

// Called once after isFinished returns true
void MoveDown::End() {
	elevator->moveElevator(Elevator::stop);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveDown::Interrupted() {
}
