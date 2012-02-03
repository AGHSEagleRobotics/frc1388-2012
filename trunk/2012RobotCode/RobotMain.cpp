#include "WPILib.h"
#include "Commands/DriveWithJoystick.h"
#include "CommandBase.h"

class RobotMain : public IterativeRobot {
private:
	
	Command *driveWithJoystick;
	
	virtual void RobotInit() {
		CommandBase::init();
		driveWithJoystick = new DriveWithJoystick();
	}
	
	virtual void AutonomousInit() {
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		driveWithJoystick->Start();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(RobotMain);

