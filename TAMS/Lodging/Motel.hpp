#ifndef _MOTEL_HPP_
#define _MOTEL_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Lodging.hpp"

using namespace std;

class Motel : public Lodging
{
public:
    Motel(string typeOfLodging, string address, double rating, vector<string> amenities, string phoneNumber, vector<string> dining,  double price) 
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