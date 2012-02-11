#ifndef ELEVATOR_H
#define ELEVATOR_H
#include "ElevatorBase.h"
#include "WPILib.h"

/**
 *
 *
 * @author Davey
 */
class Elevator: public ElevatorBase {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
	// Naming Convention:
	// Slot 3 is 'Primed"
	Victor *elevatorMtr;
	DigitalInput *slot1;
	DigitalInput *slot2;
	DigitalInput *slot3;
	
public:
	Elevator();
	bool isBallSlot1();
	bool isBallSlot2();
	bool isBallSlot3();
	void InitDefaultCommand();
	void Elevator::moveElevator(elevatorMode mode);
	
};

#endif
