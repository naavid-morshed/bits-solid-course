#include "order.h"

class OrderFactory
{
public:
    virtual Order createOrder() = 0;
};