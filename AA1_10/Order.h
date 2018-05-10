#pragma once

#include <iostream>
#include <time.h>

void BubbleSort(int a[], int length)
{
	int temp;
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < (length - 1); ++j)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void SelectionSort(int a[], int length) {
	int minIndex, tmp;
	for (int i = 0; i < length - 1; i++) 
	{
		minIndex = i;
		for (int j = i + 1; j < length; j++) 
		{
			if (a[j] < a[minIndex])minIndex = j;
			if (minIndex != i) 
			{
				tmp = a[i];
				a[i] = a[minIndex];
				a[minIndex] = tmp;
			}
		}
	}
}

void InsertionSort(int a[], int length) {
	int j, tmp;
	for (int i = 1; i < length; i++) 
	{
		tmp = a[i];
		for (j = i - 1; j >= 0 && a[j] > tmp; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = tmp;
	}
}

bool isAscending(int a[], int length) {

}
