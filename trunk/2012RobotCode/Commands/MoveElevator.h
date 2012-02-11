#ifndef MOVEELEVATOR_H
#define MOVEELEVATOR_H

#include "../CommandBase.h"
#include "../Subsystems/Elevator.h"

/**
 *
 *
 * @author ag291863
 */
class MoveElevator: public CommandBase {
	
private:
	Elevator::elevatorMode mode;
	
	
public:
	MoveElevator(Elevator::elevatorMode);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
