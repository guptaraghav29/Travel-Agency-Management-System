#ifndef _TICKET_HPP_
#define _TICKET_HPP_

using namespace std;

class Ticket
{
protected:
    string seat;

public:
    //virtual Ticket* getTicket() = 0;
    virtual double multiplier() = 0;
    virtual string getSeat() = 0;
    // void accept();
};

#endif