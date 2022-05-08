//Todo Modify the program from exercise 19 so that when you enter a name, the program will output the corresponding score or name not found

#include <vector>
#include <iostream>

bool same_element_checker(std::vector<std::string>name_vector);
bool name_is_avaliable(std::vector<std::string>name_vector,std::string user_input);
double score_giver(std::vector<std::string>name_vector,std::vector<double>score_vector,std::string user_input);

int main()
{
    std::string name = "Noname";
    double score = 0.0;
    std::vector <std::string>name_vector;
    std::vector <double>score_vector;
    name_vector.push_back(name);
    score_vector.push_back(score);
    std::cout << "Enter a name and score \n";
    std::cin >> name >> score;

        name_vector.push_back(name);
        score_vector.push_back(score);
        std::cout << "Enter a name and score \n";


    if(same_element_checker(name_vector))
        std::cout << "SAME ELEMENT! \n";
    std::string user_input = " ";
    std::cout << "Give me a name so that i can give a score if the name is avaliable \n";
    std::cin >> user_input;


    if(name_is_avaliable(name_vector,user_input))
    {
        double result = score_giver(name_vector,score_vector,user_input);
        std::cout << "Here is your result: " << result << "\n";
    }
    else
    {
        std::cout  << "Name is not avaliable! \n";
    }

}

bool same_element_checker(std::vector<std::string>name_vector)
{
    int counter = 0;
    for(int i = 0; i < name_vector.size();++i)
    {
        for(std::string x:name_vector)
        {
            if( x  == name_vector[i])
                counter++;
        }
    }
    if(counter > name_vector.size())
    {
        return true;
    }
    else
        return false;
}

bool name_is_avaliable(std::vector<std::string>name_vector,std::string user_input)
{

       for(std::string x:name_vector)
       {
           if(x == user_input)
           {
               return true;
           }
       }
       return false;
}
double score_giver(std::vector<std::string>name_vector,std::vector<double>score_vector,std::string user_input)
{
    for(int i = 0; i < name_vector.size();++i)
    {
        if(name_vector[i] == user_input)
        {
            return score_vector[i];
        }
    }
}