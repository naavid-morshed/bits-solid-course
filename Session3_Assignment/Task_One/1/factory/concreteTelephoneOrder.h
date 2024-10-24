#include "./orderFactory.h"
#include "onlineOrder.h"
#include "./telephoneOrder.h"

#ifndef CONCRETE_TELEPHONE_ORDER
#define CONCRETE_TELEPHONE_ORDER

class ConcreteTelephoneOrder final : public OrderFactory
{
public:
    Order createOrder(std::string name, std::string orderId, double price, std::string address, int telephoneNumber)
    {
        return TelephoneOrder(name, orderId, price, telephoneNumber);
    }
};

#endif