#include <mbed.h>

DigitalOut   red(LED_RED,1);
DigitalOut green(LED_GREEN,1);

void on(void)
{
    red.write(1);
    puts("left rising 0->1");
}
void off(void)
{
    red.write(0);
    puts("right falling 1->0");
}

int main() {
    InterruptIn  left(SW3);
    InterruptIn right(SW2);

    left.rise(on);
    right.fall(off);
    while(1) {
        /* GNDN */
    }
}
