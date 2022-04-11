//
// Created by STA-G on 7.04.2022.
//
//Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar coins
//(100-cent coins). Query the user separately for the number of each size
//CHAPTER 3 POSTSCRIPT 87
//coin, e.g., “How many pennies do you have?” Then your program should
//print out something like this:
//You have 23 pennies.
//You have 17 nickels.
//You have 14 dimes.
//You have 7 quarters.
//You have 3 half dollars.
//The value of all of your coins is 573 cents.
// Make some improvements: if only one of a coin is reported, make the
//output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
//Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.

#include <iostream>

int main(void)
{
    int pennies,nickels,dimes,quarters,half_dollars,one_dollar_coin,total_pennies = 0;
    double total_dollars = 0.0;
    std::cout << "How many pennies do you have?\n";
    std::cin >> pennies;

    std::cout << "How many nickels do you have?\n";
    std::cin >> nickels;
    std::cout << "How many dimes do you have?\n";
    std::cin >> dimes;
    std::cout << "How many quarters do you have?\n";
    std::cin >> quarters;
    std::cout << "How many half_dollars do you have?\n";
    std::cin >> half_dollars;
    std::cout << "How many one_dollar_coin do you have?\n";
    std::cin >> one_dollar_coin;

    if(nickels == 1)
        std::cout << "You have " << nickels << " nickel\n";
    else
        std::cout << "You have " << nickels << " nickels\n";
    if(dimes == 1)
        std::cout << "You have " << dimes << " dime\n";
    else
        std::cout << "You have " << dimes << " dimes\n";
    if(quarters == 1)
        std::cout << "You have " << quarters << " quarter\n";
    else
        std::cout << "You have " << nickels << " quarters\n";
    if(half_dollars == 1)
        std::cout << "You have " << half_dollars << " half dollar\n";
    else
        std::cout << "You have " << half_dollars << " half dollars\n";
    if(one_dollar_coin == 1)
        std::cout << "You have " << one_dollar_coin << " one dollar coin\n";
    else
        std::cout << "You have " << half_dollars << " one dollar coin\n";
    total_pennies = pennies*1+nickels*5+dimes*10+quarters*25+half_dollars*50+one_dollar_coin*100;
    total_dollars = total_pennies/100.0;


    std::cout << "The value of all of your coins is: $" << total_dollars;

}