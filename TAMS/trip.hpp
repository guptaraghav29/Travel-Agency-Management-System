#include "PointOfInterest/POIFactory.hpp"
#include "Price/PriceVisitor.hpp"
#include "Transportation/TransportationFactory.hpp"
#include "Lodging/LodgingFactory.hpp"
#include "utility.hpp"
#include <vector>

class Trip
{
    private:
        std::string name;
        double total_price;
        vector<Transportation*> transportation;
        vector<PointOfInterest*> points;
        vector<Lodging*> lodging;
    public:
        ~Trip();
        void customize();
        void addTransportation();
        void addPointOfInterest();
        void addLodging();
        void printName();
        void printInfo();
};