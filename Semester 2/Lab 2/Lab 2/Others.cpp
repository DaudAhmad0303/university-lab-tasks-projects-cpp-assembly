#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void main()
{
	int i = 0, arr[5], *aPtr = &arr[0];
	cout << "Enter Numbers : \n";
	for (i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << "Entered Numbers in Reverese Order are : \n";
	for (i = 4; i >= 0; i--)
	{
		cout << (aPtr ) << endl;

		cout << (aPtr + i) << endl;

		cout << *(aPtr + i) << endl;
	}
	_getch();
}