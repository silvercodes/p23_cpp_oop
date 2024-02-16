#include <iostream>
#include "Wall.h"

int main()
{
    Wall* w = new Wall(3, 5);

    w->addUseless(1, 0.5);
    w->addUseless(2.1, 0.9);
    w->addUseless(1, 2);

    w->tempShow();


}
