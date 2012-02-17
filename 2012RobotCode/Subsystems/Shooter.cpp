#include "Shooter.h"
#include "../Robotmap.h"
#include "../OI.h"

Shooter::Shooter() : ShooterBase()
{
	topAxel = new Victor(TOP_AXEL_VICTOR);
	bottomAxel = new Victor(BOTTOM_AXEL_VICTOR);
	topAxelEncoder = new Encoder(TOP_AXEL_ENCODER_A,TOP_AXEL_ENCODER_B, false, Encoder::k4X);
	bottomAxelEncoder = new Encoder(BOTTOM_AXEL_ENCODER_A,BOTTOM_AXEL_ENCODER_B, false, Encoder::k4X);
	pidTopAxel = new SendablePIDController(0.0, 0.0, 0.0, topAxelEncoder, topAxel);
	pidBottomAxel = new SendablePIDController(0.0, 0.0, 0.0, bottomAxelEncoder, bottomAxel);
//	conveyorBelt = new Victor(CONVEYOR_BELT_VICTOR);
//	passed = new DigitalInput(BALL_PASSED);
}
    
void Shooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Shooter::SetRange(float distance)
{	
	float speed, m = 0.6981, b = 16.5255;
	// fps_to_rpm is a ratio of 1 rpm / 0.034907 fps
	float fps_to_rpm = 0.034907, max_rpm = 2500.0;
	
	// use the distance (feet) to calculate the rpm of the top and bottom axel to
	// achieve the proper velocity to make a basket
	speed = ((m * distance) + b) / fps_to_rpm;
	SetTopAxel (speed/max_rpm);
	SetBottomAxel (speed/max_rpm);
}

void Shooter::TopAxelPID()
{
	// Review: we need to figure out the PID values
	pidTopAxel->SetPID(0, 0, 0);

	pidTopAxel->SetOutputRange(0 , 1);
	
//	DistancePerPulse is in inches
	topAxelEncoder->SetDistancePerPulse(0.06981);
}

void Shooter::BottomAxelPID()
{
	// Review: we need to figure out the PID values
	pidBottomAxel->SetPID(0, 0, 0);
	
	pidBottomAxel->SetOutputRange(0 , 1);
	
	//	DistancePerPulse is inches
	bottomAxelEncoder->SetDistancePerPulse(0.06981);	
}

void Shooter::SetTopAxel(float fShooterSpeed)
{
	pidTopAxel->SetSetpoint(fShooterSpeed);
}

void Shooter::SetBottomAxel(float fShooterSpeed)
{
	pidBottomAxel->SetSetpoint(fShooterSpeed);
}

//void Shooter::MoveConveyor()
//{
//	conveyorBelt->Set(0.5);
//}
