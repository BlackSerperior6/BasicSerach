#pragma once

int InterpolarSearch(int* Arr, int Lenght, int element)
{
	int index = -1;
	int leftIndex = 0;
	int rightIndex = Lenght - 1;

	while ((leftIndex < rightIndex) && index == -1)
	{
		int middleIndex = leftIndex + (((element - Arr[leftIndex]) * (rightIndex - leftIndex))/(Arr[rightIndex] - Arr[leftIndex]));

		if (Arr[middleIndex] == element)
			index = middleIndex;

		else if (Arr[middleIndex] > element)
			rightIndex = middleIndex - 1;

		else
			leftIndex = middleIndex + 1;
	}

	if (Arr[leftIndex] == element)
		return leftIndex;

	else if (Arr[rightIndex] == element)
		return rightIndex;

	return index;
}
