#include <mbed.h>
#include "components.h"

AssignmentBoard board;

LED red(board.K64F_RED_LED);

LED blue(board.K64F_BLUE_LED);

void turnOnLED()
{
    red.on();
    puts("rising 0->1");
}

void turnOffLED()
{
    red.off();
    puts("falling 1->0");
}

int main()
{
    blue.on();

    Switch switchA(board.K64F_SW2, true);
    Switch switchB(board.K64F_SW3, true);

    InterruptIn  left(switchA.getPinName());
    InterruptIn right(switchB.getPinName());

    left.rise(turnOnLED);
    right.fall(turnOffLED);

    while(1)
    {
        /* GNDN */
    }
}
