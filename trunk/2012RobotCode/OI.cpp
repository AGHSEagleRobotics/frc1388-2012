#include "OI.h"
//#include "Commands/TrimGyro.h"
#include "Commands/MoveTipper.h"
#include "Commands/Fire.h"
#include "Commands/MoveElevator.h"
#include "Commands/AutoAim.h"
#include "Commands/Aim.h"
#include "Commands/AutoRange.h"
#include "Commands/Range.h"
#include "Commands/Collect.h"
#include "Commands/NoBallColletion.h"
#include "Commands/Eject.h"

OI::OI() {
	driveStick = new Joystick(DRIVESTICK_PORT);
	opStick = new Joystick(OPSTICK_PORT);
	buttonStick = new Joystick(BUTTONSTICK_PORT);

//Set button names equal to their button on the joystick

//driveStick buttons	
	fineTrimLeft = new JoystickButton (driveStick, 3);
	fineTrimRight = new JoystickButton (driveStick, 4);
	coarseTrimLeft = new JoystickButton (driveStick, 5);
	coarseTrimRight = new JoystickButton (driveStick, 6);
	zeroGryo = new JoystickButton (driveStick, 7);
	extendTipper1 = new JoystickButton (driveStick, 9);
	extendTipper2 = new JoystickButton (driveStick, 10);
	retractTipper1 = new JoystickButton (driveStick, 11);
	retractTipper2 = new JoystickButton (driveStick, 12);
//opStick buttons
	trigger = new JoystickButton(opStick, 1); // 1 is equal to Joystick::kTriggerButton in this case
	elevUp = new JoystickButton (opStick, 6);
	elevDown = new JoystickButton (opStick, 7);
	prime1 = new JoystickButton (opStick, 2);
	prime2 = new JoystickButton (opStick, 3);
	prime3 = new JoystickButton (opStick, 4);
	prime4 = new JoystickButton (opStick, 5);
//buttonStick buttons
	autoAimOn = new JoystickButton (buttonStick, 1);
	autoAimOff = new JoystickButton (buttonStick, 2);
	autoRangeOn = new JoystickButton (buttonStick, 3);
	autoRangeOff = new JoystickButton (buttonStick, 4);
	ballSweepIn = new JoystickButton (buttonStick, 5);
	ballSweepOff = new JoystickButton (buttonStick, 6);
	ballSweepOut = new JoystickButton (buttonStick, 7);

//Tell the buttons what to do when pressed or held

//driverStick buttons
//	fineTrimLeft->WhenPressed(new TrimGyro(TrimGyro::fineLeft));
//	fineTrimRight->WhenPressed(new TrimGyro(TrimGyro::fineRight));
//	coarseTrimLeft->WhenPressed(new TrimGryo(TrimGyro::coarseLeft));
//	coarseTrimRight->WhenPressed(new TrimGyro(TrimGyro::coarseRight));
//	zeroGryo->WhenPressed(new TrimGyro(TrimGyro::zero));
//	extendTipper1->WhenPressed(new MoveTipper(MoveTipper::extend));
//	extendTipper2->WhenPressed(new MoveTipper(MoveTipper::extend));
//	retractTipper1->WhenPressed(new MoveTipper(MoveTipper::retract));
//	retractTipper2->WhenPressed(new MoveTipper(MoveTipper::retract));
//opStick buttons
	trigger->WhenPressed(new Fire());
//	elevUp->WhenPressed(new MoveElevator(MoveElevator::up));
//	elevDown->WhenPressed(new MoveElevator(MoveElevator::down));
//	prime1->WhenPressed(new MoveElevator(MoveElevator::prime));
//	prime2->WhenPressed(new MoveElevator(MoveElevator::prime);
//	prime3->WhenPressed(new MoveElevator(MoveElevator::prime);
//	prime4->WhenPressed(new MoveElevator(MoveElevator::prime);
//buttonStick buttons	
	autoAimOn->WhenPressed(new AutoAim());
	autoAimOff->WhenPressed(new Aim()); 
	autoRangeOn->WhenPressed(new AutoRange());
	autoRangeOff->WhenPressed(new Range());
	ballSweepIn->WhenPressed(new Collect());
	ballSweepOff->WhenPressed(new NoBallColletion());
	ballSweepOut->WhenHeld(new Eject());

}
Joystick * OI::getDriveStick() {
	return driveStick;
}
Joystick * OI::getOpStick() {
	return opStick;
}
Joystick * OI::getButtonStick() {
	return buttonStick;
}

//#include "OI.h"
//#include "Commands/RotateLeft.h"
//#include "Commands/RotateRight.h"
//
//
//OI::OI()
//{
//	joystick = new Joystick(DRIVER_STICK_PORT);
//	opsStick = new Joystick(SHOOTER_STICK_PORT);
//	ioStick = new Joystick(IO_STICK_PORT);
//	
//	ToTheLeft = new JoystickButton(joystick, 4);
//	ToTheRight = new JoystickButton(joystick, 5);
//	
//	ToTheLeft->WhenPressed(new RotateLeft());
//	ToTheRight->WhenPressed(new RotateRight());
//}

//Joystick *OI::getJoystick()
//{
//	return joystick;
//}
//
//
//Joystick *OI::getOpsStick()
//{
//	return opsStick;
//}
//
//Joystick *OI::getIOStick()
//{
//	return ioStick;
//}

