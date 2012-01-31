#include "OI.h"

OI::OI()
{
	joystick = new Joystick(DRIVER_STICK_PORT);
}

Joystick *OI::getJoystick()
{
	return joystick;
}
