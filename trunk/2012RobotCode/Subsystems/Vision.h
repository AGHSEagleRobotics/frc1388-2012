#ifndef VISION_H
#define VISION_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author eaglerobotics
 */
class Vision: public Subsystem {
private:
	
	Relay *lightRing;
	
	// Need to tweek this number based off distance
	static const double MIN_PARTICLE_AREA = 100;
	
	static const AxisCamera::Resolution_t CAMERA_RESOLUTION = AxisCamera::kResolution_320x240;
	static const int CAMERA_COMPRESSION = 30;
	static const int CAMERA_BRIGHTNESS = 25;
	static const int CAMERA_FPS = 15;
	static const int CAMERA_COLOR_LEVEL = 75;
	static const AxisCamera::WhiteBalance_t CAMERA_WHITE_BALANCE = AxisCamera::kWhiteBalance_FixedFlourescent1; 
	// Can't find a way to set this. Will use if we find a way.
	// Testing shows that Exposure level is persistant through power cycles.
//	static const int CAMERA_EXPOSURE_LEVEL = 0; 
	
#define COLOR_THRESHOLD 0,0,50,255,0,0
	
	// Varialbe to store the rectangle mathces
	vector<ParticleAnalysisReport> *particles;
	ParticleAnalysisReport targetParticle;
	bool hasTargets;
public:
	Vision();
	void InitDefaultCommand();
	
	/*
	 * Analyze the image and the number of targets found
	 */
	int particleAnalysis();
	
	/**
	 * Set which particle in the vector to use as the target
	 */
	void setTargetParticle(int index);
	
	/**
	 * Gets a normalized x distance from the center of the screen
	 * 
	 * @return A number between -1.0 and 1.0 representing the distance from the center
	 */
	double getNormalizedXPosition();
	
	/**
	 * Gets the x coordinate of particle
	 */
	int getXPosition();
	
	/**
	 * Gets a normalized y distance from the center of the screen
	 * 
	 * @return A number between -1.0 and 1.0 representing the distance from the center
	 */
	double getNormalizedYPosition();
	
	/**
	 * Gets the y coordinate of particle
	 */
	int getYPosition();
	
	/*
	 * Use the pixel count of the rectangle to determine distance in inches
	 */
	float getDistance();
};

#endif