#include "ChessField.h"
 

bool ChessField::Step() {
 
     int xPos = 0;
     int yPos = 0;
     int figureId = 0;
    std::cout << '\n' << "Enter new position and 'id' (posX, poxY)" << std::endl;
    std::cout << " 1 - Horse White \n 2 - King White \n 3 - Horse Black \n 4 - King Black" << std::endl;
    std::cin >> xPos >> yPos >> figureId;
    --figureId; // because array elements start at 0
    const int fieldLastPos = 8;
    bool succsesful = false;

   
    if (xPos > fieldLastPos || yPos > fieldLastPos || xPos < 0 || yPos < 0 || figureId < 0 || figureId > m_figures.size()) {
        std::cerr << "Wrong positoin or ID. Try again" << std::endl;
    }
    else {
            for (size_t i = 0; i < m_figures.size(); ++i) {
                if (xPos == m_figures[i]->GetX() && yPos == m_figures[i]->GetY()) {
                    if (m_figures[figureId]->GetColor() == m_figures[i]->GetColor()) {
                        std::cerr << "figure cannot move to its own color" << std::endl;
                        return succsesful;
                        
                    }
                    else {
                        const int knockedOutFigurPos = 15;
                        succsesful = m_figures[figureId]->CanMoveToPos(xPos, yPos);
                        if (succsesful) {
                        m_figures[i]->SetCurrentCoordinates(knockedOutFigurPos, knockedOutFigurPos);
                        return succsesful;
                        }
                    }
                }
            }
 
          succsesful = m_figures[figureId]->CanMoveToPos(xPos, yPos);
             
    }
    return succsesful;
}
   void ChessField::ShowBoard() {
       
        
        for (int x = 9; x > 0; --x) {
            std::cout << std::endl;
            for (int y = 0; y < 9; ++y) {

                std::cout << "      |";
            }
            std::cout << std::endl;
            for (int y = 0; y < 9; ++y) {
                if (y == 1 && x == 9) {
                    std::cout << "    1 |";
                }
                else
                    if (y == 2 && x == 9) {
                        std::cout << "   2  |";
                    }
                    else
                        if (y == 3 && x == 9) {
                            std::cout << "   3  |";
                        }
                        else
                            if (y == 4 && x == 9) {
                                std::cout << "   4  |";
                            }
                            else
                                if (y == 5 && x == 9) {
                                    std::cout << "   5  |";
                                }
                                else
                                    if (y == 6 && x == 9) {
                                        std::cout << "   6  |";
                                    }
                                    else
                                        if (y == 7 && x == 9) {
                                            std::cout << "   7  |";
                                        }
                                        else
                                            if (y == 8 && x == 9) {
                                                std::cout << "   8  |";
                                            }
                                            else
                                                if (x == m_figures[0]->GetY() && y == m_figures[0]->GetX()) {
                                                    std::cout << "  HW  |";
                                                }
                                             else
                                                    if (x == m_figures[1]->GetY() && y == m_figures[1]->GetX()) {
                                                        std::cout << "  KW  |";
                                                    }
                                                    else
                                                        if (x == m_figures[2]->GetY() && y == m_figures[2]->GetX()) {
                                                            std::cout << "  HB  |";
                                                        }
                                                        else

                                                            if (x == m_figures[3]->GetY() && y == m_figures[3]->GetX()) {
                                                                std::cout << "  KB  |";
                                                            }
                                                            else

                                                                if (y == 0) {
                                                                    if (x == 9) {
                                                                        std::cout << "  Pos |";
                                                                    }
                                                                    else {
                                                                        std::cout << "   " << x << "  |";
                                                                    }
                                                                }
                                                                else
                                                                    std::cout << "      |";
            }
            std::cout << std::endl;
            for (int y = 0; y < 9; ++y) {
                std::cout << "______|";

            }

        } 
        
    }
   ChessField::~ChessField() {
       for (size_t i = 0; i < m_figures.size(); ++i)
       {
           delete m_figures[i];
       }
   }

