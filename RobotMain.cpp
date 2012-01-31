#include "WPILib.h"
//#include "Commands/AxelSpeed.h"
//#include "Commands/DriveWithJoystick.h"
//#include "Commands/Fire.h"
//#include "Commands/SetSpeed.h"
//#include "CommandBase.h"

#include "Subsystems/Vision.h"

class RobotMain : public IterativeRobot {
private:
	
	Vision vision;
	
	virtual void RobotInit() {
//		CommandBase::init();
	}
	
	virtual void AutonomousInit() {
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		
	}
	
	virtual void TeleopPeriodic() {
//		Scheduler::GetInstance()->Run();
		int numMatches = -1;
		vision.findRectangles(numMatches);
		printf("numMatches:%d\n", numMatches);
//		printf("error:%d\n", imaqGetLastError());
//		printf("numTargets:%d\n",vision.findRectangles()->size());
	}
};

START_ROBOT_CLASS(RobotMain);

