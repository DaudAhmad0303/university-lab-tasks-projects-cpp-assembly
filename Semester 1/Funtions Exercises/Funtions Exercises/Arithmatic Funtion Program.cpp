/*#include<iostream>
#include<conio.h>
using namespace std;
int addition(int,int);
int subtraction(int, int);
int multipliction(int, int);
float division(float, float);
int main()
{
	float a = 0, b = 0;
	char op = ' ';
	cout << "Enter First Numbers : ";
	cin >> a ;
	cout << "Enter Second Numbers : ";
	cin >> b ;
	cout << "Enter the Operator to Perform Operation : ";
	cin >> op;
	switch (op)
	{
	case '+':
		cout << "The Sum of the Numbers is : " << addition(a, b);
	break;
	case '-':
		cout << "\nThe Difference of the Numbers is : " << subtraction(a, b);
	break;
	case '*':
		cout << "\nThe Multiplication of the Numbers is : " << multipliction(a, b);
	break;
	case '/':
		cout << "The Divition of the Numbers is : " << division(a, b);
	break;
	default:
		cout << "Invalide......!!!!";
	break;
	}
	_getch();
	return 0;
}
int addition(int a, int b)
{
	return a + b;
}
int subtraction(int a, int b)
{
	return a - b;
}
int multipliction(int a, int b)
{
	return a * b;
}
float division(float a, float b)
{
	return a / b;
}*/