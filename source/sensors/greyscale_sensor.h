#ifndef GREYSCALE_SENSOR_H
#define GREYSCALE_SENSOR_H

#include "MicroBit.h"

extern MicroBit uBit;

namespace GreyscaleSensor {

    enum Side {
        LEFT = 13,
        RIGHT = 14
    };

    enum Reading {
        WHITE,
        BLACK
    };

    int read_sensor(int side);
}

#endif  //GREYSCALE_SENSOR_H