#include "../POI/PointOfInterest.hpp"
#include "../Lodging/Lodging.hpp"
#include "../Transportation/PointOfInterest.hpp"

class PriceVisitor {
    protected:
        double total_price;
    public:
        PriceVisitor() : total_price(0) { }
        virtual void visit(PointOfInterest*) = 0;
        virtual void visit(Lodging*) = 0;
        virtual void visit(Ticket*) = 0;
        double getTotalPrice();
};

class StandardPrice : public PriceVisitor {
    public:
        StandardPrice() : PriceVisitor() { }
        virtual void visit(PointOfInterest*) override;
        virtual void visit(Lodging*) override;
        virtual void visit(Ticket*) override;
};

class CheapPrice : public PriceVisitor {
    public:
        CheapPrice() : PriceVisitor() { }
        virtual void visit(PointOfInterest*) override;
        virtual void visit(Lodging*) override;
        virtual void visit(Ticket*) override;
};

class ExpensivePrice : public PriceVisitor {
    public:
        ExpensivePrice() : PriceVisitor() { }
        virtual void visit(PointOfInterest*) override;
        virtual void visit(Lodging*) override;
        virtual void visit(Ticket*) override;
};