#ifndef CONCRETE_TELEPHONE_ORDER
#define CONCRETE_TELEPHONE_ORDER

#include "./orderFactory.h"
#include "telephoneOrder.h"

class ConcreteTelephoneOrder final {
public:
    static TelephoneOrder createOrder(std::string name, std::string orderId, const double price,
                                      const int telephoneNumber) {
        return {std::move(name), std::move(orderId), price, telephoneNumber};
    }
};

#endif
