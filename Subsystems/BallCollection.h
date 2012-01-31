#ifndef BALL_COLLECTION_H
#define BALL_COLLECTION_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class BallCollection: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	BallCollection();
	void InitDefaultCommand();
};

#endif
