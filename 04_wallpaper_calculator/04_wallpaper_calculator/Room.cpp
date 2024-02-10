#include "Room.h"

Room::Room(const std::string& title, short wallCount):
	title{ title },
	wallCount{ wallCount },
	walls{ new Wall[wallCount] }						// TODO: array init???
{}

const std::string& Room::getTitle() const
{
	return this->title;
}

