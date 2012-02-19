#include "TurretLimitSwitches.h"
#include "../SubSystems/TurretBase.h"

TurretLimitSwitches::TurretLimitSwitches() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);

}

// Called just before this Command runs the first time
void TurretLimitSwitches::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void TurretLimitSwitches::Execute() {
	
	if (turret->isLlimit() && turret->getMotor() < 0 ){
			turret->setMotor(0);
	}
	else if (turret->isRlimit() && turret->getMotor() > 0 ){
			turret->setMotor(0);
	}

}
// Make this return true when this Command no longer needs to run execute()
bool TurretLimitSwitches::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TurretLimitSwitches::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurretLimitSwitches::Interrupted() {
}
