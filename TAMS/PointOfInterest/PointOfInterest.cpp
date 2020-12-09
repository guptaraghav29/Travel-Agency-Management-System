#include "PointOfInterest.hpp"

void PointOfInterest::print() { std::cout << getInfo() << '\n'; }
void PointOfInterest::accept(PriceVisitor* visitor) { visitor->visit(this); }

std::string GenericPOI::getInfo()
{
    if (type == "" || name == "") 
        throw std::runtime_error("Name or type cannot be empty!");
    return type + ": " + name; 
}

double GenericPOI::getPrice() 
{ 
    if (price < 0.0)
        throw std::runtime_error("Price cannot be negative!");
    return price; 
}

double InfoDecorator::getPrice() { return poi->getPrice(); }
std::string PhoneDecorator::getInfo() { return poi->getInfo() + "\nPhone Number: " + number; }
std::string DescriptionDecorator::getInfo() { return poi->getInfo() + "\nDescription: " + description; }
std::string RatingDecorator::getInfo() 
{ 
    std::stringstream ss;
    ss << std::fixed << std::setprecision(1) << rating;
    std::string rating_str = ss.str();
    return poi->getInfo() + "\nRating: " + rating_str; 
}
std::string AddressDecorator::getInfo() { return poi->getInfo() + "\nAddress: " + address; }
std::string TimeDecorator::getInfo() { return poi->getInfo() + "\nOpen between: " + time; }