#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
#include<stdio.h>
#include"Header.h"
using namespace std;
int mainMenu();
int main()
{
	cout << "\n\n\t\t\tWelcome to the BANK MANAGEMENT SYSTEM \n";
	system("pause");
	Manager m;
	cout << "\nEnter the Manager Details...\n";
	cin >> m;
	system("pause");
	system("CLS");
	Bank b(m);
	Customer c;
	Account a;
	int iter = 0;
	string n;
	int ID, bal;

	do
	{
		iter = mainMenu();
		switch (iter)
		{
		case 1:
			cout << "Enter Customer Name: ";
			cin >> n;
			cout << "Enter Customer ID: ";
			cin >> ID;
			c.setCustomerName(n);
			c.setCustomerID(ID);
			b.addCustomer(c);
			break;
		case 2:
			cout << "Enter Customer ID: ";
			cin >> ID;
			cout << "Enter Account Type: ";
			cin >> n;
			cout << "Enter Opening Balance: ";
			cin >> bal;
			a.setcustomerID(ID);
			a.setAccountType(n);
			a.setaccountBalance(bal);
			b.addAccount(a);
			break;
		case 3:
			cout << "Enter the Customer ID: ";
			cin >> ID;
			b.getAccountInfo(ID);
			break;
		case 4:
			b.showMangerDetails();
			break;
		case 5:
			cout << "Enter the Customer ID: ";
			cin >> ID;
			b.makeTransaction(ID);
			break;
		case 6:
			cout << "Enter Customer ID: ";
			cin >> ID;
			b.showBalance(ID);
			break;
		case 7:
			cout << "Enter Customer ID: ";
			cin >> ID;
			b.deletAccount(ID);
			break;
		case 8:
			cout << "Enter Customer ID: ";
			cin >> ID;
			b.deleteCustomer(ID);
			b.deletAccount(ID);
			break;
		default:
			cout << "Wrong input...\n";
			cout << "Enter right choice: ";
			break;
		}
		system("CLS");
	} while (iter > 0 && iter < 9);
	_getch();
	return 0;
}
int mainMenu()
{
	int ch;
	cout << "\t\tMenu\n";
	cout << "Select any number from the list: \n";
	cout << "1. Add Customer\n";
	cout << "2. Open New Account\n";
	cout << "3. View Accounts Details\n";
	cout << "4. View Manager Details\n";
	cout << "5. Make a Transaction\n";
	cout << "6. Check Accunt Balance\n";
	cout << "7. Delete Account\n";
	cout << "8. Delete Customer\n";
	cout << "ANY OTHER KEY TO EXIT...!\n\n";
	cout << "Make your choice: ";
	cin >> ch;

	return ch;
}