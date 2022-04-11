#include <iostream>

// Write a program in C++ that converts from miles to kilometers.
// Your program should have a reasonable prompt for the user to enter a number of miles. Hint: There are 1.609 kilometers to the mile.
int main() {
   double miles = 0.0;
   double kilometers = 0.0;

   std::cout << "Give me some miles \n";
   std::cin >> miles;
   kilometers = miles * 1.609;
   std::cout << "This much kilometer " << kilometers;


}
