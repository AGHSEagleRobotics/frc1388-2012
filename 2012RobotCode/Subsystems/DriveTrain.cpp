#include "DriveTrain.h"
#include "../Robotmap.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain")
{
	frontLeft = new CANJaguar(FRONT_LEFT_CAN_ID);
	backLeft = new CANJaguar(BACK_LEFT_CAN_ID);
	frontRight = new CANJaguar(FRONT_RIGHT_CAN_ID);
	backRight = new CANJaguar(BACK_RIGHT_CAN_ID);
	
	drive = new RobotDrive(frontLeft, backLeft, frontRight, backRight);
	
	gyro = new Gyro(DEFAULT_ANALOG_MODULE, DRIVETRAIN_GYRO_CHANNEL);
	
	prevOpButtons = new bool[12];
	gyroTrim = 0;
}
    
void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void DriveTrain::mecanumDrive_Polar(float direction, float power)
{
//	drive->MecanumDrive_Polar(power, direction, 0);
}

void DriveTrain::mecanumDrive_Cartesian(float x, float y, float rotation)
{
	// Get the angle from the Gyro
	float angle = getGyroAngle();
	
	drive->MecanumDrive_Cartesian(x, y, rotation, angle);
}

void DriveTrain::driveWithJoystick(Joystick *joystick)
{
	// Get the Axes from the joystick
	float xPower = joystick->GetAxis(Joystick::kXAxis);
	float yPower = joystick->GetAxis(Joystick::kYAxis);
	float twistPower = joystick->GetAxis(Joystick::kTwistAxis); 
	
	// edge detection on all 4 buttons
	bool fineLeft = joystick->GetRawButton(FINE_LEFT_BUTTON)&&!prevOpButtons[FINE_LEFT_BUTTON-1];
	bool fineRight = joystick->GetRawButton(FINE_RIGHT_BUTTON)&&!prevOpButtons[FINE_RIGHT_BUTTON-1];
	bool coarseLeft = joystick->GetRawButton(COARSE_LEFT_BUTTON)&&!prevOpButtons[COARSE_LEFT_BUTTON-1];
	bool coarseRight = joystick->GetRawButton(COARSE_RIGHT_BUTTON)&&!prevOpButtons[COARSE_RIGHT_BUTTON-1];
	
	// Adjust the gyroTrim variable
	gyroTrim += fineLeft*-2 + fineRight*-2 + coarseLeft*-10 + coarseRight*-10;
	
	// Get the angle from the Gyro
	float angle = getGyroAngle()+gyroTrim;
	
	drive->MecanumDrive_Cartesian(xPower, yPower, twistPower, angle);
	
	// Store the current button states as the previous
	// "for" thingy
	for (int i = 0; i < 12; i++)
	{
		prevOpButtons[i] = joystick->GetRawButton(i-1);
	}
}

float DriveTrain::getGyroAngle()
{
	// At the moment we will just straight get the angle
	// However, we may add compensation for drift later
	return gyro->GetAngle();
}