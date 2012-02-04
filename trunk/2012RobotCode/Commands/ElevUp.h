#ifndef ELEVUP_H
#define ELEVUP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ag291863
 */
class ElevUp: public CommandBase {
public:
	ElevUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
