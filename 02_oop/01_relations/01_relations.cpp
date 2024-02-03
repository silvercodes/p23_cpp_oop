#include <iostream>
#include <string>



// Композиция (является частью, является владельцем)
// 1. Часть (член класса, поле) является неотъемлемой частью целого (и с точки зрения логики приложения)
// 2. Часть (член класса, поле) в процессе свой жизни может принадлежать только одному объекту целого
// 3. Целое управляет жизнью части
// 4. Часть (член класса, поле) понятия не имеет о существовании целого


//class Point
//{
//private:
//    int x;
//    int y;
//
//public:
//    Point(int x = 0, int y = 0):
//        x{x},
//        y{y}
//    {}
//
//    void set(int x = 0, int y = 0)
//    {
//        this->x = x;
//        this->y = y;
//    }
//
//    friend std::ostream& operator<<(std::ostream& out, const Point& p);
//
//};
//
//std::ostream& operator<<(std::ostream& out, const Point& p)
//{
//    out << "(" << p.x << ';' << p.y << ')';
//
//    return out;
//}
//
//class Unit
//{
//private:
//    int id;
//    std::string title;
//    Point* position;
//
//public:
//    Unit(int id, const std::string& title, const Point& p) :
//        id{ id },
//        title{ title },
//        position{ new Point{p} }
//    {}
//
//    ~Unit()
//    {
//        if (this->position != nullptr)
//            delete this->position;
//    }
//};



// Агрегация (имеет)
// 1. Часть (член класса, поле) является неотъемлемой частью целого (и с точки зрения логики приложения)
// ~ 2. Часть (член класса, поле) в процессе свой жизни может принадлежать нескольким объектам целого
// ~ 3. Целое не управляет жизнью части
// 4. Часть (член класса, поле) понятия не имеет о существовании целого

//class Teacher
//{
//private:
//    std::string name;
//
//public:
//    Teacher(const std::string& name):
//        name{name}
//    {}
//
//    const std::string& getName() const
//    {
//        return this->name;
//    }
//};
//
//class Group
//{
//private:
//    std::string title;
//    Teacher* teacher;
//
//public:
//    Group(const std::string& title):
//        title{title},
//        teacher{}
//    {}
//
//    void setTeacher(Teacher* teacher)
//    {
//        this->teacher = teacher;        // (*this).teacher = teacher
//    }
//};
//
//
//int main()
//{
//    Teacher t{ "Vasia" };
//
//    Group group{"p23"};
//
//    group.setTeacher(&t);               // setTeacher(&group, &t)
//
//    Group group2{ "p24" };
//    group2.setTeacher(&t);
//    
//
//
//    return 0;
//}




//class CPU
//{
//private:
//    std::string model;
//    const PC* pc = nullptr;
//public:
//    CPU(const std::string& model):
//        model{model}
//    {}
//
//    void setPC(const PC* pc)
//    {
//        this->pc = pc;
//    }
//};
//
//class PC
//{
//private:
//    std::string mb;
//    std::string hd;
//    CPU* cpu;
//
//public:
//    PC(CPU* cpu):
//        cpu{cpu}
//    {
//        cpu->setPC(this);
//    }
//};





// Ассоциация (использует, связан с..., ассоциируется с...)
// 1. Первый объект не связан со вторым изначально (так может оставаться и в дальнейшем...)
// 2. Первый объект в один момент времени может быть связан с одним или несколькими объектами второго типа
// 3. Первый объект не управляет жизнью второго объекта (и наоборот)
// 4. Первый объект может знать о существовании второго (и наоборот)

//#include <vector>
//
//class Group
//{
//private:
//	std::string title;
//
//public:
//	Group(const std::string& title):
//		title{title}
//	{}
//
//	std::string getTitle() const
//	{
//		return this->title;
//	}
//};
//
//
//
//class Teacher
//{
//private:
//	std::string name;
//	std::vector<Group*> groups;
//public:
//	Teacher(const std::string& name):
//		name{name}
//	{}
//
//	void addGroup(Group* g)
//	{
//		groups.push_back(g);
//	}
//
//	void show()
//	{
//		std::cout << "name: " << this->name << '\n';
//		if (this->groups.size() == 0)
//			std::cout << "no groups\n";
//		else
//		{
//			for (int i{}; i < this->groups.size(); ++i)
//				std::cout << this->groups[i]->getTitle() << '\n';
//		}
//	}
//};
//
//
//int main()
//{
//	Teacher t1{ "name_1" };
//	Teacher t2{ "name_2" };
//	Teacher t3{ "name_3" };
//	Teacher t4{ "name_4" };
//
//	Group g1{ "group_1" };
//	Group g2{ "group_2" };
//	Group g3{ "group_3" };
//	Group g4{ "group_4" };
//	Group g5{ "group_5" };
//
//	t2.addGroup(&g3);
//	t2.addGroup(&g4);
//	t2.addGroup(&g5);
//
//	t2.show();
//
//
//
//	return 0;
//}


// --- бинарная, n-арная
// --- однонаправленная, двунаправленная





// --- рефлексивная

//class Category
//{
//private:
//	std::string title;
//	Category* parentCategory = nullptr;
//	// Category* childCategories;
//public:
//	Category(const std::string title) :
//		title{ title }
//	{}
//	void setParent(Category* parent)
//	{
//		this->parentCategory = parent;
//	}
//};
//
//int main()
//{
//	Category a{ "cat_a" };
//	Category b{ "cat_b" };
//	Category c{ "cat_c" };
//
//	b.setParent(&a);
//	c.setParent(&a);
//
//	return 0;
//}



// --- неявная
//class Category
//{
//	int id;
//	std::string title;
//};
//
//class Product
//{
//	int id;
//	std::string title;
//	int categoryId;
//};





// ======= Зависимость (использует в качестве типа возврата методов или типа параметров)
class Tree;

class NPC;

class Stone;

class MapGenerator
{
public:
	Tree generateTree();

	void setStoneToMap(Stone* stone);
};


