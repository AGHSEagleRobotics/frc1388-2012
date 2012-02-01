#ifndef SHOOTER_H
#define SHOOTER_H
#include "WPILib.h"

class Shooter: public Subsystem {
private:
		Victor topAxel;
		Victor bottomAxel;
		Encoder topEncoder;
		Encoder bottomEncoder;
		PIDController pidTopAxel;
		PIDController pidBottomAxel;
		float fShooterSpeed;
//		Victor ballStop;
		DigitalInput openStop;
		DigitalInput closeStop;
		
public:
	Shooter();
	void InitDefaultCommand();
	void ballStop();
};

#endif
