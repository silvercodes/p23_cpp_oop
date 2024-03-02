#include <iostream>


//class Parent
//{
//public:
//    virtual void f1()
//    {
//        std::cout << "Parent::f1()";
//    }
//
//    virtual void f2() = 0;                      // Чистая виртуальная ф-ция (абстрактная ф-ция)
//
//    // void f3() = 0;                           // ERROR
//
//    virtual void f4() = 0;
//};
//
//
//class Child: public Parent
//{
//public:
//    virtual void f1() override
//    {
//        std::cout << "Child::f1()";
//    }
//
//    virtual void f2() override
//    {
//        std::cout << "Child::f2()";
//    }
//};
//
//
//
//
//
//int main()
//{
//    // Parent* p1 = new Parent{};                  // ERROR (т.к. Parent - это АБСТРАКТНЫЙ класс)
//
//    //Parent* p2 = new Child{};                       // ERROR (т.к. Child - это тоже АБСТРАКТНЫЙ класс)
//    // p2->f2();
//
//}






#include <vector>

class Mesh
{
public:
	//
	//
	virtual void render() = 0;
};

class Tree : public Mesh
{
public:
	virtual void render() override
	{
		std::cout << "tree";
	}
};

class Stone : public Mesh
{
public:
	virtual void render() override
	{
		std::cout << "stone";
	}
};

class Unit : public Mesh
{
public:
	virtual void render() override
	{
		std::cout << "unit";
	}
};



int main()
{
	std::vector<Mesh*> arr;
	arr.push_back(new Tree{});
	arr.push_back(new Stone{});
	arr.push_back(new Unit{});

	for (int i{}; i < arr.size(); ++i)
		arr[i]->render();

}




