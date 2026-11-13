//super duper mega advanced circunference calculator
#include <iostream>

int main()
{
   //math loop
   while (true)
   {
   
   //pi constant
   const double PI = 3.1415926535;

   //radius
   double r;
   std::cout << std::endl << "Whats the radius of your circunference in centimeters? ";
   std::cin  >>  r;

   //checks if the input is positive
   if (r <= -1) 
   {
      std::cerr << std::endl << "type a positive number!" << std::endl;
      continue;
   }
   //clears the cache
    if (std::cin.fail()) 
    {
      std::cin.clear(); 
      std::cin.ignore(10000, '\n'); 
      continue;
    }

   //circumference
   double circumference = 2*PI*r;
   std::cout << "Your circunference is: " << circumference << " cm" << std::endl; 
   std::cin.clear();  
   }

return 0;
}
