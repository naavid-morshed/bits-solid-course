#include "computerBuilder.h"
#include "thirdPartyApiComputer.h"
#include "computerAdapter.h"

int main()
{
    ComputerBuilder computerBuilder = ComputerBuilder()
                                          .setCpu("14900k")
                                          .setRam("Adata 7500mzh 32GB");

    computerBuilder = computerBuilder
                          .setStorage("990 Pro Evo")
                          .setGpu("409D");

    Computer computer = computerBuilder
                            .build();

    ThirdPartyApiComputer cmp = ComputerAdapter::adaptToTPApiComputer(computer);

    computer.toString();
    cmp.toString();
}