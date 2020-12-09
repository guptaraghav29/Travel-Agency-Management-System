
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
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Hotel l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getTypeOfLodging(), "Hotel");
    EXPECT_EQ(l.getAddress(), "Hawaii");
    EXPECT_EQ(l.getRating(), 4.5);
    EXPECT_EQ(l.getAmenities(), a);  
    EXPECT_EQ(l.getPhoneNumber(), "6692458566");
    EXPECT_EQ(l.getDining(), d);
    EXPECT_EQ(l.getPrice(), 450.0);
}

TEST(MotelTest, AllConstructorParams)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Motel l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getTypeOfLodging(), "Hotel");
}

TEST(AirBnBTest, AllConstructorParams)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    AirBnB l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getTypeOfLodging(), "Hotel");
}

TEST(ResortTest, AllConstructorParams)
{
    vector<string> a;
    a.push_back("food");
    a.push_back("water");

    vector<string> d;
    d.push_back("cookies");
    d.push_back("cream");
    Resort l("Hotel", "Hawaii", 4.5, a, "6692458566", d, 450.0);

    EXPECT_EQ(l.getTypeOfLodging(), "Hotel");
}



int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
