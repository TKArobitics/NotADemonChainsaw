#ifndef vex.h

#include "vex.h"
#endif

#include "main.h"

using namespace vex;

// A global instance of competition


  // Brain.Screen.print("Running blueShort.\n");
  // startLauncher(80);
  // autoConveyor(25);
  // tankTurn(90);
  // mechTranslate(-90);
  // setMotors(10);
  // allForwardc(80);
  // turnRoller(90);
  // this is b bot's

void blueShort(){ // please comment on what each line does
  Brain.Screen.print("Running blueShort.\n");
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

void autonomousSkills(){ // please comment on what each line does
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

void skillsDisksFirst(){ // please comment on what each line does
  spinUp(); // starts the flywheel
  wait(7, sec); // waits for the flywheel to reach max speed before proceeding
  autoConveyor(); // starts the conveyor
  wait(30, sec); // waits until all match loads are done shooting
  conveyorStop(); // stops the conveyor
  flyWheelStop(); // stops the flywheel
  tankTurn(300); // turns the motors 300 degrees to the right
  expandSkill(); // triggers the expansion motor (DOES NOT TURN OFF)
  wait(5, sec); // waits for expansion motor to pull pin
  expandStop(); // stops the expansion motor
} 

void guaranteedLongRoller(){
  Brain.Screen.print("Running guaranteedLongRoller");
  setMotors(20);
  allForward(200);
  mechTranslate(800);
  allForwardc(-250);
  turnRoller(600);  // check specific values later
  allForward(200);
  tankTurn(-200);
  Brain.Screen.print("Finished guaranteedLongRoller");
}

void guaranteedShortRoller(){
  allForwardc(-100);
  turnRoller(600);
  allForward(100);
}

void guaranteedShooter(){
  Brain.Screen.print("Running guaranteedShooter");
  spinUp();
  wait(3,sec);
  autoConveyor();
  wait(30, sec);
  conveyorStop();
  flyWheelStop();
  Brain.Screen.print("Finished guaranteedShooter");
}

// 1000 dist = 24.5 inches
// 360 dist = 9.25 inches
// 100 dist = 2.45 inches
// 40.8 dist = 1 inch
void skillsRollersFirst(){ 
  //this section moves to the right turns the near roller
  Brain.Screen.clearScreen("Moving towards near roller");
  setMotors(50);
  allForward(250);
  mechTranslate(900);
  allForward(-250);
  turnRoller(1800);
  allForward(100);
  //drive towards and turns next roller
  Brain.Screen.clearScreen("Moving towards other near roller");
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