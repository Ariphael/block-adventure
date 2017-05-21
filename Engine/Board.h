#pragma once
#include "Location.h"
#include "Graphics.h"
#include "Colors.h"
class Board
{
public:
	enum class GridType { Nil, Player, Obstacle };
public:
	Board();
	void FillGrid(Location& pos, GridType type);
	void DrawBoard(Graphics& gfx);
	~Board();
private:
	GridType map[79 * 59] = { GridType::Nil };
	Color Player = Colors::Red;
	Color Obstacle = Colors::Gray;
	Location temp;
};

