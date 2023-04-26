#ifndef vex.h

#include "vex.h"
#endif

#include "main.h"

using namespace vex;
// A global instance of competition
void BlueLong(){
  Brain.Screen.print("Running blueLong.\n");
  
  // allForwardc(20);
  // mechTranslate(-90);
  // allForwardc(-30);
  // turnRoller(90);
  // startLauncher(80);
  // allForwardc(60);
  // tankTurn(30);
  // mechTranslate(100);
  // autoPusher(2);

  mechTranslate(300);
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
}