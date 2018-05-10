#pragma once

#include <time.h>
#include <iostream>

namespace search
{
	int linearSearch(int a[], int length, int value) {

		int index = -1;

		for (int i = 0; i<length; i++) {
			if (value == a[i]) {
				index = i;
				break;
			}
		}
		return index;
	}

	int binarySearch(int a[], int length, int value)
	{
		int iLimit = 0;
		int sLimit = length - 1;
		int iMid;
		while (iLimit <= sLimit)
		{
			iMid = (iLimit + sLimit) / 2;
			if (a[iMid] == value) return iMid;
			else
				if (value < a[iMid]) sLimit = iMid - 1;
				else iLimit = iMid + 1;
		}
		return -1;
	}

	int *linearSearchIndexes(int a[], int length, int value) {

		int j = 0;

		for (int i = 0; i < length; i++) {
			if (value == a[i])
			{
				j++;
			}
		}

		int* indexAr;
		indexAr = new int[j];

		for (int i, k = 0; i < length; i++) {
			if (value == a[i])
			{
				indexAr[k] == i;
				k++;
			}
		}
		return indexAr;
	}

	int binarySearchR(int a[], int length, int value)
	{
		int iLimit = 0;
		int sLimit = length - 1;
		int iMid;
		while (iLimit <= sLimit)
		{
			iMid = (iLimit + sLimit) / 2;

			if (a[iMid] == value)
			{
				if (a[iMid] == a[iLimit])
				{
					return iMid;
				}
				else
				{
					sLimit = iMid;
				}

			}
			else
			{
				if (value < a[iMid])
				{
					sLimit = iMid - 1;
				}
				else
				{
					iLimit = iMid + 1;
				}
			}
		}
	}
}

