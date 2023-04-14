#ifndef vex.h

#include "vex.h"
#endif

#include "main.h"

using namespace vex;
// A global instance of competition
void BlueLong(){ // please comment on what each line does
  Brain.Screen.print("Running blueLong.\n");
  
  allForwardc(20);
  mechTranslate(-90);
  allForwardc(-30);
  turnRoller(90);
  startLauncher(80);
  allForwardc(60);
  tankTurn(30);
  mechTranslate(100);
  autoPusher(2);
}