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
    void getDetails()
    {
        cout << "Lodging: " << typeOfLodging << endl;
        Lodging::getDetails();
    }
};

#endif