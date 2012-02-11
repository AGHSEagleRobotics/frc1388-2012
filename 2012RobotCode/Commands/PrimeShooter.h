#ifndef PRIMESHOOTER_H
#define PRIMESHOOTER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Davey
 */
class PrimeShooter: public CommandBase {
public:
	PrimeShooter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
