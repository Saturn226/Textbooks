#include <iostream>

int main()
{
	bool quit = false;
	int location[] = {0,0};
	

	while(!quit)
	{
		std::cout << "\nMove (N)orth, (E)ast, (W)est, (S)outh, (Q)uit ?: ";
		char choice;
		std::cin >> choice;
		
		
		switch(choice)
		{
		case 'N': case 'n':
			location[1] += 1;
			break;		
		case 'S': case 's':
			location[1] -= 1;
			break;
		case 'E': case 'e':
			location[0] += 1;
			break;
		case 'W': case 'w':
			location[0] -=1;
			break;
		case 'Q': case 'q':
			std::cout << "\nProgram Exited";
			quit = true; 
			break;
		default:
			std::cout << "Try again\n";
			break;

		}
		std::cout << "{" << location[0] <<"," << location[1] << "}";
	}
	
	
	std::cin.ignore(2);	
	return 0;
}
