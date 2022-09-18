// Program of Body Mass Index (IBM)
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float weight = 0;
	int height = 0;
	float BMI = 0;
	cout << "Enter Weight in Ponds: ";
	cin >> weight;
	cout << "Enter Height in Inches: ";
	cin >> height;
	BMI = (weight * 703) / (height*height);
	if (BMI < 18.5)
		cout << "\tYou are Underweight. ";
	else if (BMI > 18.5 && BMI < 24.9)
		cout << "\tYou are Normal. ";
	else if (BMI > 25 && BMI < 29.9)
		cout << "\tYou are Overweight. ";
	else 
		cout << "\tYou are Obese. ";
	_getch();
}