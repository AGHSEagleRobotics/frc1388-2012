#ifndef TURRETLIMITSWITCHES_H
#define TURRETLIMITSWITCHES_H

#include "../CommandBase.h"

/**
 *
 *
 * @author AG132127
 */
class TurretLimitSwitches: public CommandBase {
public:
	TurretLimitSwitches();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
