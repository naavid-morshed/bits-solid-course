#include <iostream>
#include "employee.h"
#ifndef Manager_H
#define Manager_H

class Manager : public Employee
{
private:
    double bonus;

public:
    Manager(std::string name, double salary, double bonus) : Employee(name, salary), bonus(bonus) {}

    double getBonus() const { return this->bonus; }

    void setBonus(const double bonus) { this->bonus = bonus; }

    void displayInfo() override
    {
        std::cout << this->getName() << std::endl;
        std::cout << this->getSalary() << std::endl;
        std::cout << this->getSalary() << "\n" << std::endl;
    }

    void work() override {
        std::cout << "Manager is working.\n" << std::endl;
    }
};

#endif