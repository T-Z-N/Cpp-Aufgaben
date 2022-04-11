//
// Created by STA-G on 9.04.2022.
//


#include <iostream>
// The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out a table of characters with their corresponding integer values:

int main(void)
{
    char iterator = 'a';
    int counter = 0;
    while(iterator != 'z')
    {
        iterator++;
        ++counter;
        std::cout << " a + " << counter << " gives us " << iterator << "\n";
    }
}