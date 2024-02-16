#pragma once
class Useless
{
private:
	float height;			// in meters
	float width;			// in meters
	float l_indent{};
	float t_indent{};

public:
	Useless(float height, float width);

	float calcArea() const;
	float tempGetH() const;
	float tempGetW() const;

};

