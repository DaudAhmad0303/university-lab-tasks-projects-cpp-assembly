#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class shape
{
protected:
	double height;
	double width;
public:
	shape()
		:height(5), width(8)
	{
	}
};
class rectangle :public shape
{
public:
	double get_r_area()
	{
		return (height*width);
	}
};
class triangle :public shape
{
public:
	double get_t_area()
	{
		return ((height*width)*0.5);
	}
};
int main()
{
	rectangle rec;
	triangle tri;
	cout << "the area of the rectangle is: " << rec.get_r_area();
	cout << "\nthe area of the rectangle is: " << tri.get_t_area();
	_getch();
	return 0;
}