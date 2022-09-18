///*
//Program of Simple calculator performing Operations 
// + - * / ^ on Two numbers entered by the user
// */
//#include<iostream>
//#include<conio.h>
//#include<math.h>
//using namespace std;
//void input(float &no1,float &no2,char &op);
//float mathOperations(float no1, float no2, char op);
//void display(float rst,char op);
//void main()
//{
//	float num1 = 0, num2 = 0, result = 0;
//	char ch = ' ';
//	int dcs = -1;
//	input(num1, num2, ch);
//	result = mathOperations(num1, num2, ch);
//	display(result,ch);
//	_getch();
//}
//void input(float &no1, float &no2, char &op)
//{
//	cout << "Enter the First Number : ";
//	cin >> no1;
//	cout << "Enter the Second Number : ";
//	cin >> no2;
//	cout << "Enter the Operation you want to perform :   ";
//	cin >> op;
//}
//float mathOperations(float no1,float no2,char op)
//{
//	switch (op)
//	{
//	case '+':
//		return no1 + no2;
//		break;
//	case '-':
//		return no1 - no2;
//		break;
//	case '*':
//		return no1 * no2;
//		break;
//	case '/':
//		return no1 / no2;
//		break;
//	case '^':
//		return pow(no1,no2);
//		break;
//	default:
//		return 0;
//		break;
//	}
//}
//void display(float rst,char op)
//{
//	switch (op)
//	{
//	case '+':
//		cout << "You selected Addition to perform and the result after processing is : " << rst;
//		break;
//	case '-':
//		cout << "You selected Subtraction to perform and the result after processing is : " << rst;
//		break;
//	case '*':
//		cout << "You selected Multipliction to perform and the result after processing is : " << rst;
//		break;
//	case '/':
//		cout << "You selected Division to perform and the result after processing is : " << rst;
//		break;
//	case '^':
//		cout << "You selected Power to perform and the result after processing is : " << rst;
//		break;
//	default:
//		cout << "Invalid Operation .... ";
//		break;
//	}
//}