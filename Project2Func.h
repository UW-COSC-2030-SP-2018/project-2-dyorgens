//Project2Func.h
//Project 2 - Recursion and Hashing
//Draven Yorgensen
//COSC 2030 - Dr.Borowczak
//May 5, 2018

#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

//These were the functions found in order to impliment the quicksort
void quickSort(vector<int>&, int, int);
int partition(vector<int>&, int, int);

void quickSort(vector<int>& A, int p, int q)
{
	int r;
	if (p<q)
	{
		r = partition(A, p, q);
		quickSort(A, p, r);
		quickSort(A, r + 1, q);
	}
}

int partition(vector<int>& A, int p, int q)
{
	int x = A[p];
	int i = p;
	int j;
	for (j = p + 1; j<q; j++)
	{
		if (A[j] <= x)
		{
			i = i + 1;
			swap(A[i], A[j]);
		}
	}
	swap(A[i], A[p]);
	return i;
}
//End of QuickSort

//Binary search function 
int binary_search(vector<int> v, int data) {
	auto it = lower_bound(v.begin(), v.end(), data);
	if (it == v.end() || *it != data) {
		return -1;
	}
	else {
		std::size_t index = distance(v.begin(), it);
		return index;
	}
}
//Beginning of MergeSort
vector<int> merge_sort(const vector<int>& input)
{
	if (input.size() <= 1) return input;
	vector<int> output(input.size());

	//Split Vector//
	int midpoint = 0.5*input.size();
	vector<int> input_left(input.begin(), input.begin() + midpoint);
	vector<int> input_right(input.begin() + midpoint, input.end());

	input_left = merge_sort(input_left);
	input_right = merge_sort(input_right);
	merge(input_left.begin(), input_left.end(), input_right.begin(), input_right.end(), output.begin());

	return output;
}
//Beginning of Integer Hash Function
//This is a function for string hashing to integers
unsigned int WeakHash(const std::string& str)
{
	unsigned int b = 3751;
	unsigned int a = 689;
	unsigned int hash = 0;

	if (str.length() > 80)
	{
		cout << "Please enter a shorter string " << endl;
		return 0;
	}
		for (std::size_t i = str.length() - 4; i < str.length() - 1; i++)
		{
			hash = hash * a + str[i];
			a = a*b;
		}
		return hash;
}

unsigned int IntHash(const int& num)
{
	unsigned int b = 3751;
	unsigned int a = 689;
	unsigned int hash = 0;

	int n = 0;
	unsigned int numdig = 0;
	do {
		++numdig;
		n / num; 
	} while (n);
	if (numdig > 80)
	{
		cout << "Please enter a shorter integer " << endl;
		return 0;
	}
	for (std::size_t i = num - 4; i < num - 1; i++)
	{
		hash = hash * a + num;
		a = a*b;
	}
	return hash;

}
