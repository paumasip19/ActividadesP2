#pragma once

#include <iostream>
#include <time.h>

namespace utils
{
	int *generate(int length, int max)
	{
		srand(time(NULL));

		int* dinAr;
		dinAr = new int[length];

		for (int i = 0; i < length; i++)
		{
			dinAr[i] = rand() % max;
		}

		return dinAr;
	}

	int *generate(int length)
	{
		srand(time(NULL));

		int* dinAr;
		dinAr = new int[length];

		for (int i = 0; i < length; i++)
		{
			dinAr[i] = rand() % 1000;
		}

		return dinAr;
	}

	void print(int a[], int length)
	{
		for (int i = 0; i < length; i++)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
}

