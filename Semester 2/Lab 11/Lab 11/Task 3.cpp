#include<iostream>
#include<conio.h>
#include<string>
int Menu();
using namespace std;
class BankAccount
{
protected:
	string Account_title;
	int Account_number;
	float balance;
public:
	BankAccount()
	{
		Account_title = "";
		Account_number = 00;
		balance = 0.0;
	}
	void setValues(string t,int n,float b)
	{
		Account_title = t;
		Account_number = n;
		balance = b;
	}
	void deposit(float d)
	{
		balance = balance + d;
	}
	void withDraw(float w)
	{
		if (w > balance)
			cout << "Your Current Balance is down... " << endl;
		balance = balance - w; 
	}
	float getBalance()
	{
		return balance;
	}
};
class SavingAccount :public BankAccount
{
private:
	float interestRate;
public:
	SavingAccount()
	{
		interestRate = 10;
		balance = balance + balance * (interestRate / 100);
	}
	float CalculateInterest()
	{
		return interestRate;
	}
};
class CheckingAccount :public BankAccount
{
private:
	int chargedFee;
public:
	CheckingAccount()
	{
		chargedFee = 0;
	}
	void setChargedFee(float b)
	{
		float f = 0;
		f = b * 0.03;
		balance = balance - f;
	}
};
int main()
{
	CheckingAccount ch;
	SavingAccount sav;
	int choice1 = 0, choice2 = 0;
	string t;
	float b;
	int n;
	cout << "1. Want to make saving Account " << endl;
	cout << "2. Want to make Checking Account " << endl;
	cin >> choice1;
	if (choice1 == 1)
	{
		cout << "Enter Accont Title: ";
		cin >> t;
		cout << "Enter Account Number: ";
		cin >> n;
		cout << "Enter Openening Balance: ";
		cin >> b;
		sav.setValues(t, n, b);
	}
	if (choice1 == 2)
	{
		cout << "Enter Accont Title: ";
		cin >> t;
		cout << "Enter Account Number: ";
		cin >> n;
		cout << "Enter Openening Balance: ";
		cin >> b;
		ch.setValues(t, n, b);
	}
	while (choice2 != 9)
	{
		choice2 = Menu();
		switch(choice2)
		{
		case 3:
			cout << "Enter Amount: ";
			cin >> b;
			if (choice1 == 1)	{	sav.deposit(b);	}
			if (choice1 == 2)	{	ch.deposit(b);	}
			break;
		case 4:
			cout << "Enter Amount: ";
			cin >> b;
			if (choice1 == 1) { sav.withDraw(b); }
			if (choice1 == 2)
			{
				ch.withDraw(b);
				ch.setChargedFee(b);
			}
			break;
		case 5:
			cout << "Your Balance is: ";
			if (choice1 == 1) { cout << sav.getBalance() << endl; }
			if (choice1 == 2) { cout << ch.getBalance() << endl; }
			break;
		case 6:
			cout << "Your Interest is: " << sav.CalculateInterest() << " % " << endl;
			break;
		default:
			cout << "Invalid input..." << endl;
			break;
		}
	}
	_getch();
	return 0;
}
int Menu()
{
	int choice;
	cout << "\t\t\tMenu\n";
	cout << "3. Want to Deposit in Account: " << endl;
	cout << "4. Want to WithDraw: " << endl;
	cout << "5. Want to check Balance: " << endl;
	cout << "6. Want to check interest Rate: " << endl;
	cout << "9. Want to Exit: " << endl;
	cout << "Enter Choice: ";
	cin >> choice;
	return choice;
}