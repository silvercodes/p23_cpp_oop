#include <iostream>
#include <string>


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
    std::string title;
    Point* position;

public:
    Unit(const std::string& title, const Point& p) :
        title{ title },
        position{ new Point{p} }
    {}

    ~Unit()
    {
        if (this->position != nullptr)
            delete this->position;
    }
    

};






int main()
{
    /*Unit a{ "Vasia", Point{2, 3} };

    Unit* b = new Unit{ "Vasia", Point{2, 3} };

    Point p1;

    Point p2{5, 6};

    Point* p3;

    Point* p4{ new Point{3, 2} };

   
    std::cout << *p4;*/




    //int val = 34;
    //int val2 = 56;

    //int* ptr1 = &val;

    //int* const ptr2 = &val;         // константный указатель

    //const int* ptr3 = &val;         // указатель на константное значение

    //const int* const ptr4 = &val;   // константный указатель на константное значение


    //const int& ref = val;



    int val = 45;
    int* p = &val;

    int*& a = p;

    

}

