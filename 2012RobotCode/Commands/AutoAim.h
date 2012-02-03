#ifndef AUTOAIM_H
#define AUTOAIM_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Eagle Robotics
 */
class AutoAim: public CommandBase {
public:
	AutoAim();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
