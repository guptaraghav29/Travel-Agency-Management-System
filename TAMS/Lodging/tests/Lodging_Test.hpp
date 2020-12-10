
#include "gtest/gtest.h"
#include "../Lodging.hpp"
#include "../Motel.hpp"
#include "../Hotel.hpp"
#include "../Resort.hpp"
#include "../AirBnB.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

TEST(LodgingTest, TypeOfLodging)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Lodging l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getTypeOfLodging(), "Hotel");
}

TEST(LodgingTest, Address)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Lodging l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getAddress(), "Hawaii");
}

TEST(LodgingTest, Rating)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Lodging l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getRating(), 4.5);
}

TEST(LodgingTest, Amenities)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Lodging l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getAmenities(), a);
}

TEST(LodgingTest, PhoneNumber)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Lodging l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getPhoneNumber(), "6692458566");
}

TEST(LodgingTest, Dining)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Lodging l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getDining(), d);
}

TEST(LodgingTest, Price)
{
    vector<string> a;
    a.push_back("coke");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Lodging l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getPrice(), 450.0);
}

TEST(HotelTest, AllConstructorParams)
{
    vector<string> a;
    a.push_back("popcorn");
    a.push_back("coke");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Hotel l("Hotel", "Canada", 2, a, "6692458566", d, 200.12);

    EXPECT_EQ(l.getTypeOfLodging(), "Hotel");
    EXPECT_EQ(l.getAddress(), "Canada");
    EXPECT_EQ(l.getRating(), 2);
    EXPECT_EQ(l.getAmenities(), a);
    EXPECT_EQ(l.getPhoneNumber(), "6692458566");
    EXPECT_EQ(l.getDining(), d);
    EXPECT_EQ(l.getPrice(), 200.12);
}

TEST(MotelTest, AllConstructorParams)
{
    vector<string> a;
    a.push_back("lamp");
    a.push_back("towels");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("milk");
    Motel l("Motel", "LA", 88, a, "1092458566", d, 99.99);

    EXPECT_EQ(l.getTypeOfLodging(), "Motel");
    EXPECT_EQ(l.getAddress(), "LA");
    EXPECT_EQ(l.getRating(), 88);
    EXPECT_EQ(l.getAmenities(), a);
    EXPECT_EQ(l.getPhoneNumber(), "1092458566");
    EXPECT_EQ(l.getDining(), d);
    EXPECT_EQ(l.getPrice(), 99.99);
}

TEST(AirBnBTest, AllConstructorParams)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("pizza");
    d.push_back("pasta");
    AirBnB l("AirBnB", "SF", 3, a, "8882458566", d, 69.69);

    EXPECT_EQ(l.getTypeOfLodging(), "AirBnB");
    EXPECT_EQ(l.getAddress(), "SF");
    EXPECT_EQ(l.getRating(), 3);
    EXPECT_EQ(l.getAmenities(), a);
    EXPECT_EQ(l.getPhoneNumber(), "8882458566");
    EXPECT_EQ(l.getDining(), d);
    EXPECT_EQ(l.getPrice(), 69.69);
}

TEST(ResortTest, AllConstructorParams)
{
    vector<string> a;
    a.push_back("bed");
    a.push_back("slide");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Resort l("Resort", "India", 10.21, a, "9992458566", d, 350.02);

    EXPECT_EQ(l.getTypeOfLodging(), "Resort");
    EXPECT_EQ(l.getAddress(), "India");
    EXPECT_EQ(l.getRating(), 10.21);
    EXPECT_EQ(l.getAmenities(), a);
    EXPECT_EQ(l.getPhoneNumber(), "9992458566");
    EXPECT_EQ(l.getDining(), d);
    EXPECT_EQ(l.getPrice(), 350.02);
}
