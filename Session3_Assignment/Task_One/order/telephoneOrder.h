#ifndef TELEPHONE_ORDER_H
#define TELEPHONE_ORDER_H

#include "order.h"

class TelephoneOrder final : public Order {
    int telephoneNumber;

public:
    TelephoneOrder(std::string name, std::string orderId, const double price, const int telephoneNumber) :
    Order(std::move(name), std::move(orderId), price), telephoneNumber(telephoneNumber) {
    }

    void setTelephoneNumber(const int telephoneNumber) {
        this->telephoneNumber = telephoneNumber;
    }

    int getTelephoneNumber() const {
        return this->telephoneNumber;
    }
};
#endif
