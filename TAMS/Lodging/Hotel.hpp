#ifndef _HOTEL_HPP_
#define _HOTEL_HPP_
#include "Lodging.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

class Hotel : public Lodging
{
public:
    Hotel(string typeOfLodging, string address, double rating, vector<string> amenities, string phoneNumber, vector<string> dining,  double price) 
        : Lodging(typeOfLodging, address, rating, amenities, phoneNumber, dining, price) {}
    void getDetails()
    {
        cout << "Lodging: " << typeOfLodging << endl;
        Lodging::getDetails();
    }

    virtual string getTypeOfLodging()
    {
        return typeOfLodging;
    };

    virtual string getAddress()
    {
        return address;
    };

    virtual double getRating()
    {
        return rating;
    };

    virtual vector<string> getAmenities()
    {
        return amenities;
    };

    virtual string getPhoneNumber()
    {
        return phoneNumber;
    };

    virtual vector<string> getDining()
    {
        return dining;
    };

    virtual double getPrice()
    {
        return price;
    };
};

#endif