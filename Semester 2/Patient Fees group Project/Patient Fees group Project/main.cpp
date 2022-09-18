#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<string.h>
#include<iomanip>
#include<math.h>
#include"Header.h"
using namespace std;
void title();
void Pharmacy_menu();		//function prototype
void Surgery_menu();		//function prototype

int main() {
	Surgery obj1;			// surgery class class object
	Pharmacy obj2;			// Pharmacy class class Object
	PatientAccount obj3;	// Patient Account class Object
	int a = 0;				// variable to store the user-choice entered by user
	int d = 0;				// For storing no of days of stay at hospital
	int c = 0;				// For Multiple inputs of medicines from user
	int x = 0;				// Stores price of user-choice pharmacy and act as 
							// Parameter to set_total_Pharmacy_expence.
	int y = 0;				// variable to store the user-choice entered by user
	int z = 0;				// variable to store amount of medicine

	title();				//The Title of Program
	system("PAUSE");
	system("CLS");
	cout << "\n\t\tWelcome in the Surgery Department\n";
	cout << "\t\t=================================\n";
	Surgery_menu();			//displays surgery-menu to the user
	cout << "Enter your choice:- ";
	cin >> a;				//stores user choice

	//Local varible 'a' is containing the user choice and it is passing to 
	//user_sergery_expence fun. Then, processeed value is further passing to 
	//set_total_Surgery_expence fun. of 'obj1' ....UNDERSTAND
	obj1.set_total_Surgery_expence(obj1.user_surgery_choice(a));
	
	//For Authentic value of Surgery Choice
	for(;a < 0 || a>5;)
	{
		Surgery_menu();			//displays surgery-menu to the user
		cout << "\a Enter your choice:- ";
		cin >> a;				//stores user choice
		obj1.set_total_Surgery_expence(obj1.user_surgery_choice(a));//Same as Above...
	}
	cout << "\nThis surgery costs you almost " << obj1.get_total_Surgery_expence() << endl;
	system("PAUSE");
	system("CLS");
	cout << "\n\x10 How many days Patient stay in Hospital: ";
	cin >> d;
	cout << endl;
	system("PAUSE");
	system("CLS");

	cout << "\n\t\tWelcome in Pharmacy Service" << endl;
	cout << "\t\t===========================\n";
	for (; c == 0;)
	{
		Pharmacy_menu();		//displays pharmacy-menu to the user
		cout << "Enter your choice:- ";
		cin >> y;				//stores user choice
		cout << "Enter amount of medicine:- ";
		cin >> z;				//stores amount of medicine

		//stores Pharmacy price in x variable and add up 
		//takes the values to 'obj2' user_Pharmacy_choice fun.
		x += obj2.user_Pharmacy_choice(y,z);
		cout << "  Enter ANY value other than 0 to exit from Menu\n";
		cout << "  0: Choose more medicines:- ";
		cout << "\nEnter your choice:- ";
		cin >> c;
	}
	//Then processed value of 'x'
	//is further passing to set_total_Pharmacy_expence fun. of obj2
	obj2.set_total_Pharmacy_expence(x);//set the value using x as paramete
	
	cout << "Total cost of medicine: " << obj2.get_total_Pharmacy_expence() << endl;
	
	system("PAUSE");
	system("CLS");
	
	//Setting value in PatientAccount class of Room rent,Surgery Expenses,
	//Pharmacy Expenses and finally creating Receipt and total Payment
	obj3.set_Room_rent(d);
	obj3.set_Surgery_expense(obj1.get_total_Surgery_expence());
	obj3.set_Pharmacy_expense(obj2.get_total_Pharmacy_expence());
	obj3.set_Receipt();
	obj3.total_Payment();
	_getch();
	return 0;
}

void Surgery_menu()	// display menu for surgery class
{
	cout << "\n\x10 Select the surgery you want to perform from the given list:" << endl;
	cout << "  1: Appendix_Surgery" << endl;
	cout << "  2: heart_Surgery" << endl;
	cout << "  3: LowBackPain_Surgery" << endl;
	cout << "  4: legs_Surgery" << endl;
	cout << "  5: Kidney_Surgery" << endl;
}

void Pharmacy_menu()// display menu for pharmacy class
{
	cout << "\n\x10 Select the medicine you want to buy:" << endl;
	cout << "  1: Panadol" << endl;
	cout << "  2: Disprin" << endl;
	cout << "  3: Disprol" << endl;
	cout << "  4: Brufin" << endl;
	cout << "  5: Paracetamol" << endl;
	cout << "  6: Erythrocin" << endl;
	cout << "  7: Buscopan" << endl;
	cout << "  8: Ceclor" << endl;
	cout << "  9: Entox_P" << endl;
	cout << " 10: Epazol" << endl;
}
void title()
{
	//For making Screen Output Awesome
	cout << "\n\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";		//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";						//first row
	cout << "\n\t\t\xb1\t\t\t\t\t\t\xb1";									//second row
	cout << "\n\t\t\xb1\tWelcome to Hospital Management System\t\xb1";		//Main Line
	cout << "\n\t\t\xb1\t\t\t\t\t\t\xb1";									//third row
	cout << "\t\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";	//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n";					//forth row

}