#ifndef __TRANSPORTATION__
#define __TRANSPORTATION__

class Transportation
{
    private:
        Route* route;
        Ticket* ticket;
    public:
        Transportation(Route* r, Ticket* t) : route(r), ticket(t) {}
        ~Transportation() { delete route; delete ticket; }
        
        Route* getRoute()
        {
            return route;
        }
        
        Ticket* getTicket()
        {
            return ticket;
        }
        
        void getInfo()
        {
            route->outputInfo();
            std::cout << "seat number: " << ticket->getSeatNum() << std::endl;
        }

        double getPrice()
        {
            return route->getDistance() / 6 * ticket->multipler();
        }

        void accept(PriceVisitor* visitor) { visitor->visit(this); }

}

#endif // __TRANSPORTATION__