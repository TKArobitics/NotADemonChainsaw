#ifndef vex.h

#include "vex.h"
#endif

#include "main.h"

using namespace vex;

// A global instance of competition


  // controller1.Screen.print("Running blueShort.\n");
  // startLauncher(80);
  // autoConveyor(25);
  // tankTurn(90);
  // mechTranslate(-90);
  // setMotors(10);
  // allForwardc(80);
  // turnRoller(90);
  // this is b bot's

// This function tests if the inchesToDist() function works properly.
void testingConversionInches(){
  allForward(inchesToDist(45));
}

// This function tests if degreesToDist() function works properly.
void 
testingConversionDegrees(){
  tankTurn(degreesToDist(360));
}

void blueShort(){ // please comment on what each line does
  // replaceOnControllerScreen("Running BlueShort");
  // startLauncher(80);
  // autoConveyor(25);
  setMotors(10); // sets motor speed to 10%
  allForward(50); // rotates all motors 50 degrees
  setMotors(50); // sets motor speed to 50%
  mechTranslate(750); // translationally drives the robot to the right by 750(units)
  tankTurn(-400); // turns the wheels -400 degrees
  mechTranslate(375); // translationally drives the robot to the right by 375(units)
  allForward(-250); // rotates all motors -250 degress
  rightSideOnly(-350);  // 
  setMotors(5);
  allForwardc(-80);
  turnRoller(-600);
  wait(2, sec);
  setMotors(100);
  rightSideOnly(400);
  allForward(2800);
  tankTurn(800);
  tankTurn(-300);
  setMotors(75);
  allForward(-1970);
  rightSideOnly(-900);

  //next time adjust the angle when doing the roller by only driving the right side.
}

// ????
void autonomousSkills(){ 
  setMotors(10); // sets the motor speed to 10%
  allForwardc(-100); // rotates all motors -100 degrees
  turnRollerTrue(600); // will pause all other programs while turning the roller
  setMotors(50); // sets the motor speed to 50%
  allForward(300); // rotates all motors 300 degrees
  tankTurn(-300); // rotates the motors -300 degrees left
  allForward(-300); // rotates all motors -300 degrees
  setMotors(10); // sets the motor speed to 10%
  allForwardc(100000); // rotates all motors 100000 degrees
  turnRollerTrue(600); // will pause all other programs while turning the roller
  setMotors(50); // sets the motor speed to 50%
  allForward(-100); // rotates all motors -100 degrees
  tankTurn(300); // rotates the motors 300 degrees right
  allForward(600); // rotates all motors 600 degrees
  mechTranslate(600); // will translationally drive to the 
}

// This program should fire all of the pre-load and match-load disks for the skills competition and proceed to expand from the corner.
void skillsDisksFirst(){ 
  controller1.Screen.clearScreen();
  controller1.Screen.print("Running skillsDisksFirst()");
  spinUp(); // starts the flywheel
  wait(7, sec); // waits for the flywheel to reach max speed before proceeding
  autoConveyor(); // starts the conveyor
  wait(30, sec); // waits until all match loads are done shooting
  conveyorStop(); // stops the conveyor
  flyWheelStop(); // stops the flywheel
  mechTranslate(-200);
  allForward(-100);
  tankTurn(-300); // turns the motors 300 degrees to the right
  controller1.Screen.clearScreen();
  controller1.Screen.print("expanding");
  expandSkill(); // triggers the expansion motor (DOES NOT TURN OFF)
  wait(5, sec); // waits for expansion motor to pull pin
  expandStop(); // stops the expansion motor
} 

