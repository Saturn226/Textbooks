#include <iostream>
using namespace std;

int main()
{
	int myArray[5] = {7,4,1,8,3};
	int sorted[5] = {0,0,0,0,0};
	int minNum = myArray[0];
	int temp;
	


	for (int i = 0; i < 5; i ++)
		cout << myArray[i] << ",";
	cout << endl;


	for (int i = 0; i <  5; i++)
	{

		minNum = i;
		for (int j = i; j < 5; j++)
		{
			if (myArray[minNum] > myArray[j])
			{
				minNum = j;
				
			}
		
			
		}
				temp = myArray[i];			
				myArray[i] = minNum;
				myArray[minNum] = temp;
				
		
	} 
	


	for (int i = 0; i < 5; i ++)
		cout << myArray[i] << ",";
	cout << endl;

	cin.ignore(2);

	return 0;
}