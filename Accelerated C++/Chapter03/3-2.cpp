#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//Write a program to compute and print the quartiles (that is, the quareter of the numbers with the largest values, 
// the next highest quarter, and so on) of a set of integers)

// Q2 is always the median
//Q1 is the median between the beginning of the vector and Q2
//Q3 is the median between Q2 and the end of the vector

//I will implement code based on this.

int main()
{
	vector<double> integers;
	int x;

	while(cin >> x)
	{
		integers.push_back(x);		
	}

	sort(integers.begin(), integers.end());
	cout << "The sorted integers ";
	for (int i = 0; i < integers.size(); i++) //sanity check
		 cout << integers[i] <<" "; 

	typedef vector<double>::size_type vec_size;
	vec_size size = integers.size();

	vec_size mid = size/2;
	double median;

	median = size % 2 == 0 ?  (integers[mid] + integers[mid - 1]) /2 : integers[mid] ; 

	double lowerQuartile;
	lowerQuartile = size % 2 == 0 ? (integers[mid / 2] + integers[mid / 2 - 1])  / 2 : integers[mid / 2];

	double upperQuartile;
	upperQuartile =  size % 2 == 0? (integers[(size + mid)/2] + integers[((size + mid) /2) + 1]) /2  : integers[(size + mid) / 2];	
	
	
	cout << "\nQ1 = " << lowerQuartile;
	cout << "The median or Q2 is " << median;
	cout << "\nQ3 = " << upperQuartile;
	return 0;
}