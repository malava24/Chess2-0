#include "King.h"

King::King(int xPos, int yPos, std::string color, std::string figurled) :
	Figure(xPos, yPos, color, figurled)
{
	 
}

	bool King::CanMoveToPos(int xPos, int yPos) {
	bool succsesful = false;
	int getX = GetX();
	int getY = GetY();
	if (xPos == getX && yPos == getY) {
		std::cerr << "Figure can't move to the same position. Try again" << std::endl;
	}
	else {
		int resX = abs(xPos - getX);
		int resY = abs(yPos - getY);

		if (resX == 1 && resY == 0 || resX == 0 && resY == 1 || resX == 1 && resY == 1) {
			SetCurrentCoordinates(xPos, yPos);
			 succsesful = true;
		}
		else {
			std::cerr << "Worng value. Try again" << std::endl;
			
		}
	}
	return succsesful;
}
