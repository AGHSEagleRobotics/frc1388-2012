#ifndef RUNTHEFAN_H
#define RUNTHEFAN_H

#include "../CommandBase.h"

	JoystickButton *autoAimOn; //1
	JoystickButton *autoAimOff; //2
	JoystickButton *autoRangeOn; //3
	JoystickButton *autoRangeOff; //4
	JoystickButton *ballSweepIn; //5
	JoystickButton *ballSweepOff; //6
	JoystickButton *ballSweepOut; //7


/**
 *
 *
 * @author Jarrett
 */
class RunTheFan: public CommandBase {
public:
	RunTheFan();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
};

#endif
