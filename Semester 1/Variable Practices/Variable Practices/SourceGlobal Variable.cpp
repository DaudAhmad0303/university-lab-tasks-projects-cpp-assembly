#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *, int *);
void swap(char *x, char *y);
void swap(double *x, double *y);
int factorial(int *x);
int fact(int n);
int main()
{
	int num = 5;
	/*int a = 10, b = 20;
	char c = 'A', d = 'B';
	double e = 4.343, f = 2.347;
	swap(&a, &b);
	cout << a << b;
	swap(c, d);
	cout << endl << c << d;
	swap(&e, &f);
	cout << endl << e << f;*/
	cout << "Enter the Number of Which Factorial is to find : ";
	cin >> num;
	cout<<factorial(&num);
	cout << "\nEnter the Number of Which Factorial is to find : ";
	cin >> num;
	cout << fact(num);
	_getch();
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
void swap(double *x, double *y)
{
	double temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int factorial(int *x)
{
	int total = 1;
	for (int i = 1; i <= *x; i++)
	{
		total = total * i;
	}
	return total;
}
int fact(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}
