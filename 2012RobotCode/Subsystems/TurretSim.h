#ifndef TURRETSIM_H
#define TURRETSIM_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Jarrett
 */
class TurretSim: public PIDSubsystem {
private:
	
public:
	TurretSim();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void TurnRelative(double angle);
	void TurnAbsolute(double angle);
	
	
	
};

#endif
