#ifndef SHOOTERSIM_H
#define SHOOTERSIM	_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class ShooterSim: public Subsystem {
private:

		
public:
	ShooterSim();
	void InitDefaultCommand();
	void SetRange(float distance);
	void TopAxelPID();
	void BottomAxelPID();
	void SetTopAxel(float fShooterSpeed);
	void SetBottomAxel(float fShooterSpeed);
	void MoveConveyor();
	bool IsBallPrimed();
	bool Passed();
	SendablePIDController *getTopAxelPID();
	SendablePIDController *getBottomAxelPID();
		
};

#endif
