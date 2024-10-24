#include "order.h"

#ifndef ONLINE_ORDER_H
#define ONLINE_ORDER_H
class InStoreOrder final: public Order
{
private:
    std::string cashMemo;

public:
    InStoreOrder(std::string name, std::string orderId, double price, std::string address) : Order(name, orderId, price), cashMemo(cashMemo) {}

    void setCashMemo(std::string cashMemo)
    {
        this->cashMemo = cashMemo;
    }

    std::string getCashMemo()
    {
        return this->cashMemo;
    }
};
#endif