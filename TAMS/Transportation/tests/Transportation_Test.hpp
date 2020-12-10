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
#include "../Transportation.hpp"

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

TEST(TransportationFactory, AllInfoPlane) {
  AirRoute a("Hawaii", "Europe", "4/27/22", "12PM", "Emirates", 20.000000, 255000.250000, "H100", "HT347483");

  EXPECT_EQ(a.getGenInfo(), "Hawaii Europe 4/27/22 12PM Emirates 20.000000 255000.250000");
  EXPECT_EQ(a.getSpecificInfo(), "H100 HT347483");
}

TEST(TransportationFactory, AllInfoTrain) {
  TrainRoute a("Anchorage", "Girdwood", "12/7/20", "1AM", "Alaska", 2.000000, 350.030000, "P6", "A700");

  EXPECT_EQ(a.getGenInfo(), "Anchorage Girdwood 12/7/20 1AM Alaska 2.000000 350.030000");
  EXPECT_EQ(a.getSpecificInfo(), "P6 A700");
}

TEST(TransportationFactory, AllInfoCruise) {
  CruiseRoute a("Florida", "Bahamas", "4/13/21", "10AM", "Princess", 14.000000, 12000.250000, "Pier 5", "S.S. Ocean");

  EXPECT_EQ(a.getGenInfo(), "Florida Bahamas 4/13/21 10AM Princess 14.000000 12000.250000");
  EXPECT_EQ(a.getSpecificInfo(), "Pier 5 S.S. Ocean");
}

TEST(TransportationFactory, EconomyPlane) {
  AirRoute a("Hawaii", "Europe", "4/27/22", "12PM", "Emirates", 20.000000, 255000.250000, "H100", "HT347483");

  Ticket* e = new Economy();
  string seat = e->getSeatNum();

  EXPECT_TRUE(stoi(seat) > 0 && stoi(seat) < 26);
  EXPECT_DOUBLE_EQ(e->multiplier(), 1.0);

  EXPECT_EQ(a.getGenInfo(), "Hawaii Europe 4/27/22 12PM Emirates 20.000000 255000.250000");
  EXPECT_EQ(a.getSpecificInfo(), "H100 HT347483");
}

TEST(TransportationFactory, FirstClassTrain) {
  TrainRoute a("Anchorage", "Girdwood", "12/31/20", "9AM", "Alaska", 8.000000, 1000.030000, "P4", "A356");

  Ticket* f = new First();
  string seat = f->getSeatNum();

  EXPECT_TRUE(stoi(seat) > 0 && stoi(seat) < 26);
  EXPECT_DOUBLE_EQ(f->multiplier(), 1.2);

  EXPECT_EQ(a.getGenInfo(), "Anchorage Girdwood 12/31/20 9AM Alaska 8.000000 1000.030000");
  EXPECT_EQ(a.getSpecificInfo(), "P4 A356");
}

TEST(TransportationFactory, FirstClassCruise) {
  CruiseRoute a("Florida", "Bahamas", "4/13/21", "10AM", "Princess", 14.000000, 12000.250000, "Pier 5", "S.S. Ocean");

  Ticket* f = new First();
  string seat = f->getSeatNum();

  EXPECT_TRUE(stoi(seat) > 0 && stoi(seat) < 26);
  EXPECT_DOUBLE_EQ(f->multiplier(), 1.2);

  EXPECT_EQ(a.getGenInfo(), "Florida Bahamas 4/13/21 10AM Princess 14.000000 12000.250000");
  EXPECT_EQ(a.getSpecificInfo(), "Pier 5 S.S. Ocean");
}


TEST(TransportationFactory, EconomyTicket) {
  Ticket* e = new Economy();
  string seat = e->getSeatNum();

  EXPECT_TRUE(stoi(seat) > 0 && stoi(seat) < 26);
  EXPECT_DOUBLE_EQ(e->multiplier(), 1.0);
}

TEST(TransportationFactory, FirstTicket) {
  Ticket* f = new First();
  string seat = f->getSeatNum();

  EXPECT_TRUE(stoi(seat) > 0 && stoi(seat) < 26);
  EXPECT_DOUBLE_EQ(f->multiplier(), 1.2);
}
