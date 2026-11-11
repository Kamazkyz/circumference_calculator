//super duper mega advanced circunference calculator
#include <iostream>

int main()
{
   const double PI = 3.1415926535;//pi constant

   //radius
   double r;
   std::cout << "Whats the radius of your circunference in centimeters? ";
   std::cin  >>  r;

   //circumference
   double circumference = 2*PI*r;// total circunference
   std::cout << "Your circunference is: " << circumference << "cm\n"; 

   return 0;
}