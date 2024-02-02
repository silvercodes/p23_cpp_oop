#include <iostream>

//int main()
//{
//    /*Unit a{ "Vasia", Point{2, 3} };
//
//    Unit* b = new Unit{ "Vasia", Point{2, 3} };
//
//    Point p1;
//
//    Point p2{5, 6};
//
//    Point* p3;
//
//    Point* p4{ new Point{3, 2} };
//
//   
//    std::cout << *p4;*/
//
//
//
//
//    //int val = 34;
//    //int val2 = 56;
//
//    //int* ptr1 = &val;
//
//    //int* const ptr2 = &val;         // константный указатель
//
//    //const int* ptr3 = &val;         // указатель на константное значение
//
//    //const int* const ptr4 = &val;   // константный указатель на константное значение
//
//
//    //const int& ref = val;
//
//
//
//    int val = 45;
//    int* p = &val;
//
//    int*& a = p;
//
//    
//
//}


//const int& f1(const int& r)
//{
//    //
//    //
//    return r;
//}
//
//const int* const f2()
//{
//    int a = 56;
//    std::cout << &a;
//
//    return &a;
//}
//
//int f3()
//{
//    int a = 56;
//
//    return a;
//}



//int main()
//{
//    /*int a = 45;
//    const int b = 34;
//    const int& b = f1(a);*/
//
//    /*const int* const res = f2();
//    std::cout << *res;
//
//    std::string str = "Vasia";
//    std::string* p = str;*/
//
//
//    // Teacher t{"Vasia"};
//    // t.getName();            // getName(&t)
//
//
//
//    return 0;
//}



//class Point
//{
//public:
//    int x;
//    int y;
//
//    Point(int x, int y):
//        x{x},
//        y{y}
//    {}
//};
//
//class Unit
//{
//public:
//    int hp;
//    int weight;
//    int force;
//    Point position;
//    
//    Unit(int hp, int w, int f, Point p):
//        hp{hp},
//        weight{w},
//        force{f},
//        position{p}
//    {}
//};
//
//
//
//
//int main()
//{
//    int i{ 56 };
//
//    Unit a{ 100, 40, 80, {3, 4} };
//    std::cout << &a;
//
//    a.force = 300;
//    a.weight = 800;
//    a.position = { 9, 12 };
//
//    Unit* b = new Unit{ 100, 40, 80, {3, 4} };
//}




int main()
{
	// "static" array
	//int arr1{};

	//int arr2[3];						// :-(
	//std::cout << arr2 << '\n';
	//std::cout << sizeof(arr2);

	//int arr3[3]{};						// :-)
	//int arr4[]{ 3, 5, 6 };


	//// "dynamic" array
	//int* arr5{ new int };

	//int* arr6{ new int[3] };			// :-(

	//int* arr7{ new int[3] {} };			// :-)

	//int* arr8{ new int[4] {3, 4, 6} };



	// арифметика указателей
	//int a{ 4 };
	//int b{ 5 };
	//int c{ a + b };  // int c{ operator+(a, b) }


	/*int a{ 45 };
	int* ptr{ &a };

	for (int i{}; i < 4; ++i)
		std::cout << ptr + i << '\n';*/


	int* arr{ new int[4] {3, 4, 6} };
	
	std::cout << arr << '\n';
	std::cout << *arr << '\n';
	std::cout << *(arr + 1) << '\n';
	std::cout << *(arr + 2) << '\n';
	std::cout << *(arr + 3) << '\n';
	std::cout << *(arr + 4) << '\n';		// !!


	// 1. Как работает оператор []   std::cout << arr[2];
	// 2. Почему индексация массива начинается с 0






	return 0;
}






