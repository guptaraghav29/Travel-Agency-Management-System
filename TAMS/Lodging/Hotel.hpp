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
    void getDetails()
    {
        cout << "Lodging: " << typeOfLodging << endl;
        Lodging::getDetails();
    }
};

#endif