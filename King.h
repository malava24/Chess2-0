#pragma once
#include <iostream>
#include "Figure.h"

class King : public Figure {
public:
	King(int xPos, int yPos, std::string color, std::string figurled);
	bool CanMoveToPos(int xPos, int yPos) override;

 
private:

};