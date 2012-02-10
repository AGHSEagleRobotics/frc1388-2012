#include "BallCollection.h"
#include "../Robotmap.h"

BallCollection::BallCollection() : BallCollectionBase()
{
	ballCollect2 = new Victor(BALL_COLLECTION_2);
}
    
void BallCollection::InitDefaultCommand()
{

}

void BallCollection::moveRollers(float speed)
{
	// Runs the motors forward in order to collect balls
	ballCollect2->Set(speed);
}

