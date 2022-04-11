//
// Created by STA-G on 7.04.2022.
//
#include <iostream>
//Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and complete.
// In other words, don’t just output yes or no. Your output should stand alone, like The value 4 is an even number.
int main(void)
{
    int value  = 0;
    std::cout << "Please enter a value: \n";
    std::cin >> value;
    int reminder = value % 2;
    if(reminder == 0)
    {
        std::cout << "The value" << value << " is an even number";
    }
    else
    {
        std::cout << "The value" << value << " is an odd number";

    }



}