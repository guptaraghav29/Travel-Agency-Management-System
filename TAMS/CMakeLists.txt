CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(../googletest googletest)

include_directories(Price)
include_directories(PointOfInterest)
include_directories(Lodging)
include_directories(Transportation)

ADD_EXECUTABLE(TAMS
    main.cpp
    client.cpp
    trip.cpp
    Price/PriceVisitor.cpp
    PointOfInterest/POIFactory.cpp
    PointOfInterest/PointOfInterest.cpp
)

ADD_EXECUTABLE(Test/alltests
    Test/test.cpp PointOfInterest/PointOfInterest.cpp
)

TARGET_LINK_LIBRARIES(Test/alltests gtest)
TARGET_COMPILE_DEFINITIONS(Test/alltests PRIVATE gtest_disable_pthreads=ON)
