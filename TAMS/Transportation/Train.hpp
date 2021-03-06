#ifndef _TRAIN_HPP_
#define _TRAIN_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "TransportationFactory.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"
#include "Transportation.hpp"

class TrainEconomy : public TransportationFactory {
    public:
        Transportation* generate() {
            return new Transportation(new TrainRoute(), new Economy());
        }
};

class TrainFirst : public TransportationFactory {
    public:
        Transportation* generate() {
            return new Transportation(new TrainRoute(), new First());
        }
};

#endif