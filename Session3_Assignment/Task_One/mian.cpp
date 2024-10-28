#include "./factory/concreteOnlineOrder.h"
#include "./factory/concreteTelephoneOrder.h"
#include "./factory/concreteInStoreOrder.h"

#include "./logger/logger.h"

int main() {
    InStoreOrder in_store_order = ConcreteInStoreOrder::createOrder("Naavid", "12341234", 500, "asdfasdf");
    Logger *logger = Logger::getInstance();

    logger->addLog(
        "Customer: " + in_store_order.getName() + "\n" +
        "OrderId: " + in_store_order.getOrderId() + "\n" +
        "Price: " + std::to_string(in_store_order.getPrice()) + "\n" +
        "Cash Memo: " + in_store_order.getCashMemo());

    logger->printLogs();

    OnlineOrder online_order = ConcreteOnlineOrder::createOrder("Morshed", "12341234", 2500, "kollanpur");
    logger->addLog(
        "Customer: " + online_order.getName() + "\n" +
        "OrderId: " + online_order.getOrderId() + "\n" +
        "Price: " + std::to_string(online_order.getPrice()) + "\n" +
        "Address: " + online_order.getAddress());

    TelephoneOrder telephone_order = ConcreteTelephoneOrder::createOrder("Morshed", "12341234", 2500, 1719620768);
    logger->addLog(
        "Customer: " + telephone_order.getName() + "\n" +
        "OrderId: " + telephone_order.getOrderId() + "\n" +
        "Price: " + std::to_string(telephone_order.getPrice()) + "\n" +
        "Telephone Number: " + std::to_string(telephone_order.getTelephoneNumber()));

    logger->printLogs();
}
