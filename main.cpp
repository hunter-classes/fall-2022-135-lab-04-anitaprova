#include <iostream>
#include <string>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main()
{
	std::string result;

	std::cout << "box(7, 4):\n";
	result = box(7, 4);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;;

	std::cout << "checkerboard(11, 6)\n";
	result = checkerboard(11, 6);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;

	std::cout << "cross(8):\n";
	result = cross(8);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;
	
	std::cout << "cross(10):\n";
	result = cross(10);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;
	
	std::cout << "lower(6)\n";
	result = lower(6);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;

	std::cout << "upper(6)\n";
	result = upper(6);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;
	
	std::cout << "trapezoid(12, 5)\n";
	result = trapezoid(12, 5);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;

	std::cout << "checkerboard3x3(16,11):\n";
	result = checkerboard3x3(16,11);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;

	std::cout << "checkerboard3x3(27,27):\n";
	result = checkerboard3x3(27,27);
	std::cout << result;
	std::cout << "\n------------------\n" << std::endl;
}
