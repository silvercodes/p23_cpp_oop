#include <iostream>
#include <string>


class Human
{
public:
    std::string name;
    int age;
    bool isMale;

    const std::string getName() const
    {
        return this->name;
    }
};

class User: public Human
{
public:
    std::string email;
    std::string password;
};



int main()
{
    Human h;


    return 0;
}





