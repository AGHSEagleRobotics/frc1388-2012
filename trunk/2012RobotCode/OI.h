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
	JoystickButton *autoLevel; //2
	JoystickButton *fineTrimLeft; //3
	JoystickButton *fineTrimRight; //4
	JoystickButton *coarseTrimLeft; //5
	JoystickButton *coarseTrimRight; //6
	JoystickButton *zeroGyro; //7
	JoystickButton *extendTipper1; //9
	JoystickButton *extendTipper2; //10
	JoystickButton *retractTipper1; //11
	JoystickButton *retractTipper2; //12
	JoystickButton *toTheLeft; //1
	JoystickButton *toTheRight; //2
	
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

	
public:
	OI();
	Joystick *getDriveStick();
	Joystick *getOpStick();
	Joystick *getButtonStick();
	float getOpStickXAxis();
	float getSliderPower();
};
#endif


//#ifndef OI_H
//#define OI_H
//
//#include "WPILib.h"
//
//class OI {
//private:
//	static const int DRIVER_STICK_PORT = 1;
//	// SHOOTER = operator
//	static const int SHOOTER_STICK_PORT = 2;
//	
//	static const int IO_STICK_PORT = 3;
//
//	
//	Joystick *joystick;
//	Joystick *opsStick;
//	Joystick *ioStick;
//	JoystickButton *ToTheLeft;
//	JoystickButton *ToTheRight;
//
//public:
//	
//	/*
//	 * This is were the Ops stick constants are.
//	 * If you want to access a button on the control board, you would first
//	 * call <code>getOpsStick()</code>. Then you would call <code>GetRawButton</code>
//	 * from the ops stick joystick you got in the last function
//	 * Example: You want the tipper switch
//	 * <code>
//	 * Joystick *opsStick = getOpsStick();
//	 * bool tipperSwitch = opsStick->GetRawButton(TIPPER_SWITCH_BUTTON);
//	 * </code>
//	 */
//	static const int TIPPER_SWITCH_BUTTON = 1;
//	
//	static const int NUM_JOYSTICK_BUTTONS = 12;
//	
//	OI();
//	Joystick *getJoystick();
//	Joystick *getOpsStick();
//	Joystick *getIOStick();
//};
//
//#endif
