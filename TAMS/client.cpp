#include "client.hpp"
#include <iostream>

Client::~Client()
{
    for (auto trip : trips)
        delete trip;
    trips.clear();
}

void Client::run()
{
    int m_choice = 0;
    while (m_choice != 7)
    {
        std::cout << "\nWelcome to the Travel Agent Management System\n"
        "=============================================\n" 
        "1. Add New Trip\n"
        "2. Delete Existing Trip\n"
        "3. Edit Exiting Trip\n"
        "4. List Exiting Trips\n"
        "5. Export Trips To File\n"
        "6. Import Trips From File\n"
        "7. Quit \n";

        m_choice = choice(1, 7);
        switch(m_choice)
        {
            case 1:
                addTrip();
                break;
            case 2:
                deleteTrip();
                break;
            case 3:
                editTrip();
                break;
            case 4:
                listTrips();
                break;
            case 5:
                exportTrips();
                break;
            case 6:
                importTrips();
                break;
        }
    }
}

void Client::listTrips()
{
    std::cout << "List Trips\n";
    int size = trips.size();
    if (!size)
    {
        std::cout << "There are currently no trips in the database";
    }
    else
    {
        for (int i = 0; i < size; ++i)
        {
            std::cout << "Trip " << i + 1 << ":\n";
            trips.at(i)->printName();
            trips.at(i)->printInfo();
            std::cout << '\n';
        }
    }
}

void Client::addTrip()
{
    std::cout << "Add new trip\n";
    Trip* newTrip = new Trip();
    newTrip->customize();
    trips.push_back(newTrip);
}

void Client::deleteTrip()
{
    std::cout << "Delete trip\n";
    int size = trips.size();
    if (!size)
    {
        std::cout << "There are currently no trips in the database";
    }
    else
    {
        for (int i = 0; i < size; ++i)
        {
            std::cout << "Trip " << i + 1 << ":\n";
            trips.at(i)->printName();
            std::cout << '\n';
        }
    }

    int index = choice(1, trips.size());
    delete vec.at(index);
    vec.erase(vec.begin() + (index - 1));
}

void Client::editTrip()
{
    std::cout << "Not Implemented\n";
}

void Client::exportTrips()
{
    std::cout << "Not Implemented\n";
}

void Client::importTrips()
{
    std::cout << "Not Implemented\n";
}
