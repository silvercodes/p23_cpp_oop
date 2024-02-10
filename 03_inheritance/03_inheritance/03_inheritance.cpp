#include <iostream>
#include <string>


//class Human
//{
//public:
//    int age;
//    bool isMale;
//    std::string name;
//
//    Human(int age = 18, bool isMale = true, const std::string& name = "no_name"):
//        age{age},
//        isMale{isMale},
//        name{ name }
//    {}
//
//    const std::string getName() const
//    {
//        return this->name;
//    }
//};
//
//class User : public Human
//{
//public:
//    std::string email = "no_email";
//    std::string password = "no_password";
//};
//
//class User2
//{
//public:
//    Human human;
//    std::string email = "no_email";
//    std::string password = "no_password";
//};
//
//
//
//int main()
//{
//    //int a;              // 4 b
//    //double p;           // 8 b
//    //Human h;            // 48 b
//    //Human* ph;          // 8 b
//
//    /*Human h{};
//    std::cout << sizeof(h) << '\n';
//    std::cout << &h << '\n';
//    std::cout << &h + 1;*/
//
//    User u{};
//    std::cout << sizeof(u) << '\n';
//
//    User2 u2{};
//    std::cout << sizeof(u2);
//    
//
//    
//
//
//    return 0;
//}








class Base
{
private:
	int a;
	int b;
public:
	Base(int a, int b) :				// 6 (находит конструктор + инициализация локальных переменных)
		a{ a },							// 7
		b{ b }							// 8
	{
		std::cout << this << '\n';
		std::cout << "Base ctor\n";		// 9
	}
	int getVal() const
	{
		return this->a;
	}
	~Base()
	{
		std::cout << "Base dtor\n";
	}
};

class Child : public Base
{
private:
	double c;
public:
	Child(int a, int b, double c):			// 4 (находит конструктор + инициализация локальных переменных)
		Base{a, b},							// 5
		c{c}								// 10
	{
		std::cout << this << '\n';
	}										// 11
};

class Item : public Child
{
private:
	char d;
	bool e;
public:
	Item(int a, int b, double c, char d, bool e):		// 2 (находит конструктор + инициализация локальных переменных)
		Child{a, b, c},									// 3
		d{d},											// 12
		e{e}											// 13
	{
		std::cout << this << '\n';
	}													// 14
};

int main()
{
	// Child c{3, 4, 5.0};

	Item i{3, 4, 5.0, 'x', true};						// 1

	return 0;
}




 // Сравните с композицией!!!
//class Base
//{
//private:
//	int a;
//	int b;
//public:
//	Base(int a, int b) :					// 3			
//		a{ a },								// 4
//		b{ b }								// 5
//	{
//		std::cout << "Base ctor\n";			// 6
//	}
//	int getVal() const
//	{
//		return this->a;
//	}
//	~Base()
//	{
//		std::cout << "Base dtor\n";
//	}
//};
//
//class Child
//{
//private:
//	Base base;
//	double c;
//public:
//	Child(int a, int b, double c) :				// 1		
//		base{ a, b },							// 2
//		c{ c }									// 7							
//	{
//		this->base.getVal();
//	}											// 8							
//};
//
//int main()
//{
//	Child c{ 3, 4, 5.0 };						// 0
//
//	return 0;
//}








//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int x, int y):
//		x{x},
//		y{y}
//	{}
//	int getX() const
//	{
//		return this->x;
//	}
//};
//
//class Unit
//{
//private:
//	int hp;
//	Point* position;
//public:
//	Unit(int hp, const Point& p) :
//		hp{ hp },
//		position{ new Point{ p } }
//	{}
//
//	~Unit()
//	{
//		if (this->position != nullptr)
//			delete position;
//	}
//};
//
//int main()
//{
//	/*int a{};
//	Point p{3, 4};
//	p.getX();*/
//
//	Point p{ 3, 4 };
//	Point& pRef{ p };
//
//	Unit u1{ 120, p };
//	Unit u2{ 120, {7, 8} };
//	Unit u3{ 120, pRef };
//
//
//
//	
//
//
//}