#include <iostream>
#include<conio.h>
using namespace std;
class Animals
{
public:
	void sound()
	{
		cout << "This is parent class" << endl;
	}
};
class Dogs : public Animals
{
public:
	void sound()
	{
		cout << "Dogs bark" << endl;
	}
};
int main()
{
	Animals *a;
	Dogs d;
	a = &d;
	
	a->sound();
	_getch();
	return 0;

}
