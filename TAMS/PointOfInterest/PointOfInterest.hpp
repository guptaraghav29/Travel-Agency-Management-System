#ifndef __POINTOFINTEREST_HPP__
#define __POINTOFINTEREST_HPP__

#include <iostream>
#include <string>
#include <sstream> // For double precision conversion
#include <iomanip> // For double precision conversion
#include "../Price/PriceVisitor.hpp"

class PriceVisitor;

class PointOfInterest {
    protected:
        std::string name;
        std::string type;
        double price;
    public:
        PointOfInterest() { }
        PointOfInterest(std::string n, std::string t, double p) : name(n), type(t), price(p) { }
        virtual ~PointOfInterest() { }
        virtual std::string getInfo() = 0;
        virtual double getPrice() = 0;
        void print();
        void accept(PriceVisitor* visitor);
};

class GenericPOI : public PointOfInterest {
    public:
        GenericPOI(std::string n, std::string t, double p) : PointOfInterest(n, t, p) { };
        virtual std::string getInfo() override;
        virtual double getPrice() override;
};

class InfoDecorator : public PointOfInterest {
    protected:
        PointOfInterest* poi;
    public:
        InfoDecorator(PointOfInterest* point) : poi(point) { };
        virtual ~InfoDecorator() { delete poi; }
        virtual std::string getInfo() = 0;
        virtual double getPrice() override;
};

class PhoneDecorator : public InfoDecorator {
    private:
        std::string number;
    public:
        PhoneDecorator(PointOfInterest* point, std::string n) : InfoDecorator(point), number(n) { };
        virtual std::string getInfo() override;
};

class DescriptionDecorator : public InfoDecorator {
    private:
        std::string description;
    public:
        DescriptionDecorator(PointOfInterest* point, std::string d) : InfoDecorator(point), description(d) { };
        virtual std::string getInfo() override;
};

class RatingDecorator : public InfoDecorator {
    private:
        double rating;
    public:
        RatingDecorator(PointOfInterest* point, double r) : InfoDecorator(point), rating(r) { };
        virtual std::string getInfo() override;
};

class AddressDecorator : public InfoDecorator {
    private:
        std::string address;
    public:
        AddressDecorator(PointOfInterest* point, std::string a) : InfoDecorator(point), address(a) { };
        virtual std::string getInfo() override;
};

class TimeDecorator : public InfoDecorator {
    private:
        std::string time;
    public:
        TimeDecorator(PointOfInterest* point, std::string t) : InfoDecorator(point), time(t) { };
        virtual std::string getInfo() override;
};



#endif //__POINTOFINTEREST_HPP__
