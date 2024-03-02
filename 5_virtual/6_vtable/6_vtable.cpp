
#include <iostream>


class Parent
{
public:
    // VirtualTablePointer* __vptr;
    virtual void function1() {}
    virtual void function2() {}
};

class Child1 : public Parent
{
    virtual void function1() override {}
};

class Child2 : public Parent
{
    virtual void function2() override {}
};







int main()
{
    Parent* p = new Child1{};
    p->function1();
}

