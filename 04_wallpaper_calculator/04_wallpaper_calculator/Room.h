#pragma once
#include <string>
#include <vector>
#include "Wall.h"

class Room
{
private:
	const int WALLS_COUNT = 4;

	std::string title;
	float sizeA;
	float sizeB;
	

public:
	std::vector<Wall*> walls;					// TODO: temp (move to private)

	Room(const std::string& title, float a, float b, float h);

	const std::string& getTitle() const;

	void addUseless(int wallId, float w, float h);;

	float getUsefulWallsArea();
	float getCeilingArea();
};
