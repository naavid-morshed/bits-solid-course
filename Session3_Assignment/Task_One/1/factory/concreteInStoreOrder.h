#include "./orderFactory.h"
#include "./inStoreOrder.h"

#ifndef CONCRETE_IN_STORE_ORDER_H
#define CONCRETE_IN_STORE_ORDER_H

class ConcreteInStoreOrder final : public OrderFactory
{
public:
    Order createOrder(std::string name, std::string orderId, double price, std::string cashMemo)
    {
        return InStoreOrder(name, orderId, price, cashMemo);
    }
};

#endif