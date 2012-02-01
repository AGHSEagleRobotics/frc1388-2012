#include "Turret.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"

Turret::Turret() : PIDSubsystem("Turret", Kp, Ki, Kd) {
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
	
	turretMtr = new Victor(DEFAULT_ANALOG_MODULE, TURRET_VICTOR_ID );
	turretEncdr = new Encoder(TURRET_ENCODER_A, TURRET_ENCODER_B, true, Encoder::k4X);
	turretGyro = new Gyro(DEFAULT_ANALOG_MODULE, TURRET_GYRO_ID);
}

double Turret::ReturnPIDInput() {
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return 0.0;
}

// float Turret::Get

void Turret::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	// 
	turretMtr->Set(output);
}

void Turret::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
void Turret::TurnRelative(){
	//TurnRelative is a function for specifying a turn by number of 
	// degrees, i.e. "turn turret -5 degrees."
	
}
void Turret::TurnAbsolute(){
	//TurnAbsolute is a function for specifying a specific degree,
	// i.e. "turn turret to 5 degrees."
}


