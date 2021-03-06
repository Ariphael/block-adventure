#include "Board.h"
#include <cmath>



Board::Board()
	:
	temp(Location(0,0))
{
}

void Board::FillGrid(Location & pos, GridType type)
{
	map[79 * (int)pos.GetPosY() + (int)pos.GetPosX()] = type;
}

void Board::DrawBoard(Graphics & gfx)
{
	for (int i = 0; i < 79 * 59; i++) {
		if (map[i] == GridType::Player) {
			temp = Location(i-(i-(float)floor(i/79)), (float)floor(i / 79));
			for (int w = (int)temp.GetRealPosX(); w <= (int)temp.GetRealPosX()+temp.GetDimensions() - temp.GetOffset(); w++) {
				for (int h = (int)temp.GetRealPosY(); h <= (int)temp.GetRealPosY()+temp.GetDimensions() - temp.GetOffset(); h++) {
					gfx.PutPixel(w,h,Player);
				}
			}
		}
		else if (map[i] == GridType::Obstacle) {
			temp = Location(i - (10 * (float)floor(i / 79)), (float)floor(i / 79));
			for (int w = 0; w <= temp.GetDimensions() - temp.GetOffset(); w++) {
				for (int h = 0; h <= temp.GetDimensions() - temp.GetOffset(); h++) {
					gfx.PutPixel(w, h, Obstacle);
				}
			}
		}
	}
}


Board::~Board()
{
}
