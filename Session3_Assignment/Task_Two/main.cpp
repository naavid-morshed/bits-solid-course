#include "computerBuilder.h"
#include "thirdPartyApiComputer.h"
#include "computerAdapter.h"

int main()
{
    Computer computer = ComputerBuilder()
                            .setCpu("14900k")
                            .setStorage("990 Pro Evo")
                            .setGpu("409D")
                            .setRam("Adata 7500mzh 32GB")
                            .build();

    ThirdPartyApiComputer cmp = ComputerAdapter::adaptToTPApiComputer(computer);

    computer.toString();
    cmp.toString();
}