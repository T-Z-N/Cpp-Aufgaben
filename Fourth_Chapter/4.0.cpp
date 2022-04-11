//
// Created by STA-G on 9.04.2022.
//


#include <iostream>
// Use the example above as a model for a program that converts yen, euros, and pounds into dollars. If you like realism, you can find conversion rates on the web.

int main(void)
{

    constexpr double yen_to_dollar = 0.0080;
    constexpr double euro_to_dollar = 1.09;
    constexpr double pound_to_dollar = 1.31;
    int amount = 0 ;
    std::string currency = " ";

    std::cout << "Please enter your currency  and amount which will be converted to dollars\n";
    std::cin >> currency >> amount;

    if(currency == "yen")
        std::cout << "You have " << yen_to_dollar*amount <<"dollars";
    if(currency == "euro")
        std::cout << "You have " << euro_to_dollar*amount <<"dollars";
    if(currency == "pound")
        std::cout << "You have " << pound_to_dollar*amount <<"dollars";
    else
        std::cout << "Please write your currency with small charecters";


}