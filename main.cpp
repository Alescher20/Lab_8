#include <iostream>
#include "City.h"

int main()
{
   City emptyCity;
   emptyCity.print();
   City firstCity ("Saratov", 1000000, "Russia");
   firstCity.print();
   firstCity.setName("London");
   firstCity.setCountResident(500);
   firstCity.setCountry("Grate Britan");
   firstCity.print();
   std::string pause;
   std::cin >> pause;
    return 0;
}
