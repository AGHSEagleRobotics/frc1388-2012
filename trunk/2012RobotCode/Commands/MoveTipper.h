#ifndef MOVETIPPER_H
#define MOVETIPPER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ag291863
 */
class MoveTipper: public CommandBase {
public:
	MoveTipper();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
