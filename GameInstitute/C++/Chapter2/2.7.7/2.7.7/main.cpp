//performs a linear search on an array of numbers.
#include <iostream>
using namespace std;

int main()
{
	int myList[17] = {7,3,32,2,55,34,6,13,29,22,11,9,1,5,42,39,8};
	int key;
	for (int i = 0; i < 17; i ++)
		cout << myList[i]<< ","; 
	cout <<endl;
	cout << "Enter an integer in the list to search for: ";
	cin >> key;

	
	for (int i = 0; i < 17; i++)
	{
		
		if(key == myList[i])
		{
			cout << "Item found at index " << i;
			break;
		}
	/*	else 
			continue;*/
	}
	
	cin.ignore(2);
	return 0;
}