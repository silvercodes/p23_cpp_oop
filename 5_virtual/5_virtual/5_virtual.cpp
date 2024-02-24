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
//class Parent
//{
//public:
//	void render()
//	{
//		std::cout << "Parent::render()\n";
//	}
//	virtual Parent* get()
//	{
//		return this;
//	}
//};
//
//
//class Child : public Parent
//{
//public:
//	void render()
//	{
//		std::cout << "Child::render()\n";
//	}
//
//	virtual Child* get() override				// <-- ковариантный тип возврата
//	{
//		return this;
//	}
//};
//
//int main()
//{
//	Child c;
//
//	Parent* ptr = &c;
//
//	c.get()->render();
//
//	ptr->get()->render();
//
//
//
//	return 0;
//}





// ===== virtual destructor !!!!
// 
//class Parent
//{
//public:
//	virtual ~Parent()
//	{
//		std::cout << "Calling ~Parent()\n";
//	}
//};
//
//
//class Child : public Parent
//{
//private:
//	int count;
//	int* arr;
//
//public:
//	Child(int count):
//		count{count},
//		arr{new int[count]}
//	{}
//
//	virtual ~Child() override
//	{
//		if (this->arr != nullptr)
//			delete[] this->arr;
//
//		std::cout << "Calling ~Child()\n";
//	}
//};
//
//int main()
//{
//	/*Child* c = new Child{ 10 };
//	delete c;*/
//
//	Parent* p = new Child{ 10 };
//	delete p;
//
//	return 0;
//}





// === Раннее (статическои) и позднее (динамическое) связывание


// --- Раннее (статическои) связывание

//int sum(int a, int b) { return a + b; }
//int sub(int a, int b) { return a - b; }
//int mul(int a, int b) { return a * b; }
//
//int main()
//{
//	int a;
//	std::cout << "Enter a: ";
//	std::cin >> a;
//
//	int b;
//	std::cout << "Enter b: ";
//	std::cin >> b;
//
//	char op;
//	std::cout << "Enter op: ";
//	std::cin >> op;
//
//	int res{};
//
//	switch (op) 
//	{
//	case '+':
//		res = sum(a, b);
//		break;
//	case '-':
//		res = sub(a, b);
//		break;
//	case '*':
//		res = mul(a, b);
//		break;
//	}
//
//	std::cout << res;
//}


// --- Указатели на ф-цию


//int f1()
//{
//	return 34;
//}
//
//int f2()
//{
//	return 17;
//}
//
//int f3(int a)
//{
//	return 56;
//}
//
//
//int main()
//{
//	/*std::cout << f1 << '\n';
//
//	int(*fPtr)() = f1;
//
//	std::cout << fPtr;*/
//
//
//	int(*fptr)() = nullptr;
//	fptr = f1;
//	fptr = f2;
//	// fptr = f3;			// ERROR
//
//	std::cout << (*fptr)() << '\n';
//	std::cout << fptr() << '\n';
//
//
//	return 0;
//}



// --- позднее связывание
//int sum(int a, int b) { return a + b; }
//int sub(int a, int b) { return a - b; }
//int mul(int a, int b) { return a * b; }
//
//int main()
//{
//	int a;
//	std::cout << "Enter a: ";
//	std::cin >> a;
//
//	int b;
//	std::cout << "Enter b: ";
//	std::cin >> b;
//
//	char op;
//	std::cout << "Enter op: ";
//	std::cin >> op;
//
//	int(*ptr)(int, int) = nullptr;
//
//	switch (op) 
//	{
//	case '+':
//		ptr = sum;
//		break;
//	case '-':
//		ptr = sub;
//		break;
//	case '*':
//		ptr = mul;
//		break;
//	}
//
//	int res{};
//	if (ptr != nullptr)
//		res = ptr(a, b);					// <--- позднее связывание
//
//	std::cout << res;
//}


// TASK
// Написать ф-цию, суммирующую четные элементы массива

//int sum(int* arr, int count)
//{
//	int res{};
//
//	for (int i{}; i < count; ++i)
//	{
//		if (arr[i] % 2 == 0)
//			res += arr[i];
//	}
//
//	return res;
//}


//int sum(int* arr, int count, bool(*predicate)(int))
//{
//	int res{};
//
//	for (int i{}; i < count; ++i)
//	{
//		if (predicate(arr[i]))
//			res += arr[i];
//	}
//
//	return res;
//}
//
//
//
//bool isEven(int n) { return n % 2 == 0; }
//bool isDivThree(int n) { return n % 3 == 0; }
//
//int main()
//{
//	int* arr = new int[6] {5, 6, 7, 8, 9, 2};
//	//std::cout << sum(arr, 6, isEven);
//	std::cout << sum(arr, 6, isDivThree);
//
//	
//
//	return 0;
//}




// ---- лямбды
// []()->type {}


//void(*fptr)() = []() {std::cout << "Vasisa"; };
//
//void(*fptr2)()
//{
//	[]() 
//	{
//		std::cout << "Vasisa"; 
//	}
//};
//
//
//
//bool(*fptr3)(int) = [](int n) {return n % 2 == 0; };




//int sum(int* arr, int count, bool(*predicate)(int))
//{
//	int res{};
//
//	for (int i{}; i < count; ++i)
//	{
//		if (predicate(arr[i]))
//			res += arr[i];
//	}
//
//	return res;
//}
//
//
//int main()
//{
//	int* arr = new int[6] {5, 6, 7, 8, 9, 2};
//	
//
//	int result1 = sum(arr, 6, [](int n) {return n % 2 == 0; });
//	int result2 = sum(arr, 6, [](int n) {return n % 2 > 0; });
//	int result3 = sum(arr, 6, [](int n) {return n > 0; });
//
//	
//
//	return 0;
//}





// EXAMPLE
#include <vector>
#include <format>

typedef void (*handler)(std::string);



void sendToTelegram(std::string message)
{
	std::cout << "Telegram: " << message << '\n';
}

void sendSMS(std::string message)
{
	std::cout << "SMS: " << message << '\n';
}

void sendEmail(std::string message)
{
	std::cout << "Email: " << message << '\n';
}



class Account
{
private:
	int id;
	int sum;
	std::vector<handler> depositHandlers;

public:
	Account(int id, int sum):
		id{id},
		sum{sum}
	{}

	void addDepositHandler(handler h)
	{
		depositHandlers.push_back(h);
	}

	void deposit(int sum)
	{
		this->sum += sum;

		
		std::string message = "message from account";

		for (int i = 0; i < depositHandlers.size(); ++i)
			depositHandlers[i](message);
	}

	void withdraw(int sum)
	{

	}
};


int main()
{
	Account acc{ 102, 1000 };
	acc.addDepositHandler(sendSMS);
	acc.addDepositHandler(sendEmail);


	acc.deposit(100);
	acc.deposit(100);
	acc.deposit(100);

}




