#pragma once

#include <time.h>
#include <iostream>

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

void generate(int a[], int length)
{
	srand(time(NULL));

	std::cout << "Cuantos numeros quieres poner em el array? :" << std::endl;
	std::cin >> length;

	for (int i = 0; i < length; i++)
	{
		a[i] = rand() % length + 1;
	}
}

void print(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}