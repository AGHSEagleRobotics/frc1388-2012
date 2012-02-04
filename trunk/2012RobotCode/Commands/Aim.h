#ifndef AIM_H
#define AIM_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ag291863
 */
class Aim: public CommandBase {
public:
	Aim();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
