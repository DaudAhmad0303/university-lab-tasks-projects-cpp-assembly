#include<iostream>
#include<conio.h>
using namespace std;
void print(int **ptr);
void main()
{
	int a = 2, b = 3, c = 5, d = 6, e = 9;
	int *st = &b;
	//*st = a;
	//st = &b;
	cout << &st << endl;
	//cout << endl << st << endl << *st;
	print(&st);
	st = &c;
	_getch();
}
void print(int **ptr)
{
	int k = 6;
	**ptr = k;
	*ptr = &k;
	cout << "&k : " << &k << endl;
	cout <<"*ptr : "<< *ptr << endl;
	cout << "ptr : " << ptr << endl;
	cout << "&ptr : " << &ptr << endl;
	cout << "**ptr : " << **ptr << endl;//  3

}
