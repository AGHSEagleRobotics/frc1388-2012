#include "AxelSpeed.h"

AxelSpeed::AxelSpeed()
{
	Requires(shooter);
}

// Called just before this Command runs the first time
void AxelSpeed::Initialize()
{
	// we need to figure out the ratio of ticks / revolution
	//topEncoder.SetDistancePerPulse(a);
	//bottomEncoder.SetDistancePerPulse(z);
	// we need to figure out the PID values
	pidTopAxel.SetPID(0, 0, 0);
	pidBottomAxel.SetPID(0, 0, 0);
	// figure out if the shooter output is positive or negative
	// for the ball to exit the robot
	pidTopAxel.SetOutputRange(0 , 1);
	pidBottomAxel.SetOutputRange(0 , 1);
}

// Called repeatedly when this Command is scheduled to run
void AxelSpeed::Execute()
{
	// add fShooterSpeed by some constant/varible when setting bottomAxel to 
	// create spin
	pidTopAxel.SetSetpoint(fShooterSpeed);
	pidBottomAxel.SetSetpoint(fShooterSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool AxelSpeed::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void AxelSpeed::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AxelSpeed::Interrupted()
{
	
}
