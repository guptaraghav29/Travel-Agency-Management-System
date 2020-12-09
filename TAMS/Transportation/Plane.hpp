#ifndef _PLANE_HPP_
#define _PLANE_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "TransportationFactory.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"
#include "Transportation.hpp"

class PlaneEconomy : public TransportationFactory {
    public:
        Transportation* generate() {
            return new Transportation(new AirRoute(), new Economy());
        }
};

class PlaneFirst : public TransportationFactory {
    public:
        Transportation* generate() {
            return new Transportation(new AirRoute(), new First());
        }
};

#endif