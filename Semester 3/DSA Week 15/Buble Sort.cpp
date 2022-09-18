#include<conio.h>
#include<iostream>
using namespace std;
int recursiveFactorial(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
		return n * recursiveFactorial(n - 1);
}
int mian()
{
	cout << "The Factorial of 5 is " << recursiveFactorial(5) << endl;


	return 0;
	_getch();
}