#include <iostream>
#include <string>

//class Parent
//{
//protected:
//    int value;
//
//public:
//    Parent(int value):
//        value{value}
//    {}
//
//    std::string getName() const
//    {
//        return "Parent";
//    }
//
//    int getValue() const
//    {
//        return this->value;
//    }
//};
//
//class Child: public Parent
//{
//public:
//    Child(int value):
//        Parent{value}
//    {}
//
//    std::string getName() const
//    {
//        return "Child";
//    }
//
//    int getDoubled() const
//    {
//        return 2 * this->value;
//    }
//};
//
//class Grandson: public Child
//{
//public:
//    Grandson(int value):
//        Child{value}
//    {}
//
//    int getRandom()
//    {
//        return 123;
//    }
//};
//
//
//
//
//
//
//
//int main()
//{
//    
//    /*Child c{ 7 };
//    std::cout << c.getName() << ' ' << c.getValue() << '\n';
//
//    Child& cref = c;
//    std::cout << cref.getName() << ' ' << cref.getValue() << '\n';
//
//    Child* cPtr = &c;
//    std::cout << cPtr->getName() << ' ' << cPtr->getValue() << '\n';*/
//
//
//
//    //Child child{ 7 };
//
//    //Child* c = &child;
//    //Parent* p = &child;
//
//    //// std::cout << c << '\n' << p << '\n';
//
//
//    //std::cout << child.getName() << ' ' << child.getValue() << '\n';
//    //std::cout << p->getName() << ' ' << p->getValue() << '\n';
//
//
//    /*Parent* p = new Child{ 45 };
//    std::cout << p->getName();*/
//
//
//    // Child* p = new Parent{ 45 };
//    // p->getDoubled();
//
//   /* Grandson* p = new Grandson{ 45 };
//    std::cout << p->getName();*/
//
//
//    // Parent* p = new Parent{ 45 };
//    
//
//}



// === objects array

//class Unit
//{
//private:
//	int hp;
//public:
//	Unit(int hp):
//		hp{hp}
//	{}
//	void attack() const
//	{
//		std::cout << "Unit::attack()\n";
//	}
//};
//
//class Archer : public Unit
//{
//public:
//	Archer(int hp):
//		Unit{hp}
//	{}
//	void attack() const
//	{
//		std::cout << "Archer::attack()\n";
//	}
//};
//
//class Warrior : public Unit
//{
//public:
//	Warrior(int hp) :
//		Unit{ hp }
//	{}
//	void attack() const
//	{
//		std::cout << "Warrior::attack()\n";
//	}
//};
//
//int main()
//{
//	Unit** units = new Unit* [4]
//	{
//		new Archer{ 50 },
//		new Archer{ 34 },
//		new Warrior{ 56 },
//		new Warrior{ 65 }
//	};
//
//	for (int i{}; i < 4; ++i)
//		units[i]->attack();
//}





// ===== virtual functions
//class Unit
//{
//private:
//	int hp;
//public:
//	Unit(int hp) :
//		hp{ hp }
//	{}
//	virtual void attack() const
//	{
//		std::cout << "Unit::attack()\n";
//	}
//};
//
//class Archer : public Unit
//{
//public:
//	Archer(int hp) :
//		Unit{ hp }
//	{}
//	virtual void attack() const
//	{
//		std::cout << "Archer::attack()\n";
//	}
//};
//
//class Warrior : public Unit
//{
//public:
//	Warrior(int hp) :
//		Unit{ hp }
//	{}
//	virtual void attack() const
//	{
//		std::cout << "Warrior::attack()\n";
//	}
//};
//
//class EnemyArcher: public Archer
//{
//public:
//	EnemyArcher(int hp):
//		Archer{hp}
//	{}
//	virtual void attack() const
//	{
//		std::cout << "EnemyArcher::attack()\n";
//	}
//};
//
//int main()
//{
//	Unit** units = new Unit * [5]
//		{
//			new Archer{ 50 },
//			new Archer{ 34 },
//			new Warrior{ 56 },
//			new Warrior{ 65 },
//			new EnemyArcher{ 78 }
//		};
//
//	for (int i{}; i < 5; ++i)
//		units[i]->attack();
//}





//class A
//{
//public:
//	void run()
//	{
//		std::cout << "A::run()\n";
//	}
//	void render()
//	{
//		std::cout << "A::render()\n";
//	}
//	virtual void execute()
//	{
//		std::cout << "A::execute()\n";
//	}
//};
//class B: public A
//{
//public:
//	void run()
//	{
//		std::cout << "B::run()\n";
//	}
//	virtual void render()
//	{
//		std::cout << "B::render()\n";
//	}
//	
//};
//class C: public B
//{
//public:
//	virtual void run()
//	{
//		std::cout << "C::run()\n";
//	}
//
//	virtual void render() override
//	{
//		std::cout << "C::render()\n";
//	}
//};
//class D: public C
//{
//public:
//	virtual void run(int a)
//	{
//		std::cout << "D::run()\n";
//	}
//	virtual void execute()
//	{
//		std::cout << "D::execute()\n";
//	}
//};
//class E: public D
//{
//public:
//	virtual void run()
//	{
//		std::cout << "E::run()\n";
//	}
//
//	virtual void run(int a)
//	{
//		std::cout << "E::run()\n";
//	}
//};
//
//int main()
//{
//	/*A* p = new C{};
//	p->run();*/
//
//	/*B* p = new C{};
//	p->run();*/
//
//	/*C* p = new E{};
//	p->run();*/
//
//	/*B* p = new E{};
//	p->run();*/
//
//
//	/*C* p = new E{};
//	p->run();*/
//
//	/*A* p = new E{};
//	p->render();*/
//
//	B* p = new E{};
//	p->execute();
//
//
//	return 0;
//}






//class A
//{
//public:
//	virtual void render()
//	{
//		std::cout << "A::render()\n";
//	}
//};
//class B: public A
//{
//public:
//	virtual void render() override final
//	{
//		std::cout << "B::render()\n";
//	}
//	
//};
//class C: public B
//{
//public:
//	virtual void render() override
//	{
//		std::cout << "C::render()\n";
//	}
//};





// ===== ковариантный тип возврата

class Parent
{
public:
	void render()
	{
		std::cout << "Parent::render()\n";
	}
	virtual Parent* get()
	{
		return this;
	}
};


class Child : public Parent
{
public:
	void render()
	{
		std::cout << "Child::render()\n";
	}

	virtual Child* get() override				// <-- ковариантный тип возврата
	{
		return this;
	}
};

int main()
{
	Child c;

	Parent* ptr = &c;

	c.get()->render();

	ptr->get()->render();



	return 0;
}




