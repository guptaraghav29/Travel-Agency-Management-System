#ifndef __TRIP_HPP__
#define __TRIP_HPP__

#include "utility.hpp"
#include <vector>
#include "PointOfInterest/POIFactory.hpp"
#include "Price/PriceVisitor.hpp"
#include "Transportation/TransportationFactory.hpp"
#include "Lodging/LodgingFactory.hpp"
#include "Transportation/Plane.hpp"
#include "Transportation/Train.hpp"
#include "Transportation/Cruise.hpp"

class Trip
{
    private:
        std::string name;
        double total_price;
        PriceVisitor* visitor;
        vector<Transportation*> transportation;
        vector<PointOfInterest*> points;
        vector<Lodging*> lodging;
    public:
        Trip();
        ~Trip();
        void customize();
        void addTransportation();
        void addPointOfInterest();
        void addLodging();
        void printName();
        void printInfo();
};

#endif
