#ifndef MOVEDOWN_H
#define MOVEDOWN_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Davey
 */
class MoveDown: public CommandBase {
public:
	MoveDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
