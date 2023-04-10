
#include "main.h"

// A global instance of competition

void getOtherRoller(){
  allForwardc(20);
  mechTranslate(-90);
  allForwardc(-30);
  turnRoller(90);
  startLauncher(80);
  allForwardc(60);
  tankTurn(30);
  mechTranslate(100);
  autoPusher(2);

  tankTurn(-90);
  allForwardc(90);
  tankTurn(-45);
  turnRoller(90);
}
