#include <iostream>
#include "City.h"

City::City()
{
    //ctor
}


City::City (std::string _name, unsigned int _countResidents, std::string _country){
name = _name;
countResidents = _countResidents;
country = _country;
}
void City::setName(std::string _name){
    name = _name;
}

void City::setCountResident (unsigned int _countResidents){
    countResidents = _countResidents;
}

void City::setCountry(std::string _country){
    country = _country;
}

std::string City::getName(){
    return name;
}

unsigned int City::getCountResident(){
    return countResidents;
}

std::string City::getCountry(){
    return country;
}

void City::print(){
std::cout << "Name: " << name
          << "count resident:" << countResidents
          << "country:" << country << std::endl;
}

City::~City()
{
    //dtor
}
