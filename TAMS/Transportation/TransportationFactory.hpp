#ifndef _TRANSPORTATIONFACTORY_HPP_
#define _TRANSPORTATIONFACTORY_HPP_

#include "Route.hpp"
#include "Ticket.hpp"
#include "Transportation.hpp"
#include <string>

class TransportationFactory {
    public:
        virtual Transportation* generate() = 0;
};

#endif