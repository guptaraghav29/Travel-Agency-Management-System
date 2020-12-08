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
        Route();
        Route(string origin, string destination, string date, string time, string company, double duration, double distance);
        virtual void outputInfo() = 0;
};

#endif