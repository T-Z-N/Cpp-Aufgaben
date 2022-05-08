//Todo In the drill, you wrote a program that, given a series of numbers, found the max and min of that series.
// The number that appears the most times in a sequence is called the mode. Create a program that finds the mode of a set of positive integers.

//
// Created by STA-G on 11.04.2022.
//

#include <iostream>
#include <vector>
#include <numeric>
double mm_converter(double n, std::string unit);
double mode_finder(std::vector<double>main_vector);
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

    while (std::cin >> first >> unit){

        double div_val_f = std::abs(first - second);
        double div_val_s = std::abs(second - first);
        double largest = 0;
        if (first == '|' || second == '|') {
            std::cout << "Terminated\n";
            break;
        }
        else {
            if(unit == "cm")
            {
                first =first*10;
            }
            else if(unit == "m"){
                first = first*1000;
            }
            else if(unit == "in"){
                first = first*10*2.54;
            }
            else if(unit == "ft"){
                first = first*12*2.54*10;
            }
            else
            {
                std::cout << "Sorry its not acceptable! \n";
                break;
            }
            values.push_back(first);
            std::sort(values.begin(),values.end());
            if (first > second) {
                ++number_of_values;
                largest = first;
                std::cout << "the larger value so far  : " << largest << "mm" << "\n";
                second = first;
                if (div_val_f <= div_lim && second != 0 || div_val_s <= div_lim && second != 0) {
                    std::cout << "the numbers are almost equal\n";
                }
            }
            else if (second > first) {
                ++number_of_values;
                if (largest <= second)
                    largest = second;
                std::cout << "the larger value so far  : " << largest << "mm"<< "\n";
                first = second;
                if (div_val_f <= div_lim && second != 0 || div_val_s <= div_lim && second != 0) {
                    std::cout << "the numbers are almost equal\n";
                }
            }
            else if (first == second) {
                std::cout << "the numbers are equal\n";
            }
        }
    }
    std::sort(values.begin(),values.end());
    std::cout << "Maximum element: " << *max_element(values.begin(), values.end()) << "mm\n";
    std::cout << "Minimum element: " << *min_element(values.begin(), values.end()) << "mm\n";
    std::cout << "Number of values: " << number_of_values << "mm\n";
    std::cout << "All numbers added: " <<  std::accumulate(values.begin(),values.end(),0.0) << "mm\n";
    std::cout << "Mode is :" << mode_finder(values);

}
double mode_finder(std::vector<double>main_vector)
{
    double newMode = main_vector[0];
    double mode_count = 0;
    double temp_count = 0;
    double vector_size =main_vector.size();
    for(int i = 0; i < vector_size;i++)
    {

        if(main_vector[i] == main_vector[i+1])
        {
            ++temp_count;
            if(mode_count < temp_count) {
                mode_count = temp_count;
                newMode = main_vector[i];
            }
        }
        else
        {
            temp_count = 0;
            continue;
        }
    }
    return newMode;
}










