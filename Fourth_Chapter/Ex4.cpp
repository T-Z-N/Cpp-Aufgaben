//
// Created by STA-G on 12.04.2022.
//
#include <iostream>
#include <vector>

// Write a program to play a numbers guessing game.
// The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is
// (e.g., “Is the number you are thinking of less than 50?”).
// Your program should be able to identify the number after asking no more than seven questions. Hint: Use the < and <= operators and the if-else construct
// Binary Search in C++

#include <iostream>
#include <vector>

int mid_finder(const std::vector <int>& guess);
std::vector<int> vector_filler(std::vector <int> guess_vector);

int main()
{
    std::vector <int> guess_range;
    int minimum = 0;
    int maximum = 0;
    int middle = mid_finder(guess_range);

    guess_range = vector_filler(guess_range);

}

int mid_finder(const std::vector <int>& guess){

    int middle_position_1 = (guess.size()+1)/2;
    int middle_position_2 = guess.size()/2;
    int middle_position_3 = (middle_position_1+middle_position_2)/2;
    return middle_position_3;
}

std::vector<int> vector_filler(std::vector <int> guess_vector)
{
    for(int i = 0; i < guess_vector.size();++i)
    {
        guess_vector[i] = i;
    }
    return guess_vector;
}

int guess_maker(std::vector <int> guess_vector,int minimum, int maximum)
{

}




