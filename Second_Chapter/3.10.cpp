//
// Created by STA-G on 7.04.2022.
//
#include <iostream>
#include <string>
// Write a program that takes an operation followed by two operands and outputs the result. For example:
// + 1003.14* 45

// Read the operation into a string called operation and use an if-statement to figure out which operation the user wants,
// for example, if (operation=="+"). Read the operands into variables of type double.
// Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.

int main(void) {
    std::string operator_1 = " ";
    double value_1 = 0;
    double value_2 = 0;
    double result = 0;
    std::cout << "Which operand do you want to use? \n";
    std::cin >> operator_1;
    std::cout << "Enter the numbers to operate\n";
    std::cin >>value_1 >> value_2;
    if (operator_1 == "+") {
        result = value_1 + value_2;
        std::cout << "Your wanted result is :" << result ;
    }
    if (operator_1 == "-") {
        result = value_1 - value_2;
        std::cout << "Your wanted result is :" << result ;
    }
    if (operator_1 == "/") {
        result = value_1 / value_2;
        std::cout << "Your wanted result is :" << result ;
    }
    if (operator_1 == "*") {
        result = value_1 * value_2;
        std::cout << "Your wanted result is :" << result ;
    }
}