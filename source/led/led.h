#ifndef LED_H
#define LED_H

#include "MicroBit.h"

extern MicroBit uBit;

namespace LED {

    enum Side {
        LEFT = 8,
        RIGHT = 12
    };

    enum Switch {
        OFF,
        ON
    };

    void light_on(int led_side);
    void light_off(int led_side);

}

#endif  //LED_H