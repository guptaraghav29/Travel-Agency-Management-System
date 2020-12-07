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
        double duration;
        double distance;
        
        Route();
};

#endif