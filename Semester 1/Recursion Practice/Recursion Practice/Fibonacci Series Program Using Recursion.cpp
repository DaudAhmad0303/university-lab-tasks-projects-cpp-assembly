#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(int);
void main()
{	
	//unsigned long num = 0;
	/*cout << "Enter the Number of Series Length : ";
	cin >> num;*/
	//fibonacci(10);
	cout << "Fibonacci Series : ";
	cout << "0 " << "1 ";
	fibonacci(10);
	_getch();
}	
int fibonacci(int next)
{	
	int show = 0;
	if (next == 0)
		return 0;
	else
		//show = fibonacci(next - 1) + fibonacci(next - 2);
	    cout << show;
}
