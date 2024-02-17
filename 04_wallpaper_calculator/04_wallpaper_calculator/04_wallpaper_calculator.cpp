#include <iostream>
#include "Wall.h"
#include "Room.h"
#include "Roll.h"
#include "Calculator.h"

int main()
{
    /*Wall* w = new Wall(3, 5);

    w->addUseless(1, 0.5);
    w->addUseless(2.1, 0.9);
    w->addUseless(1, 2);

    w->tempShow();*/



    /*Room* room = new Room{ "room_1", 3, 5, 3 };

    room->addUseless(1, 1, 1);
    room->addUseless(0, 2, 2);
    room->addUseless(2, 1, 1);

    std::cout << room->getUsefulWallsArea();*/




    Roll* roll = new Roll{ "flower_pro", 1000, 1, 10 };


    Room* room = new Room{ "room_1", 3, 5, 3 };

    room->addUseless(1, 1, 1);
    room->addUseless(0, 2, 2);
    room->addUseless(2, 1, 1);



    Calculator calc{};

    calc.activeRooms.push_back( { room } );
    calc.activeRooms[0].activeWalls.push_back({ room->walls[0], roll });
    calc.activeRooms[0].activeWalls.push_back({ room->walls[1], roll });
    calc.activeRooms[0].activeWalls.push_back({ room->walls[2], roll });

    calc.calculate();



    







}
