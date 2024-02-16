#include "Wall.h"

Wall::Wall(float height, float width):
	height{ height },
	width{ width },
	uCount{ 0 },
	uselesses{ nullptr }
{}

void Wall::addUseless(float h, float w)
{
	if (this->uCount == 0)
	{
		this->uCount++;
		uselesses = new Useless * [this->uCount];
		uselesses[0] = new Useless(h, w);
	}
	else
	{
		this->uCount++;
		Useless** temp = new Useless * [this->uCount];

		for (int i{}; i < this->uCount - 1; ++i)
			temp[i] = this->uselesses[i];

		temp[this->uCount - 1] = new Useless(h, w);

		delete[] this->uselesses;

		this->uselesses = temp;

	}
}

void Wall::tempShow()
{
	for (int i{}; i < this->uCount; ++i)
	{
		Useless* p = this->uselesses[i];
		std::cout << p->tempGetH() << '\t' << p->tempGetW() << '\n';
	}

}
