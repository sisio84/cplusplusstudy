#include "pch.h"

using namespace std;

void PrintPyramid(int floor, bool ignoreFirst = false)
{
	for (int i = 0; i < floor; ++i)
	{
		if (ignoreFirst)
		{
			if (i == 0)
				continue;
		}

		int printcount = i * 2 + 1;
		for (int j = 0; j < floor - 1 - i; ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < printcount; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void PrintReversePyramid(int floor, bool ignoreFirst = false)
{
	for (int i = 0; i < floor; ++i)
	{
		if (ignoreFirst)
		{
			if (i == 0)
				continue;
		}

		int printcount = (floor - i) * 2 - 1;
		for (int j = 0; j < i; ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < printcount; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void PrintSandClock(int floor)
{
	int halfFloor = (floor + 1) / 2;
	PrintReversePyramid(halfFloor);
	PrintPyramid(halfFloor, floor % 2 != 0);
}

void PrintDiamond(int floor)
{
	int halfFloor = (floor + 1) / 2;
	PrintPyramid(halfFloor);
	PrintReversePyramid(halfFloor, floor % 2 != 0);
}
