//
// Created by STA-G on 7.04.2022.
//


//Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2.
// When the user inputs a number, the program should print out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and
// write out not a number I know if the user enters something that doesn’t correspond, such as stupid computer!.

//Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine
#include <iostream>
#include <typeinfo>
bool check_number(std::string str) {
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return true;
    return false;
}

int main(void)
{
    std::string value = " ";
    std::cout << "Please enter a value \n";
    std::cin >> value;

    if(check_number(value)) {
        if (value == "Zero" || value == "zero") {
            std::cout << 0;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "One" || value == "one") {
            std::cout << 1;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Two" || value == "two") {
            std::cout << 2;

        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Three" || value == "three") {
            std::cout << 3;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Four" || value == "four") {
            std::cout << 4;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Five" || value == "five") {
            std::cout << 5;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Six" || value == "six") {
            std::cout << 6;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Seven" || value == "seven") {
            std::cout << 7;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Eight" || value == "eight") {
            std::cout << 8;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }
        if (value == "Nine" || value == "nine") {
            std::cout << 9;
        }
        else {
            std::cout << "not a number I know";
            return 1;
        }

    }
    else
    {
        std::cout << value;
    }

}

