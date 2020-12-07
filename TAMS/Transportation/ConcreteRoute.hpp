#ifndef _CONCRETEROUTE_HPP_
#define _CONCRETEROUTE_HPP_

#include "Route.hpp"
#include <iostream>
using namespace std;

class AirRoute : public Route
{
public:
    void getRoute()
    {
        cout << "origin: " << origin << endl;
        cout << "destination: " << destination << endl;
        cout << "date: " << date << endl;
        cout << "time: " << time << endl;
        cout << "duration: " << duration << endl;
        cout << "distance: " << distance << endl;
    }
};

class CruiseRoute : public Route
{
public:
    void getRoute()
    {
        cout << "origin: " << origin << endl;
        cout << "destination: " << destination << endl;
        cout << "date: " << date << endl;
        cout << "time: " << time << endl;
        cout << "duration: " << duration << endl;
        cout << "distance: " << distance << endl;
    }
};

class TrainRoute : public Route
{
public:
    void getRoute()
    {
        cout << "origin: " << origin << endl;
        cout << "destination: " << destination << endl;
        cout << "date: " << date << endl;
        cout << "time: " << time << endl;
        cout << "duration: " << duration << endl;
        cout << "distance: " << distance << endl;
    }
};

#endif