#include "OI.h"

OI::OI()
{
	joystick = new Joystick(DRIVER_STICK_PORT);
	opsStick = new Joystick(SHOOTER_STICK_PORT);
	ioStick = new Joystick(IO_STICK_PORT);
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

