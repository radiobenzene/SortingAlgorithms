//Demonstration of the Insertion Sort written in C++


#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

void PrintArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
void InsertionSort(int *a, int n)
{
	int i = 1;
	int j;
	int x;
	while (i < n)
	{
		x = a[i];
		j =i - 1;
		while (j >= 0 && a[j] > x)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = x;
		i++;
	}
}

int main()
{
	//Printing only for 10 elements
	int n = 10;
	int arr[] = {12,80,123,2,3,9812,1,23,12342,10};
	InsertionSort(arr, n);
	PrintArray(arr, n);
}