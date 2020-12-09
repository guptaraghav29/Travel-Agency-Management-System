#include "gtest/gtest.h"

#include <vector>
#include <string>
#include <iostream>

#include "../ConcreteRoute.hpp"
#include "../ConcreteTicket.hpp"
#include "../Cruise.hpp"
#include "../Plane.hpp"
#include "../Train.hpp"
#include "../Route.hpp"
#include "../Ticket.hpp"
#include "../TransportationFactory.hpp"

using namespace std;

TEST(TransportationFactory, GetGeneralInfoPlane) {
  AirRoute a("LA", "NY", "1/1/21", "9AM", "Southwest", 8.000000, 5000.250000, "G6", "QHg25478");

  EXPECT_EQ(a.getGenInfo(), "LA NY 1/1/21 9AM Southwest 8.000000 5000.250000");
}

TEST(TransportationFactory, GetGeneralInfoTrain) {
  TrainRoute a("Anchorage", "Girdwood", "12/31/20", "9AM", "Alaska", 8.000000, 1000.030000, "P4", "A356");

  EXPECT_EQ(a.getGenInfo(), "Anchorage Girdwood 12/31/20 9AM Alaska 8.000000 1000.030000");
}

TEST(TransportationFactory, GetGeneralInfoCruise) {
  CruiseRoute a("LongBeach", "Baja Mexico", "7/24/21", "2PM", "Carnival", 36.000000, 10000.250000, "Pier 2", "S.S. Trexa");

  EXPECT_EQ(a.getGenInfo(), "LongBeach Baja Mexico 7/24/21 2PM Carnival 36.000000 10000.250000");
}

TEST(TransportationFactory, GetSpecificInfoPlane) {
  AirRoute a("LA", "NY", "1/1/21", "9AM", "Southwest", 8.000000, 5000.250000, "G6", "QHg25478");

  EXPECT_EQ(a.getSpecificInfo(), "G6 QHg25478");
}

TEST(TransportationFactory, GetSpecificInfoTrain) {
  TrainRoute a("Anchorage", "Girdwood", "12/31/20", "9AM", "Alaska", 8.000000, 1000.030000, "P4", "A356");

  EXPECT_EQ(a.getSpecificInfo(), "P4 A356");
}

TEST(TransportationFactory, GetSpecificInfoCruise) {
  CruiseRoute a("LongBeach", "Baja Mexico", "7/24/21", "2PM", "Carnival", 36.000000, 10000.250000, "Pier 2", "S.S. Trexa");

  EXPECT_EQ(a.getSpecificInfo(), "Pier 2 S.S. Trexa");
}

TEST(TransportationFactory, EconomyTicket) {
  Ticket* e = new Economy();
  string seat = e->getSeatNum();

  EXPECT_TRUE(stoi(seat) > 0 && stoi(seat) < 101);
  EXPECT_DOUBLE_EQ(e->multiplier(), 1.0);
}

TEST(TransportationFactory, FirstTicket) {
  Ticket* f = new First();
  string seat = f->getSeatNum();

  EXPECT_TRUE(stoi(seat) > 0 && stoi(seat) < 101);
  EXPECT_DOUBLE_EQ(f->multiplier(), 2.0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}