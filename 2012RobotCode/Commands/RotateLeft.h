#ifndef ROTATELEFT_H
#define ROTATELEFT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Jarrett	
 */
class RotateLeft: public CommandBase {
public:
	RotateLeft();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
