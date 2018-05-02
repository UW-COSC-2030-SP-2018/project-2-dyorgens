//Project2Func.h
//Project 2 - Recursion and Hashing
//Draven Yorgensen
//COSC 2030 - Dr.Borowczak
//May 5, 2018

#include <iostream>
#include <vector>
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
