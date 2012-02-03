#include "AutoAim.h"

AutoAim::AutoAim() {
	Requires(vision);
	Requires(turret);
}

// Called just before this Command runs the first time
void AutoAim::Initialize() {
	// I at the moment, there isn't anything to initialize
}

// Called repeatedly when this Command is scheduled to run
void AutoAim::Execute() {
	// Analyze the image and store the number of particles
	int numParticles = vision->particleAnalysis();
	
	if (numParticles==-1)
	{
		printf("An Error has occured while getting the image.\n");
		return;
	} 
	else if (numParticles==0)
	{
		return;
	}
	
	// Step through the particles and find the highest one
	int temp_maxHeight = 0;
	int temp_highestParticle = 0;
	for (int i = 0; i<numParticles; i++)
	{
		
	}
}

// Make this return true when this Command no longer needs to run execute()
bool AutoAim::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutoAim::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoAim::Interrupted() {
}
