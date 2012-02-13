#ifndef TURRETBASE_H
#define TURRETBASE_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Jarrett Corr
 */
class TurretBase: public PIDSubsystem {
protected:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// set the P, I, and D constants here
	double Kp;
	double Ki;
	double Kd;
	
private:
	double errorTerm;
	
public:
	TurretBase(double Kp = 0, double Ki = 0, double Kd = 0);
	virtual double ReturnPIDInput();
	virtual void UsePIDOutput(double output);
	virtual void InitDefaultCommand();
	virtual void TurnRelative(double angle);
	virtual void TurnAbsolute(double angle);
	virtual void SetErrorTerm(double error);
};

#endif
