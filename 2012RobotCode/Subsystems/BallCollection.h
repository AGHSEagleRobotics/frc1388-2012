#ifndef BALL_COLLECTION_H
#define BALL_COLLECTION_H
#include "BallCollectionBase.h"
#include "WPILib.h"

/**
 *
 *
 * @author David
 */
class BallCollection: public BallCollectionBase {
private:

public:
	BallCollection();
	virtual void InitDefaultCommand();
	virtual void moveRollers(float speed);
};

#endif
