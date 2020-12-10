#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include "trip.hpp"
#include "utility.hpp"
#include <vector>
#include <iostream>

class Client
{
    private:
        vector<Trip*> trips;
    public:
        ~Client();
        void run();
        void listTrips();
        void addTrip();
        void deleteTrip();
        void editTrip();
        void exportTrips();
        void importTrips();
};

#endif
