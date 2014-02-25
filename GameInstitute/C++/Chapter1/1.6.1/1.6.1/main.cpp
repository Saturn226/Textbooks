/* This is the first excersize of chapter 1 textbook for game institute	
	It calculates the sum, quotient, difference, and product of 2 numbers.
	Ashley Muller 2014*/


#include <iostream>

int main()
{
	
	int n1,n2;
	std::cout << "Enter a real number n1: ";
	std::cin >> n1;
	std::cout << "Enter a real number n2: ";
	std::cin >> n2;

	std::cout << "n1 + n2 = " << n1 + n2 << std::endl;
	std::cout << "n1 - n2 = " << n1 - n2 << std::endl;
	std::cout << "n1 * n2 = " << n1 * n2 << std::endl;
	std::cout << "n1 / n2 = " << n1 / n2 << std::endl;
		
	std::cin.ignore(5);
	return 0;
}