#ifndef _CONCRETETICKET_HPP_
#define _CONCRETETICKET_HPP_

#include "Ticket.hpp"
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

inline string Ticket::getSeatNum()
{
    return seat_num;
}

class Economy : public Ticket
{
public:
    Economy()
    {
        int num = rand() % 25 + 10;
        char letter = (rand() % 7) + 'A';
        seat_num = to_string(num) + letter;
    }

    double multiplier()
    {
        return 1.0;
    }

    string getSeatType()
    {
        return "Economy class";
    }
};

class First : public Ticket
{
public:
    First()
    {
        int num = rand() % 10;
        char letter = (rand() % 5) + 'A';
        seat_num = to_string(num) + letter;
    }

    double multiplier()
    {
        return 1.2;
    }

    string getSeatType()
    {
        return "First class";
    }
};

#endif