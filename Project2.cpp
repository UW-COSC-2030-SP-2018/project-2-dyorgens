//Project2.cpp
//Project 2 - Recursion and Hashing
//Draven Yorgensen
//COSC 2030 - Dr.Borowczak
//May 5, 2018

#include "Project2Func.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	//QuickSort help from: https://stackoverflow.com/questions/22504837/how-to-implement-quick-sort-algorithm-in-c
	//Writing from user into the vector: https://stackoverflow.com/questions/8377660/how-to-cin-to-a-vector
	//Creating a sentinel value http://www.cplusplus.com/forum/beginner/1632/

	int input;
	int q = 0;
	vector<int> A;
	cout << "Please enter a vector of numbers to be sorted ('-9999' to end input): " << endl;
	while ((cin >> input) && input != -9999)
	{
		A.push_back(input);
		q++;
	}
	int p = 0;

	cout << "======Original=======" << endl;
	for (auto e : A)
		cout << e << " ";
	cout << endl;

	quickSort(A, p, q);

	cout << "======Sorted=======" << endl;
	for (auto e : A)
		cout << e << " ";
	cout << endl;
	//End of Quicksort
}

