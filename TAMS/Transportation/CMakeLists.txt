CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
    tests/Transportation_Test.cpp
    ConcreteRoute.hpp
    ConcreteTicket.hpp
    Cruise.hpp
    Plane.hpp
    Train.hpp
    Route.hpp
    Ticket.hpp
    TransportationFactory.hpp
    Transportation.hpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)