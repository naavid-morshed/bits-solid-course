#ifndef CONCRETE_IN_STORE_ORDER_H
#define CONCRETE_IN_STORE_ORDER_H

#include "../factory/orderFactory.h"
#include "../order/inStoreOrder.h"

class ConcreteInStoreOrder final
{
public:
   static InStoreOrder createOrder(std::string name, std::string orderId, double price, std::string cashMemo)
    {
        return {std::move(name), std::move(orderId), price, std::move(cashMemo)};
    }
};

#endif