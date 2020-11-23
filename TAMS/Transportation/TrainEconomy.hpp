#ifndef _TRAINECONOMY_HPP_
#define _TRAINECONOMY_HPP_

class TrainEconomy : public TransportationFactory {
    public:
        Route getRoute();
        Ticket getTicket();
};

#endif