#include "BallCollection.h"
#include "../Robotmap.h"

BallCollection::BallCollection() : Subsystem("BallCollection")
{
	ballCollect2 = new Victor(BALL_COLLECTION_2);
	
}
    
void BallCollection::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	
}

void BallCollection::moveRollers(float speed) {
	// Runs the motos forward in order to collect balls
	ballCollect2->Set(speed);
}



// Put methods for controlling this subsystem
// here. Call these from Commands.

