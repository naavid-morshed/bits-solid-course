#include "order.h"

#ifndef ONLINE_ORDER_H
#define ONLINE_ORDER_H

class OnlineOrder final : public Order
{
private:
    std::string address;

public:
    OnlineOrder(std::string name, std::string orderId, double price, std::string address) : Order(name, orderId, price), address(address) {}

    void setAddress(std::string address)
    {
        this->address = address;
    }

    std::string getAddress()
    {
        return this->address;
    }
};
#endif