#pragma once
class Location
{
public:
	Location()=default;
	Location(float x, float y);
	float GetPosX()const; //Returns position of x in the grid.
	float GetPosY()const; //Returns position of y in the grid.
	float GetRealPosX()const; //Returns absolute position of x in window.
	float GetRealPosY()const; //Returns absolute position of y in window.
	float GetDimensions()const;
	float GetOffset()const;
	Location operator+(Location& rhs)const;
	void operator+=(Location& rhs);
	Location operator-(Location& rhs)const;
	void operator-=(Location& rhs);
	Location operator*(Location& rhs)const;
	void operator*=(Location& rhs);
	Location operator/(Location& rhs)const;
	void operator/=(Location& rhs);
	void operator=(Location& rhs);
	~Location();
private:
	float x;
	float y;
	const float GridDimensions = 10;
	const float GridOffset = 2;
};

