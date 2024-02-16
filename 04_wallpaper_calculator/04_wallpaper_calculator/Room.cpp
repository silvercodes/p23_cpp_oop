#include "Room.h"

Room::Room(const std::string& title):
	title{ title },
	wallCount{},
	walls{ nullptr }						// TODO: array init???
{}

const std::string& Room::getTitle() const
{
	return this->title;
}

