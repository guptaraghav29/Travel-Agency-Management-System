#include "PointOfInterest.hpp"

class POIFactory
{
    private:
        PointOfInterest* point;
        int choice(int a, int b);
    public:
        PointOfInterest* generate();
};