#include <iostream>
#include <vector>
int divide(int a, int b);
void error(std::string s);

int main() {
    try {
        int a = 3;
        int b = 0;
        int result = 0;
        result = divide(a,b);
        std::cout << result;
    }
    catch(std::exception&e)
    {
        std::cerr << "Runtime_error" <<e.what() <<"\n";
        return 1;
    }
}
int divide(int a, int b)
{
    int result = 0;
    if(b == 0)
        error(" Wtf is this? Write proper integer!");
    result = a/b;
    return result;
}

void error(std::string s)
{
    throw std::runtime_error(s);
}