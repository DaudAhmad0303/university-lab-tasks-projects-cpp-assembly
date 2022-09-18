#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;
class Card
{
private:
	int cardNo;
protected:
	string ownerName;
public:
	string expiryDate;
	Card()
	{
		cardNo = 0;
		ownerName = "Unknown";
		expiryDate = "00-00-000";
	}
	//setters
	void setCardNo(int n)
	{
		cardNo = n;
	}
	void setOwnerName(string n)
	{
		ownerName = n;
	}
	void setExpiryDate(string d)
	{
		expiryDate = d;
	}
	void setAll(int n, string m, string d)
	{
		setCardNo(n);
		setOwnerName(m);
		setExpiryDate(d);
	}
	//Getters
	int getCardNo() { return cardNo; }
	string getOwnerName() { return ownerName; }
	string getExpiryDate() { return expiryDate; }
	void show()
	{
		cout << "The Card No is: " << cardNo << endl;
		cout << "The Card's Owner Name is: " << ownerName << endl;
		cout << "The Card's Expiry Date is: " << expiryDate << endl;
	}
};
class Calling_Card:public Card
{
	int amount;
	string company_name;
	int PIN;
public:
	Calling_Card()
	{
		amount = 0;
		company_name = "NILL";
		PIN = 0;
	}
	//Setters
	void setAmount(int a)
	{
		amount = a;
	}
	void setCompanyName(string n)
	{
		company_name = n;
	}
	void setPIN(int p)
	{
		PIN = p;
	}
	void setAll(int n, string m, string d, int a, string c, int p)
	{
		Card::setAll(n, m, d);
		setAmount(a);
		setCompanyName(c);
		setPIN(p);
	}
	//Getters
	int getAmount() { return amount; }
	string getCompanyName() { return company_name; }
	int getPIN() { return PIN; }
	void show()
	{
		Card::show();
		cout << "The amount in the Card is: " << getAmount() << endl;
		cout << "The Company Name of the Card is: " << getCompanyName() << endl;
		cout << "The PIN for the use of Card is: " << getPIN() << endl;
	}
};
class IDCard:public Card
{
private:
	int CNIC_Number;
	int age;
public:
	IDCard()
	{
		CNIC_Number = 0;
		age = 18;
	}
	//Setters
	void setCNIC_Number(int c)
	{
		CNIC_Number = c;
	}
	void setAge(int a)
	{
		age = a;
	}
	void setAll(int n, string m, string d, int c, int a)
	{
		Card::setAll(n, m, d);
		setCNIC_Number(c);
		setAge(a);
	}

	//Getters
	int getCNIC_Number() { return CNIC_Number; }
	int getAge() { return age; }

	void show()
	{
		Card::show();
		cout << "The CNIC Number for this ID Card is: " << getCNIC_Number() << endl;
		cout << "The Age of the Person is: " << getAge() << endl;
	}

};

class Driving_License_Card:public Card
{
private:
	string license_type;
	string issued_city;
public:
	Driving_License_Card()
	{
		license_type = "Bike";
		issued_city = "Unknown";
	}

	//Setters 
	void setLicenseType(string l)
	{
		license_type = l;
	}
	void setIssuedCity(string c)
	{
		issued_city = c;
	}
	void setAll(int n, string m, string d, string l, string c)
	{
		Card::setAll(n, m, d);
		setLicenseType(l);
		setIssuedCity(c);
	}
	//Getters
	string getLicenseType() { return license_type; }
	string getIssuedCity() { return issued_city; }
	void show()
	{
		Card::show();
		cout << "The License Type is: " << getLicenseType() << endl;
		cout << "The Issued City is: " << getIssuedCity() << endl;
	}
};
int main()
{
	Calling_Card p1;
	IDCard p2;
	Driving_License_Card p3;
	//Formate for entering data in Calling_Card's objest is:
	//(CardNO,OwnerName,ExpiryDate,amount,companyName,PIN)
	p1.setAll(1000, "Ali Asadullah", "06-08-2029", 1500, "Jazz", 1800);

	//Formate for entering data in IDCard's objest is:
	//(CardNO,OwnerName,ExpiryDate,CNIC_number,Age)
	p2.setAll(23001, "Aqib Naeem", "26-01-2028", 3410132, 18);

	//Formate for entering data in Driving_License_Card's objest is:
	//(CardNO,OwnerName,ExpiryDate,License_Type,Issued city)
	p3.setAll(14658, "Zohaib Saifi", "18-11-2025","Heavy vehicals","Lahore");
	
	cout << "\t\tFirst Person's Card Details\n";
	p1.show();
	cout << "\n\n\t\tSecond Person's Card Details\n";
	p2.show();
	cout << "\n\n\t\tThird Person's Card Details\n";
	p3.show();
	_getch();
	return 0;
}