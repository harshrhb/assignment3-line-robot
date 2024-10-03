#include "MicroBit.h"

MicroBit    uBit;

int main(){
    // Initialise the micro:bit runtime.
    uBit.init();
    uBit.radio.enable(); // Initialise Radio

    while(1)
    {
        if (uBit.buttonA.isPressed())
            uBit.radio.datagram.send(//insert send parameter here);

        else if (uBit.buttonB.isPressed())
            uBit.radio.datagram.send(//insert send parameter here);

        uBit.sleep(100);
    }
}
