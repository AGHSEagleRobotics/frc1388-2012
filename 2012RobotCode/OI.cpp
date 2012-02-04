#include "OI.h"
#include "Commands/RotateLeft.h"
#include "Commands/RotateRight.h"


OI::OI()
{
	joystick = new Joystick(DRIVER_STICK_PORT);
	opsStick = new Joystick(SHOOTER_STICK_PORT);
	ioStick = new Joystick(IO_STICK_PORT);
	
	ToTheLeft = new JoystickButton(joystick, 4);
	ToTheRight = new JoystickButton(joystick, 5);
	
	ToTheLeft->WhenPressed(new RotateLeft());
	ToTheRight->WhenPressed(new RotateRight());
}

Joystick *OI::getJoystick()
{
	return joystick;
}


Joystick *OI::getOpsStick()
{
	return opsStick;
}

Joystick *OI::getIOStick()
{
	return ioStick;
}

