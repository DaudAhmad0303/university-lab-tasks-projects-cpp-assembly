#pragma once
#include<string>
#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
class Customer;
class Manager;
class Account;
class Manager
{
private:
	string name;
	string branch;
	static int ID;
public:
	//Constructors
	Manager();
	Manager(string &n, string &b, int &i);
	//Settes and Getters for Manager Attrirbutes
	void setManagerName(string &n);
	string& getManagerName();
	void setManagerBranch(string &br);
	string& getManagerBranch();
	void setManagerID(int &id);
	int& getManagerID();
	void print_ManagerDetails();
	friend istream& operator>>(istream& in, Manager manag);
};
class Customer
{
private:
	string name;
	int ID;
public:
	//Constructors
	Customer();
	Customer(string &n,int &id);
	//Setters and Getters for Class attributes
	void setCustomerName(string &n);
	void setCustomerID(int &i);
	string& getCustomerName();
	int& getCustomerID();
	//To print out the Customer details
	void print_CustomerDetails();
};
class Account
{
private:
	static int account_ID;
	string accountType;
	int customer_ID;
	int account_Balance;
public:
	//Constructors
	Account();
	Account(int &i,string &accTyp,int &cuID,int accBal);
	//Setters and getters for Class attributes
	void setAccountID(int &i);
	void setAccountType(string &accTy);
	void setcustomerID(int &id);
	void setaccountBalance(int b);
	int& getAccountID();
	string& getAccountType();
	int& getcustomerID();
	int getaccountBalance();
	//For getting money out of the account
	void WithDraw(int &amount);
	//For incrementing money in the account
	void Deposit(int &amount);
	//For checking current balance in the account
	int Balance();
};
class Bank
{
private:
	vector<Customer>cust;
	vector<Account>Acco;
	Manager manager;
public:
	Bank(Manager mange);
	void addAccount(Account &account);
	void deletAccount(int &account_ID);
	void addCustomer(Customer &cstmr);
	void deleteCustomer(int &ID);
	int getNoOfAccounts(int &customer_ID);
	string getCustomer_Name(int &account_ID);
	void getAccountInfo(int &custID);
	void makeTransaction(int &custID);
	void showBalance(int &custID);
	void showMangerDetails();
};