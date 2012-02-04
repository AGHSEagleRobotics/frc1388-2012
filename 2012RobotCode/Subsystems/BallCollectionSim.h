#ifndef BALL_COLLECTIONSIM_H
#define BALL_COLLECTIONSIM_H
#include "Commands/Subsystem.h"
#include "BallCollection.h"
#include "WPILib.h"

/**
 *
 *
 * @author Jarrett
 */
class BallCollectionSim: public BallCollection
{
private:
	
	
public:
	BallCollectionSim();
	void InitDefaultCommand();
	void moveRollers(float speed);
};

#endif
