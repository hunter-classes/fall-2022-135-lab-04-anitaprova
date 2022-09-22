#include <iostream>
#include "funcs.h"

std::string checkerboard(int width, int height)
{
	std::cout << "Shape: \n";
	int num = 0;
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			if (num % 2 == 0) { //even
				std::cout << "*";
			}
			else { //odd
				std::cout << " ";
			}
			num++;
		}
		std::cout << "\n";
	}

	return "";
}
