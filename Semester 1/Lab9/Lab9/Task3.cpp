////Temparure Converter Program
//#include<iostream>
//#include<conio.h>
//using namespace std;
//void display(int &choice, float &temp);
//void input(int &choice, float &temp);
//float c_to_f(float &temp);
//float f_to_c(float &temp);
//float f_to_k(float &temp);
//float f_to_r(float &temp);
//void main()
//{
//	int choice = 0;
//	float temp = 0;
//	input(choice, temp);
//	display(choice,temp);
//	_getch();
//}
//void input(int &choice,float &temp)
//{	
//	cout << "Enter   1    for Celsius to Fahrenheit...\n";
//	cout << "Enter   2    for Fahrenheit to Celsius...\n";
//	cout << "Enter   3    for Fahrenheit to Kelvin...\n";
//	cout << "Enter   4    for Fahrenheit to Rankin...\n";
//	cout << "Enter Your Choice : ";
//	cin >> choice;
//	cout << "Now... Enter Temerature : ";
//	cin >> temp;
//	cout << "The Required Temperature is...";
//	
//}
//void display(int &choice,float &temp)
//{
//	if (choice == 1)
//	{
//		cout<<c_to_f(temp);
//	}
//	else if (choice == 2)
//	{
//		cout << f_to_c(temp);
//	}
//	else if (choice == 3)
//	{
//		cout << f_to_k(temp);
//	}
//	else if (choice == 4)
//	{
//		cout << f_to_r(temp);
//	}
//	else
//	{
//		cout << "INVALID.....!!!!";
//	}
//}
//float c_to_f(float &temp)
//{
//	temp=( temp * 9 )/ 5 + 32;
//	return temp;
//}
//float f_to_c(float &temp)
//{
//	temp= (temp - 32)*5 / 9;
//	return temp;
//}
//float f_to_k(float &temp)
//{
//	temp=(temp + 459.67)*5 / 9;
//	return temp;
//}
//float f_to_r(float &temp)
//{
//	temp =temp + 459.67;
//	return temp;
//}