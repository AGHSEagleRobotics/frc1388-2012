#include "Vision.h"
#include "../Robotmap.h"

Vision::Vision() : Subsystem("Vision") {
	printDebug("Initializing Camera Settings.");
	
	// Get an instance of the camera
	AxisCamera &camera = AxisCamera::GetInstance(CAMERA_IP);
	
	// Write some configuration to the camera
	camera.WriteResolution(CAMERA_RESOLUTION);
	camera.WriteCompression(CAMERA_COMPRESSION);
	camera.WriteBrightness(CAMERA_BRIGHTNESS);
	camera.WriteMaxFPS(CAMERA_FPS);
	camera.WriteColorLevel(CAMERA_COLOR_LEVEL);
	
	
	printDebug("Done Configuring Camera.");
	
	particles = NULL;
	
	lightRing = new Relay(DEFAULT_DIGITAL_MODULE, LIGHT_RING_PORT, Relay::kForwardOnly);
}
    
void Vision::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

vector<ParticleAnalysisReport> *Vision::particleAnalysis()
{
	// Get an instance of the Axis Camera
	AxisCamera &camera = AxisCamera::GetInstance(CAMERA_IP);
	
	// check if there is a new image
	if (camera.IsFreshImage())
	{
		// Get the Image
		ColorImage *colorImage = camera.GetImage();
//		printf("colorImage is %s\n", colorImage ? "not null" : "null");
		BinaryImage *binImage = colorImage->ThresholdRGB(COLOR_THRESHOLD);
//		printf("binImage is %s\n", binImage ? "not null" : "null");
		
		if(!colorImage || !binImage)
			return NULL;
		
<<<<<<< .mine
		printDebug("Getting Particle Analysis Report.");
		if (particles)
		{
			delete particles;
		}
		particles = binImage->GetOrderedParticleAnalysisReports();
		if(!particles)
		{
			printDebug("NULL PARTICLES");
			return NULL;
		}
		if(!particles->empty())
		{
			printDebug("Stepping through particle report to remove particles with area too small.");
			// Step through the particles and elimate any that are too small
			for (int i = 0; i<(int)particles->size(); i++) 
			{
				if(particles->at(i).particleArea<MIN_PARTICLE_AREA)
				{
					// Erase the current particle from view
					particles->erase(particles->begin()+i);
					
					// Because erasing an element actually adjusts all elements
					// after the current one, we need to bump <tt>i</tt> down one
					i--;
				}
			}
		}else 
		{
			targetParticle.center_mass_x_normalized = 0;
		}
=======
		int numCurrentMatches;
		RectangleMatch *temp;
		temp = imaqDetectRectangles(imaqImage,
									 rectangleDescriptor,
									 NULL,	// Default curve options as per manual
									 NULL,	// Default shape detection options
									 NULL,	// (ROI) Whole image should be searched
									 &numCurrentMatches);
>>>>>>> .r14
		
		if (colorImage)
		{
			printDebug("Deleting coloImages.");
			delete colorImage;
		}
		if (binImage)
		{
			printDebug("Deleting binImages.");
			delete binImage;
		}
		
		printDebug("Done Deleting Images.");
	}
	
	printDebug("Done processing image.");
	
	if (particles && particles->size())
		targetParticle = particles->at(0);
	
	return particles;
}

void Vision::setTargetParticle(int index)
{
	targetParticle = particles->at(index);
}

double Vision::getNormalizedXPosition()
{
	return targetParticle.center_mass_x_normalized;
}

double Vision::getNormalizedYPosition()
{
	return targetParticle.center_mass_x_normalized;
}
