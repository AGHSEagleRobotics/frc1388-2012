#include "DriveTrain.h"

DriveTrain::DriveTrain() : DriveTrainBase()
{
#if defined(COMPETITION)
	
	frontLeft = new CANJaguar(FRONT_LEFT_CAN_ID);
	backLeft = new CANJaguar(BACK_LEFT_CAN_ID);
	frontRight = new CANJaguar(FRONT_RIGHT_CAN_ID);
	backRight = new CANJaguar(BACK_RIGHT_CAN_ID);
	
	drive = new RobotDrive(frontLeft,backLeft,frontRight,backRight);

#elif defined(KITBOT)	
//	 NOTE: This is modified from the original to fit the kitbot
	drive = new RobotDrive(2, 1, 3, 4);
#endif	

	gyro = new GyroWithTrim(DEFAULT_ANALOG_MODULE, DRIVETRAIN_GYRO_CHANNEL);
//	gyro = new Gyro(DEFAULT_ANALOG_MODULE, DRIVETRAIN_GYRO_CHANNEL);
	
	pidOut = new manualPIDOutput();
	
//	prefs = Preferences::GetInstance();
//	float p = prefs->GetFloat("gyro_pid_p",0.005);
//	float i = prefs->GetFloat("gyro_pid_i");
//	float d = prefs->GetFloat("gyro_pid_d");
//	gyroHeadingPID = new SendablePIDController(p,i,d,gyro,pidOut);
	// Review: Verify lastest code
	SmartDashboard::GetInstance()->PutData("gyroHeadingPID", gyroHeadingPID);
	gyroHeadingPID->SetSetpoint(0);
	gyroHeadingPID->SetContinuous(true);
	gyroHeadingPID->SetOutputRange(-1.0, 1.0);
	gyroHeadingPID->Enable();
	
	// Initialize some variables that will be used later
	desiredHeading = gyro->GetAngle();
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
//	printf("rotation:%f last:%f\n",rotation,prevRotation);
	if (rotation==0.0&&prevRotation==0.0)
	{
		drive->MecanumDrive_Cartesian(x,y,headingHold(),angle);
		prevRotation = rotation;
		return;
	}
	// Review: Change timeout handling
	if (rotation!=0.0&&prevRotation==0.0)
	{
		timer.Start();
	}
	else if (timer.Get()<timeout)
	{
		desiredHeading = gyro->GetAngle();
	} else if (timer.Get()>timeout)
	{
		timer.Stop();
		timer.Reset();
	}
	
	drive->MecanumDrive_Cartesian(x,y,rotation,angle);
	prevRotation = rotation;
	
}

float DriveTrain::headingHold()
{
	if (gyroHeadingPID->IsEnabled())
	{
		gyroHeadingPID->SetSetpoint(desiredHeading);
		printf("gyroAngle:%f pidOut:%f gyroTrim:%f\n",gyro->GetAngle(), pidOut->getValue(), gyro->GetTrim());
		
//		prefs->PutFloat("gyro_pid_p",gyroHeadingPID->GetP());
//		prefs->PutFloat("gyro_pid_i",gyroHeadingPID->GetI());
//		prefs->PutFloat("gyro_pid_d",gyroHeadingPID->GetD());
		return pidOut->getValue();
	}
	return 0;
}

void DriveTrain::fineTrimLeft()
{
	gyro->SetTrim(gyro->GetTrim()-2);
}

void DriveTrain::coarseTrimLeft()
{
	gyro->SetTrim(gyro->GetTrim()-10);
}

void DriveTrain::fineTrimRight()
{
	gyro->SetTrim(gyro->GetTrim()+2);
}

void DriveTrain::coarseTrimRight()
{
	gyro->SetTrim(gyro->GetTrim()+10);
}

void DriveTrain::zeroGyro()
{
	gyro->ZeroGyro();
	desiredHeading = gyro->GetAngle();
}

