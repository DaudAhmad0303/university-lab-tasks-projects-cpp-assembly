#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Animal
{
protected:
	string name;
	int age;
public:
	Animal()
		:name(""),age(0)
	{
	}
	void setValues(string n, int a)
	{
		name = n;
		age = a;
	}
};
class Zebra :public Animal
{
private:
	string origin;
public:
	void setOrigin(string o)
	{
		origin = o;
	}
	void showDetails()
	{
		cout << "The Name of Zebra: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Origin: " << origin << endl;
	}
};
class Dolphin :public Animal
{
private:
	int weight;
public:
	void setWeight(int w)
	{
		weight = w;
	}
	void showDetails()
	{
		cout << "The Name of Dolphin: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
	}
};
int main()
{
	Zebra z1;
	Dolphin d1;
	z1.setValues("Zebi", 15);
	z1.setOrigin("Asia");
	d1.setValues("Doli", 12);
	d1.setWeight(150);
	z1.showDetails();
	d1.showDetails();
	_getch();
	return 0;
}