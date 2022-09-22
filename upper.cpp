#include <iostream>
#include "upper.h"

std::string upper(int length)
{
	std::cout << "Shape: \n";
	int num = length;

	for (int row = 0; row < length; row++) {
		for (int i = 0; i < num; i++) {
			std::cout << "*";
		}
		num--;
		std::cout << "\n";
	}

	return "";
}
