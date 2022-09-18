#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;
class Student
{
private:
	string name;
	float marks;
	static int rollNO;
public:
	Student()
	{
		name = " ";
		marks = 0;
	}
	void SetData(string x, int y)
	{
		this->name = x;
		this->marks = y;
	}
	void Display()
	{

		cout << "STUDENT" << rollNO + 1 << ":" << ;
		this->rollNO++;
		cout << "\tNAME:  " << name << endl;
		cout << "\tROLL#  " << rollNO << endl;
		cout << "\tMARKS: " << marks << endl;
	}
};
int Student::rollNO = 0;
void main()
{
	Student obj1, obj2, obj3, obj4;
	obj1.SetData("Ahmad", 100);
	obj1.Display();
	obj2.SetData("Aslam", 78);
	obj2.Display();
	obj3.SetData("Akram", 80);
	obj3.Display();
	obj4.SetData("Ali", 70);
	obj4.Display();
	_getch();
}
