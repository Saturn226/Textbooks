
//this program calculates the averages of a group of numbers
#include <iostream>

int main()
{
	double num = 0;
	double temp = 2;
	std::cout << "\nEnter number a0: ";
	std::cin >> temp;
	num += temp;
	std::cout << "\nEnter number a1: ";
	std::cin >> temp;
	num += temp;
	std::cout << "\nEnter number a2: ";
	std::cin >> temp;
	num += temp;
	std::cout << "\nEnter number a3: ";
	std::cin >> temp;
	num += temp;
	std::cout << "\nEnter number a4: ";
	std::cin >> temp;
	num += temp;
	std::cout << "The average of the 5 numbers a0....a4 is : " << (num / 5);
	std::cin.ignore(2);
	return 0;
}