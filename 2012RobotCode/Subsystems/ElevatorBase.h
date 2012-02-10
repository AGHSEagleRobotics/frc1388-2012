#ifndef ELEVATORBASE_H
#define ELEVATORBASE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Davey
 */
class ElevatorBase: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	ElevatorBase();
	void InitDefaultCommand();
	void upSlot();
	void downSlot();
	void prime();
};

#endif
