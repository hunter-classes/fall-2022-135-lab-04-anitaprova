#include <iostream>
#include "box.h"

std::string box (int width, int height)
{
	std::cout << "Shape: \n";
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return "";
}
