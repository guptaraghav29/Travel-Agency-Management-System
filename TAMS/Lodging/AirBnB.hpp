#ifndef _AIRBNB_HPP_
#define _AIRBNB_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Lodging.hpp"

using namespace std;

class AirBnB : public Lodging
{
public:
    AirBnB(string typeOfLodging, string address, double rating, vector<string> amenities, string phoneNumber, vector<string> dining,  double price) 
        : Lodging(typeOfLodging, address, rating, amenities, phoneNumber, dining, price) {}
    void getDetails()
    {
        cout << "Lodging: " << typeOfLodging << endl;
        Lodging::getDetails();
    }
};

#endif