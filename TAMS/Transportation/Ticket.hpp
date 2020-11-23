#ifndef _TICKET_HPP_
#define _TICKET_HPP_

using namespace std;

class Ticket {
    private:
        double price;
        string seat;

    public:
        double getPrice();
        void accept(visitor);

};

#endif