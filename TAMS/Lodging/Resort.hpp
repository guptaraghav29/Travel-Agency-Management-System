#ifndef _RESORT_HPP_
#define _RESORT_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Lodging.hpp"

using namespace std;

class Resort : public Lodging
{
public:
    void getDetails()
    {
        cout << "Lodging: " << typeOfLodging << endl;
        Lodging::getDetails();
    }
};

#endif