#ifndef TOY
#define TOY

#include <string>

class Toy{
    protected:
        std::string _name = "";
        double _price = 0;
    public:
        Toy()=default;
        Toy(std::string name, double price):_name(name), _price(price){}
        virtual void prepareParts()=0;
        virtual void combineParts() = 0;
        virtual void assembleParts() = 0;
        virtual void applyLabel() = 0;
        virtual void showProduct() = 0;
};

class Car:public Toy{
    public:
        Car():Toy("Car", 10){} 
        void prepareParts();
        void combineParts();
        void assembleParts();
        void applyLabel();
        void showProduct();
        ~Car(){};
};

class Bike:public Toy{
    public:
        Bike():Toy("Bike", 20){} 
        void prepareParts();
        void combineParts();
        void assembleParts();
        void applyLabel();
        void showProduct();
        ~Bike(){};
};

class Plane:public Toy{
    public:
        Plane():Toy("Plane", 30){} 
        void prepareParts();
        void combineParts();
        void assembleParts();
        void applyLabel();
        void showProduct();
        ~Plane(){};
};


#endif