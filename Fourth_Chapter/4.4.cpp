//
// Created by STA-G on 9.04.2022.
//
#include <iostream>
#include <vector>



//Write a program that “bleeps” out words that you don’t like; that is, you read in words using cin and print them again on cout.
// If a word is among a few you have defined, you write out BLEEP instead of that word. Start with one “disliked word” such as
// string disliked = “Broccoli”;
// When that works, add a few more

int main(void)
{
    std::vector<std::string>bad_words = {"LOL","BAD","KOKO"};
    std::vector<std::string>words;
    std::cout << "Write some words you chimp\n";
    std::string Check_Words = " ";
    std::cin >>Check_Words;
    for(int j = 0;j < )
    words.push_back(Check_Words);

    for(int i = 0 ;i < words.size();++i)
        std::cout << words[i];

}