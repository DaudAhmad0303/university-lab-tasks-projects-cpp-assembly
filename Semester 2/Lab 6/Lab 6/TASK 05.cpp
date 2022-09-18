#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void main()
{
	
	int **ptr;
	int rows;
	int coloums;
	int sum_of_rows=0;
	int sum_of_coloums=0;
	cout << "Number of rows:";
	cin >> rows;
	cout << "Enter Number of coloums:";
	cin >> coloums;
	ptr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		ptr[i] = new int[coloums];
	}
	cout << "Enter vaLues:";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			cin >> ptr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			sum_of_rows = sum_of_rows + ptr[i][j];	
		}
		cout << "Sum of Row no " << i + 1 << " is:" << sum_of_rows << endl;
		sum_of_rows = 0;
		
	}
	for (int i = 0; i < coloums; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sum_of_coloums = sum_of_coloums + ptr[j][i];
		}
		cout << "Sum of coloumn no  " << i + 1 <<" is:" << sum_of_coloums << endl;
		sum_of_coloums = 0;

	}
	delete[]ptr;
	_getch();
}