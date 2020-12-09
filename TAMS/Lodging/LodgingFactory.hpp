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

class LogdingFactory
{
public:
    LogdingFactory() {}
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
        cin >> typeOfLodging;

        cout << "Enter an address: " << endl;
        getline(cin, address);

        cout << "Enter an rating (numeric value please, no spaces): " << endl;
        cin >> rating;

        cout << "Enter amenties please (type 0 to quit): " << endl;
        string userInput;
        cin >> userInput;
        while(userInput != "0")
        {
            amenities.push_back(userInput);
            cout << "Enter Amenties please (type 0 to quit): " << endl;
            cin >> userInput;
        }

        cout << "Enter a phone number: " << endl;
        cin >> phoneNumber;

        cout << "Enter dining locations please (type 0 to quit): " << endl;
        string userInput2;
        cin >> userInput2;
        while(userInput != "0")
        {
            dining.push_back(userInput2);
            cout << "Enter Amenties please (type 0 to quit): " << endl;
            cin >> userInput2;
        }

        cout << "Enter a price: " << endl;
        cin >> price;

        Lodging *myLodge;
        if(typeOfLodging == "Hotel")
        {
            myLodge = new Hotel(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
            return myLodge;
        }
        else if(typeOfLodging == "Motel")
        {
            myLodge = new Motel(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
            return myLodge;
        }
        else if(typeOfLodging == "AirBnB")
        {
            myLodge = new AirBnB(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
            return myLodge;
        }
        else if(typeOfLodging == "Resort")
        {
            myLodge = new Resort(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
            return myLodge;
        }
        else
        {
            myLodge = new Lodging(typeOfLodging, address, rating, amenities, phoneNumber, dining, price);
            return myLodge;
        }
        
        return myLodge;
    }
};

#endif
