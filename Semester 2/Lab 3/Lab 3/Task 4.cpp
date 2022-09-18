#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class cal{
private:
	float no1, no2;
public:
	cal() {
		no1 = no2 = 0;
	}
	void set_no1(float n1) {
		no1 = n1;
	}void set_no2(float n2) {
		no2 = n2;
	}
	float get_no1() {
		return no1;
	}
	float get_no2() {
		return no2;
	}
	float sum(float n1, float n2) {
		return get_no1() + get_no2();
	}
	float sub(float n1, float n2) {
		return get_no1() - get_no2();
	}
	float mult(float n1, float n2) {
		return get_no1() * get_no2();
	}
	int div(int n1, int n2) {
		return get_no1() / get_no2();
	}
	void print()
	{
		cout << "The sum of Numbers is : " << sum(no1, no2) << endl;
		cout << "The Difference of Numbers is : " << sub(no1, no2) << endl;
		cout << "The Multiplication of Numbers is : " << mult(no1, no2) << endl;
		cout << "The Division of Numbers is : " << div(no1, no2) << endl << endl;
	}
};
int main()
{
	cal number;
	float No1, No2;
	cout << "Enter First Number : ";
	cin >> No1;
	cout << "Enter Second Number : ";
	cin >> No2;
	number.set_no1(No1);
	number.set_no2(No2);
	number.print();
	_getch();
	return 0;
}