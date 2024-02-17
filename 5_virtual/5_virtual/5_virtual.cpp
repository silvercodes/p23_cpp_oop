#include <iostream>
#include <string>

class Parent
{
protected:
    int value;

public:
    Parent(int value):
        value{value}
    {}

    std::string getName() const
    {
        return "Parent";
    }

    int getValue() const
    {
        return this->value;
    }
};

class Child: public Parent
{
public:
    Child(int value):
        Parent{value}
    {}

    std::string getName() const
    {
        return "Child";
    }

    int getDoubled() const
    {
        return 2 * this->value;
    }
};







int main()
{
    
    /*Child c{ 7 };
    std::cout << c.getName() << ' ' << c.getValue() << '\n';

    Child& cref = c;
    std::cout << cref.getName() << ' ' << cref.getValue() << '\n';

    Child* cPtr = &c;
    std::cout << cPtr->getName() << ' ' << cPtr->getValue() << '\n';*/



    Child child{ 7 };

    Child* c = &child;
    Parent* p = &child;

    // std::cout << c << '\n' << p << '\n';


    std::cout << child.getName() << ' ' << child.getValue() << '\n';
    std::cout << p->getName() << ' ' << p->getValue() << '\n';


}

