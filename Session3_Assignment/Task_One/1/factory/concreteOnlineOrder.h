#include "./orderFactory.h"
#include "./order/onlineOrder.h"

#ifndef CONCRETE_ONLINE_ORDER
#define CONCRETE_ONLINE_ORDER

class ConcreteOnlineOrder final : public OrderFactory
{
public:
    Order createOrder(std::string name, std::string orderId, double price, std::string address)
    {
        return OnlineOrder(name, orderId, price, address);
    }
};

#endif