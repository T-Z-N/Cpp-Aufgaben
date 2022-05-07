//Todo 12. Modify the program described in the previous exercise to take an input value max and then find all prime numbers from 1 to max

#include <vector>
#include <stdlib.h>
#include <iostream>

bool prime_checker(int a);
int prime_giver(int maximum_value);

int main()
{
    int maximum_value = 0;
    std::cout << "Give me maximum value \n";
    std::cin >> maximum_value;
    prime_giver(maximum_value);
}

int prime_giver(int maximum_value)
{
    std::vector<int>prime_numbers;
    for(int i = 2;i < maximum_value;++i)
    {
        if(prime_checker(i))
        {
            prime_numbers.push_back(i);
        }
        else
            continue;
    }
    for(int x : prime_numbers)
        std::cout << x <<'\n';
}
bool prime_checker(int a)
{
    if(a == 2)
    {
        return true;
    }
    else
    {
        for(int i = 2;i < a;++i)
        {
            if(a % i == 0 && a != i)
                return false;
        }
        return true;
    }
}//
// Created by STA-G on 7.05.2022.
//
