#include "MicroBit.h"

#include "motor/motor.h"
#include "led/led.h"
#include "sensors/greyscale_sensor.h"

MicroBit uBit;

int main()
{
    uBit.init();

    LED::light_on(LED::LEFT);
    
    while(1)
    {
        int value = GreyscaleSensor::read_sensor(GreyscaleSensor::LEFT);
        if(value == 1)
        {
            uBit.display.scroll("WHITE");
        }
        else
        {
            uBit.display.scroll("BLACK");
        }

        Motor::start_motor(Motor::RIGHT, Motor::FORWARD);
        
        uBit.sleep(4000);

        Motor::stop_motor(Motor::RIGHT);

        Motor::start_motor(Motor::LEFT, Motor::FORWARD);
        Motor::start_motor(Motor::RIGHT, Motor::FORWARD);
        uBit.sleep(1000);

        Motor::stop_motor(Motor::LEFT);
        Motor::stop_motor(Motor::RIGHT);

        Motor::start_motor(Motor::RIGHT, Motor::FORWARD);
        uBit.sleep(2000);
        Motor::stop_motor(Motor::RIGHT);
    }
    
} 

