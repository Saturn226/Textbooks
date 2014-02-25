// This program prints out the numerical values for the ASCII characters 33-255

#include <iostream>
using namespace std;

int main()
{
	unsigned char myChar;
	for (int i = 33; i <=255; ++i)
	{
		myChar = i;
		if(i % 10 == 0)
			cout << endl;
		else
			cout << i << ": " << myChar << " ";
	}
	cin.ignore(2);
	return 0;
}