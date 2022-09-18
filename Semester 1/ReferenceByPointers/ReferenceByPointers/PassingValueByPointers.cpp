//Program for swapping using Pointers and References
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *ptA, int *ptB);
void main()
{
	int a = 10;
	int b = 20;
	cout << "Values Before Swaping : " << a << " " << b;
	swap(&a, &b);
	cout << "\nValues After Swaping : " << a << " " << b;
	_getch();
}
void swap(int *ptA, int *ptB)
{
	//This is another Amazing Algorithum 
	//for swaping without the extra use of variable
	*ptA = *ptA + *ptB;		//x = 30...
	*ptB = *ptA - *ptB;		//y = 10...
	*ptA = *ptA - *ptB;		//x = 20...
}