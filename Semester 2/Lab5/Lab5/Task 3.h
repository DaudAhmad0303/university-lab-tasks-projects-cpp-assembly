/*
#pragma once
#include<iostream>
class Date
{
private:
	short day;
	short month;
	short year;
public:
	// Constructor
	Date(short d = 0, short m = 0, short y = 0)
	{
		setAll(d, m, y);
	}

	//Setter Funtions
	void setDay(short d)
	{
		day = d;
	}
	void setMonth(short m)
	{
		month = m;
	}
	void setYear(short y)
	{
		year = y;
	}
	void setAll(short d, short m, short y)
	{
		setDay(d);
		setMonth(m);
		setYear(y);
	}

	// Getter Funtions
	short getDay()
	{
		return day;
	}
	short getMonth()
	{
		return month;
	}
	short getYear()
	{
		return year;
	}

	// Funtion for Displaying all the values
	void display()
	{
		std::cout << "Date : " << getDay() << " \\ " << getMonth() << " \\ " << getYear();
	}

};
*/