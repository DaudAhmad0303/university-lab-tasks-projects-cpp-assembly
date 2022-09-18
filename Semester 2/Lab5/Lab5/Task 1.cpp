/*
// Implementation file for the FeetInches class
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
#include "Task 1.h"
void FeetInches::simplify()
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0)
	{
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}
int main()
{
	// Let's say Aslam and Ahmad have same hights
	FeetInches Aslam(7, 15);
	FeetInches Ahmad = Aslam;
	cout << "Height in Perfect Order.\n";
	cout << "Aslam's Height = " << Aslam.getFeet() << " , " << Aslam.getInches() << endl;
	cout << "Ahmad's Height = " << Ahmad.getFeet() << " , " << Ahmad.getInches() << endl;
	_getch();
	return 0;
}
*/