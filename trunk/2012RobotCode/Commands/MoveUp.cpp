#include "MoveUp.h"
#include "../Subsystems/Elevator.h"

MoveUp::MoveUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(elevator);
}

// Called just before this Command runs the first time
void MoveUp::Initialize() {
	if(elevator->isBallSlot3())
		targetslot=0;
	else if(elevator->isBallSlot2())
		targetslot=3;
	else if(elevator->isBallSlot1())
		targetslot=2;
	else targetslot=1;
	
	timer.Start();
	
}

// Called repeatedly when this Command is scheduled to run
void MoveUp::Execute() {
	elevator->moveElevator(Elevator::moveUp);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveUp::IsFinished() {
	//the logic on my whiteboard will go here.
	if(timer.Get()<.25)
		return false;
	if(targetslot==3)
		return elevator->isBallSlot3();
	else if(targetslot==2)
		return elevator->isBallSlot2();
	else if(targetslot==1)
		return elevator->isBallSlot1();
	else if(targetslot==0)
		return true;
	else return false;
}

// Called once after isFinished returns true
void MoveUp::End() {
	elevator->moveElevator(Elevator::stop);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveUp::Interrupted() {
	elevator->moveElevator(Elevator::stop);
}
