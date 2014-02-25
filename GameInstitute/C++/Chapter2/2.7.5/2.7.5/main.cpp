#include <iostream>
using namespace std;

int main()
{
	int matrixC [2][3];
	int matrixA[2][3] =
	{
		{-5,2,8},
		{1,0,0}
	};
	int matrixB[2][3] =
	{
		{1,0,2},
		{0,3,-6}
	};

	for (int i = 0; i < 2; i ++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
		}
	}
	

	for (int i = 0; i < 2; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			cout <<  matrixC[i][j] << " ";
					}
		cout << endl;
	}
	cin.ignore(2);
	return 0;
}