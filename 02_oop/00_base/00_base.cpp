#include <iostream>


class Point
{
public:
    int x;
    int y;

    Point(int x, int y):
        x{x},
        y{y}
    {}
};

class Unit
{
public:
    int hp;
    int weight;
    int force;
    Point position;
    
    Unit(int hp, int w, int f, Point p):
        hp{hp},
        weight{w},
        force{f},
        position{p}
    {}
};




int main()
{
    int i{ 56 };

    Unit a{ 100, 40, 80, {3, 4} };
    std::cout << &a;

    a.force = 300;
    a.weight = 800;
    a.position = { 9, 12 };

    Unit* b = new Unit{ 100, 40, 80, {3, 4} };
}