// tankTurn(dist "999") approx.= 90 deg turn<uncertain>
// This program should turn one roller on the long side (???) and fire two pre-loads at the high goal [HEAD TO HEAD CODE!] 
void guaranteedLongRoller(){
  controller1.Screen.clearScreen();
  controller1.Screen.print("Running guaranteedLongRoller");
  // setMotors(20);
  allForward(inchesToDist(6));
  mechTranslate(inchesToDist(25));
  allForward(inchesToDist(-5));
  turnRoller(600);  // check specific values later
  wait(250, msec);
  allForward(inchesToDist(3));
  tankTurn(200);
  mechTranslate(inchesToDist(-75));
  spinUp();
  wait(5, sec);
  autoConveyor();
  controller1.Screen.print("Finished guaranteedLongRoller");
}

// ????
void guaranteedShortRoller(){
  controller1.Screen.clearScreen();
  controller1.Screen.print("Running guaranteedShortRoller");
  allForward(inchesToDist(-4));
  turnRollerTrue(-200);
  allForward(inchesToDist(3));
  controller1.Screen.print("Finished guaranteedShortRoller");  
}

// ????
void guaranteedShooter(){
  controller1.Screen.clearScreen();  
  controller1.Screen.print("Running guaranteedShooter");
  spinUp();
  wait(3,sec);
  autoConveyor();
  wait(30, sec);
  conveyorStop();
  flyWheelStop();
  controller1.Screen.print("Finished guaranteedShooter");
}

// ????
void skillsRollersFirst(){ 
  controller1.Screen.clearScreen();  
  //this section moves to the right turns the near roller
  controller1.Screen.print("Moving towards near roller");
  setMotors(50);
  allForward(250);
  mechTranslate(900);
  allForward(-250);
  turnRoller(1800);
  allForward(100);
  //drive towards and turns next roller
  controller1.Screen.clearScreen();
  controller1.Screen.print("Moving towards other near roller");
  tankTurn(-300); // need to fine tune degrees
  mechTranslate(1500);
  tankTurn(300);
  mechTranslate(50);
  allForwardc(100);
  turnRoller(180);
  allForward(-100);
  //moves towards match-loader (MUST FINE TUNE)
  allForward(-1000);
  tankTurn(180);
  mechTranslate(-800);
  //shoots disks from side-loader
  spinUp();
  wait(5, sec);
  autoConveyor();
  wait(15, sec);
  conveyorStop();
  flyWheelStop();
  //moves towards far side match-loader
  mechTranslate(200);
  tankTurn(90);
  allForward(5508); // drives roughly across field (not accounting for disks in the way)
  tankTurn(90);
  mechTranslate(-200);
  //shoots disks from side loader
  spinUp();
  wait(5, sec);
  autoConveyor();
  wait(15, sec);
  conveyorStop();
  flyWheelStop();
  //moves towards roller
  mechTranslate(200);
  allForward(-1000);
  tankTurn(-135);
  allForward(100);
  //turns both other rollers
  allForwardc(100);
  turnRoller(180);
  allForward(-100);
  mechTranslate(-400);
  allForwardc(100);
  turnRoller(180);
  allForward(-100);
  // expansion
  tankTurn(180);
  mechTranslate(-50);
  expandSkill();
  wait(5, sec);
  expandStop();
}

// This program will spin a roller, move into position, and expand. [WIP]
void skillsRoller(){
  allForward(inchesToDist(-1));
  turnRoller(-200);
  allForward(inchesToDist(18));
  moveToPosSkills(1);
  // expandSkill();
}

// This program will shoot for the high goal, move into position, and expand. [WIP]
void skillsHighGoal(){
  spinUp();
  wait(5, sec);
  autoConveyor();
  wait(24, sec);
  flyWheelStop();
  conveyorStop();
  moveToPosSkills(2);
  expandSkill();
}

// This program will move into position.(1 is from roller position, 2 is from highGoal position) [WIP]
void moveToPosSkills(int whichSkills){
  if (whichSkills == 1)
  {
    tankTurn(degreesToDist(45));
    mechTranslate(inchesToDist(-15));
  }
  else if (whichSkills == 2)
  {
    mechTranslate(inchesToDist(15));
    allForward(inchesToDist(30));
    tankTurn(degreesToDist(-45));
  }
}