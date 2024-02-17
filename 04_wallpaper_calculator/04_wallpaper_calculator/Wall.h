#pragma once
#include <iostream>
#include <vector>
#include "Useless.h"

class Wall
{
private:
	float height;						// in meters
	float width;						// in meters
	std::vector<Useless*> uselesses;


public:
	Wall(float height, float width);

	void addUseless(float h, float w);

	void tempShow();

	float getUsefulArea();

};

