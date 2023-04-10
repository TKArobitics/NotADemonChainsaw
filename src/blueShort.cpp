#ifndef vex.h

#include "vex.h"
#endif

#include "main.h"

using namespace vex;

// A global instance of competition

void blueShort(){
  Brain.Screen.print("Running blueShort.\n");
  startLauncher(80);
  autoConveyor(25);
  tankTurn(90);
  mechTranslate(-90);
  setMotors(10);
  allForwardc(80);
  turnRoller(90);
}