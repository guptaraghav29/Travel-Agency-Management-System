#ifndef _TICKET_HPP_
#define _TICKET_HPP_

using namespace std;

class Ticket
{
protected:
    string seat_num;
    string seat_type;
public:
    virtual ~Ticket();
    string getSeatNum();
    virtual double multiplier() = 0;
    virtual string getSeatType() = 0;
};

#endif