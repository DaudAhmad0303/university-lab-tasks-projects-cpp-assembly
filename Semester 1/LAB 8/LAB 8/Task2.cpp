/*
#include<iostream>
#include<conio.h>
using namespace std;
void drawShape(int shape);
void drawShape1();
void drawShape2();
void drawShape3();
void drawShape4();
int main()
{
	int decide = 0;
	cout << "Enter a Number Between 1~4 :";
	cin >> decide;
	drawShape(decide);
	_getch();
	return 0;
}
void drawShape(int shape)
{
	if (shape == 1)
		drawShape1();
	if (shape == 1)
		drawShape2();
	if (shape == 1)
		drawShape3();
	if (shape == 1)
		drawShape4();
}
void drawShape1()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
}
void drawShape2()
{
	for (int i = 10; i >= 1; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "*" << " ";
			}
			cout << endl;
		}
}
void drawShape3()
{

}
void drawShape4()
{

}*/