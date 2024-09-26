#include <iostream>
#include "developer.h"
#include "employee.h"
#include "manager.h"

int main()
{
    Manager m("Sakib", 15000.00, 0.0);
    Developer d("Naavid", 15000.00, "JAVA");

    m.displayInfo();
    m.work();

    d.displayInfo();
    d.work();
    d.Employee::work();
};