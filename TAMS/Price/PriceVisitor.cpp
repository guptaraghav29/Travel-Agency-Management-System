#include "PriceVisitor.hpp"

double PriceVisitor::getTotalPrice() { return totalPrice; };

virtual void StandardPrice::visit(PointOfInterest* poi) override { totalPrice += poi->getPrice() * 1.10; }
virtual void StandardPrice::visit(Lodging* lod) override { totalPrice += lod->getPrice() * 1.10; }
virtual void StandardPrice::visit(Ticket* tic) override { totalPrice += tic->getPrice() * 1.10; }

virtual void CheapPrice::visit(PointOfInterest* poi) override { totalPrice += poi->getPrice() * 1.05; }
virtual void CheapPrice::visit(Lodging* lod) override { totalPrice += lod->getPrice() * 1.05; }
virtual void CheapPrice::visit(Ticket* tic) override { totalPrice += tic->getPrice() * 1.05; }

virtual void ExpensivePrice::visit(PointOfInterest* poi) override { totalPrice += poi->getPrice() * 1.15; }
virtual void ExpensivePrice::visit(Lodging* lod) override { totalPrice += lod->getPrice() * 1.15; }
virtual void ExpensivePrice::visit(Ticket* tic) override { totalPrice += tic->getPrice() * 1.15; }