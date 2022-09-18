#include<iostream>
#include<conio.h>
using namespace std;
int compareArray(int *Array1, int *Array2);
void main()
{
	int array1[5], array2[5];
	int rst = -5;
	cout << "Enter five Digit Number : ";
	for (int i = 0; i < 5; i++)
	{
		cin >> array1[i];
	}
	cout << "Enter five Digit Number : ";
	for (int j = 0; j < 5; j++)
	{
		cin >> array2[j];
	}
	rst = compareArray(array1, array2);
	if (rst == 0)
		cout << "Numbers are Equal .... ";
	else if (rst == 1)
		cout << "First Number is Greater .... ";
	else if (rst == -1)
		cout << "Second Number is Greater ....";
	else
		cout << "Invalid ..... ";
	_getch();

}
int compareArray(int *Array1, int *Array2)
{
	int i = 0, c = 0, d = 0, e = 0;
	for (i = 0; i < 5; i++)
	{
		if (Array1[i] == Array2[i])
			c++;
	}
	for (i = 0; i < 5; i++)
	{
		if (Array1[i] > Array2[i])
			d++;
	}
	for (i = 0; i < 5; i++)
	{
		if (Array1[i] < Array2[i])
			e++;
	}

	cout<<d<<c<<e;
	if (c == 5)
		return 0;
	else if (d < 5)
		return 1;
	else if (e < 5)
		return -1;
	else
		return NULL;
}
