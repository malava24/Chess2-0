#pragma once
#include <iostream>
#include "Figure.h"

class Horse : public Figure {
public:

	Horse(int xPos, int yPos, std::string color, std::string figurled);
	bool CanMoveToPos(int xPos, int yPos) override;

 
private:

};
