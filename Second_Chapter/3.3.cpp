#include <iostream>

// Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2.
// Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user
int main() {
    int val_1 = 0;
    int val_2 = 0;
    std::cout << "Enter two different numbers \n";
    std::cin >> val_1 >> val_2;
    int val_sum = val_1 + val_2;
    int val_difference = val_1 - val_2;
    int val_product = val_1 * val_2;
    double val_ratio = double(val_1)/double(val_2);

//smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
    if(val_1 < val_2)
        std::cout << "First Number is smaller than second number \n";
    if(val_1 > val_2)
        std::cout << "Second Number is smaller than first number \n";
    std::cout << "The summation of the values are: " << val_sum << "\n"
    << "The difference between the values are: " << val_difference << "\n"
    << "The product of the values are: " << val_product << "\n"
    << "The ratio of the first number to second number is: " << val_ratio << "\n";

}