#pragma once
#include <string>
#include "Wall.h"

class Room
{
private:
	std::string title;
	short wallCount;
	Wall** walls;

public:
	Room(const std::string& title);

	const std::string& getTitle() const;

	float getUsefulWallsArea();
	float getCeilingArea();
};
