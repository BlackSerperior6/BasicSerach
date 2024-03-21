#pragma once

#include <iostream>

using namespace std;

pair<int, int> StringBasicSearch(string Line, string subLine)
{
	int firstCompearpoint = 0;

	pair<int, int> result = { -1, -1 };

	while (firstCompearpoint + subLine.length() <= Line.length() && result.first == -1)
	{
		bool flag = true;
		int currentCompearPoint = firstCompearpoint;

		for (int i = 0; i < subLine.length() && flag; i++)
		{
			flag = subLine[i] == Line[currentCompearPoint];
			currentCompearPoint++;
		}

		if (!flag) 
			firstCompearpoint++;

		else
			result = { firstCompearpoint, currentCompearPoint};
	}

	return result;
}
