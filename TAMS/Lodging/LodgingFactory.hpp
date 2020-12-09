#ifndef _LODGINGFACTORY_HPP_
#define _LODGINGFACTORY_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Lodging.hpp"
#include "Motel.hpp"
#include "Hotel.hpp"
#include "AirBnB.hpp"
#include "Resort.hpp"

using namespace std;

class LodgingFactory
{
public:
    LodgingFactory() {}
    Lodging *generate()
    {
        string typeOfLodging;
        string address;
        double rating;
        vector<string> amenities;
        string phoneNumber;
        vector<string> dining;
        double price;

        cout << "What is the type of Lodging? Enter 'Hotel', 'Motel', 'Resort', or 'AirBnB' please." << endl;
        getline(cin, typeOfLodging);

        cout << "Enter an address: " << endl;
        getline(cin, address);

        cout << "Enter an rating (numeric value please, no spaces): " << endl;
        cin >> rating;
        cin.ignore();

        string userInput;      
        do {
            cout << "Enter Amenties please (type 0 to quit): " << endl;
            getline(cin, userInput);
            amenities.push_back(userInput);
        } while (userInput != "0");
        amenities.pop_back();

        cout << "Enter a phone number: " << endl;
        getline(cin, phoneNumber);

        do {
            cout << "Enter dining locations please (type 0 to quit): " << endl;
            getline(cin, userInput);
            dining.push_back(userInput);
        } while (userInput != "0");
        dining.pop_back();

        cout << "Enter a price: " << endl;
        cin >> price;
        cin.ignore();

        Lodging *myLodge;
        if (typeOfLodging == "Hotel")
        {
            myLodge = new Hotel(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
        }
        else if (typeOfLodging == "Motel")
        {
            myLodge = new Motel(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
        }
        else if (typeOfLodging == "AirBnB")
        {
            myLodge = new AirBnB(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
        }
        else if (typeOfLodging == "Resort")
        {
            myLodge = new Resort(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
        }
        else
        {
            myLodge = new Lodging(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
        }

        return myLodge;
    }
};

#endif
