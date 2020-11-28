#include "PointOfInterest.hpp"

void PointOfInterest::print() { std::cout << getInfo() << '\n'; }
void PointOfInterest::accept(PriceVisitor* visitor) { visitor->visit(this); }

std::string GenericPOI::getInfo() { return type + ": " + name; }
double GenericPOI::getPrice() { return price; }

double InfoDecorator::getPrice() { return poi->getPrice(); }
std::string PhoneDecorator::getInfo() { return poi->getInfo() + "\nPhone Number: " + number; }
std::string DescriptionDecorator::getInfo() { return poi->getInfo() + "\nDescription: " + description; }
std::string RatingDecorator::getInfo() { return poi->getInfo() + "\nRating: " + std::to_string(rating); }
std::string AddressDecorator::getInfo() { return poi->getInfo() + "\nAddress: " + address; }
std::string TimeDecorator::getInfo() { return poi->getInfo() + "\nOpen between: " + time; }