#ifndef _ROUTE_HPP_
#define _ROUTE_HPP_

#include <string>

using namespace std;

class Route {
    protected:
        string origin;
        string destination;
        string date;
        string time;
        string company;
        double duration;
        double distance;

    public:
        Route() {}
        void getInput() {
            cout << "Enter origin: " << endl;
            getline(cin, origin);
            cout << "Enter destination: " << endl;
            getline(cin, destination);
            cout << "Enter date: " << endl;
            getline(cin, date);
            cout << "Enter time: " << endl;
            getline(cin, time);
            cout << "Enter company: " << endl;
            getline(cin, company);
            cout << "Enter duration: " << endl;
            cin >> duration;
            cout << "Enter distance: " << endl;
            cin >> distance;
        }

        Route(string origin, string destination, string date, string time, string company, double duration, double distance) {
            this->origin = origin;
            this->destination = destination;
            this->date = date;
            this->time = time;
            this->company = company;
            this->duration = duration;
            this->distance = distance;
        }
        virtual void outputInfo() = 0;
        virtual string getGenInfo() = 0;
        virtual string getSpecificInfo() = 0;
        double getDistance() {return distance;}
};

#endif