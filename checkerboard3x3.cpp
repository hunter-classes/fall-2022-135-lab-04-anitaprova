#include <iostream>
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height)
{
	std::cout << "Shape: \n";
	int star_middle = 1;
	int blank_middle = 4;
	int row_star = 1;
	int row_blank = 4;

	for (int row = 0; row < height; row++) {
		if ( (row%2 == 0 && row%3 == 0 && row%6 == 0) || (row == row_star) || (row%2 == 0 && row != row_blank) ){
			star_middle = 1;
			blank_middle = 4;
			for (int col = 0; col < width; col++) { //row type 1
				if (col%2 == 0 && col%3 == 0 && col%6 == 0) {
					std::cout << "*";
				}
				else if (col%3 == 0 && col != 0) {
					std::cout << " ";
				}
				else if (col == star_middle) {
					std::cout << "*";
					star_middle += 6;
				}
				else if (col == blank_middle) {
					std::cout << " ";
					blank_middle += 6;
				}
				else if (col%2 == 0) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				
				}
			}
			if(row == row_star) { row_star += 6; }
			if(row == row_blank) { row_blank += 6; }
			star_middle = 1;
			blank_middle = 4;
			std::cout << "\n";
		} //row over
		else {
			star_middle = 4;
			blank_middle = 1;
			
			for (int col = 0; col < width; col++) { //second row type
				if (col%2 == 0 && col%3 == 0 && col%6 == 0) {
					std::cout << " ";
				}
				else if (col%3 == 0 && col != 0) {
					std::cout << "*";
				}
				else if (col == blank_middle) {
					std::cout << " ";
					blank_middle += 6;
				}
				else if (col == star_middle) {
					std::cout << "*";
					star_middle += 6;
				}
				else if (col%2 == 0) {
					std::cout << " ";
				}
				else {
					std::cout << "*";
				}
			}
			if(row ==row_star) { row_star += 6;}
			if(row == row_blank) {row_blank +=6;}
			std::cout << "\n";
		}
	}
	return "";
}
