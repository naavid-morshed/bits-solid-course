#include "./orderFactory.h"
#include "onlineOrder.h"

#ifndef CONCRETE_ONLINE_ORDER
#define CONCRETE_ONLINE_ORDER

class ConcreteOnlineOrder : public OrderFactory
{
public:
    Order createOrder(std::string name, std::string orderId, double price, std::string address)
    {
        return OnlineOrder(name, orderId, price, address);
    }
};

#endif