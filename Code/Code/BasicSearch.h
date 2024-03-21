#pragma once

int BasicSerach(int* Arr, int Lenght, int element) 
{
	bool flag = false;
	int index = -1;

	for (int i = 0; i < Lenght && !flag; i++)
	{
		flag = Arr[i] == element;

		if (flag)
			index = i;
	}

	return index;
}
