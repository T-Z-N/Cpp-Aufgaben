//Todo Write a program where you first enter a set of name-and-value pairs,
// such as Joe 17 and Barbara 22.
// For each pair, add the name to a vector called names and the number to a vector called scores
// (in corresponding positions, so that if names[7]=="Joe" then scores[7]==17).
// Terminate input with NoName 0.
// Check that each name is unique and terminate with an error message if a name is entered twice.
// Write out all the (name,score) pairs, one per line


#include <vector>
#include <iostream>

bool same_element_checker(std::vector<std::string>basic_vector);
void array_printer(std::vector<std::string>name_vector, std::vector<double>score_vector);

int main()
{
    std::string name = "Noname";
    double score = 0.0;
    std::vector <std::string>name_vector;
    std::vector <double>score_vector;
    do
    {
        if(name == "stop")
        {
            break;
        }
        name_vector.push_back(name);
        score_vector.push_back(score);
        std::cout << "Enter a name and score \n";


    }
    while(std::cin >>name>> score);
    if(same_element_checker(name_vector))
        std::cout << "SAME ELEMENT! \n";

    array_printer(name_vector, score_vector);

}

bool same_element_checker(std::vector<std::string>basic_vector)
{
    int counter = 0;
    for(int i = 0; i < basic_vector.size();++i)
    {
        for(std::string x:basic_vector)
        {
            if( x  == basic_vector[i])
                counter++;
        }
    }
    if(counter > 4)
    {
        return true;
    }
    else
        return false;
}
void array_printer(std::vector<std::string>name_vector, std::vector<double>score_vector)
{
    for(int i = 0; i < name_vector.size();++i)
    {
        std::cout << "This is the name: " << name_vector[i] << " and the score: " << score_vector[i] << " \n";
    }
}