#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::string name2;
	std::cout << "Please enter your name (First and Last): ";
	std::cin >> name;
	std::cout << "\nHi " << name <<std::endl; //This will not work as std::cin reads up to a space
	
	std::cout << " ================================ \n\n";
	std::cout << "Please enter your name (first and Last): ";
	std::cin.clear();
	std::getline(std::cin,name2);
	std::cout << "\nHi " << name2 << std::endl;
	std::cin.ignore(5);
	return 0;
}