#ifndef _CRUISE_HPP_
#define _CRUISE_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "TransportationFactory.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"
#include "Transportation.hpp"

class CruiseSuite : public TransportationFactory {
    public:
        Transportation* generate() {
            return new Transportation(new CruiseRoute(), new First());
        }
};

class CruiseEconomy : public TransportationFactory {
    public:
        Transportation* generate() {
            return new Transportation(new CruiseRoute(), new Economy());
        }
};

#endif