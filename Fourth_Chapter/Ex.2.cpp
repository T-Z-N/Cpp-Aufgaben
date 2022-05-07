//
// Created by STA-G on 12.04.2022.
//
# include <iostream>
# include <vector>


int main()
{
    int middle_position_1 = 0;
    int middle_position_2 = 0;
    int middle_position_3 = 0;
    std::vector <double>temps;
    std::cout << "Write the temperatures\n";
    for(double temp;std::cin >>temp;)
        temps.push_back(temp);

    double sum = 0;
    for(double x : temps)
        sum +=x;
    std::cout << "Average temperature: " << sum/temps.size() << '\n';

    std::sort(temps.begin(), temps.end());
    middle_position_1 = (temps.size()+1)/2;
    middle_position_2 = temps.size()/2;
    middle_position_3 = (middle_position_1+middle_position_2)/2;
    std::cout << "Middle position is: "<< middle_position_3 <<  "Median  Temperature: "<< temps[middle_position_3]<<'\n';

}