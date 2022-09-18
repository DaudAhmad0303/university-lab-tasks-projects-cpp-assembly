/*
#pragma once
#include<iostream>
#include<conio.h>
class clockType
{
private:
	short hour;
	short minute;
	short second;
public:
	// Constructor
	clockType(short h = 0, short m = 0, short s = 0)
	{
		setTime(h, m, s);
	}

	//Copy Constructor
	clockType(const clockType &t)
	{
		hour = t.hour;
		minute = t.minute;
		second = t.second;
	}

	//Setter Functions
	void setHour(short h)
	{
		hour = h;
	}
	void setMinute(short m)
	{
		minute = m;
	}
	void setSecond(short s)
	{
		second = s;
	}
	void setTime(short h, short m, short s)
	{
		hour = h;
		minute = m;
		second = s;
	}

	//Getter Functions
	short getHour()
	{
		return hour;
	}
	short getMinute()
	{
		return minute;
	}
	short getSecond()
	{
		return second;
	}

	//Display Funtion
	void Display()
	{
		std::cout << getHour() << " : " << getMinute() << " : " << getSecond() << "\n";
	}
};
*/