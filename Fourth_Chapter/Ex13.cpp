//Todo Create a program to find all the prime numbers between 1 and 100. There is a classic method for doing this, called the “Sieve of Eratosthenes.”
// If you don’t know that method, get on the web and look it up. Write your program using this method


#include <vector>
#include <iostream>

void array_printer(std::vector<int>print_vector,int max_value);

int main()
{
    int max_value = 100;
    std::vector<int>bool_number_vektor = {};
    for(int i = 0; i < 100;++i)
    {
        bool_number_vektor.push_back(1);
    }
    bool_number_vektor[0] = 0;
    bool_number_vektor[1] = 0;
    for(int i = 2;i < 100;++i)
    {
        if(bool_number_vektor[i] == 1)
        {
            int j = 2;
            while(i*j < 100)
            {
                bool_number_vektor[i*j] = 0;
                ++j;
            }
        }
    }
    array_printer(bool_number_vektor,max_value);
}
void array_printer(std::vector<int>print_vector,int max_value)
{
    for(int i = 0;i < max_value;++i)
    {
        if(print_vector[i]==1)
        {
            std::cout << "This is a prime number: " << i << "\n";
        }
        else
            continue;
    }
}
