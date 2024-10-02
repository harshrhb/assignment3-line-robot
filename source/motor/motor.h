#ifndef MOTOR_H
#define MOTOR_H

#include "MicroBit.h"

extern MicroBit uBit;

namespace Motor {

    const uint8_t speed = 0xFF;

    enum Side : uint8_t {
        LEFT = 0x00,
        RIGHT = 0x02
    };

    enum Direction : uint8_t {
        FORWARD = 0x00,
        BACKWARD = 0x01
    };

    void start_motor(uint8_t motor_side, uint8_t direction);
    void stop_motor(uint8_t motor_side);
    
}

#endif  //MOTOR_H