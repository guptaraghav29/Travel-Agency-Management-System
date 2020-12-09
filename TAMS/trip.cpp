#include "trip.hpp"

Trip::~Trip()
{
    for (auto t : transportation)
        delete t;
    for (auto p : points)
        delete p;
    for (auto l : lodging)
        delete l;
}

void Trip::customize()
{
    int m_choice = 0;
    while (m_choice != 4)
    {
        std::cout << "Customize trip\n"
        "=============================================\n" 
        "1. Add New Transportation\n"
        "2. Add New Point Of Interest\n"
        "3. Add New Lodging\n"
        "4. Quit \n";
        m_choice = choice(1, 4)
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
}

void Trip::addTransportation()
{
    TransportationFactory* factory;
    
    std::cout << "Type of transport:\n1. Air\n2. Cruise\n3. Train\n" << std::endl;
    int type = choice(1, 3);
    std::cout << "Type of ticket:\n1. Economy\n2. First\n" << std::endl;
    int ticket = choice(1, 2);

    if (type == 1 && ticket == 1) // Economy Air
        factory = new PlaneEconomy();
    else if (type == 1 && ticket == 2) // First class Air
        factory = new PlaneFirst();
    else if (type == 2 && ticket == 1) // Economy class Cruise
        factory = new CruiseEconomy();
    else if (type == 2 && ticket == 2) // First class Cruise
        factory = new CruiseSuite();
    else if (type == 3 && ticket == 1) // Economy class Train
        factory = new TrainEconomy();
    else if (type == 3 && ticket == 2) // First class Train
        factory = new TrainFirst();

    Transportation* newTransport = factory->generate();
    transportation.push_back(newTransport);
}

void Trip::addPointOfInterest()
{
    POIFactory* factory = new POIFactory();
    PointOfInterest* newPoint = factory->generate();
    points.push_back(newPoint);
}

void Trip::addLodging()
{
    LodgingFactory* factory = new LodgingFactory();
    Lodging* newLodging = factory->generate();
    lodging.push_back(newLodging);
}

void Trip::printName()
{ 
    std:cout << name << '\n';
}

void Trip::printInfo()
{
    std::cout << "Transportation\n";
    for (auto t : transportation)
        t->getInfo();

    std::cout << "Points of Interest\n";
    for (auto p : points)
        p->getInfo();

    std::cout << "Lodging\n";
    for (auto l : lodging)
        l->getInfo();
}