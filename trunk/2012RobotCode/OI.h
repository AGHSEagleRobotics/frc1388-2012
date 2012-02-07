#ifndef OI_H
#define OI_H
#include "WPILib.h"
class OI {
private:
	static const int DRIVESTICK_PORT = 1;
	static const int OPSTICK_PORT = 2;
	static const int BUTTONSTICK_PORT = 3;

	Joystick *driveStick;	
	Joystick *opStick;
	Joystick *buttonStick;

//Define driveStick buttons 
	JoystickButton *fineTrimLeft; //3
	JoystickButton *fineTrimRight; //4
	JoystickButton *coarseTrimLeft; //5
	JoystickButton *coarseTrimRight; //6
	JoystickButton *zeroGyro; //7
	JoystickButton *extendTipper1; //9
	JoystickButton *extendTipper2; //10
	JoystickButton *retractTipper1; //11
	JoystickButton *retractTipper2; //12
//Define opStick buttons
	JoystickButton *trigger; //1
	JoystickButton *elevUp; //6
	JoystickButton *elevDown; //7
	JoystickButton *prime1; //2
	JoystickButton *prime2; //3
	JoystickButton *prime3; //4
	JoystickButton *prime4; //5
//Define buttonStick buttons
 	JoystickButton *autoAimOn; //1
	JoystickButton *autoAimOff; //2
	JoystickButton *autoRangeOn; //3
	JoystickButton *autoRangeOff; //4
	JoystickButton *ballSweepIn; //5
	JoystickButton *ballSweepOff; //6
	JoystickButton *ballSweepOut; //7
	JoystickButton *autoLevel;//8
// Simulation buttons
	JoystickButton *toTheLeft; //1
	JoystickButton *toTheRight; //2
	
public:
	OI();
	Joystick *getDriveStick();
	Joystick *getOpStick();
	Joystick *getButtonStick();
};
#endif
