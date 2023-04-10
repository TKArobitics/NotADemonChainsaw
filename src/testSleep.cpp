#include "vex.h"
#include "main.h"

using namespace vex;

void testSleep(){
    Brain.Screen.print("sleeping. . . \n");
    wait(5,sec);        
    Brain.Screen.print("done Sleeping");
}