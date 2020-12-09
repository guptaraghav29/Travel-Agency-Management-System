#ifndef _TRAIN_HPP_
#define _TRAIN_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "TransportationFactory.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"

using namespace std;

class TrainEconomy : public TransportationFactory {
    public:
        generate() {
            return new Transportation(new TrainRoute(), new Economy());
        }

        Route* getRoute() {
            return new TrainRoute();
        }
        Ticket* getTicket(){
            return new Economy();
        }
};

class TrainFirst : public TransportationFactory {
    public:
        generate() {
            return new Transportation(new TrainRoute(), new First());
        }

        Route* getRoute() {
            return new TrainRoute();
        }
        Ticket* getTicket(){
            return new First();
        }
};

#endif