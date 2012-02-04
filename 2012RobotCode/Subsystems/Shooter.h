#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem {
private:
	Victor *topAxel;
	Victor *bottomAxel;
	Encoder *topAxelEncoder;
	Encoder *bottomAxelEncoder;
	SendablePIDController *pidTopAxel;
	SendablePIDController *pidBottomAxel;
	AnalogChannel *ballDetect;
	DigitalInput *passed;
	Victor *conveyorBelt;
		
public:
	Shooter();
	virtual void InitDefaultCommand();
	virtual void SetRange(float distance);
	virtual void TopAxelPID();
	virtual void BottomAxelPID();
	virtual void SetTopAxel(float fShooterSpeed);
	virtual void SetBottomAxel(float fShooterSpeed);
	virtual void MoveConveyor();
	virtual bool IsBallPrimed();
	virtual bool Passed();
	virtual SendablePIDController *getTopAxelPID();
	virtual SendablePIDController *getBottomAxelPID();
		
};

#endif
