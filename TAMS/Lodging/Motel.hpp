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
    void getDetails()
    {
        cout << "Lodging: " << typeOfLodging << endl;
        Lodging::getDetails();
    }
};

#endif