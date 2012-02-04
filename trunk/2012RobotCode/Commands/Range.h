#ifndef RANGE_H
#define RANGE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ag291863
 */
class Range: public CommandBase {
public:
	Range();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
