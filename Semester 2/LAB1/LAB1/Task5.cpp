#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	repeat:
	int arr[15] = { 11,29,18,15,23,15,14,10,20,18,21,25,22,30,15 };
	int i = 0, tarVal = 0, count = 0;
	char a;
	cout << "Array Is : ";
	for (i = 0; i < 15; i++)
	{
		cout << arr[i] << ",";
	}
	
	cout << "\nEnter Number to be searched : " ;
	cin >> tarVal;
	for (i = 0; i < 15; i++)
	{
		if (tarVal == arr[i])
		{
			cout << tarVal << " is at " << i << " index\n";
			count++;
		}
	}
	if (count > 0)
	{
		cout << "\nIt is Present " << count << " Times in Array....";
	}
	else
		cout << "Not Present in Array....";
	cout << "\nEnter \"a\" for rechecking : ";
	cin >> a;
	
	
	_getch();
}