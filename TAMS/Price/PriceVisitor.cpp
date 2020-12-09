#include "PriceVisitor.hpp"
#include "../PointOfInterest/PointOfInterest.hpp"
#include "../Lodging/Lodging.hpp"
#include "../Transportation/Transportation.hpp"

double PriceVisitor::getTotalPrice() { return total_price; };

void StandardPrice::visit(PointOfInterest* poi) { total_price += poi->getPrice() * 1.10; }
void StandardPrice::visit(Lodging* lod) { total_price += lod->getPrice() * 1.10; }
void StandardPrice::visit(Transportation* tra) { total_price += tra->getPrice() * 1.10; }

void CheapPrice::visit(PointOfInterest* poi) { total_price += poi->getPrice() * 1.05; }
void CheapPrice::visit(Lodging* lod) { total_price += lod->getPrice() * 1.05; }
void CheapPrice::visit(Transportation* tra) { total_price += tra->getPrice() * 1.05; }

void ExpensivePrice::visit(PointOfInterest* poi) { total_price += poi->getPrice() * 1.15; }
void ExpensivePrice::visit(Lodging* lod) { total_price += lod->getPrice() * 1.15; }
void ExpensivePrice::visit(Transportation* tra) { total_price += tra->getPrice() * 1.15; }