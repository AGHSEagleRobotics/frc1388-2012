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
	//Create variables for both Victors.
	Victor *ballCollect2;
	
	
public:
	BallCollection();
	void InitDefaultCommand();
	void moveRollers(float speed);
};

#endif
