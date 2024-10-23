#include "orderFactory.h"
#include "onlineOrder.h"
#ifndef CONCRETE_ONLINE_ORDER
#define CONCRETE_ONLINE_ORDER

class ConcreteOnlineOrder : public orderFactory
{
public:
    Order createOrder()
    {
        return OnlineOrder();
    }
};

#endif