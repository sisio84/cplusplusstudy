#include "pch.h"


using namespace std;

extern void Exercise1_10_1();
extern void Exercise1_10_2();
extern void Exercise1_10_3();

extern void PrintPyramid(int floor, bool ignoreFirst);
extern void PrintReversePyramid(int floor, bool ignoreFirst);
extern void PrintSandClock(int floor);
extern void PrintDiamond(int floor);

int main()
{
	//Exercise1_10_1();
	//Exercise1_10_2();
	//Exercise1_10_3();
	/*PrintPyramid(5);
	PrintReversePyramid(5);*/
	//PrintReversePyramid(4);
	for(int  i = 0; i <= 15; ++i)
	{ 
		cout << "line lenth: " << i << endl << endl;
		PrintDiamond(i);
	}

}