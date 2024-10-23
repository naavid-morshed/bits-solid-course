#include <iostream>>

#ifndef ORDER_H
#define ORDER_H

class Order
{
private:
    std::string name;
    std::string orderId;
    double price;

public:
    Order(std::string name, std::string orderId, double price) : name(name), orderId(orderId), price(price)
    {
    }

public:
    void setName(std::string name)
    {
        this->name = name;
    }

    void setOrderId(std::string orderId)
    {
        this->orderId = orderId;
    }

    void setPrice(double price)
    {
        this->price = price;
    }

    std::string getName()
    {
        return this->name;
    }

    std::string getOrderId()
    {
        return this->orderId;
    }

    double getPrice()
    {
        return this->price;
    }
};

#endif