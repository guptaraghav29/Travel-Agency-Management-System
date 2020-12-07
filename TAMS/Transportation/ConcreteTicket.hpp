#ifndef _CONCRETETICKET_HPP_
#define _CONCRETETICKET_HPP_

#include "Ticket.hpp"
#include <string>
#include <iostream>
using namespace std;

class Economy : public Ticket
{
public:
    virtual double multiplier()
    {
        return 1.0;
    }

    virtual string getSeat()
    {
        return seat;
    }
};

class First : public Ticket
{
public:
    virtual double multiplier()
    {
        return 2.0;
    }

    virtual string getSeat()
    {
        return seat;
    }
};

#endif