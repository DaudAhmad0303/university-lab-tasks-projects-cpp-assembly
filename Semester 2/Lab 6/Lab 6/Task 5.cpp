#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int size_C;
	int size_R;
	int **student;
	int sumOfRow = 0;
	int sumOfColunm = 0;
	cout << "Enter the Row size of Array: ";
	cin >> size_R;
	cout << "Enter the column size of Array: ";
	cin >> size_C;
	student = new int*[size_R];
	for (int i = 0; i < size_R; i++)
	{
		student[i] = new int[size_C];
	}
	//Entering Data
	cout << "Enter Values You Want: ";
	for (int i = 0; i < size_R; i++)
	{
		for (int j = 0; j < size_C; j++)
		{
			cin >> student[i][j];
		}
	}
	//Getting column sum
	for (int i = 0; i < size_C; i++)
	{
		for (int j = 0; j < size_R; j++)
		{
			sumOfColunm += student[i][j];
		}
		cout << "Sum of Column No" << i + 1 << "is:" << sumOfColunm << endl;
		sumOfColunm = 0;
	}
	//Getting Row sum
	for (int i = 0; i < size_R; i++)
	{
		for (int j = 0; j < size_C; j++)
		{
			sumOfRow += student[i][j];
		}
		cout << "Sum of Row No" << i + 1 << "is:" << sumOfRow << endl;
		sumOfRow = 0;
	}
	delete[]student;
}
