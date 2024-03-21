#pragma once

#include <iostream>

using namespace std;

int BinarySearch(int *Arr, int Lenght, int element)
{
	cout << "Бинарный поиск!" << endl;

	int index = -1;
	int leftIndex = 0;
	int rightIndex = Lenght - 1;

	while ((leftIndex <= rightIndex) && index == -1)
	{
		int middleIndex = (leftIndex + rightIndex) / 2;

		if (Arr[middleIndex] == element)
			index = middleIndex;

		else if (Arr[middleIndex] > element)
			rightIndex = middleIndex - 1;

		else
			leftIndex = middleIndex + 1;
	}

	return index;
}
