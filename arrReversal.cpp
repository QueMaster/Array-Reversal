// array reversal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	const int SIZE = 6; 
	int controller = 6;
	int numbersA[SIZE] = {1,2,3,4,5,6};
	int numbersB[SIZE] = {};

	for (int i = 0; i < SIZE; i++)
	{
		numbersB[controller - 1] = numbersA[i];
		cout << numbersB[controller-1];
		controller--;

	}
	system("pause");
	return 0;
}
