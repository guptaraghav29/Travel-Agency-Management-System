#include "trip.hpp"

Trip::~Trip()
{
    for (auto t : transportation)
        delete t;
    transportation.clear();
    for (auto p : points)
        delete p;
    points.clear();
    for (auto l : lodging)
        delete l;
    lodging.clear();
}

void Trip::customize()
{
    std::cout << "Customize trip\n";
    // print options (1-3 + done)
    switch(m_choice)
    {
        case 1:
            addTransportation();
            break;
        case 2:
            addPointOfInterest();
            break;
        case 3:
            addLodging();
            break;
    }
}

void Trip::addTransportation()
{
    Transportation* newTransport = new Transport();
    transportation.push_back(newTransport);
}

void Trip::addPointOfInterest()
{
    PointOfInterest* newPoint = new PointOfInterest();
    points.push_back(newPoint);
}

void Trip::addLodging()
{
    Lodging* newLodging = new Lodging();
    lodging.push_back(newLodging);
}

void Trip::printName() { std:cout << name << '\n'; }

void Trip::printInfo();