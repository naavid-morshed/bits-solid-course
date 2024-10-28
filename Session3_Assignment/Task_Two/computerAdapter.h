#ifndef COMPUTER_ADAPTER_h
#define COMPUTER_ADAPTER_h

#include "computer.h"
#include "thirdPartyApiComputer.h"

class ComputerAdapter
{
public:
    static Computer adaptToComputer(ThirdPartyApiComputer cmp)
    {
        return Computer(cmp.getCentralProcessingUnit(), cmp.getMemory(), cmp.getStorage(), cmp.getGpu());
    }

    static ThirdPartyApiComputer adaptToTPApiComputer(Computer cmp)
    {
        return ThirdPartyApiComputer(cmp.getCpu(), cmp.getRam(), cmp.getStorage(), cmp.getGpu());
    }
};
#endif