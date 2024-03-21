#include <iostream>
#include <string>

#include "BinarySearch.h"
#include "InterpolarSearch.h"
#include "BasicSearch.h"
#include "BasicStringSerch.h"
#include "HoareQuickSort.h"

using namespace std;

void PrintArr(int* Arr, int Lenght)
{
	if (Lenght < 1)
		return;

	cout << "Ваш массив:" << endl;

	cout << Arr[0];

	for (int i = 1; i < Lenght; i++)
		cout << ' ' << Arr[i];

	cout << endl;
}

typedef int (*functionPointer)(int*, int, int);

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));

	functionPointer functions[] = {&BasicSerach, &BinarySearch, &InterpolarSearch};

	for (int i = 0; i < 3; i++)
	{
		int Lenght;

		do
		{
			cout << "Введите длину" << endl;
			cin >> Lenght;
		} 
		while (Lenght <= 1);

		int* Arr = new int[Lenght];

		for (int i = 0; i < Lenght; i++)
			Arr[i] = rand() % 100;

		if (i != 0)
			HoareQuickSorting(Arr, Lenght);

		PrintArr(Arr, Lenght);

		cout << "Введите элемент, который надо найти в массиве" << endl;

		int elementToFined;

		cin >> elementToFined;

		int foundIndex = functions[i](Arr, Lenght, elementToFined);

		if (foundIndex == -1)
			cout << "Элемент не найден" << endl;
		else
			cout << "Найден элемент по номеру: " << foundIndex + 1 << endl;

		delete[] Arr;
	}

	cout << endl << endl << "Введите строку" << endl;
	cin.ignore();

	string Line;

	getline(cin, Line);

	cout << "Введите подстроку, которую вы хотите найти" << endl;

	string subLine;

	getline(cin, subLine);

	pair<int, int> foundIndexes = StringBasicSearch(Line, subLine);

	if (foundIndexes.first == -1)
		cout << "Подстрока не найдена" << endl;
	else
		cout << "Начало подстроки: " << foundIndexes.first + 1 << ", конец подстроки: " << foundIndexes.second + 1 << endl;
}