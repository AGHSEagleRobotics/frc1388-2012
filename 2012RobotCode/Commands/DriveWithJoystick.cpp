#include "DriveWithJoystick.h"

DriveWithJoystick::DriveWithJoystick() {
	Requires(driveTrain);
}

// Called just before this Command runs the first time
void DriveWithJoystick::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystick::Execute() {
	driveTrain->driveWithJoystick(oi->getDriveStick());
}

// Is always being used. Never return true
bool DriveWithJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoystick::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoystick::Interrupted() {
}
