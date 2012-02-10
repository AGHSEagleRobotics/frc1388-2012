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
public:
	Elevator();
	void InitDefaultCommand();
	void upSlot();
	void downSlot();
	void prime();
};

#endif
