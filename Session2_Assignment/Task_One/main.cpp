#include <iostream>
#include "bike.h"
#include "car.h"

int main() {
    Bike bike(false);

    bike.Drive();
    bike.StartEngine();
    bike.Drive();

    std::cout << std::endl;

    Car car(true);
    car.Drive();
    car.StopEngine();
    car.Drive();
}