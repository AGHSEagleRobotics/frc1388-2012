#include "Fan.h"
#include "../Robotmap.h"

Fan::Fan() : FanBase()
{
	
}
    
void Fan::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

int Fan::RunFan()
{
	fan->Set(1);
	return 1;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.