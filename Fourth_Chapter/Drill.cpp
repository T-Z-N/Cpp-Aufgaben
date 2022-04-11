//
// Created by STA-G on 11.04.2022.
//

#include <iostream>
#include <vector>
#include <numeric>
double mm_converter(double n, std::string unit);

int main () {
    double first = 0;
    double second = 0;
    double kopo = 0;
    double div_lim = 1.0 / 100;
    std::string unit = " ";
    double n = 0;
    int number_of_values = 0;
    std::vector<double>values;

    std::cout << "Please enter one number and unit\n";


    // Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered.
    // When the loop ends, print the smallest, the largest, the number of values, and the sum of values.
    // Note that to keep the sum, you have to decide on a unit to use for that sum; use meters.
    while (std::cin >> kopo >> unit){
        if(mm_converter(kopo,unit) == 0 || unit.empty())
        {
            double first =mm_converter(kopo, unit);
            double div_val_f = std::abs(first - second);
            double div_val_s = std::abs(second - first);
            double largest = 0;
            if (first == '|' || second == '|') {
            break;
            }
            else {
                values.push_back(first);
                if (first > second) {
                    ++number_of_values;
                    largest = first;//
                    std::cout << "the larger value so far  : " << largest << "mm" << "\n";
                    if (div_val_f <= div_lim && second != 0 || div_val_s <= div_lim && second != 0) {
                        std::cout << "the numbers are almost equal\n";
                    }
                }
                else if (second > first) {
                    ++number_of_values;
                    if (largest <= second)
                        largest = second;
                    std::cout << "the larger value so far  : " << largest << "mm"<< "\n";
                    if (div_val_f <= div_lim && second != 0 || div_val_s <= div_lim && second != 0) {
                        std::cout << "the numbers are almost equal\n";
                    }
                }
                else if (first == second) {
                    std::cout << "the numbers are equal\n";
                }
            }
            second = first;
        }
        else
        {
            std::cout << "Sorry its not acceptable!";
            break;
        }
    }
    std::cout << "Maximum element" << *max_element(values.begin(), values.end()) << "\n";
    std::cout << "Minimum element" << *min_element(values.begin(), values.end()) << "\n";
    std::cout << "Number of values" << number_of_values << "\n";
    std::cout << "All numbers added" <<  std::accumulate(values.begin(),values.end(),0.0);
}


double mm_converter(double n, std::string unit)
{
    double converted_value = 0;
    if(unit == "cm")
    {
        converted_value =n*10;
    }
    else if(unit == "m"){
        converted_value = n*100;
    }
    else if(unit == "in"){
        converted_value = n*10*2.54;
    }
    else if(unit == "ft"){
        converted_value = n*12*2.54*10;
    }
    else
    {
        converted_value = 0;
    }
    return converted_value;
}




