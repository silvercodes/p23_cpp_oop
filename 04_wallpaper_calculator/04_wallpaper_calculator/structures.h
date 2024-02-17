#pragma once

#include "Room.h"
#include "Roll.h"

struct ActiveWall
{
	Wall* wall{ nullptr };
	Roll* roll{ nullptr };
};

struct ActiveRoom
{
	Room* room{ nullptr };
	std::vector<ActiveWall> activeWalls;
	bool withCeliling{ false };
	Roll* ceilingRoll{ nullptr };
};