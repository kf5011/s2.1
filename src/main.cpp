#include <mbed.h>


class LED {
    DigitalOut pin;
public:
    LED(PinName p) : pin(p) {off();}
    void on (void) { pin.write(0);}
    void off(void) { pin.write(1);}
};

LED   red(LED_RED);
LED green(LED_GREEN);

void on(void)
{
    red.on();
    puts("rising 0->1");
}
void off(void)
{
    red.off();
    puts("falling 1->0");
}

int main() {
    InterruptIn  left(SW2);
    InterruptIn right(SW3);
    // put your setup code here, to run once:

    left.rise(on);
    right.fall(off);
    while(1) {
        // put your main code here, to run repeatedly:

    }
}
