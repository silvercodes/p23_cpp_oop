#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <algorithm>

// ===== STL =======

// 1. ==== Контейнеры ====

//      1.1. Последовательные
//              std::vector<T>
//              std::list<>
//              std::array<>
//              std::deque<>            // двусторонняя очередь


//      1.2. Ассоциативные (отсортированы)  !!! Для типа должен быть перегружен оператор "<" как минимум !!!
//              std::set<>				// уникальные элементы
//				std::multiset<>			// допускаются дубликаты
//				std::map<>				// ключи уникальные
//				std::multimap<>			// ключи не уникальные

//      1.3. Адаптеры
//              std::stack				// стек
//              std::queue				// очередь
//				std::priority_queue		// очередь с приоритетами


// 2. ==== Итераторы ====
//				begin()		cbegin()		end()		cend()
//				*		++		--		==		=		->
//				std::container::iterator
//				std::container::const_iterator


// 3. ==== Алгоритмы ====




//int main()
//{
//	/*std::set<int> set;
//	set.insert(4);
//	set.insert(3);
//	set.insert(3);
//	set.insert(3);*/
//
//	/*std::map<int, std::string> m;
//	m.insert(std::make_pair(1, "Vasia"));
//	m.insert(std::make_pair(2, "Petya"));
//	m.insert(std::make_pair(7, "Dima"));*/
//
//	// std::cout << m[7];
//
//
//
//
//	/*std::vector<int> v;
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i * i);
//
//	std::vector<int>::iterator it = v.begin();
//
//	while (it != v.end())
//	{
//		std::cout << *it << ' ';
//		++it;
//	}*/
//
//
//
//
//
//	/*std::list<int> v;
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i * i);
//
//	std::list<int>::iterator it = v.begin();
//
//	while (it != v.end())
//	{
//		std::cout << *it << ' ';
//		++it;
//	}*/
//
//
//
//
//
//	/*std::list<int> v;
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i * i);
//
//	for (int val : v)
//	{
//		std::cout << val << ' ';
//	}*/
//
//
//
//
//
//	/*std::map<int, std::string> m;
//	m.insert(std::make_pair(1, "Vasia"));
//	m.insert(std::make_pair(2, "Petya"));
//	m.insert(std::make_pair(7, "Dima"));
//
//	std::map<int, std::string>::const_iterator it = m.cbegin();
//
//	while (it != m.cend())
//	{
//		std::cout << it->first << " : " << it->second << '\n';
//		++it;
//	}
//
//	for (const std::pair<int, std::string>& item : m)
//	{
//		std::cout << item.first << " : " << item.second << '\n';
//	}*/
//
//
//
//
//
//	// ---- алгоритмы
//
//	srand(time(0));
//
//	std::vector<int> v;
//	for (int i{}; i < 100; ++i)
//		v.push_back(rand() % 100 + 1);
//
//	for (int i{}; i < 100; ++i)
//		std::cout << v[i] << ' ';
//
//	std::cout << '\n';
//
//	// 1
//	std::vector<int>::iterator it = min_element(v.begin(), v.end());
//	std::cout << "min = " << *it;
//
//	// 2
//	std::vector<int>::iterator it2 = find(v.begin(), v.end(), 10);
//	if (it2 != v.end())
//		std::cout << "finded = " << *it2;
//	else
//		std::cout << "not found";
//
//	// 3
//	sort(v.begin(), v.end());
//	for (int i{}; i < 100; ++i)
//		std::cout << v[i] << ' ';
//}







class Box
{
private:
	int val;

public:
	Box(int val = 10):
		val{val}
	{}

	bool operator<(const Box& b) const
	{
		return this->val < b.val;
	}

	bool operator<(int b) const
	{
		return this->val < b;
	}
};



int main()
{
	/*int a = 5;
	int b = 6;*/

	// int res = operator+(a, b);

	Box a{ 4 };
	Box b{ 6 };

	std::cout << (a < b) << '\n';			// a.operator<(b)
	std::cout << (a < 12) << '\n';


}