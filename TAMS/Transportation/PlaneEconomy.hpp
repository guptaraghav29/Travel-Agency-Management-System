#ifndef _PLANEECONOMY_HPP_
#define _PLANEECONOMY_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "TransportationFactory.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"

class PlaneEconomy : public TransportationFactory {
    public:
        Route* getRoute() {
            return new AirRoute();
        }
        Ticket* getTicket() {
            return new Economy();
        }
};

#endif