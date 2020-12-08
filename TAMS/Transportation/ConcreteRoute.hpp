#ifndef _CONCRETEROUTE_HPP_
#define _CONCRETEROUTE_HPP_

#include "Route.hpp"
#include <iostream>
using namespace std;

class AirRoute : public Route
{
private:
    string gate_num;
    string flight_num;

public:
    AirRoute() : Route() {}
    AirRoute(string origin, string destination, string date, string time, string company, double duration, double distance, string gate_num, string flight_num) 
        : Route(origin, destination, date, time, company, duration, distance) {}

    void outputInfo()
    {
        cout << "origin: " << origin << endl;
        cout << "destination: " << destination << endl;
        cout << "date: " << date << endl;
        cout << "time: " << time << endl;
        cout << "duration: " << duration << endl;
        cout << "distance: " << distance << endl;
        cout << "gate_num: " << gate_num << endl;
        cout << "flight_num: " << flight_num << endl;
    }
};

class CruiseRoute : public Route
{
private:
    string pier;
    string ship_name;

public:
    CruiseRoute() : Route() {}
    CruiseRoute(string origin, string destination, string date, string time, string company, double duration, double distance, string pier, string ship_name) 
        : Route(origin, destination, date, time, company, duration, distance) {}

    void outputInfo()
    {
        cout << "origin: " << origin << endl;
        cout << "destination: " << destination << endl;
        cout << "date: " << date << endl;
        cout << "time: " << time << endl;
        cout << "company: " << company << endl;
        cout << "duration: " << duration << endl;
        cout << "distance: " << distance << endl;
        cout << "pier: " << pier << endl;
        cout << "ship name: " << ship_name << endl;
    }
};

class TrainRoute : public Route
{
private:
    string platform;
    string train_num;

public:
    TrainRoute() : Route() {}
    TrainRoute(string origin, string destination, string date, string time, string company, double duration, double distance, string platform, string train_num) 
        : Route(origin, destination, date, time, company, duration, distance) {}

    void outputInfo()
    {
        cout << "origin: " << origin << endl;
        cout << "destination: " << destination << endl;
        cout << "date: " << date << endl;
        cout << "time: " << time << endl;
        cout << "company: " << company << endl;
        cout << "duration: " << duration << endl;
        cout << "distance: " << distance << endl;
        cout << "platform: " << platform << endl;
        cout << "train_num: " << train_num << endl;
    }
};

#endif