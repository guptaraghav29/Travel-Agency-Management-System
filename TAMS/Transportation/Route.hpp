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
        Route()
        {
            cout << "Enter origin (e.g, Los Angeles): " << endl;
            getline(cin, origin);
            cout << "Enter destination (e.g, Paris): " << endl;
            getline(cin, destination);
            cout << "Enter date (e.g, 2020-12-25): " << endl;
            getline(cin, date);
            cout << "Enter time (e.g, 13:44): " << endl;
            getline(cin, time);
            cout << "Enter company (e.g., Amtrak, Qatar Airways): " << endl;
            getline(cin, company);
            cout << "Enter duration minutes (e.g, 366): " << endl;
            cin >> duration;
            cin.ignore();
            cout << "Enter distance kilometers (e.g, 1759): " << endl;
            cin >> distance;
            cin.ignore();
        }

        virtual ~Route() { }
        
        // For unit tests
        Route(string origin, string destination, string date, string time, string company, double duration, double distance) {
            this->origin = origin;
            this->destination = destination;
            this->date = date;
            this->time = time;
            this->company = company;
            this->duration = duration;
            this->distance = distance;
        }

        virtual void outputInfo()
        {
            cout << "origin: " << origin << endl;
            cout << "destination: " << destination << endl;
            cout << "date: " << date << endl;
            cout << "time: " << time << endl;        
            cout << "company: " << company << endl;
            cout << "duration: " << duration << endl;
            cout << "distance: " << distance << endl;
        }

        virtual string getGenInfo() = 0;
        virtual string getSpecificInfo() = 0;
        double getDistance() {return distance;}
};

#endif