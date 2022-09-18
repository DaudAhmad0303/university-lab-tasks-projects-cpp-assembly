
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include "Task 5.h"
using namespace std;
int main()
{
	Rectangle rec1(6, 9);
	Rectangle rec2 = rec1;
	cout << "The Area of First Rectangle is : ";
	cout<<rec1.getArea();
	cout << "\nThe Area of Other Rectangle is : ";
	cout << rec2.getArea();

	_getch();
	return 0;
}
