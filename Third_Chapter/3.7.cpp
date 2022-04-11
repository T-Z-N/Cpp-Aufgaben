//
// Created by STA-G on 7.04.2022.
//
//Do exercise 6, but with three string values.
//So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck

//Ilk harflerine bakacaz.
//Ilk harfleri ayniysa, o zaman ikinci harflerine bakacaz
//Ikinci harfleri ayniysa, o zaman ücüncü harflerine bakacaz.

#include "iostream"


int main (void)
{
    std::string s_1 = " ";
    std::string s_2 = " ";
    std::string s_3 = " ";

    std::cout << "Enter three different words \n";
    std::cin >> s_1 >> s_2 >> s_3;

    char val_1 = s_1[0];
    char val_2 = s_2[0];
    char val_3 = s_3[0];

    if(val_1 > val_2 && val_2 > val_3 )
        std::cout << s_3 << ',' << s_2 << ',' << s_1;
    if(val_1 > val_3 && val_3 > val_2 )
        std::cout << s_2 << ',' << s_3 << ',' << s_1;
    if(val_2 > val_1 && val_1 > val_3 )
        std::cout << s_3 << ',' << s_1 << ',' << s_2;
    if(val_2 > val_3 && val_3 > val_1 )
        std::cout << s_1 << ',' << s_3 << ',' << s_2;
    if(val_3 > val_1 && val_1 > val_2 )
        std::cout << s_2 << ',' << s_1 << ',' << s_3;
    if(val_3 > val_2 && val_2 > val_1 )
        std::cout << s_1 << ',' << s_2 << ',' << s_3;

    if(val_1 == val_2 && val_1 == val_3)
        std::cout << s_2 << ',' << s_1 << ',' << s_3;
    if(val_1 == val_2 && val_1 !=val_3 && val_1 < val_3 )
        std::cout << s_1 << ',' << s_2 << ',' << s_3;
    if(val_1 == val_2 && val_1 !=val_3 && val_1 > val_3 )
        std::cout << s_3 << ',' << s_2 << ',' << s_1;
    if(val_1 != val_2 && val_1 == val_3 && val_1 < val_2 )
        std::cout << s_1 << ',' << s_3 << ',' << s_2;
    if(val_1 != val_2 && val_1 == val_3 && val_1 > val_2 )
        std::cout << s_2 << ',' << s_3 << ',' << s_1;
    if(val_1 != val_2 && val_2 == val_3 && val_1 > val_2 )
        std::cout << s_2 << ',' << s_3 << ',' << s_1;


}