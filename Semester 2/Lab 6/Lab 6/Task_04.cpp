#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void main()
{
	int size = 0;
	string*ptr;
	int avg = 0;
	int number = 0;
	int maxnum;
	cout << "Enter Number of Students";
	cin >> size;
	int *marks = new int[size];
	ptr = new string[size];
	cout << "Enter name of Students:";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
	cout << "Enter Marks of Students:";
	for (int i = 0; i < size; i++)
	{
		cin >> marks[i];
	}
	for (int i = 0; i < size-1; i++)
	{
		if (marks[i] > marks[i + 1])
		{
			maxnum = marks[i];
		}
		else if(marks[i] < marks[i + 1])
		{
			maxnum = marks[i + 1];
		}
		number++;
	}
	avg = number / size;
	cout << "The Number of Students Are:" << number << endl;
	cout << "Maximum Numbers are:" << maxnum << endl;
	delete [] marks;
	delete[] ptr;
	_getch();
}