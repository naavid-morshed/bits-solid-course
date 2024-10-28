#ifndef ONLINE_ORDER_H
#define ONLINE_ORDER_H

#include "../order/order.h"

class OnlineOrder final : public Order {
    std::string address;

public:
    OnlineOrder(std::string name, std::string orderId, const double price, std::string address) : Order(std::move(name), std::move(orderId), price),
                                                                                                  address(std::move(address)) {
    }

    void setAddress(std::string address) {
        this->address = std::move(address);
    }

    std::string getAddress() {
        return this->address;
    }
};
#endif
