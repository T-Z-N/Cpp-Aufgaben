//
// Created by STA-G on 11.04.2022.
//
//Write a program that “bleeps” out words that you don’t like; that is, you read in words using cin and print them again on cout.
// If a word is among a few you have defined, you write out BLEEP instead of that word. Start with one “disliked word” such as
// string disliked = “Broccoli”;
// When that works, add a few more.

#include <iostream>
#include <vector>

int main(void)
{

    std::vector <std::string> disliked_word;
    disliked_word.push_back("KOKO");
    disliked_word.push_back("koko");
    disliked_word.push_back("Alican");
    disliked_word.push_back("Roto");

    std::cout << "Please say some word \n";
for(std::string something;std::cin>>something;)
    {
    int counter = 0;
    for(int i = 0;i <disliked_word.size();++i){
        if(something == disliked_word[i])
            ++counter;
    }
    if (counter == 0)
        std::cout << something << "\n";
    if (counter >= 1)
        std::cout << "Beep\n";
    }
}