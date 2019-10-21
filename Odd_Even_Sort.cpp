// Odd_Even_Sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int N = 5;
using namespace std;
void OddEvenSort(int a[])
{
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		for (int i = 0; i < N - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				sorted = false;
			}
		}
		for (int i = 0; i < N - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				sorted = false;
			}
		}
	}

}
void PrintArray(int a[])
{
	for (int i = 0; i < N; i++)
	{
		cout << a[i] << endl;
	}
}
void GetArray(int a[])
{
	cout << "Please enter array:" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	
	//int a[5] = { 254,456,4856,5478,1 };
	int a[5];
	GetArray(a);
	cout << " " << endl;
	OddEvenSort(a);
	PrintArray(a);
}

