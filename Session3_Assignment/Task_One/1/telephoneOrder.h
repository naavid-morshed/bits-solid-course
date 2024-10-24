#include "order.h"

#ifndef TELEPHONE_ORDER_H
#define TELEPHONE_ORDER_H

class TelephoneOrder final : public Order
{
private:
    int telephoneNumber;

public:
    TelephoneOrder(std::string name, std::string orderId, double price, int telephoneNumber) : Order(name, orderId, price), telephoneNumber(telephoneNumber) {}

    void setTelephoneNumber(int telephoneNumber)
    {
        this->telephoneNumber = telephoneNumber;
    }

    int getTelephoneNumber()
    {
        return this->telephoneNumber;
    }
};
#endif