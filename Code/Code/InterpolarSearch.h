#pragma once

#include <iostream>

using namespace std;

int InterpolarSearch(int* Arr, int Lenght, int element)
{
	cout << "»нтерпол€рный посик!" << endl;

	int index = -1;
	int leftIndex = 0;
	int rightIndex = Lenght - 1;

	while ((leftIndex <= rightIndex) && index == -1)
	{
		int denominator = Arr[rightIndex] - Arr[leftIndex];

		int middleIndex = leftIndex + (((element - Arr[leftIndex]) * (rightIndex - leftIndex))/(denominator == 0 ? 1 : denominator));

		if (middleIndex >= 0 && middleIndex < Lenght)
		{
			if (Arr[middleIndex] == element)
				index = middleIndex;

			else if (Arr[middleIndex] > element)
				rightIndex = middleIndex - 1;

			else
				leftIndex = middleIndex + 1;
		}	
		else
		{
			leftIndex++;
			rightIndex--;
		}
	}

	return index;
}
