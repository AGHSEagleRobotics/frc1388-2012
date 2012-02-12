#include "VisionSim.h"
#include "../Robotmap.h"

VisionSim::VisionSim() : VisionBase() {
	printDebug("Initializing Camera Settings.");
	
	// Get an instance of the camera
	AxisCamera &camera = AxisCamera::GetInstance(CAMERA_IP);
	
	// Write some configuration to the camera
	camera.WriteResolution(CAMERA_LOW_RESOLUTION);
	camera.WriteCompression(CAMERA_COMPRESSION);
	camera.WriteBrightness(CAMERA_BRIGHTNESS);
	camera.WriteMaxFPS(CAMERA_FPS);
	camera.WriteColorLevel(CAMERA_COLOR_LEVEL);
	
	
	printDebug("Done Configuring Camera.");
	
	particles = NULL;
	
	lightRing = new Relay(DEFAULT_DIGITAL_MODULE, LIGHT_RING_PORT, Relay::kForwardOnly);
	lightRing->Set(Relay::kOff);
	
	hasTargets = false;
}
    
void VisionSim::InitDefaultCommand() {
	
}

int VisionSim::particleAnalysis()
{
	return 0;
}	
void VisionSim::setTargetParticle(int index)
{
	
}

double VisionSim::getNormalizedXPosition()
{
	return 0;
}

int VisionSim::getXPosition()
{
	return 0;
}

double VisionSim::getNormalizedYPosition()
{
	return 0;
}

int VisionSim::getYPosition()
{
	return 0;
}

float VisionSim::getDistance()
{
	return 0;
}

void VisionSim::setHighRes()
{
	
}

void VisionSim::setLowRes()
{
	
}

int VisionSim::getNumberOfTargets()
{
	return 0;
}
