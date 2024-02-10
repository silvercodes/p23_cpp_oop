#include <iostream>

class Base
{
public:
    int _public{ 11 };
private:
    int _private{ 22 };
protected:
    int _protected{ 33 };
};

class Child : private Base
{
public:
    Child()
    {
        this->_public = 4;
        this->_protected = 56;
        // this->_private = 57; // ERROR
    }
};



int main()
{
    //Base b{};
    //b._public = 5;
    //// b._private = 6; // ERROR
    //// b._protected = 7; // ERROR

    //Child c{};
    //c._public;

    Child c;

}







// PUBLIC (открытое, публичное наследование)
// ----------------------------
// Parent			Child
// ----------------------------
// public			public
// private			--------
// protected		protected



// PRIVATE (закрытое наследование)
// ----------------------------
// Parent			Child
// ----------------------------
// public			private
// private			--------
// protected		private



// PROTECTED (защищенное наследование)
// ----------------------------
// Parent			Child
// ----------------------------
// public			protected
// private			--------
// protected		protected

