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
  setMotors(10);
  allForward(50);
  setMotors(50);
  mechTranslate(750);
  tankTurn(-400);
  mechTranslate(375);
  allForward(-250);
  rightSideOnly(-350); 
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
  wait(5, sec);
  expandMotor.stop();
} 