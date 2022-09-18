#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Shape
{
protected:
	double width, height;
public:
	Shape(double a = 0.0, double b = 0.0) {
		width = a;
		height = b;
	}
	virtual double CalculateArea() {
		cout << "Shape Area is: ";
		return 0;
	}
};
class Triangle: public Shape
{
public:
	Triangle(double a = 0.0, double b = 0.0) {
		width = a;
		height = b;
	}
	double CalculateArea() {
		cout << "Triangle Area is: ";
		return (width*height/2);
	}

};
class Square :public Shape
{
public:
	Square(double a = 0.0)
	{
		width = a;
	}
	virtual double CalculateArea() {
		cout << "Square area is: ";
		return (width*width);
	}
};
class Rectangle :public Shape
{
public:
	Rectangle(double a = 0.0, double b = 0.0)
	{
		width = a;
		height = b;
	}
	virtual double CalculateArea() {
		cout << "Rectangle area is: ";
		return (width*height);
	}
};
class Circle :public Shape
{
public:
	Circle(double a = 0.0)
	{
		width = a;
	}
	virtual double CalculateArea() {
		cout << "Circle area is: ";
		return (3.141592653*width);
	}
};
int main()
{
	Shape *shape;
	Triangle tri(3.3, 5);
	Rectangle rec(4.2, 7.3);
	Square sq(4.3);
	Circle cir(5.8);

	shape = &tri;
	//Calculating the Triangle Area
	cout << shape->CalculateArea() << endl;

	shape = &rec;
	//Calculating the Rectangle Area
	cout << shape->CalculateArea() << endl;

	shape = &sq;
	//Calculating the Square Area
	cout << shape->CalculateArea() << endl;

	shape = &cir;
	//Calculating the Circle Area
	cout << shape->CalculateArea() << endl;
	_getch();
	return 0;
}