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

void blueShort(){
  Brain.Screen.print("Running blueShort.\n");
  // startLauncher(80);
  // autoConveyor(25);
  setMotors(10);
  allForward(50);
  setMotors(50);
  mechTranslate(750);
  tankTurn(-400);
  mechTranslate(375);
  allForward(-200); 
  setMotors(10);
  allForwardc(-80);
  turnRoller(-720);
  wait(2, sec);
  setMotors(100);
  allForward(2800);
  tankTurn(800);

  //next time adjust the angle when doing the roller by only driving the right side.
}