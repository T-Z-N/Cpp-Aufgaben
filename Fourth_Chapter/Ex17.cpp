//Todo Write a program that finds the min, max, and mode of a sequence of strings.
#include <string>
#include <vector>
#include <iostream>

std::string mode_finder(std::vector<std::string>main_vector);
std::vector<std::string>string_sequence = {"Ahmet","Celal","Baro", "Dimar", "Koeo","Fiko","Sito","Mior","Celal", "Dimar","Dimar"};
int main ()
{
    std::sort(string_sequence.begin(),string_sequence.end());
    std::cout << "Maximum element: " << *max_element(string_sequence.begin(), string_sequence.end()) << "\n";
    std::cout << "Minimum element: " << *min_element(string_sequence.begin(), string_sequence.end()) << "\n";
    std::cout << "Mode of the string: " << mode_finder(string_sequence) << "\n";
}

std::string mode_finder(std::vector<std::string>main_vector)
{
    std::string newMode = main_vector[0];
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