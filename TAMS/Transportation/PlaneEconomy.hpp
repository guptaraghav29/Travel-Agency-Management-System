#ifndef _PLANEECONOMY_HPP_
#define _PLANEECONOMY_HPP_

class PlaneEconomy : public TransportationFactory {
    public:
        Route getRoute();
        Ticket getTicket();
};

#endif