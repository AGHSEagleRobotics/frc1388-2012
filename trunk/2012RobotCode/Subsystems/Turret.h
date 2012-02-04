#ifndef TURRET_H
#define TURRET_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author JBraun
 */
class Turret: public PIDSubsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// set the P, I, and D constants here
	static const double Kp = 0.0;
	static const double Ki = 0.0;
	static const double Kd = 0.0;
	
	//Initialize Victor, Gyro, and Encoder setup.
	Victor *turretMtr;
	Encoder *turretEncdr;
	Gyro *turretGyro;
	
	
public:
	Turret();
	virtual double ReturnPIDInput();
	virtual void UsePIDOutput(double output);
	virtual void InitDefaultCommand();
	virtual void TurnRelative(double angle);
	virtual void TurnAbsolute(double angle);
	
	
	
};

#endif
