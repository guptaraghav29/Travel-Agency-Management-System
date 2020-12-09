#ifndef __PRICEVISITOR_HPP__
#define __PRICEVISITOR_HPP__



class PointOfInterest;
class Lodging;
class Transportation;

class PriceVisitor {
    protected:
        double total_price;
    public:
        PriceVisitor() : total_price(0) { }
        virtual void visit(PointOfInterest*) = 0;
        virtual void visit(Lodging*) = 0;
        virtual void visit(Transportation*) = 0;
        double getTotalPrice();
};

class StandardPrice : public PriceVisitor {
    public:
        StandardPrice() : PriceVisitor() { }
        virtual void visit(PointOfInterest*) override;
        virtual void visit(Lodging*) override;
        virtual void visit(Transportation*) override;
};

class CheapPrice : public PriceVisitor {
    public:
        CheapPrice() : PriceVisitor() { }
        virtual void visit(PointOfInterest*) override;
        virtual void visit(Lodging*) override;
        virtual void visit(Transportation*) override;
};

class ExpensivePrice : public PriceVisitor {
    public:
        ExpensivePrice() : PriceVisitor() { }
        virtual void visit(PointOfInterest*) override;
        virtual void visit(Lodging*) override;
        virtual void visit(Transportation*) override;
};

#endif
