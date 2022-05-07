//Todo Create a program to find all the prime numbers between 1 and 100.
// One way to do this is to write a function that will check if a number is prime (i.e., see if the number can be divided by a prime number smaller than itself)
// using a vector of primes in order (so that if the vector is called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.).
// Then write a loop that goes from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a vector.
// Write another loop that lists the primes you found.
// You might check your result by comparing your vector of prime numbers with primes. Consider 2 the first prime.

#include <vector>
#include <stdlib.h>
#include <iostream>

bool prime_checker(int a);
int prime_giver();

int main()
{
    prime_giver();
}

int prime_giver()
{
    std::vector<int>prime_numbers;
    for(int i = 2;i < 100;++i)
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
}