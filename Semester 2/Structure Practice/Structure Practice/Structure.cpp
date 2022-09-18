#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;
struct student {
	string name;
	int semester;
	int age;
	float cgpa;
	void print1()
	{
		cout << "Student Data is as follows : \n\n";
		cout << "Name\t\t" << "Age\t\t" << "Semester\t\t" << "CGPA\t\t\n";
		cout << name <<"\t\t"<< age << "\t\t" << semester << "\t\t" << cgpa;
	}
};
void print2(student &s1);
void print3();
void main()
{
	student std1;
	std1.name = "Zain";
	std1.age = 19;
	std1.cgpa = 3.789;
	std1.semester = 2;
	print2(std1);
	cout << "\n changed CGPA is : " << std1.cgpa;
	_getch();
}
void print2(student &s1)
{
	cout << "Name\t\t" << "Age\t\t" << "Semester\t\t" << "CGPA\t\t\n";
	cout << s1.name << "\t\t" << s1.age << "\t\t" << s1.semester << "\t\t" << s1.cgpa << endl;
	cout << "Change CGPA : ";
	cin >> s1.cgpa;
}
void print3()
{



}