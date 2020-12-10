#include "gtest/gtest.h"
#include "../PointOfInterest/tests/POI_Test.hpp"
#include "../Lodging/tests/Lodging_Test.hpp"
#include "../Transportation/tests/Transportation_Test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
