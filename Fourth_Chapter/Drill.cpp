//
// Created by STA-G on 11.04.2022.
//

#include <iostream>

int main (void)
{
    double first = 0;
    double second = 0;
    double div_val_f = first - second;
    double div_val_s = second - first;
    double div_lim = 1.0/100;



    std::cout << "Please enter two integers \n";

    while(std::cin >> first >> second)
    {
        if(first == '|' || second == '|')
            break;
        else
        {
            if(first > second)
            {
                std::cout << "the larger value is  : " << first << "\n";
                std::cout << "the smaller value is : " << second << "\n";
                if(div_val_f <= div_lim || div_val_s <= div_lim)
                {
                    std::cout << "the numbers are almost equal\n";
                }
            }
            else if(second > first)
            {
                std::cout << "the larger value is  : " << second << "\n";
                std::cout << "the smaller value is : " << first << "\n";
                if(div_val_f <= div_lim || div_val_s <= div_lim)
                {
                    std::cout << "the numbers are almost equal\n";
                }

            }
            else if(first == second)
            {
                std::cout << "the numbers are equal\n";
            }

        }
    }



}