#pragma once
#include <string>
#include "Wall.h"

class Room
{
private:
	std::string title;
	short wallCount;
	Wall* walls;

public:
	Room(const std::string& title, short wallCount = 4);

	const std::string& getTitle() const;
};
