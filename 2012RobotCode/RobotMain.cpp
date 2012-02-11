#include "WPILib.h"
#include "Commands/DriveWithJoystick.h"
#include "Commands/RunTheFan.h"
#include "Commands/AutoAim.h"
#include "CommandBase.h"

class RobotMain : public IterativeRobot {
private:
	
//	Command *driveWithJoystick;
//	Command *runTheFan;
	Command *autoAim;
	
	virtual void RobotInit() {
		CommandBase::init();
//		driveWithJoystick = new DriveWithJoystick();
//		runTheFan = new RunTheFan();
		autoAim = new AutoAim();
	}
	
	virtual void AutonomousInit() {
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
//		driveWithJoystick->Start();
//		runTheFan->Start();
		autoAim->Start();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(RobotMain);

