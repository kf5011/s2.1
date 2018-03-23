#include <mbed.h>
#include "components.h"

AssignmentBoard board;

LED red(board.K64F_RED_LED);
LED blue(board.K64F_BLUE_LED);

void turnOnLED(void)
{
    red.on();
    puts("rising 0->1");
}

void turnOffLED(void)
{
    red.off();
    puts("falling 1->0");
}

int main()
{
    puts("Reached");
    
    InterruptIn  left(board.K64F_SW2);
    InterruptIn right(board.K64F_SW3);

    left.rise(turnOnLED);
    right.fall(turnOffLED);

    while(1)
    {
        /* GNDN */
    }
}
