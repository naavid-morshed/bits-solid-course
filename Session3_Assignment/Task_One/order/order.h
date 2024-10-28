#ifndef ORDER_H
#define ORDER_H

#include <iostream>

class Order {
    std::string name;
    std::string orderId;
    double price;

public:
    Order(std::string name, std::string orderId, const double price) : name(std::move(name)),
                                                                       orderId(std::move(orderId)), price(price) {
    }

    void setName(std::string name) {
        this->name = std::move(name);
    }

    void setOrderId(std::string orderId) {
        this->orderId = std::move(orderId);
    }

    void setPrice(double price) {
        this->price = price;
    }

    std::string getName() {
        return this->name;
    }

    std::string getOrderId() {
        return this->orderId;
    }

    double getPrice() const {
        return this->price;
    }
};
#endif
