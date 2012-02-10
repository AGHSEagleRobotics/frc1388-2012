#include "Tipper.h"
#include "../Robotmap.h"

Tipper::Tipper() : TipperBase() 
{
	tipperMtr = new Victor(DEFAULT_ANALOG_MODULE, BRIDGE_CONTROL_MOTOR);
}
    
void Tipper::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());

}

void Tipper::MoveTipper(tipperMode mode)
{
	switch (mode)
	{
	case extend:
		tipperMtr->Set(0.5);
		break;
	case retract:
		tipperMtr->Set(-0.5);
		break;
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
