#include <iostream>
#include "cross.h"

std:: string cross(int size)
{
	std::cout << "Shape: \n";
	int b = 0;
	int e = size - 2;

	for (int row = 0; row < size/2; row++) {
		for (int i = 0; i < b; i++) {
			std::cout << " ";
		}
		b++;	
		std::cout << "*";
		
		for(int i = e; i > 0; i--) {
			std::cout << " ";
		}
		e -= 2;
		std::cout << "*\n";	
	}
	
	b--;
	e += 2;

	for (int row = 0; row < size/2; row++) { 
		for (int i = b; i > 0; i--) {
			std::cout << " ";
		}
		b--;
		std::cout << "*";

		for (int i = 0; i < e; i++) {
			std::cout << " ";
		}
		e += 2;
		std::cout << "*\n";
	}

	return "";
}

