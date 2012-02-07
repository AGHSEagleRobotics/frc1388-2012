#ifndef TRIMGYRO_H
#define TRIMGYRO_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ag291863
 */
class TrimGyro: public CommandBase {
public:
	TrimGyro();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
