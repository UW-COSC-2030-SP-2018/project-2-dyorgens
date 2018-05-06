//Project2.cpp
//Project 2 - Recursion and Hashing
//Draven Yorgensen
//COSC 2030 - Dr.Borowczak
//May 5, 2018

#include "Project2Func.h"
#include <iostream>
#include <vector>
#include <string>
#include <functional>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	//QuickSort help from: https://stackoverflow.com/questions/22504837/how-to-implement-quick-sort-algorithm-in-c
	//Writing from user into the vector: https://stackoverflow.com/questions/8377660/how-to-cin-to-a-vector
	//Creating a sentinel value http://www.cplusplus.com/forum/beginner/1632/
	
	int input;
	int search;
	int hash1;
	string hash2;
	int i = 0;
	int q = 0;
	int p = 0;
	vector<int> A;
	vector<int> B;

	cout << "QuickSort :: Please enter the values to be sorted via vectors ('-9999' to end input): " << endl;
	while ((cin >> input) && input != -9999)
	{
		A.push_back(input);
		q++;
	}
	cout << endl;
	cout << "======Original=======" << endl;
	for (auto e : A)
		cout << e << " ";
	cout << endl;

	quickSort(A, p, q);

	cout << "======Quick Sorted=======" << endl;
	for (auto e : A)
		cout << e << " ";
	cout << endl;
	//End of Quicksort

	//Beginning of the Binary Search 
	//Binary Search help from: https://stackoverflow.com/questions/27431029/binary-search-with-returned-index-in-stl
	cout << endl;
	cout << "Please enter a value in the sorted vector above to be searched (the index will be printed): " << endl;
	cin >> search;
	cout << search << " was found at index location: " << binary_search(A, search) << endl;
	//End of Binary Search 
	cout << endl;
	//Beginning of Merge Sort
	//MergeSort help from: https://michaellindon.github.io/lindonslog/linux-unix/c-merge-sort-algorithm/index.html
	//To print the values I used pieces of code from the quick sort printing 
	cout << "MergeSort :: Please enter the values to be sorted via vectors ('-9999' to end input): " << endl;
	while ((cin >> input) && input != -9999)
	{
		B.push_back(input);
	}

	cout << endl;
	cout << "======Original=======" << endl;
	for (auto e : B)
		cout << e << " ";
	cout << endl;

	vector<int> sorted = merge_sort(B);

	cout << "======Merge Sorted=======" << endl;
	for (auto e : sorted)
		cout << e << " ";
	cout << endl;
	//For symmetry I reused the binary search function for the merge sort
	cout << endl;
	cout << "Please enter a value in the sorted vector above to be searched (the index will be printed): " << endl;
	cin >> search;
	cout << search << " was found at index location: " << binary_search(sorted, search) << endl;
	cout << endl;
	//Beginning of string/int hashing to int
	//Help from https://stackoverflow.com/questions/16075271/hashing-a-string-to-an-integer-in-c
	cout << "Please enter an integer or string to be hashed to an integer: " << endl;
	cin >> hash1;
	if (cin.fail())
	{
		//help all words return the same integer
		cin >> hash2;
		hash<string> hasher;
		auto hashed = hasher(hash2);
		cout << hashed << endl;
		return 0;
	}
	else 
	{

		return 0;
	}
	
}



