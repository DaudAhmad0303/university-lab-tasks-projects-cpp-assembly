#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(long int num);
void main()
{
	cout << "Fibonacci Series : \n";
	cout << "0 " << "1 ";
	cout << fibonacci(10);
	
	_getch();

}
int fibonacci(long int  num)
{
	long show = 0;
	if (num = 0)
		return 1;
	else if (num = 1)

		return 1;
	else
		cout << num << " ";
		return fibonacci(num - 1) + fibonacci(num - 2);
		
}