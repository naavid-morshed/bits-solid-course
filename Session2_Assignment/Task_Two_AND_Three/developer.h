#include <iostream>
#include "employee.h"
#ifndef Developer_H
#define Developer_H

class Developer : public Employee
{
private:
    std::string programmingLanguage;

public:
    Developer(std::string name, double salary, std::string programmingLanguage) : Employee(name, salary), programmingLanguage(programmingLanguage) {}

    std::string getProgrammingLanguage() { return this->programmingLanguage; }

    void setProgrammingLanguage(std::string bonus) { this->programmingLanguage = programmingLanguage; }

    void displayInfo() override
    {
        std::cout << this->getName() << std::endl;
        std::cout << this->getSalary() << std::endl;
        std::cout << this->getProgrammingLanguage() << "\n" << std::endl;
    }

    void work() override
    {
        std::cout << "Developer is working.\n" << std::endl;
    }
};

#endif