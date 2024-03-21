#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));

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

	cout << "Введите элемент, который надо найти в массиве" << endl;
}