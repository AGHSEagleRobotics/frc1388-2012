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
	virtual void SetErrorTerm(double error);
	virtual void setMotor(float xAxis) {}
	bool isLlimit () { return false;}
	bool isRlimit (){return false;}
	float getMotor (){return 0;}
};

#endif
