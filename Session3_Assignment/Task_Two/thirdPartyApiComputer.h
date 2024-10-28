#ifndef THIRD_PARTY_API_COMPUTER_H
#define THIRD_PARTY_API_COMPUTER_H

#include <iostream>
#include "computer.h"

class ThirdPartyApiComputer
{
private:
    std::string centralProcessingUnit;
    std::string memory;
    std::string storage;
    std::string gpu;

public:
    ThirdPartyApiComputer(const std::string &centralProcessingUnit, const std::string &memory,
                          const std::string &storage, const std::string &gpu)
        : centralProcessingUnit(centralProcessingUnit), memory(memory), storage(storage), gpu(gpu) {}

    std::string getCentralProcessingUnit()
    {
        return centralProcessingUnit;
    }

    std::string getMemory()
    {
        return memory;
    }

    std::string getStorage()
    {
        return storage;
    }

    std::string getGpu()
    {
        return gpu;
    }

    void setCentralProcessingUnit(std::string &cpu)
    {
        centralProcessingUnit = cpu;
    }

    void setMemory(std::string &mem)
    {
        memory = mem;
    }

    void setStorage(std::string &stor)
    {
        storage = stor;
    }

    void setGpu(std::string &graphics)
    {
        gpu = graphics;
    }

    void toString() const
    {
        std::cout << "Computer Specifications:\n"
                  << "-------------------------\n"
                  << "CPU: " << centralProcessingUnit << "\n"
                  << "RAM: " << memory << "\n"
                  << "Storage: " << storage << "\n"
                  << "GPU: " << gpu << "\n"
                  << "-------------------------\n";
    }
};

#endif // COMPUTER_H
