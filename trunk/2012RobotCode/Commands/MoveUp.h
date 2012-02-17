#ifndef MOVEUP_H
#define MOVEUP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Davey
 */
class MoveUp: public CommandBase {
public:
	MoveUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
