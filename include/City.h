#ifndef CITY_H
#define CITY_H
#include <iostream>


class City
{
    public:
        City();
        City(std::string _name, unsigned int _countResidents, std::string _country);
        void setName(std::string _name);
        void setCountResident(unsigned int _countResidents);
        void setCountry(std::string _country);
        std::string getName();
        unsigned int getCountResident();
        std::string getCountry();
        void print();
        virtual ~City();

    protected:
          std::string name = "empty";
          unsigned int countResidents = 0;
          std::string country = "empty";

    private:

};

#endif // CITY_H

