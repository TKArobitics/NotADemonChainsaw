#ifndef vex.h

#include "vex.h"
#endif

#include "main.h"

using namespace vex;

// A global instance of competition

void blueShort(){
  Brain.Screen.print("Running blueShort.\n");
  startLauncher(800);
  autoConveyor(250);
  tankTurn(900);
  mechTranslate(-900);
  setMotors(100);
  allForwardc(800);
  turnRoller(900);
}