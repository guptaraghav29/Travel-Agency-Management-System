#ifndef __POINTOFINTEREST_HPP__
#define __POINTOFINTEREST_HPP__

#include <iostream>

class PointOfInterest {
    private:
    public:
        PointOfInterest() { };
        virtual std::string getInfo() = 0;
        virtual double getPrice() = 0;
};

class BasicPOI : public PointOfInterest {
    private:
    public:
        BasicPOI();
        std::string getInfo();
        double getPrice();
};

class POIDecorator : public PointOfInterest {
    private:
        PointOfInterest* poi;
    public:
        POIDecorator(PointOfInterest* point) : poi(point) { };
        std::string getInfo();
        double getPrice();
};

class FoodEstablishment : public POIDecorator {
    private:
    public:
        FoodEstablishment(PointOfInterest* point) : POIDecorator(point) { };
        std::string getInfo();
        double getPrice();
};

class Viewpoint : public POIDecorator {
    private:
    public:
        Viewpoint(PointOfInterest* point) : POIDecorator(point) { };
        std::string getInfo();
        double getPrice();
};

class HistoricSite : public POIDecorator {
    private:
    public:
        HistoricSite(PointOfInterest* point) : POIDecorator(point) { };
        std::string getInfo();
        double getPrice();
};

#endif //__POINTOFINTEREST_HPP__
