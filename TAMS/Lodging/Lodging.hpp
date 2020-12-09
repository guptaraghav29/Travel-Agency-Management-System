#ifndef _LODGING_HPP_
#define _LODGING_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
        this->typeOfLodging = typeOfLodging;
        this->address = address;
        this->rating = rating;
        this->amenities = amenities;
        this->phoneNumber = phoneNumber;
        this->dining = dining;
        this->price = price;
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
        cout << "Address: " << address << endl;
        cout << "Rating: " << rating << endl;
        for (int unsigned i = 0; i < amenities.size(); i++)
        {
            cout << "Amenity #" << (i + 1) << ": " << amenities.at(i) << endl;
        }
        cout << phoneNumber << endl;
        for (int unsigned i = 0; i < dining.size(); i++)
        {
            cout << "Dining location #" << (i + 1) << ": " << dining.at(i) << endl;
        }
        cout << price << endl;
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