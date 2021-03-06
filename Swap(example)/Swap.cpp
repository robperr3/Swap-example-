﻿// Swap.cpp : Defines the entry point for the console application.
////// Swap
// Demonstrates passing references to alter argument variables

#include "stdafx.h"
#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
	//declaring and init/assigning value to my variabl inside funhct
	int myScore = 150;
	int yourScore = 1000;
	//writting original starting values to screen for user
	cout << "Original values\n";
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling badSwap()\n";
	//calling funct badSwap  and passing to arguements
	badSwap(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n";
	
	system("pause");
	return 0;
}
///swappinh 2 local values (copies of orginals) that are being passed to it
void badSwap(int x, int y)// this is how u swap variables
{
	int temp = x;//data in x is now in temp
	x = y;//data in y is now in x 
	y = temp;// what was in temp (which happens to be x) is now in y; they swapped!
}
///swapping 2 ref's to a orignal values that are passed to it
void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
