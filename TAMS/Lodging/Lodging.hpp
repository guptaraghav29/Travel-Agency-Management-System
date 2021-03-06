#ifndef _LODGING_HPP_
#define _LODGING_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../Price/PriceVisitor.hpp"

class PriceVisitor;

using namespace std;

class Lodging
{
protected:
    string typeOfLodging;
    string address;
    double rating;
    vector<string> amenities;
    string phoneNumber;
    vector<string> dining;
    double price;

public:
    Lodging()
    {
        this->typeOfLodging = " ";
        this->address = " ";
        this->rating = 0;
        this->amenities = {""};
        this->phoneNumber = " ";
        this->dining = {""};
        this->price = 0;
    }

    Lodging(string typeOfLodging, string address, double rating, vector<string> amenities, string phoneNumber, vector<string> dining, double price)
    {
        this->typeOfLodging = typeOfLodging;
        this->address = address;
        this->rating = rating;
        this->amenities = amenities;
        this->phoneNumber = phoneNumber;
        this->dining = dining;
        this->price = price;
    }

    void getDetails()
    {
        cout << "Type: " << typeOfLodging << endl;
        cout << "Address: " << address << endl;
        cout << "Rating: " << rating << endl;
        for (int unsigned i = 0; i < amenities.size(); i++)
        {
            cout << "Amenity #" << (i + 1) << ": " << amenities.at(i) << endl;
        }
        cout << "Phone numbber: " << phoneNumber << endl;
        for (int unsigned i = 0; i < dining.size(); i++)
        {
            cout << "Dining location #" << (i + 1) << ": " << dining.at(i) << endl;
        }
        cout << "Price: " << price << endl;
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

    void accept(PriceVisitor* visitor) { visitor->visit(this); }
};

#endif