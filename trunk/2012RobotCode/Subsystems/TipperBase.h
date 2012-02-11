#ifndef TIPPERBASE_H
#define TIPPERBASE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Jarrett
 */
class TipperBase: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	TipperBase();
	virtual void InitDefaultCommand();
};

#endif