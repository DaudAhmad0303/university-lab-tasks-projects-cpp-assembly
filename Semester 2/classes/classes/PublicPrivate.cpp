#include<iostream>
#include<conio.h>
#include<string>
#include"PublicPrivate.h"
using namespace std;
//class student {		//***********Creating a class of name "student"
//private:
	//**********creating attributes
	//*********Created Private sothat not accessible from outside main()
//	string name;	
//	int age;
//	float cgpa;
//public:
	//Class Constructor Function
student::student() {
		name = "ABC";
		age = 123;
		cgpa = 1.23;
}
	//Function for setting/storing all the values in combine
	void student :: set_data(string n, int a, float c) {
		set_name(n);
		set_age(a);
		set_cgpa(c);
	}
	//Function for data output on console
	void student:: print() {
		cout << name << "  " << age << "  " << cgpa;
	}
	//Indipendent Functions for setting value of name
	void student:: set_name(string n) {
		name = n;
	}
	//Function for Getting as single value : of name on console
	string student:: get_name() {
		return name;
	}
	//Indipendent Functions for setting value of age
	void student:: set_age(int a=10) {
		age = a;
	}
	//Function for Getting as single value : of age on console
	int student:: get_age() {
		return age;
	}
	//Indipendent Functions for setting value of CGPA
	void student:: set_cgpa(float c) {
		cgpa = c;
	}
	//Function for Getting as single value : of CGPA on console
	float student:: get_cgpa() {
		return cgpa;
	}

int main()
{
	//Objects created of Student class
	student st1, st2,st3;
	//calling funtion set value of name only by passing value
	student:: st1.set_name("Daud");
	cout << st1.get_name() << "  ";
	//calling funtion set value of age only by passing value
	st1.set_age(15);
	cout << st1.get_age() << "  ";
	cout << st1.get_cgpa();
	//setting all the values of student2 by passing all the values to function
	st2.set_data("\nAli", 20, 3.44);
	st2.print();
	st3.set_data("\nAqib", 18, 3.03);
	st3.print();




	_getch();
	return 0;
}