//
// Created by STA-G on 5.04.2022.
//

#include <iostream>
#include <iomanip>

int main() {
    double val_1 = 0.0;
    double val_2 = 0.0;
    std::cout << "Enter two different numbers \n";
    std::cin >> val_1 >> val_2;
    double val_sum = val_1 + val_2;
    double val_difference = val_1 - val_2;
    double val_product = val_1 * val_2;
    double val_ratio = val_1/val_2;

    //smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
    if(val_1 < val_2)
        std::cout << "First Number is smaller than second number \n";
    if(val_1 > val_2)
        std::cout << "Second Number is smaller than first number \n";
    std::cout << std::fixed<< "The summation of the values are: " << val_sum << "\n"
              << "The difference between the values are: " << val_difference << "\n"
              << "The product of the values are: " << val_product << "\n"
              << "The ratio of the first number to second number is: " << val_ratio << "\n"<< typeid(val_sum).name() ;

}