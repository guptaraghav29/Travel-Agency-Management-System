#include "POIFactory.hpp"
#include <limits>

int POIFactory::choice(int a, int b)
{
    int choice;
    bool valid = false;
    do
    {
        std::cout << "Enter choice (" << a << " - " << b << "): ";
        std::cin >> choice;
        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (choice >= a && choice <= b)
            valid = true;
    } while (!valid);
    return choice;
}

PointOfInterest* POIFactory::generate()
{
    std::cout << "Enter point of interest name (e.g., Joe's Pizza Kitchen):\n";
    std::string name;
    std::getline(std::cin, name, '\n');
    std::cout << '\n';

    std::cout << "Enter point of interest type (e.g., Restaurant, Museum):\n";
    std::string type;
    std::getline(std::cin, type, '\n');
    std::cout << '\n';

    std::cout << "Enter point of interest cost (e.g., 19.99, 50.00):\n";
    double price;
    std::cin >> price;
    std::cin.ignore();
    std::cout << '\n';

    point = new GenericPOI(name, type, price);
    

    while (true)
    {
        std::cout << "Add extra information:\n1. Add phone number\n2. Add address\n3. Add rating\n4. Add description\n5. Add business hours\n6. Finsh\n";
        int c = choice(1, 6);
        if (c == 6)
            break;
        std::cin.ignore();
        switch(c)
        {
            case 1:
            {
                std::string number;
                std::cout << "Enter phone number (e.g., 555-5555):\n";
                std::getline(std::cin, number, '\n');
                point = new PhoneDecorator(point, number);
                break;
            }
            case 2:
            {
                std::string address;
                std::cout << "Enter address (e.g., 123 Main Street, New York, NY 10030):\n";
                std::getline(std::cin, address, '\n');
                point = new AddressDecorator(point, address);
                break;
            }
            case 3:
            {
                double rating;
                std::cout << "Enter rating (e.g., 5.0):\n";
                std::cin >> rating;
                std::cin.ignore();
                point = new RatingDecorator(point, rating);
                break;
            }
            case 4:
            {
                std::string description;
                std::cout << "Enter description (e.g., The Statue of Liberty is a colossal neoclassical sculpture on Liberty Island in New York Harbor):\n";
                std::getline(std::cin, description, '\n');
                point = new DescriptionDecorator(point, description);
                break;
            }
            case 5:
            {
                std::string hours;
                std::cout << "Enter business hours (e.g., 5AM–11PM):\n";
                std::getline(std::cin, hours, '\n');
                point = new TimeDecorator(point, hours);
                break;
            }
        }
        std::cout << '\n';
    }
    
    return point;
}