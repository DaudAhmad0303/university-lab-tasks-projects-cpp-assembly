//Program of Power function performing 
//in which:
//First time mentisa will be in int 
//Second time mentisa will be in float
//Third time mentisa will be in double 
//And Exponent will always in Integer
#include<iostream>
#include<conio.h>
using namespace std;
double power(int ment, int exp);
double power(float ment, int exp);
double power(double ment, int exp);
void main()
{
	int ment1 = 0, exp = 0;
	float ment2 = 0;
	double ment3 = 0;
	//For int & int
	cout << "Enter Exponent of Integer type Always...";
	cout << "\n\nEnter mentisa of integer type : ";
	cin >> ment1;
	cout << "Enter Exponent : ";
	cin >> exp;
	cout << "The result is : " << power(ment1, exp);
	//For int & float
	cout << "\n\nEnter mentisa  of float type : ";
	cin >> ment2;
	cout << "Enter Exponent : ";
	cin >> exp;
	cout << "The result is : " << power(ment2, exp);
	//For int & double
	cout << "\n\nEnter mentisa  of double type: ";
	cin >> ment3;
	cout << "Enter Exponent : ";
	cin >> exp;
	cout << "The result is : " << power(ment3, exp);

	_getch();
}
double power(int ment, int exp)
{
	double result = 1.000;
	for (int i = 0; i < exp; i++)
	{
		result = result * ment;
	}
	return result;
}
double power(float ment, int exp)
{
	double result = 1.000;
	for (int i = 0; i < exp; i++)
	{
		result = result * ment;
	}
	return result;
}
double power(double ment, int exp)
{
	double result = 1.000;
	for (int i = 0; i < exp; i++)
	{
		result = result * ment;
	}
	return result;
}
