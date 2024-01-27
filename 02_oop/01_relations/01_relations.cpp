#include <iostream>
#include <string>

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


// Композиция (является частью, является владельцем)
// 1. Часть (член класса, поле) является неотъемлемой частью целого (и с точки зрения логики приложения)
// 2. Часть (член класса, поле) в процессе свой жизни может принадлежать только одному объекту целого
// 3. Целое управляет жизнью части
// 4. Часть (член класса, поле) понятия не имеет о существовании целого


class Point
{
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0):
        x{x},
        y{y}
    {}

    void set(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    friend std::ostream& operator<<(std::ostream& out, const Point& p);

};

std::ostream& operator<<(std::ostream& out, const Point& p)
{
    out << "(" << p.x << ';' << p.y << ')';

    return out;
}

class Unit
{
private:
    int id;
    std::string title;
    Point* position;

public:
    Unit(int id, const std::string& title, const Point& p) :
        id{ id },
        title{ title },
        position{ new Point{p} }
    {}

    ~Unit()
    {
        if (this->position != nullptr)
            delete this->position;
    }
};



// Агрегация (имеет)
// 1. Часть (член класса, поле) является неотъемлемой частью целого (и с точки зрения логики приложения)
// ~ 2. Часть (член класса, поле) в процессе свой жизни может принадлежать нескольким объектам целого
// ~ 3. Целое не управляет жизнью части
// 4. Часть (член класса, поле) понятия не имеет о существовании целого

class Teacher
{
private:
    std::string name;

public:
    Teacher(const std::string& name):
        name{name}
    {}

    const std::string& getName() const
    {
        return this->name;
    }
};

class Group
{
private:
    std::string title;
    Teacher* teacher;

public:
    Group(const std::string& title):
        title{title},
        teacher{}
    {}

    void setTeacher(Teacher* teacher)
    {
        this->teacher = teacher;        // (*this).teacher = teacher
    }
};


int main()
{
    Teacher t{ "Vasia" };

    Group group{"p23"};

    group.setTeacher(&t);               // setTeacher(&group, &t)

    Group group2{ "p24" };
    group2.setTeacher(&t);
    


    return 0;
}









const int& f1(const int& r)
{
    //
    //
    return r;
}

const int* const f2()
{
    int a = 56;
    std::cout << &a;

    return &a;
}

int f3()
{
    int a = 56;

    return a;
}



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

