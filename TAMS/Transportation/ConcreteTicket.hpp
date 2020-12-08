#ifndef _CONCRETETICKET_HPP_
#define _CONCRETETICKET_HPP_

#include "Ticket.hpp"
#include <string>
#include <iostream>
using namespace std;

class Economy : public Ticket
{
public:
    double multiplier()
    {
        return 1.0;
    }

    string getSeatNum()
    {
        return seat_num;
    }
};

class First : public Ticket
{
public:
    double multiplier()
    {
        return 2.0;
    }

    string getSeatNum()
    {
        return seat_num;
    }
};

#endif