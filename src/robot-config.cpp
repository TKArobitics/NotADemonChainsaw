#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain Brain;

// VEXcode device constructors
controller controller1; 

//these are the wheel motors (mechanum drive)
motor backRightDrive(PORT20); 
motor frontRightDrive(PORT18); 
motor frontLeftDrive(PORT1); 
motor backLeftDrive(PORT9); 

motor testMotor(PORT2);

motor rollerMotor(PORT10); //roller motor?

motor conveyorMotor(PORT13); //conveyor motor (also intake)
motor flyWheel(PORT7);

motor pusherMotor(PORT12);

motor launcherR(PORT16); //launcher right motor
motor launcherL(PORT15); //launcher left motor

motor expandMotor(PORT14); //expansion

gps GPSSensor = gps(PORT7, 0.00, -101.60, mm, 180);
signature colorSensor__REDSIDE = signature (1, 6781, 8753, 7768, -837, -219, -528, 2.100, 0);
signature colorSensor__BLUESIDE = signature (2, -2849, -2239, -2544, 10593, 12529, 11562, 2.500, 0);
vision colorSensor = vision (PORT11, 50, colorSensor__REDSIDE, colorSensor__BLUESIDE);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}