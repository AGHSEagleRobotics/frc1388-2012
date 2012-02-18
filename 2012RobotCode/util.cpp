#include "util.h"
#include "math.h"

float deadband(float input, float deadbandRange, float scale, float max)
{
	// Step 1: check to see if in the dead range
	if (fabs(input)<deadbandRange)
		return 0;
	
	// Step 2: scale the input so that it is an even climb to max.
	float returnVal = input;
	returnVal -= deadbandRange*(fabs(input)/input);
	returnVal *= 1/(max-deadbandRange);
	
	// Step 3: scale the output by whatever factor the user asked for
	returnVal *= scale;
	
	// Step 4: return our deadbanded number
	return returnVal;
}

void manualPIDOutput::PIDWrite(float output)
{
	value = output;
}

float manualPIDOutput::getValue()
{
	return value;
}
