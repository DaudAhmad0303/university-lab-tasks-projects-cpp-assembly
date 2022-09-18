/*
#include<string>
#include<string.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include"Task 1.h"
using namespace std;
int main()
{
	Student st1(601, "Asad", 25);
	Student st2(602, "Riaz", 20);
	Student st3(603, "Ahmad", 22);
	Student st4(604, "Faisal", 28);
	st1.Display();
	st2.Display();
	st3.Display();
	st4.Display();

	_getch();
	return 0;
}

*/

//Task 1 submitted

//#include<iostream>
//#include<conio.h>
//#include<string>
//#include<string.h>
//using namespace std;
//class Student
//{
//private:
//	string name;
//	float marks;
//	static int rollNO;
//public:
//	Student()
//	{
//		name = " ";
//		marks = 0;
//	}
//	void SetData(string x, int y)
//	{
//		this->name = x;
//		this->marks = y;
//	}
//	void Display()
//	{
//
//		cout << "STUDENT" << rollNO + 1 << ":" << ;
//		this->rollNO++;
//		cout << "\tNAME:  " << name << endl;
//		cout << "\tROLL#  " << rollNO << endl;
//		cout << "\tMARKS: " << marks << endl;
//	}
//};
//int Student::rollNO = 0;
//void main()
//{
//	Student obj1, obj2, obj3, obj4;
//	obj1.SetData("Ahmad", 100);
//	obj1.Display();
//	obj2.SetData("Aslam", 78);
//	obj2.Display();
//	obj3.SetData("Akram", 80);
//	obj3.Display();
//	obj4.SetData("Ali", 70);
//	obj4.Display();
//	_getch();
//}



//
//
//Task 2 Ready Form Hur
//
//#include<iostream>		
//#include<conio.h>
//using namespace std;
//
//class Test
//{
//private:
//	int x;
//public:
//	Test(int x = 0)
//	{
//		this->x = x;
//	}
//	void change(Test *t)
//	{
//		this->x = t->x;
//	}
//	void print()
//	{
//		cout << "x = " << x << endl;
//	}
//};
//
//int main()
//{
//	Test obj(5);
//	Test *ptr = new Test(10);
//	obj.change(ptr);
//	obj.print();
//	_getch();
//	return 0;
//}
