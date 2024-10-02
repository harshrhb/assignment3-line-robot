#include "MicroBit.h"

#include "motor.h"

namespace Motor {
    uint8_t buf[3];

    void start_motor(uint8_t motor_side, uint8_t direction) {
        buf[0] = motor_side;
        buf[1] = direction;
        buf[2] = speed;

        uBit.i2c.write( 0x20, buf, 3);
    }

    void stop_motor(uint8_t motor_side) {
        buf[0] = motor_side;
        buf[2] = 0x00;

        uBit.i2c.write( 0x20, buf, 3);
    }
}