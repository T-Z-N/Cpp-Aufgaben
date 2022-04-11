#include <iostream>

//Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas.
// So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together.
// So, the input 4 5 4 should give 4, 4, 5


// Permütasyon oldugundan 6 tane cesit olabilir bunla.

int main(void)
{
    int val_1 = 0;
    int val_2 = 0;
    int val_3 = 0;
    std::cout << "Enter three different numbers \n";
    std::cin >> val_1 >> val_2 >> val_3;

    if(val_1 > val_2 && val_2 > val_3 )
    std::cout << val_3 << ',' << val_2 << ',' << val_1;
    if(val_1 > val_3 && val_3 > val_2 )
        std::cout << val_2 << ',' << val_3 << ',' << val_1;
    if(val_2 > val_1 && val_1 > val_3 )
        std::cout << val_3 << ',' << val_1 << ',' << val_2;
    if(val_2 > val_3 && val_3 > val_1 )
        std::cout << val_1 << ',' << val_3 << ',' << val_2;
    if(val_3 > val_1 && val_1 > val_2 )
        std::cout << val_2 << ',' << val_1 << ',' << val_3;
    if(val_3 > val_2 && val_2 > val_1 )
        std::cout << val_1 << ',' << val_2 << ',' << val_3;

    if(val_1 == val_2 && val_1 == val_3)
        std::cout << val_2 << ',' << val_1 << ',' << val_3;
    if(val_1 == val_2 && val_1 !=val_3 && val_1 < val_3 )
        std::cout << val_1 << ',' << val_2 << ',' << val_3;
    if(val_1 == val_2 && val_1 !=val_3 && val_1 > val_3 )
        std::cout << val_3 << ',' << val_2 << ',' << val_1;
    if(val_1 != val_2 && val_1 == val_3 && val_1 < val_2 )
        std::cout << val_1 << ',' << val_3 << ',' << val_2;
    if(val_1 != val_2 && val_1 == val_3 && val_1 > val_2 )
        std::cout << val_2 << ',' << val_3 << ',' << val_1;
    if(val_1 != val_2 && val_2 == val_3 && val_1 > val_2 )
        std::cout << val_2 << ',' << val_3 << ',' << val_1;








}