//this program calculates the average of a set of numbers

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int myArray[100];
	int sum = 0;
	cout << "How many numbers would you like to enter ";
	cin >> num;
	for(int i = 0; i < num ; ++i)
	{
		int numbers;		
		cout << "[" << i << "] = "; 
		cin >>  numbers;
		myArray[i] = numbers; 
		sum += myArray[i];
	}
	cout << "The average is: " << sum/num;
	cin.ignore(5);
	return 0;
}