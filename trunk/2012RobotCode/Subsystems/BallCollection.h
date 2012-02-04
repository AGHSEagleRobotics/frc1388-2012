#ifndef BALL_COLLECTION_H
#define BALL_COLLECTION_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author David
 */
class BallCollection: public Subsystem {
private:

public:
	BallCollection();
	virtual void InitDefaultCommand();
	virtual void moveRollers(float speed);
};

#endif
