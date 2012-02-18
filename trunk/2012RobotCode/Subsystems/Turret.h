#ifndef TURRET_H
#define TURRET_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "TurretBase.h"

/**
 *
 *
 * @author AG132127
 */
class Turret: public Subsystem {
private:
	Victor *turretMotor;
	DigitalInput *turretSwitchL;
	DigitalInput *turretSwitchR;
	

public:
	Turret();
	void InitDefaultCommand();
	 void setMotor(float xAxis);
	 bool isLlimit ();
	 bool isRlimit ();
	 float getMotor ();
};

#endif
