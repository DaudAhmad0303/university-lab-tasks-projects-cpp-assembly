//#include<iostream>
//#include<conio.h>
//#include<stdio.h>
//using namespace std;
//class B;
//class A {
//private:
//	int value1;
//public:
//	void setdata(int v)
//	{
//		value1 = v;
//	}
//	void display()
//	{
//		cout << value1;
//	}
//	friend void exchange(A , B );
//
//};
//class B {
//private:
//	int value2;
//public:
//	void setdata(int v)
//	{
//		value2 = v;
//	}
//	void display()
//	{
//		cout << value2;
//	}
//	friend void exchange(A , B );
//};
//
//void exchange(A object1, B object2)
//{
//	int temp = object1.value1;
//	object1.value1 = object2.value2;
//	object2.value2 = temp;
//	//cout << object1.value1 << object2.value2;
//}
//int main()
//{
//	A obj1;
//	B obj2;
//	obj1.setdata(10);
//	obj2.setdata(20);
//	cout << "Value in \'value1\' of class A before swaping:";
//	obj1.display();
//	cout << "\nValue in \'value2\' of class B before swaping:";
//	obj2.display();
//	exchange(obj1, obj2);
//	cout << "\nValue in \'value1\' of class A After swaping:";
//	obj1.display();
//	cout << "\nValue in \'value2\' of class B before swaping:";
//	obj2.display();
//	
//	_getch();
//	return 0;
//}