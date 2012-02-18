#ifndef ROTATERIGHT_H
#define ROTATERIGHT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Jarrett
 */
class RotateRight: public CommandBase {
public:
	RotateRight();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
