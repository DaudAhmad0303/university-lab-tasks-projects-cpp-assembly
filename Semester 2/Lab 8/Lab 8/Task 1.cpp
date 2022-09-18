//#include "Time.h"
//#include<iostream>
//#include<conio.h>
//using namespace std;
//class Time
//{
//private:
//	int mint;
//	int sec;
//	int hours;
//public:
//	Time();
//	Time(int, int, int);
//	void show();
//	void operator ++();
//	void operator--();
//	void operator ++(int);
//	void operator--(int);
//};
//Time::Time()
//{
//	mint = 0;
//	sec = 0;
//	hours = 0;
//}
//Time::Time(int h, int m, int s)
//{
//	hours = h;
//	mint = m;
//	sec = s;
//}
//void Time::show()
//{
//	cout << "Time is " << hours << ":" << mint << ":" << sec << endl;
//}
//void Time::operator++()
//{
//	++mint; ++sec; ++hours;
//	if (mint > 60)
//	{
//		mint -= 60;
//		hours++;
//	}
//	if (sec > 60)
//	{
//		sec -= 60;
//		mint++;
//	}
//	if (hours > 12)
//	{
//		hours -= 12;
//	}
//}
//void Time::operator--()
//{
//	--mint; --sec; --hours;
//	if (mint < 0)
//	{
//		mint += 60;
//		hours--;
//	}
//	if (sec < 0)
//	{
//		sec += 60;
//		mint--;
//	}
//	if (hours <= 0)
//	{
//		hours += 12;
//	}
//}
//void Time::operator--(int)
//{
//	mint--; sec--; hours--;
//	if (mint < 0)
//	{
//		mint += 60;
//		hours--;
//	}
//	if (sec < 0)
//	{
//		sec += 60;
//		mint--;
//	}
//	if (hours <= 0)
//	{
//		hours += 12;
//	}
//}
//void Time::operator++(int)
//{
//	mint++; sec++; hours++;
//	if (mint > 60)
//	{
//		mint -= 60;
//		hours++;
//	}
//	if (sec > 60)
//	{
//		sec -= 60;
//		mint++;
//	}
//	if (hours > 12)
//	{
//		hours -= 12;
//	}
//}
//void main()
//{
//	Time obj1(2, 30, 5);
//	obj1.show();
//	cout << "Pre Increment" << endl;
//	++obj1;
//	obj1.show();
//	Time obj2(1, 2, 4);
//	cout << endl;
//	cout << endl;
//	obj2.show();
//	cout << "Pre Decrement" << endl;
//	--obj2;
//	obj2.show();
//	Time obj3(5, 2, 45);
//	cout << endl;
//	cout << endl;
//	obj3.show();
//	cout << "Post Increment " << endl;
//	obj3++;
//	obj3.show();
//	Time obj4(6, 8, 9);
//	cout << endl;
//	cout << endl;
//	obj4.show();
//	cout << "Post Decrement " << endl;
//	obj4--;
//	obj4.show();
//	_getch();
//}