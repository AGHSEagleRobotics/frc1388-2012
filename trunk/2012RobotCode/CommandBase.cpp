#include "CommandBase.h"
#include "RobotMap.h"
#include "Subsystems/DriveTrain.h"
//#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
BallCollection* CommandBase::ballCollection = NULL;
DriveTrain* CommandBase::driveTrain = NULL;
Shooter* CommandBase::shooter = NULL;
Turret* CommandBase::turret = NULL;
Vision* CommandBase::vision = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.

#ifdef SIMULATE 
	driveTrain = new DriveTrainSim();
	ballCollection = new BallCollectionSim();
	shooter = new ShooterSim();
	turret = new TurretSim();
#else 
	driveTrain = new DriveTrain();
	ballCollection = new BallCollect();
	shooter = new Shooter();
	turret = new Turret();

#endif

	vision = new Vision();
	
	oi = new OI();
	
	// send the PID's to the SmartDashboard
	SmartDashboard::GetInstance()->PutData("TopAxelPID", shooter->getTopAxelPID());
	SmartDashboard::GetInstance()->PutData("BottomAxelPID", shooter->getBottomAxelPID());
}
