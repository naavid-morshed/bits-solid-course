#ifndef COMPUTER_BUILDER_H
#define COMPUTER_BUILDER_H

#include <iostream>
#include "computer.h"

class ComputerBuilder
{
private:
    std::string cpu;
    std::string ram;
    std::string storage;
    std::string gpu;

public:
    ComputerBuilder &setCpu(std::string cpu)
    {
        this->cpu = cpu;
        return *this;
    }

    ComputerBuilder &setGpu(std::string gpu)
    {
        this->gpu = gpu;
        return *this;
    }

    ComputerBuilder &setRam(std::string ram)
    {
        this->ram = ram;
        return *this;
    }

    ComputerBuilder &setStorage(std::string storage)
    {
        this->storage = storage;
        return *this;
    }

    Computer build()
    {
        return Computer(cpu, ram, storage, gpu);
    }
};
#endif