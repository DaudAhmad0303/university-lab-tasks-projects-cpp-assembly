
#pragma once
class Rectangle
{
private:
	int height;
	int width;
	int area;
public:
	//constructor
	Rectangle(int h = 0, int w = 0)
	{
		height = h;
		width = w;
		int a = h * w;
	}

	//Copy Constructor
	Rectangle(const Rectangle &t)
	{
		height = t.height;
		width = t.width;
		int a;
		area= height * width;
	}

	//Setter Functions
	void setHeight(int h)
	{
		height = h;
	}
	void setWidth(int w)
	{
		width = w;
	}

	//Getter Function
	int getHeight()
	{
		return height;
	}
	int getWidth()
	{
		return width;
	}
	int getArea()
	{
		return ( getWidth() * getHeight() );
	}
};
