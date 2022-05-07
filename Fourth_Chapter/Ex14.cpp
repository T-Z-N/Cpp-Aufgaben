//Todo  Modify the program described in the previous exercise to take an input value max and then find all prime numbers from 1 to max

#include <vector>
#include <iostream>

void array_printer(std::vector<int>print_vector,int max_value);

int main()
{
    int max_value = 0;
    std::cout << "Give me some max value \n";
    std::cin >> max_value;
    std::vector<int>bool_number_vektor = {};
    for(int i = 0; i < max_value;++i)
    {
        bool_number_vektor.push_back(1);
    }
    bool_number_vektor[0] = 0;
    bool_number_vektor[1] = 0;
    for(int i = 2;i < max_value;++i)
    {
        if(bool_number_vektor[i] == 1)
        {
            int j = 2;
            while(i*j < max_value)
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
