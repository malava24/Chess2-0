 #include <iostream>
#include "ChessField.h"
#include "Figure.h"
#include "King.h"
#include "Horse.h"





int main()
{
	try
	{
		ChessField field;
		while (true) {
			field.ShowBoard();
			if (field.Step()) {
				std::cout << "Succses move" << std::endl;
			}
			else {
				std::cerr << "not successful move" << std::endl;
			}
			
		}
	}
	catch (const std::exception& ex) {
		std::cout << ex.what();
	}

}

 
