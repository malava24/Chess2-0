#include "Figure.h"

Figure::Figure(int xPos, int yPos, std::string color, std::string figurled) :
	m_xPos(xPos),
	m_yPos(yPos),
	m_color(color),
	m_figurled(figurled)
{
}

std::string Figure::GetColor() {
	if (m_yPos == 1) {
		m_color = "white";
	}
	else if (m_yPos == 8) {
		m_color = "black";
	}
	 
	return m_color;
}

std::string Figure::GetFigurled() {
	if ((m_xPos == 2 && m_yPos == 1) || (m_xPos == 7 && m_yPos == 8)) {
		return m_figurled = "horse";
	}
	else if (m_xPos == 5 && (m_yPos == 1 || m_yPos == 8)) {
		return	m_figurled = "king";
	}
 
}

void Figure::SetCurrentCoordinates(int xPos, int yPos) {
	m_xPos = xPos;
	m_yPos = yPos;
	 
}

int Figure::GetX() {
	return m_xPos;
}

int Figure::GetY() {
	return m_yPos;
}