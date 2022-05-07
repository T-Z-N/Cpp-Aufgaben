//
// Created by STA-G on 12.04.2022.
//

#include <iostream>
#include <vector>
#include <numeric>
//Read a sequence of double values into a vector.
// Think of each value as the distance between two cities along a given route.
// Compute and print the total distance (the sum of all distances).
// Find and print the smallest and greatest distance between two neighboring cities. Find and print the mean distance between two neighboring cities.
int main()
{
    double first_val = 176.4;
    double second_val = 180.4;
    double third_val = 190.4;
    double forth_val = 201.4;
    double total_dist = 0.0;
    double smallest_dist = 0.0;
    double greatest_dist = 0.0;
    double mean_of_vector = 0.0;
    std::vector <double>cities;
    cities.push_back(first_val);
    cities.push_back(second_val);
    cities.push_back(third_val);
    cities.push_back(forth_val);

    total_dist = std::accumulate(cities.begin(), cities.end(), 0.0);
    smallest_dist = *max_element(cities.begin(), cities.end());
    greatest_dist = *min_element(cities.begin(), cities.end());
    mean_of_vector = total_dist/cities.size();

    std::cout << "Total Distance: " << total_dist << '\n';
    std::cout << "Smallest Distance: " << smallest_dist << '\n';
    std::cout << "Greatest Distance: " << greatest_dist << '\n';
    std::cout << "Mean of a Distances: " << mean_of_vector << '\n';






}