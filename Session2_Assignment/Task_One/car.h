#include <iostream>
#include "i_vehicle.h"

#ifndef CAR_H
#define CAR_H
class Car : IVehicle
{
private:
    bool engineStatus;

public:
    Car(bool engineStatus) : engineStatus(engineStatus) {}

    void StartEngine()
    {
        if (this->engineStatus)
        {
            std::cout << "Engine is already running." << std::endl;
        }
        else
        {
            this->engineStatus = true;
            std::cout << "Engine has started" << std::endl;
        }
    }

    void StopEngine()
    {
        if (this->engineStatus)
        {
            this->engineStatus = false;
            std::cout << "Car Engine stopped." << std::endl;
        }
        else
        {
            std::cout << "Car Engine already stopped." << std::endl;
        }
    }

    void Drive()
    {
        if (this->engineStatus)
        {
            std::cout << "Car is running." << std::endl;
        }
        else
        {
            std::cout << "Engine stopped, car cannot run." << std::endl;
        }
    }
};
#endif