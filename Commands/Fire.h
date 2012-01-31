#ifndef FIRE_H
#define FIRE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Jarrett
 */
class Fire: public CommandBase {
private:
	Joystick *opsStick;
	
public:
	Fire();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
