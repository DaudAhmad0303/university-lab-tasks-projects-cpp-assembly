#include<iostream>
#include<conio.h>
using namespace std;
int reverse(int);
int main()
{
	int num = 0;
	cout << "Enter any Number : ";
	cin >> num;
	cout << "The Reversed Number is : " << reverse(num);
	_getch();
	return 0;
}
int reverse(int n)
{
	int m = 0, k = 0;
	for (int a = n; n >= 10; n = n / 10)
	{
		
		k = n % 10;
		m = k * 10;
	}
	return m;

}