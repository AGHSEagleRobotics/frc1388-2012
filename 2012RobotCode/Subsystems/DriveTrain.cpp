#include "DriveTrain.h"

DriveTrain::DriveTrain() : DriveTrainBase()
{
	frontLeft = new CANJaguar(FRONT_LEFT_CAN_ID);
	backLeft = new CANJaguar(BACK_LEFT_CAN_ID);
	frontRight = new CANJaguar(FRONT_RIGHT_CAN_ID);
	backRight = new CANJaguar(BACK_RIGHT_CAN_ID);
	
//	drive = new RobotDrive(frontLeft,backLeft,frontRight,backRight);
	
//	 NOTE: This is modified from the original to fit the kitbot
	drive = new RobotDrive(2, 1, 3, 4);
	
	gyro = new GyroWithTrim(DEFAULT_ANALOG_MODULE, DRIVETRAIN_GYRO_CHANNEL);
//	gyro = new Gyro(DEFAULT_ANALOG_MODULE, DRIVETRAIN_GYRO_CHANNEL);
	
	pidOut = new manualPIDOutput();
	
	prefs = Preferences::GetInstance();
//	prefs->Save();
//	double p = prefs->GetDouble("gyro_pid_p");
//	double i = prefs->GetDouble("gyro_pid_i");
//	double d = prefs->GetDouble("gyro_pid_d");
	gyroHeadingPID = new SendablePIDController(1,0,0,gyro,pidOut);
	SmartDashboard::GetInstance()->PutData("gyroHeadingPID", gyroHeadingPID);
	gyroHeadingPID->SetSetpoint(0);
	gyroHeadingPID->SetContinuous(true);
	gyroHeadingPID->SetOutputRange(-1.0, 1.0);
	gyroHeadingPID->Enable();
	
	// Initialize some variables that will be used later
	desiredHeading = 0;
}
    
void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void DriveTrain::mecanumDrive_Polar(float direction, float power)
{
	drive->MecanumDrive_Polar(power, direction, 0);
}

void DriveTrain::mecanumDrive_Cartesian(float x, float y, float rotation)
{
	// Get the angle from the Gyro
	float angle = gyro->GetAngle();
	printf("rotation:%f last:%f\n",rotation,prevRotation);
	if (rotation==0.0&&prevRotation==0.0)
	{
		drive->MecanumDrive_Cartesian(x,y,headingHold(),angle);
		prevRotation = rotation;
		return;
	}
	
	desiredHeading = gyro->GetAngle();
	drive->MecanumDrive_Cartesian(x,y,rotation,angle);
	
	prevRotation = rotation;
}

float DriveTrain::headingHold()
{
	if (gyroHeadingPID->IsEnabled())
	{
		gyroHeadingPID->SetSetpoint(desiredHeading);
		printf("gyroAngle:%f pidOut:%f gyroTrim:%f\n",gyro->GetAngle(), pidOut->getValue(), gyro->GetTrim());
		return pidOut->getValue();
	}
	return 0;
}

void DriveTrain::fineTrimLeft()
{
//	gyro->SetTrim(gyro->GetTrim()-2);
}

void DriveTrain::coarseTrimLeft()
{
//	gyro->SetTrim(gyro->GetTrim()-10);
}

void DriveTrain::fineTrimRight()
{
//	gyro->SetTrim(gyro->GetTrim()+2);
}

void DriveTrain::coarseTrimRight()
{
//	gyro->SetTrim(gyro->GetTrim()+10);
}

void DriveTrain::zeroGyro()
{
//	gyro->ZeroGyro();
}
