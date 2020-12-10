#ifndef __TRANSPORTATION__
#define __TRANSPORTATION__

#include "Route.hpp"
#include "Ticket.hpp"
#include "ConcreteRoute.hpp"
#include "ConcreteTicket.hpp"
#include "../Price/PriceVisitor.hpp"

class PriceVisitor;

class Transportation
{
    private:
        Route* route;
        Ticket* ticket;
        double price;
    public:
        Transportation(Route* r, Ticket* t) : route(r), ticket(t), price(r->getDistance() / 6 * t->multiplier()) {}
        ~Transportation() { delete route; delete ticket; }
        
        void getInfo()
        {
            route->outputInfo();
            std::cout << "seat number: " << ticket->getSeatNum() << std::endl;
            std::cout << "ticket type: " << ticket->getSeatType() << std::endl;
            std::cout << "Price: " << price << std::endl;
        }

        double getPrice()
        {
            return price;
        }

       void accept(PriceVisitor* visitor) { visitor->visit(this); }

};

#endif