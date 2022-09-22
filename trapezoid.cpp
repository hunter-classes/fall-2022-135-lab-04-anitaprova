#include <iostream>
#include "trapezoid.h"

std::string trapezoid(int width, int height)
{
	std::cout << "Shape: \n";
	int spaces = 0;
	int stars = width;

	for (int row = height; row > 0; row--) {
		for (int i = 0; i < spaces; i++) {
			std::cout << " ";
		}

		for (int col = stars; col > 0; col--) {
			std::cout << "*";
		}
		spaces += 1;
		stars -= 2;
		std::cout << "\n";
	}
	
	return "";
}
