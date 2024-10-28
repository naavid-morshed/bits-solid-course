cmake_minimum_required(VERSION 3.29)
project(bits_solid_course)

set(CMAKE_CXX_STANDARD 14)

include_directories(Session1_Assignment/Task_One)
include_directories(Session1_Assignment/Task_Two)
include_directories(Session2_Assignment/Task_One)
include_directories(Session2_Assignment/Task_Two_AND_Three)
include_directories(Session3_Assignment/Task_One/1/factory)
include_directories(Session3_Assignment/Task_One/1/logger)
include_directories(Session3_Assignment/Task_One/1/order)

add_executable(bits_solid_course
    Session1_Assignment/Task_One/book.h
    Session1_Assignment/Task_One/main.cpp
    Session1_Assignment/Task_Three/library_system.cpp
    Session1_Assignment/Task_Two/library_member.h
    Session1_Assignment/Task_Two/student_member.h
    Session2_Assignment/Task_One/bike.h
    Session2_Assignment/Task_One/car.h
    Session2_Assignment/Task_One/i_vehicle.h
    Session2_Assignment/Task_One/main.cpp
    Session2_Assignment/Task_Two_AND_Three/developer.h
    Session2_Assignment/Task_Two_AND_Three/employee.h
    Session2_Assignment/Task_Two_AND_Three/main.cpp
    Session2_Assignment/Task_Two_AND_Three/manager.h
    Session3_Assignment/Task_One/1/factory/concreteInStoreOrder.h
    Session3_Assignment/Task_One/1/factory/concreteOnlineOrder.h
    Session3_Assignment/Task_One/1/factory/concreteTelephoneOrder.h
    Session3_Assignment/Task_One/1/factory/orderFactory.h
    Session3_Assignment/Task_One/1/logger/logger.h
    Session3_Assignment/Task_One/1/logger/loggerAlternate.h
    Session3_Assignment/Task_One/1/order/inStoreOrder.h
    Session3_Assignment/Task_One/1/order/onlineOrder.h
    Session3_Assignment/Task_One/1/order/order.h
    Session3_Assignment/Task_One/1/order/telephoneOrder.h
        Session3_Assignment/Task_One/1/mian.cpp)
