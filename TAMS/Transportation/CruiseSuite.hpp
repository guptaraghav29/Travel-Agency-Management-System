#ifndef _CRUISESUITE_HPP_
#define _CRUISESUITE_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "TransportationFactory.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"

class CruiseSuite : public TransportationFactory {
    public:
        Route* getRoute() {
            return new CruiseRoute();
        }
        Ticket* getTicket() {
            return new First();
        }
};


#endif