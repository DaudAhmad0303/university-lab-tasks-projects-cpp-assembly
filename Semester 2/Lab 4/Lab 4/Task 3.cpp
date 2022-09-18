///*
//Get name and Emplyee ID of 3 employees of a company 
//and by using pointer to object display them in the main function.
//*/
//#include<iostream>
//#include<conio.h>
//#include<string>
//#include<cstring>
//using namespace std;
//class Emplyee {
//private:
//	string name;
//	short ID;
//public:
//	Emplyee() {
//		name = " ";
//		ID = 0;
//	}
//	void setName(string n) {
//		name = n;
//	}
//	void setID(short i) {
//		ID = i;
//	}
//	void setData(string n, short i) {
//		setName(n);
//		setID(i);
//	}
//	string getName() {
//		return name;
//	}
//	short getID() {
//		return ID;
//	}
//	void print() {
//		cout << "Your Name is : \t" << getName() << endl;
//		cout << "Your Emplyee ID is : \t" << getID() << endl;
//	}
//};
//int main() {
//	string n;
//	short i;
//	Emplyee emp1;
//	Emplyee *emp1Ptr;
//	emp1Ptr = &emp1;
//	cout << "Enter Emplyee Name : ";
//	cin >> n;
//	emp1Ptr->setName(n);
//	cout << "Enter Emplyee ID : ";
//	cin >> i;
//	emp1Ptr->setID(i);
//	cout << emp1Ptr->getName();
//	cout << emp1Ptr->getID();
//	_getch();
//	return 0;
//}
#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int randomNumber = rand();
	cout << randomNumber << endl << RAND_MAX << endl;

	_getch();
	return 0;
}