#pragma once
#include <iostream>

using namespace std;

int BasicSerach(int* Arr, int Lenght, int element) 
{
	cout << "Метод базового поиска" << endl;

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
