#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	static const int DRIVER_STICK_PORT = 1;
	// SHOOTER = operator
	static const int SHOOTER_STICK_PORT = 2;
	
	static const int IO_STICK_PORT = 3;

	
	Joystick *joystick;
	Joystick *opsStick;
	Joystick *ioStick;
	JoystickButton *ToTheLeft;
	JoystickButton *ToTheRight;

public:
	
	/*
	 * This is were the Ops stick constants are.
	 * If you want to access a button on the control board, you would first
	 * call <code>getOpsStick()</code>. Then you would call <code>GetRawButton</code>
	 * from the ops stick joystick you got in the last function
	 * Example: You want the tipper switch
	 * <code>
	 * Joystick *opsStick = getOpsStick();
	 * bool tipperSwitch = opsStick->GetRawButton(TIPPER_SWITCH_BUTTON);
	 * </code>
	 */
	static const int TIPPER_SWITCH_BUTTON = 1;
	
	static const int NUM_JOYSTICK_BUTTONS = 12;
	
	OI();
	Joystick *getJoystick();
	Joystick *getOpsStick();
	Joystick *getIOStick();
};

#endif
