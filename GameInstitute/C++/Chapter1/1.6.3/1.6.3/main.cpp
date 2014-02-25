#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a real number ";
	std::cin >> num;
	std::cout << num * num * num;
	std::cin.ignore(2);
	return 0;
	
}