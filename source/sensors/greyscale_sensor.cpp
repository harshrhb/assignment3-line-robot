#include "MicroBit.h"

#include "greyscale_sensor.h"

namespace GreyscaleSensor {

    int read_sensor(int side){
        return uBit.io.pin[side].getDigitalValue();
    }
}