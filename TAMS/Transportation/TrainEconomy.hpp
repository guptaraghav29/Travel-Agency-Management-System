#ifndef _TRAINECONOMY_HPP_
#define _TRAINECONOMY_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "TransportationFactory.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"

using namespace std;

class TrainEconomy : public TransportationFactory {
    public:
        Route* getRoute() {
            return new TrainRoute();
        }
        Ticket* getTicket(){
            return new Economy();
        }
};

#endif