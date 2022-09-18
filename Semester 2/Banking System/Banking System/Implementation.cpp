#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
#include"Header.h"
using namespace std;

/////////////////////////////////////////////////////////////////////////////
/////////**************		Customer Class	******************///////////////
/////////////////////////////////////////////////////////////////////////////

Bank::Bank(Manager manag)
{
	manager = manag;
}
void Bank::addAccount(Account &account)
{
	Acco.push_back(account);
}
void Bank::deletAccount(int &account_ID)
{
	int a, b;
	a = Acco.size();
	for (int i = 0; i < a; i++)
	{
		b = Acco[i].getAccountID();
		if (b == account_ID)
		{
			Acco.erase(Acco.begin() + i);
		}
	}
}
void Bank::addCustomer(Customer &cstmr)
{
	cust.push_back(cstmr);
}
void Bank::deleteCustomer(int &ID)
{
	int a, b;
	a = cust.size();
	for (int i = 0; i < a; i++)
	{
		b = cust[i].getCustomerID();
		if (b == ID)
		{
			cust.erase(cust.begin() + i);
		}
	}
}
int Bank::getNoOfAccounts(int &customer_ID)
{
	int a, b = 0, n = 0;
	a = Acco.size();
	for (int i = 0; i < a; i++)
	{
		if (Acco[i].getcustomerID() == customer_ID)
		{
			n++;
		}
	}
	return n;
}
string Bank::getCustomer_Name(int &account_ID)
{
	int a;
	string n = "";
	a = Acco.size();
	for (int i = 0; i < a; i++)
	{
		if (Acco[i].getAccountID() == account_ID)
		{
			int a1 = cust.size();
			for (int i = 0; i < a1; i++)
			{
				int id1, id2;
				id1 = cust[i].getCustomerID();
				id2 = Acco[i].getcustomerID();
				if (id1 = id2)
				{
					n = cust[i].getCustomerName();
				}
			}
		}
	}
	return n;
}
void Bank::getAccountInfo(int &custID)
{
	int a = Acco.size();
	for (int i = 0; i < a; i++)
	{
		if (Acco[i].getcustomerID() == custID)
		{
			int accId = Acco[i].getAccountID();
			cout << "The Account ID is: " << Acco[i].getAccountID() << endl;
			cout << "The Customer ID is: " << Acco[i].getcustomerID() << endl;
			cout << "The Customer Name is: " << getCustomer_Name(accId) << endl;
			cout << "The Account Type is: " << Acco[i].getAccountType() << endl;
		}
	}
}
void Bank::showBalance(int &custID)
{
	int a = Acco.size();
	for (int i = 0; i < a; i++)
	{
		cout << "The Current Balance in the Account is: " << Acco[i].getaccountBalance() << endl;
	}
}
void Bank::makeTransaction(int &custID)
{
	int choice;
	int amount;
	cout << "What do you wnat to choose: \n";
	cout << "1. For Depositing Amount...\n";
	cout << "2. For For Withdraw amount...\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "\nEnter Amount: ";
	cin >> amount;
	int a = Acco.size();
	for (int i = 0; i < a; i++)
	{
		if (Acco[i].getcustomerID() == custID)
		{
			if (choice == 1)
				Acco[i].Deposit(amount);
			else if(choice==2)
				Acco[i].WithDraw(amount);
		}
	}
}

/////////////////////////////////////////////////////////////////////////////
/////////**************		Manager Class	******************///////////////
/////////////////////////////////////////////////////////////////////////////

//Constructors
int Manager::ID = 100;
Manager::Manager()
{
	name = "Unknown";
	branch = "GT Road Branch";
	ID++;
}
Manager::Manager(string &n, string &b, int &i)
{
	name = n;
	branch = b;
	ID++;
}
//Settes and Getters for Manager Attrirbutes
void Manager::setManagerName(string &n)
{
	name = n;
}
string& Manager::getManagerName()
{
	return name;
}
void Manager::setManagerBranch(string &br)
{
	branch = br;
}
string& Manager::getManagerBranch()
{
	return branch;
}
void Manager::setManagerID(int &id)
{
	ID = id;
}
int& Manager::getManagerID()
{
	return ID;
}
void Manager::print_ManagerDetails()
{
	cout << "The Manager Id is: " << ID << endl;
	cout << "The Name of the Manager is: " << name << endl;
	cout << "The Branch name of the bank is: ";
	getManagerBranch();
	cout << endl;
}
istream& operator>>(istream& in, Manager manag)
{
	cout << "Enter the Name of Manager: ";
	in >> manag.name;
	cout << "Enter the Manager ID: ";
	in >> manag.ID;
	cout << "Enter the Branch Name of the Manager: ";
	in >> manag.branch;
	return in;
}
/////////////////////////////////////////////////////////////////////////////
/////////**************		Customer Class	******************///////////////
/////////////////////////////////////////////////////////////////////////////


//Constructors
Customer::Customer()
{
	name = "unknown";
	ID = -1;
}
Customer::Customer(string &n, int &id)
{
	name = n;
	ID = id;
}
//Setters and Getters for Class attributes
void Customer::setCustomerName(string &n)
{
	name = n;
}
void Customer::setCustomerID(int &i)
{
	ID = i;
}
string& Customer::getCustomerName()
{
	return name;
}
int& Customer::getCustomerID()
{
	return ID;
}
//To print out the Customer details
void Customer::print_CustomerDetails()
{
	cout << "The Customer ID is: " << ID << endl;
	cout << "The Name of the Customer is: " << name << endl;
}
/////////////////////////////////////////////////////////////////////////////
/////////**************		Account Class	******************///////////////
/////////////////////////////////////////////////////////////////////////////


//Constructors
int Account::account_ID = 2000;
Account::Account()
{
	account_ID++;
	accountType = "current";
	customer_ID = -1;
	account_Balance = 0;
}
Account::Account(int &i, string &accTyp, int &cuID, int accBal)
{
	account_ID++;
	accountType = accTyp;
	customer_ID = cuID;
	account_Balance = accBal;
}
//Setters and getters for Class attributes
void Account::setAccountID(int &i)
{
	account_ID = i;
}
void Account::setAccountType(string &accTy)
{
	accountType = accTy;
}
void Account::setcustomerID(int &id)
{
	customer_ID = id;
}
void Account::setaccountBalance(int b)
{
	account_Balance = b;
}
int& Account::getAccountID()
{
	return account_ID;
}
string& Account::getAccountType()
{
	return accountType;
}
int& Account::getcustomerID()
{
	return customer_ID;
}
int Account::getaccountBalance()
{
	return account_Balance;
}
//For getting money out of the account
void Account::WithDraw(int &amount)
{
	if (account_Balance > amount)
		account_Balance -= amount;
	else
		cout << "There no such amount of balance in the account...!";
}
//For incrementing money in the account
void Account::Deposit(int &amount)
{
	account_Balance += amount;
}
//For checking current balance in the account
int Account::Balance()
{
	return account_Balance;
}
void Bank::showMangerDetails()
{
	cout << "The Name of the manager is: " << manager.getManagerName() << endl;
	cout << "The Manager ID is: " << manager.getManagerID() << endl;
	cout << "The Branch Name of the Manager is: " << manager.getManagerBranch() << endl;
}