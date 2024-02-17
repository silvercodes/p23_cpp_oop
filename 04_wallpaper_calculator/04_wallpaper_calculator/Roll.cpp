#include "Roll.h"

Roll::Roll(std::string title, float p, float w, float l):
	title{ title },
	price{ p },
	width{ w },
	len{ l }
{}

const std::string& Roll::getTitle() const
{
	return this->title;
}

float Roll::getPrice() const
{
	return this->price;
}

float Roll::getArea() const
{
	return this->width * this->len;
}
