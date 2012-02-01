#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	static const int DRIVER_STICK_PORT = 1;
	
	Joystick *joystick;

public:
	OI();
	Joystick *getJoystick();
};

#endif
