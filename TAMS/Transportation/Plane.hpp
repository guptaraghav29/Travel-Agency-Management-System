#ifndef _PLANE_HPP_
#define _PLANE_HPP_

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

class PlaneFirst : public TransportationFactory {
    public:
        Route* getRoute() {
            return new AirRoute();
        }
        Ticket* getTicket() {
            return new First();
        }
};

#endif