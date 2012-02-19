#include "Turret.h"
#include "../Robotmap.h"
#include "../Commands/TurretLimitSwitches.h"

Turret::Turret() : TurretBase() {
	turretMotor = new Victor( DEFAULT_ANALOG_MODULE, TURRET_VICTOR_ID);
	turretSwitchL = new DigitalInput(DEFAULT_DIGITAL_MODULE, TURRET_LEFT_LIMIT);
	turretSwitchR = new DigitalInput(DEFAULT_DIGITAL_MODULE, TURRET_RIGHT_LIMIT);
}
    
void Turret::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
SetDefaultCommand(new TurretLimitSwitches());

}
	
void Turret::setMotor(float xAxis){
	turretMotor->Set(xAxis);

}

bool Turret::isLlimit(){
	return turretSwitchL->Get();
}
bool Turret::isRlimit(){
	return turretSwitchR->Get();	
}

float Turret::getMotor(){
	return turretMotor->Get();
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
