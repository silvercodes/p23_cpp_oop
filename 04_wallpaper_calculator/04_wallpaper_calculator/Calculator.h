#pragma once
#include <vector>
#include "Room.h"
#include "structures.h"

class Calculator
{
public:
	std::vector<ActiveRoom> activeRooms;

	float calculate();
};

