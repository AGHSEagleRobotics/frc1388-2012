#include "CommandBase.h"
#include "RobotMap.h"
#include "Subsystems/DriveTrain.h"
//#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
BallCollectionBase* CommandBase::ballCollection = NULL;
DriveTrainBase* CommandBase::driveTrain = NULL;
ShooterBase* CommandBase::shooter = NULL;
TurretBase* CommandBase::turret = NULL;
VisionBase* CommandBase::vision = NULL;
TipperBase* CommandBase::tipper = NULL;
FanBase* CommandBase::fan = NULL;
OI* CommandBase::oi	 = NULL;
ElevatorBase* CommandBase::elevator = NULL;


void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.

#if defined(COMPETITION)
	driveTrain = new DriveTrain();
	ballCollection = new BallCollection();
	shooter = new Shooter();
	turret = new Turret();
	tipper = new Tipper();
	fan = new Fan();
	vision = new Vision();
	elevator = new Elevator();
	
#elif defined(SIMULATE) 
	driveTrain = new DriveTrainSim();
	ballCollection = new BallCollectionSim();
	shooter = new ShooterSim();
	turret = new TurretSim();
	tipper = new TipperSim();
	fan = new FanSim();
	vision = new Vision();
	elevator = new Elevator();
	
#elif defined(KITBOT)
	driveTrain = new DriveTrainKitbot();
	ballCollection = new BallCollectionSim();
	shooter = new ShooterSim();
	turret = new TurretSim();
	tipper = new TipperSim();
	fan = new FanSim();
	vision = new Vision();
	elevator = new Elevator();
	
#else 
	driveTrain = new DriveTrain();
	ballCollection = new BallCollection();
	shooter = new Shooter();
	turret = new Turret();
	tipper = new Tipper();
	fan = new Fan();
	vision = new Vision();
	elevator = new Elevator();
	
#endif
	
	oi = new OI();
	
	// send the PID's to the SmartDashboard
//	SmartDashboard::GetInstance()->PutData("TopAxelPID", shooter->getTopAxelPID());
//	SmartDashboard::GetInstance()->PutData("BottomAxelPID", shooter->getBottomAxelPID());
}
