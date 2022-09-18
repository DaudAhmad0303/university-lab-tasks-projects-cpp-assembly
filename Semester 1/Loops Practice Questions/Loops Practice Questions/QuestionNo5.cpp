/*
* * * * *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j, space, row;
	cout << "Enter Number of Rows : ";
	cin >> row;
	for (i = 0; i <= row; i++)
	{
		for (space = i; space < row; space++)
			cout << " ";
		for (j = 1; j <= (2 * row - 1); j++)
		{
			if (i == row || j == 1 || j == 2 * i - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	_getch();
}