#include "MicroBit.h"

#include "led.h"

namespace LED {

    void light_on(int led_side) {
        uBit.io.pin[led_side].setDigitalValue(ON);
    }

    void light_off(int led_side) {
        uBit.io.pin[led_side].setDigitalValue(OFF);
    }
}