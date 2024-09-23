#include <iostream>
#include "i_vehicle.h"

#ifndef BIKE_H
#define BIKE_H
class Bike : IVehicle
{
private:
    bool engineStatus;

public:
    Bike(bool engineStatus) : engineStatus(engineStatus) {}

    void StartEngine()
    {
        if (this->engineStatus)
        {
            std::cout << "Bike Engine is already running." << std::endl;
        }
        else
        {
            this->engineStatus = true;
            std::cout << "Bike Engine has started" << std::endl;
        }
    }

    void StopEngine()
    {
        if (this->engineStatus)
        {
            this->engineStatus = false;
            std::cout << "Bike Engine stopped." << std::endl;
        }
        else
        {
            std::cout << "Bike Engine already stopped." << std::endl;
        }
    }

    void Drive()
    {
        if (this->engineStatus)
        {
            std::cout << "Bike is running." << std::endl;
        }
        else
        {
            std::cout << "Bike Engine stopped, bike cannot run." << std::endl;
        }
    }
};
#endif