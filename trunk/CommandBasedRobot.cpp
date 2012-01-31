#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/DriveWithJoystick.h"

class CommandBasedRobot : public IterativeRobot {
private:
	Command *driveWithJoystick;
	
	virtual void RobotInit() {
		CommandBase::init();
		driveWithJoystick = new DriveWithJoystick();
	}
	
	virtual void AutonomousInit() {
		
	}
	
	virtual void AutonomousPeriodic() {
		
	}
	
	virtual void TeleopInit() {
		driveWithJoystick->Start();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

