// Algorithmic Representation of Cocktail Sort
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define N 5 //N can be changed here
using namespace std;
int length(int arr[], int n)
{
	//Calculating the length of an array
	//Function can be deleted 
	return n;
}
void CocktailShakerSort(int a[])
{
	int len = length(a, N);
	bool swapped = false;
	do 
	{
		swapped = false;
		for (int i = 0; i < len - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
		swapped = false;
		for (int i = 0; i < len - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}
	} while (swapped == true);
}
void PrintArray(int a[], int length)
{
	//Printing Array here
	for (int i = 0; i < length; i++)
	{
		cout << a[i] << " " << endl;
	}
}
void CreateArray(int a[])
{
	//Function can be commented in case of pre-defined array declaration 
	cout << "Please enter array:";
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	//int a[N] = {12,545,487,456,123};-Pre-defined Value
	int a[N];
	CreateArray(a);
	CocktailShakerSort(a);
	cout << " " << endl;
	PrintArray(a, N); //N = 5
	return 0;
}

