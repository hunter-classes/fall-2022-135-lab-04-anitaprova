#include <iostream>
#include "lower.h"

std:: string lower(int length)
{
	std::cout << "Shape: \n";
	int num = 1;
	for (int row = 0; row < length; row++) {
		for (int i = 0; i < num; i++) {
			std::cout << "*";
		}
		num++;
		std::cout << "\n";
	}

	return "";
}
