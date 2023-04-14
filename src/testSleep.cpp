#include "vex.h"
#include "main.h"

using namespace vex;

void testSleep(){
    Brain.Screen.print("sleeping. . . \n");
    wait(5,sec); // this will pause the current thread for (5) seconds
    Brain.Screen.print("done Sleeping");
}