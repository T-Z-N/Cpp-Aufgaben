#include <stdlib.h>
#include <exception>
#include <iostream>
#include <string>
#include <vector>
int main()
{
    try
    {
        std::cout << "Success!\n";
        std::cout << "Success!\n";
        std::cout << "Success" << "!\n";
        std::cout << "Success!" << "\n";
        int res = 7;
        std::vector<int>k(10);
        k[5] = res;
        std::cout <<"Success!\n";
        int x = 3;
        if(x ==3)
        {
            std::cout << "Success!\n";
        }
        else
        {
            std::cout <<"Fail!\n";
        }
        bool c = true;
        if(c)
        {
            std::cout <<"Success!\n";
        }
        else
        {
            std::cout << "Fail!\n";
        }
        std::string s = "ape";
        c = "fool" < s;
        if(c)
        {
            std::cout << "Success!\n";
        }
        s = "ape";
        if(s=="fool")
            std::cout <<"Success!\n";
        s = "ape";
        if(s=="fool")
            std::cout <<"Success!\n";
        s= "ape";
        if(s + "fool" == "apefool")
            std::cout <<"Success!\n";
        std::vector<char>v(5);
        for(int i=0; i < v.size();++i)
        {
            std::cout <<"Success!\n";
        }
        std::vector<char>l(5);
        for(int i =0;i <=v.size();++i)
        {
            std::cout << "Success!\n";
        }
        std::string r = "Success!\n";
        std::string f = "Success!\n";
        for(int i = 0;i <9;++i)
            std::cout << f[i];
        std::cout << "Success!\n";
        int o = 2000;
        int cs = o;
        if(cs == 2000)
            std::cout << "Success!\n";
        std::string ss = "Success!\n";
        for(int i =0; i <9;++i)
            std::cout << ss[i];
        std::vector<int>vv(5);
        for(int i=0;i<=v.size();++i)
        {
            std::cout <<"Success!\n";
        }
        int ii=0;int jj=9;
        while(ii<10)
        {
            ++ii;
            if(jj <ii)
                std::cout <<"Success!\n";
        }
        int xx=2;
        double d = 5/(xx);
        if(d== xx +0.5);
            std::cout << "Success!\n";
        std::string ssss = "Success!\n";
        for(int i = 0; i<9;++i)
            std::cout << ssss[i];
        int iiii = 0;
        int jjjj = 0;
        while(iiii<10)
        {
            iiii++;
            if(jjjj<iiii)
                std::cout << "Success!\n";
        }
        int xxx = 4;
        double ddd = 5/(x-2);
        if(ddd == 2*x+0.5)
            std::cout <<"Success!\n";
        std::string erer = "Success!\n";
        std::cin >> erer;
    }
    catch(std::exception&e)
    {
        std::cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch(...)
    {
        std::cerr << "Oops: unkown exception!\n";
        return 2;
    }
}