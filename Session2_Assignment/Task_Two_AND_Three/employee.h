#include <iostream>
#ifndef Employee_H
#define Employee_H

class Employee
{
private:
    std::string name;
    double salary;

public:
    virtual ~Employee() = default;

    Employee(std::string name, double salary) : name(name), salary(salary) {}

    virtual void displayInfo() = 0;
    virtual void work()
    {
        std::cout << "Employee is working.\n" << std::endl;
    }

    std::string getName() { return name; }
    double getSalary() { return salary; }

    void setName(std::string name) { this->name = name; }
    void setSalary(double salary) { this->salary = salary; }
};

#endif