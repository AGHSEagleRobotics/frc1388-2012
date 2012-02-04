#ifndef TURRETSIM_H
#define TURRETSIM_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"
#include "Turret.h"

/**
 *
 *
 * @author Jarrett
 */
class TurretSim: public Turret {
private:
	double angleSim;
	Servo servoSim;
	
public:
	TurretSim();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void TurnRelative(double angle);
	void TurnAbsolute(double angle);
	
	
	
};

#endif
