#ifndef _TRANSPORTATIONFACTORY_HPP_
#define _TRANSPORTATIONFACTORY_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include <string>

class TransportationFactory {
    public:
        virtual Route* getRoute() = 0;
        virtual Ticket* getTicket() = 0;

};

#endif