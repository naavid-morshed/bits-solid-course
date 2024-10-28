#ifndef CONCRETE_ONLINE_ORDER_H
#define CONCRETE_ONLINE_ORDER_H

#include "orderFactory.h"
#include "onlineOrder.h"


class ConcreteOnlineOrder final
{
public:
   static OnlineOrder createOrder(std::string name, std::string orderId, const double price, std::string address)
    {
        return {std::move(name), std::move(orderId), price, std::move(address)};
    }
};

#endif