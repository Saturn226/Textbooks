// Calculate the area and circumfrence of a circle


#include <iostream>


int main()
{
	const double PI = 3.14;
	double radius;
	std::cout << "Enter the radius of a circle: ";
	std::cin >> radius;
	std::cout << "\nThe area A of a circle with the radius " << radius << " is: ";
	std::cout << PI * radius * radius;
	std::cout << "\nThe circumfrence C of a circle with the radius " << radius << " is: ";
	std::cout << 2 * PI * radius;
	std::cin.ignore(5);
	return 0;
}
