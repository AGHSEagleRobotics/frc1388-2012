#include "WPILib.h"
#include "Commands/DriveWithJoystick.h"
#include "Commands/RunTheFan.h"
#include "Commands/AutoCollect.h"
#include "CommandBase.h"

class RobotMain : public IterativeRobot {
private:
	
	Command *driveWithJoystick;
	Command *runTheFan;
//	Command *autoBallCollect;
	
	virtual void RobotInit() {
		CommandBase::init();
		driveWithJoystick = new DriveWithJoystick();
		runTheFan = new RunTheFan();
//		autoBallCollect = new AutoCollect();
//		Review: Confirm if the fan runs
		runTheFan->Start();
	}
	
	virtual void AutonomousInit() {
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		driveWithJoystick->Start();
//		autoBallCollect->Start();
//		runTheFan->Start();
//		autoAim->Start();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void DisabledInit() {
		Preferences::GetInstance()->Save();
	}
};

START_ROBOT_CLASS(RobotMain);

