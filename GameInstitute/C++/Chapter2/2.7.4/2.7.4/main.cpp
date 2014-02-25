#include <iostream>
using namespace std;

int main()
{
	int num;
	int factorial = 1;
	cout << "Enter the positive integer to compute the factorial of: ";
	cin >> num;
	cout << "\n!" << num << "= ";
		for(num; num > 0; num--	)
	{
		factorial *= num;
	}
	cout << factorial;
	cin.ignore(2);
	return 0;
}