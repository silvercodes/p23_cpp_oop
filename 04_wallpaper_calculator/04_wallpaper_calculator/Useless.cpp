#include "Useless.h"

Useless::Useless(float height, float width):
	height{ height },
	width{ width }
{}

float Useless::calcArea() const
{
	return this->height * this->width;
}

float Useless::tempGetH() const
{
	return this->height;
}

float Useless::tempGetW() const
{
	return this->width;
}
