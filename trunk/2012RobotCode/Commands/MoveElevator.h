#ifndef MOVEELEVATOR_H
#define MOVEELEVATOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ag291863
 */
class MoveElevator: public CommandBase {
public:
	MoveElevator();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	virtual void PrimeBall();
	virtual void MoveElvUp();
	virtual void MoveElvDown();
};

#endif
