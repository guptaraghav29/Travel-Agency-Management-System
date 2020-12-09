#ifndef _CONCRETETICKET_HPP_
#define _CONCRETETICKET_HPP_

#include "Ticket.hpp"
#include <string>
#include <stdlib.h>
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
        seat_num = to_string(rand() % 100 + 1);
        return seat_num;
    }
};

class First : public Ticket
{
public:
    double multiplier()
    {
        return 1.2;
    }

    string getSeatNum()
    {
        seat_num = to_string(rand() % 100 + 1);
        return seat_num;
    }
};

#endif