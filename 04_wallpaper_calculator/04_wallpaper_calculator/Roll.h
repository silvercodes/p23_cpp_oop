#pragma once
#include <string>

class Roll
{
private:
	std::string title;
	float price;
	float width;
	float len;

public:
	Roll(std::string title, float p, float w, float l);

	const std::string& getTitle() const;
	float getPrice() const;
	float getArea() const;
};

