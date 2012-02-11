#include "Elevator.h"
#include "../Robotmap.h"

Elevator::Elevator() : ElevatorBase() {
	
}
    
void Elevator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Elevator::moveElevator(Elevator::elevatorMode mode)
{
	
}

bool Elevator::isBallSlot1()
{
	return false;
}

bool Elevator::isBallSlot2()
{
	return false;
}

bool Elevator::isBallSlot3()
{
	return false;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
