#include <iostream>
#include <vector>
#include <random>

//TODO Write a program that plays the game “Rock, Paper, Scissors.”
// If you are not familiar with the game do some research (e.g., on the web using Google). Research is a common task for programmers.
// Use a switch-statement to solve this exercise. Also, the machine should give random answers
// (i.e., select the next rock, paper, or scissors randomly). Real randomness is too hard to provide just now,
// so just build a vector with a sequence of values to be used as “the next value.”
// If you build the vector into the program, it will always play the same game, so maybe you should let the user enter some values.
// Try variations to make it less easy for the user to guess which move the machine will make next.
int main(void)
{
    std::vector<std::string>RPS = {"rock","paper","scissors"};
    std::string user_selection = " ";
    std::cout << "Write rock, paper or scissors!";
    std::cin >> user_selection;
    srand((unsigned) time(nullptr));
    int computer_random_guess = rand() %3;

    switch(computer_random_guess)
    {
        case 0:
            if(user_selection == "rock")
                std::cout  << "TIE";
            else if(user_selection == "paper")
                std::cout << "User Wins against rock!";
            else if(user_selection == "scissors")
                std::cout << "User loses against rock!";
            break;
        case 1:
            if(user_selection == "paper")
                std::cout  << "TIE";
            else if(user_selection == "scissors")
                std::cout << "User Wins against paper!";
            else if(user_selection == "rock")
                std::cout << "User loses against paper!";
            break;
        case 2:
            if(user_selection == "scissors")
                std::cout  << "TIE";
            else if(user_selection == "rock")
                std::cout << "User Wins against scissors!";
            else if(user_selection == "paper")
                std::cout << "User loses against scissors!";
            break;
    }
}
