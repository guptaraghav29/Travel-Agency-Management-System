#ifndef __POI_TEST_HPP__
#define __POI_TEST_HPP__

#include "gtest/gtest.h"
#include "../PointOfInterest.hpp"

TEST(PointOfInterestTest, GetPrice) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    EXPECT_DOUBLE_EQ(poi->getPrice(), 100.00);
}

TEST(PointOfInterestTest, NegativePrice) {
    PointOfInterest* poi = new GenericPOI("name", "type", -100.00);
    EXPECT_ANY_THROW(poi->getPrice());
}

TEST(PointOfInterestTest, EmptyGetInfo) {
    PointOfInterest* poi = new GenericPOI("", "", 100.00);
    EXPECT_ANY_THROW(poi->getInfo());
}

TEST(PointOfInterestTest, GenericGetInfo) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    EXPECT_EQ(poi->getInfo(), "type: name");
}

TEST(PointOfInterestTest, PhoneDecoratorGetInfo) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    InfoDecorator* dec = new PhoneDecorator(poi, "234-555-6789");
    EXPECT_EQ(dec->getInfo(), "type: name\nPhone Number: 234-555-6789");
}

TEST(PointOfInterestTest, DescriptionDecoratorGetInfo) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    InfoDecorator* dec = new DescriptionDecorator(poi, "The Eiffel Tower is a wrought-iron lattice tower on the Champ de Mars in Paris, France.");
    EXPECT_EQ(dec->getInfo(), "type: name\nDescription: The Eiffel Tower is a wrought-iron lattice tower on the Champ de Mars in Paris, France.");
}

TEST(PointOfInterestTest, RatingDecoratorGetInfo) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    InfoDecorator* dec = new RatingDecorator(poi, 4.33);
    EXPECT_EQ(dec->getInfo(), "type: name\nRating: 4.3");
}

TEST(PointOfInterestTest, AddressDecoratorGetInfo) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    InfoDecorator* dec = new AddressDecorator(poi, "13000 SD-244, Keystone, SD 57751");
    EXPECT_EQ(dec->getInfo(), "type: name\nAddress: 13000 SD-244, Keystone, SD 57751");
}

TEST(PointOfInterestTest, TimeDecoratorGetInfo) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    InfoDecorator* dec = new TimeDecorator(poi, "5AM–11PM");
    EXPECT_EQ(dec->getInfo(), "type: name\nOpen between: 5AM–11PM");
}

TEST(PointOfInterestTest, ChainedDecoratorGetInfo) {
    PointOfInterest* poi = new GenericPOI("name", "type", 100.00);
    InfoDecorator* dec = new RatingDecorator(poi, 4.33);
    dec = new TimeDecorator(dec, "5AM–11PM");
    dec = new PhoneDecorator(dec, "234-555-6789");
    EXPECT_EQ(dec->getInfo(), "type: name\nRating: 4.3\nOpen between: 5AM–11PM\nPhone Number: 234-555-6789");
}

#endif //__POI_TEST_HPP__
