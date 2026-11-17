#include "randomNumber.h"
#include <iostream>
#include <limits>
 double difficulty = 0;
 
int main()
{


  do
  {
    std::cout << "Do you want to use 3 or 4 bands?\n";
     if(!(std::cin >> difficulty))
     {
       std::cout << "That's not a number! You fool!\n";
       std::cin.clear();
       std::cin.ignore(20000,'\n');
     }
     else if(difficulty != 3 && difficulty != 4)
     {
       std::cout << "That's not 3 or 4. Kiddo.\n";
     }


  }while(difficulty != 3 && difficulty != 4);
 

  RandomNumberGenerator resistor;

    std::cout << "Band 1: " << resistor.getFirstBand() << '\n';
    std::cout << "Band 2: " << resistor.getSecondBand() << '\n';
    if (difficulty == 4)
    {
      std::cout << "Band 3:" << resistor.getThirdBand() << '\n';
    }
    std::cout << "Multiplier: " << resistor.getMultiplierBand() << '\n';
    std::cout << "Total: " << resistor.getTotal() << " ohms\n";

    return 0;


}
