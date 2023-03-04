#include <iostream>
#include "Toy.h"

// Car 
void Car::prepareParts(){ std::cout<<"Prepare Car Parts"<<std::endl;}
void Car::combineParts(){ std::cout<<"Combine Car Parts"<<std::endl;}
void Car::assembleParts(){ std::cout<<"Assemble Car Parts"<<std::endl;}
void Car::applyLabel(){ std::cout<<"Applying Car Parts"<<std::endl;}
void Car::showProduct(){ std::cout<<"Name : "<<_name<<"\n"<<"Price : "<<_price<<std::endl;}

// Bike
void Bike::prepareParts(){ std::cout<<"Prepare Bike Parts"<<std::endl;}
void Bike::combineParts(){ std::cout<<"Combine Bike Parts"<<std::endl;}
void Bike::assembleParts(){ std::cout<<"Assemble Bike Parts"<<std::endl;}
void Bike::applyLabel(){ std::cout<<"Applying Bike Parts"<<std::endl;}
void Bike::showProduct(){ std::cout<<"Name : "<<_name<<"\n"<<"Price : "<<_price<<std::endl;}

// Plane
void Plane::prepareParts(){ std::cout<<"Prepare Plane Parts"<<std::endl;}
void Plane::combineParts(){ std::cout<<"Combine Plane Parts"<<std::endl;}
void Plane::assembleParts(){ std::cout<<"Assemble Plane Parts"<<std::endl;}
void Plane::applyLabel(){ std::cout<<"Applying Plane Parts"<<std::endl;}
void Plane::showProduct(){ std::cout<<"Name : "<<_name<<"\n"<<"Price : "<<_price<<std::endl;}