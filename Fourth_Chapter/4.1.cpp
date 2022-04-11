//
// Created by STA-G on 9.04.2022.
//
//Rewrite the character value example from the previous
// Try this to use a for-statement.
// Then modify your program to also write out a table of the integer values for uppercase letters and digits.

#include <iostream>

int main(void)
{

    int counter = 0;
    for(int i = 'a';i <'z';i++)
    {
        std::cout << " a + " << counter << " gives us " << i << "\n";
        ++counter;
    }


}