//
// Created by STA-G on 11.04.2022.
//
//Implement square() without using the multiplication operator; that is, do the x*x by repeated addition (start a variable result at 0 and add x to it x times).
// Then run some version of “the first program” using that square().
#include <iostream>

int square(int number)
{
    int result = 0;
    for(int i = 0; i < number; ++i)
    {
        result += number;
    }
    return result;
}



int main(void)
{
    int result = square(5);
    std::cout << result;


}