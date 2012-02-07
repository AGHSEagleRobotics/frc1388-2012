#ifndef UTIL_H
#define UTIL_H

#include "PIDOutput.h"

/**
 * Returns 0 if abs(input) < range
 * Otherwise, will return a scaled verion of input so that it returns a value -max through max
 * The final value will then be multiplied by scale
 * 
 * NOTE: scale and max are defaulted to 1
 */
float deadband(float input, float range, float scale=1.0, float max=1.0);


class manualPIDOutput : PIDOutput
{
private:
	float value;
	
public:
	void PIDWrite(float output);
	float getValue();
};

#endif
