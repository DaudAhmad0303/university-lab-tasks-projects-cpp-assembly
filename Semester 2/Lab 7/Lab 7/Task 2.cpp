#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Complex
{
private:
	int x;
	int img;
public:
	Complex()
	{
		x = 0;
		img = 0;
	}
	Complex(int a,int b)
	{
		x = a;
		img = b;
	}
	void show(Complex b)
	{
		cout << "Real: " << b.x << " Complex: " << b.img << endl;
	}
	friend void sum(Complex,Complex);
};
void sum(Complex obj1,Complex obj2)
{
	cout << "Sum of the complex No.s is: " << obj1.x + obj2.x << " + " << obj1.img + obj2.img << "i";
}

int main()
{
	Complex no1(5, 8);
	Complex no2(3, 4);
	no1.show(no1);
	no2.show(no2);
	sum(no1, no2);

	_getch();
	return 0;
}