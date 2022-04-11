//
// Created by STA-G on 9.04.2022.
//
#include <iostream>

int square(int b)
{
    int a = b;
    for(int i=1;i < b;i++)
    {
         a +=b;
    }
    return a;
}
int main(void)
{
    int b = 0;
    std::cout << "Enter a number to be squared\n";
    std::cin >> b;
    std::cout << square(b);

}