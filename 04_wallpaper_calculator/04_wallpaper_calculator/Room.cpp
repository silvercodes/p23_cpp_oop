#include "Room.h"

Room::Room(const std::string& title, float a, float b, float h):
	title{ title },
	sizeA{a},
	sizeB{b}
{
	for (int i{}; i < Room::WALLS_COUNT; ++i)
	{
		float len = i % 2 == 0 ? a : b;

		this->walls.push_back(new Wall{h, len });
	}
}

const std::string& Room::getTitle() const
{
	return this->title;
}

void Room::addUseless(int wallId, float w, float h)
{
	this->walls[wallId]->addUseless(h, w);
}

float Room::getUsefulWallsArea()
{
	float area{};

	for (int i{}; i < this->walls.size(); ++i)
		area += this->walls[i]->getUsefulArea();

	return area;
}

float Room::getCeilingArea()
{
	return this->sizeA * this->sizeB;
}

