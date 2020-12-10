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
    AirRoute() : Route() 
    {
        cout << "Enter flight number:\n";
        getline(cin, flight_num);
        cout << "Enter gate number:\n";
        getline(cin, gate_num);
    }

    // For unit tests
    AirRoute(string origin, string destination, string date, string time, string company, double duration, double distance, string gate_num, string flight_num) 
        : Route(origin, destination, date, time, company, duration, distance) {
            this->gate_num = gate_num;
            this->flight_num = flight_num;
    }

    void outputInfo()
    {
        Route::outputInfo();
        cout << "gate number: " << gate_num << endl;
        cout << "flight number: " << flight_num << endl;
    }

    string getGenInfo() {
        return origin + " " + destination + " " + date + " " + time + " " + company + " " + to_string(duration) + " " + to_string(distance);
    }

    string getSpecificInfo() {
        return gate_num + " " + flight_num;
    }
};

class CruiseRoute : public Route
{
private:
    string pier;
    string ship_name;

public:
    CruiseRoute() : Route()
    {
        cout << "Enter ship name:\n";
        getline(cin, ship_name);
        cout << "Enter pier number:\n";
        getline(cin, pier);
    }

    // For unit tests
    CruiseRoute(string origin, string destination, string date, string time, string company, double duration, double distance, string pier, string ship_name) 
        : Route(origin, destination, date, time, company, duration, distance) {
            this->pier = pier;
            this->ship_name = ship_name;
        }

    void outputInfo()
    {
        Route::outputInfo();
        cout << "pier: " << pier << endl;
        cout << "ship name: " << ship_name << endl;
    }

    string getGenInfo() {
        return origin + " " + destination + " " + date + " " + time + " " + company + " " + to_string(duration) + " " + to_string(distance);
    }

    string getSpecificInfo() {
        return pier + " " + ship_name;
    }
};

class TrainRoute : public Route
{
private:
    string platform;
    string train_num;

public:
    TrainRoute() : Route()
    {
        cout << "Enter train number:\n";
        getline(cin, train_num);
        cout << "Enter platform number:\n";
        getline(cin, platform);
    }

    // For unit tests
    TrainRoute(string origin, string destination, string date, string time, string company, double duration, double distance, string platform, string train_num) 
        : Route(origin, destination, date, time, company, duration, distance) {
            this->platform = platform;
            this->train_num = train_num;
        }

    void outputInfo()
    {
        Route::outputInfo();
        cout << "platform: " << platform << endl;
        cout << "train_num: " << train_num << endl;
    }

    string getGenInfo() {
        return origin + " " + destination + " " + date + " " + time + " " + company + " " + to_string(duration) + " " + to_string(distance);
    }

    string getSpecificInfo() {
        return platform + " " + train_num;
    }
};

#endif