#include <iostream>
//Rewrite your currency converter program from the previous Try this to use a switch-statement.
// Add conversions from yuan and kroner. Which version of the program is easier to write, understand, and modify? Why?

int main(void)
{

        constexpr double yen_to_dollar = 0.0080;
        constexpr double euro_to_dollar = 1.09;
        constexpr double pound_to_dollar = 1.31;
        int amount = 0 ;
        char currency = ' ';

        std::cout << "Please enter your currency  and amount which will be converted to dollars\n";
        std::cin >> currency >> amount;

        switch(currency)
        {
            case 'e':case 'E':
                std::cout << "You have " << yen_to_dollar*amount <<"dollars";
                break;
            case 'd':case 'D':
                std::cout << "You have " << euro_to_dollar*amount <<"dollars";
                break;
            case 'p':case 'P':
                std::cout << "You have " << pound_to_dollar*amount <<"dollars";
                break;
            default:
                std::cout << "Please write legit currency like e d and p";
                break;
        }
}