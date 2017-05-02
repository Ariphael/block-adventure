#include "Location.h"



Location::Location(float x, float y)
	:
	x(x),
	y(y)
{
}

float Location::GetPosX()const
{
	return x;
}

float Location::GetPosY()const
{
	return y;
}

float Location::GetRealPosX() const
{
	return x*GridDimensions;
}

float Location::GetRealPosY() const
{
	return y*GridDimensions;
}

float Location::GetDimensions() const
{
	return GridDimensions;
}

float Location::GetOffset() const
{
	return GridOffset;
}

Location Location::operator+(Location & rhs) const
{
	return Location(x + rhs.x, y + rhs.y);
}

void Location::operator+=(Location & rhs)
{
	x += rhs.x;
	y += rhs.y;
}

Location Location::operator-(Location & rhs) const
{
	return Location(x - rhs.x, y - rhs.y);
}

void Location::operator-=(Location & rhs)
{
	x -= rhs.x;
	y -= rhs.y;
}

Location Location::operator*(Location & rhs) const
{
	return Location(x*rhs.x,y*rhs.y);
}

void Location::operator*=(Location& rhs)
{
	x *= rhs.x;
	y *= rhs.y;
}

Location Location::operator/(Location & rhs) const
{
	return Location(x/rhs.x,y/rhs.y);
}

void Location::operator/=(Location & rhs)
{
	x /= rhs.x;
	y /= rhs.y;
}

void Location::operator=(Location & rhs)
{
	x = rhs.x;
	y = rhs.y;
}


Location::~Location()
{
}
