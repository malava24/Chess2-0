#pragma once
#include <iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"
#include <vector>

class ChessField {
public:
	ChessField() {

		m_figures.push_back(new Horse(2, 1, "white", "horse"));
		m_figures.push_back(new King(5, 1, "white", "king"));
		m_figures.push_back(new Horse(7, 8, "black", "horse"));
		m_figures.push_back(new King(5, 8, "black", "king"));
	}
	~ChessField();
	bool Step();
	void ShowBoard();
private:
	std::vector<Figure*> m_figures;
	 
};