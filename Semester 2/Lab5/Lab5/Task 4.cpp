/*
//Design and Implement a class clockType that manages time.
//The class clockType should store hour, minutes, and seconds and 
//display it in the following format(12:30 : 5).For any object of
//clockType, your program should be able to perform the following
//operations on that object.
//1.	Set the time
//2.	Get the time
//3.	Display the time
//4.	Increment the hour by 1
//5.	Increment the minute by 1
//6.	Increment the second by 1
//7.	Create another object of clockType and copy it with the object
//you created earlier; .And see the values in both objects.
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include "Task 4.h"
using namespace std;
int main()
{
	short choice = -1;
	short hour1 = 20, min = 30, sec = 0;
	clockType time1(20,30,0);
	clockType time2 = time1;
	cout << "Copied Time is: ";
	cout << "\n------------Menu-----------\n";
	cout << "Choose any Sr. No. to Perform actions:\n";
	cout << "1.Set the time\n";
	cout << "2.Get the time\n";
	cout << "3.Display the time\n";
	cout << "4.Increment the hour by 1\n";
	cout << "5.Increment the minute by 1\n";
	cout << "6.Increment the second by 1\n";
	cout << "Enter Here: ";
	cin >> choice;
	switch (choice)
		{
		case 1:
			cout << "Enter Hours: ";
			cin >> hour1;
			cout << "Enter Minutes: ";
			cin >> min;
			cout << "Enter Seconds: ";
			cin >> sec;
			time1.setTime(hour1, min, sec);
			cout << "Now the Time is: ";
			time1.Display();
			break;
		case 2:
			cout << "Time by getters: " << time1.getHour() << " : " << time1.getMinute() << " : " << time1.getSecond();
			break;
		case 3:
			cout << "Displaying Time : ";
			time1.Display();
			break;
		case 4:
			time1.setHour(hour1 + 1);
			cout << "Now the Time is: ";
			time1.Display();
			break;
		case 5:
			time1.setHour(min + 1);
			cout << "Now the Time is: ";
			time1.Display();
			break;
		case 6:
			time1.setHour(sec + 1);
			cout << "Now the Time is: ";
			time1.Display();
			break;
		default:
			break;
		}

	cout << "First Original Time was: ";
	time2.Display();
	_getch();
	return 0;
}
*/