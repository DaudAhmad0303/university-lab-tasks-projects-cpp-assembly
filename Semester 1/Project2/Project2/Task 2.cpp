//Program for Booksellers
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	unsigned int book = 0, points = 0;
	cout << "Enter the Number of Books: ";
	cin >> book;
	switch (book)
	{
	case 0:
		cout << "You are Awarded for 0 Points...!";
		break;
	case 1:
		cout << "You are Awarded for 5 Points...!";
		break;
	case 2:
		cout << "You are Awarded for 15 Points...!";
		break;
	case 3:
		cout << "You are Awarded for 30 Points...!";
		break;
	case 4:
		cout << "You are Awarded for 60 Points...!";
		break;
	default:
		cout << "You are Awarded for 60 Points...!";
		break;
	}
	_getch();
}