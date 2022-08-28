#pragma once
#include <iostream>

class Figure {
public:
	Figure(int xPos, int yPos, std::string color, std::string figurled);
	std::string GetColor();
	std::string GetFigurled();
	void SetCurrentCoordinates(int xPos, int yPos);
	virtual bool CanMoveToPos(int xPos, int yPos) = 0;
	int GetX();
	int GetY();

private:
	int m_xPos = 0;
	int m_yPos = 0;
	std::string m_color = "";
	std::string m_figurled = "";
};