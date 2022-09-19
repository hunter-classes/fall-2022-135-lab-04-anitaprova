#include <iostream>
#include "funcs.h"

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
