#ifndef IN_STORE_ORDER_H
#define IN_STORE_ORDER_H

#include "order.h"

class InStoreOrder final : public Order {
    std::string cashMemo;

public:
    InStoreOrder(std::string name, std::string orderId, double price, std::string cashMemo) : Order(std::move(name),
        std::move(orderId), price), cashMemo(std::move(cashMemo)) {
    }

    void setCashMemo(std::string cashMemo) {
        this->cashMemo = std::move(cashMemo);
    }

    std::string getCashMemo() {
        return this->cashMemo;
    }
};
#endif
