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

int main()
{
	
	return 0;
}