#ifndef _TRANSPORTATIONFACTORY_HPP_
#define _TRANSPORTATIONFACTORY_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include <string>

class TransportationFactory {
    public:
        Route* getRoute();
        Ticket* getTicket();

};

#endif