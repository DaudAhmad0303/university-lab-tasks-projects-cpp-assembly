///**** From Mehak *******///

  
//#include <iostream>
//#include<conio.h>
//using namespace std;
//class Fraction
//{
//	int nom, denom;
//
//public:
//	Fraction(int n = 0, int d = 0)
//	{
//		nom = n;
//		denom = d;
//	}
//	int gcd(int a, int b)
//	{
//		if (a < 0)
//		{
//			a = -a;
//		}
//		while (a != b)
//		{
//			if (a > b)
//				a -= b;
//			else b -= a;
//		}
//		return a;
//	}
//	void reduce()
//	{
//		int num = gcd(nom, denom);
//		nom = nom / num;
//
//		denom = denom / num;
//	}
//	Fraction operator +(Fraction o)
//	{
//		int hcf = gcd(denom, o.denom);
//
//		int lcm = (denom*o.denom) / hcf;
//
//		int num1 = (((lcm / denom)*nom) + (lcm / o.denom)*o.nom);
//
//		Fraction obj;
//		obj.nom = num1;
//		obj.denom = lcm;
//		obj.reduce();
//
//		return obj;
//
//	}
//	Fraction operator *(Fraction o)
//	{
//		Fraction obj;
//		obj.nom = nom * o.nom;
//		obj.denom = denom * o.denom;
//		obj.reduce();
//		return obj;
//	}
//	Fraction operator /(Fraction o)
//	{
//		Fraction obj;
//		obj.nom = nom * o.denom;
//		obj.denom = denom * o.nom;
//		obj.reduce();
//		return obj;
//	}
//	Fraction operator -(Fraction o)
//	{
//		int hcf = gcd(denom, o.denom);
//
//		int lcm = (denom*o.denom) / hcf;
//
//		int num1 = (((lcm / denom)*nom) - (lcm / o.denom)*o.nom);
//
//		Fraction obj;
//		obj.nom = num1;
//		obj.denom = lcm;
//		obj.reduce();
//
//		return obj;
//
//	}
//	void operator ++()
//	{
//		nom = nom + denom;
//		reduce();
//
//	}
//	void operator ++(int)
//	{
//		nom = nom + denom;
//		reduce();
//
//	}
//	void operator --()
//	{
//		nom = nom - denom;
//		reduce();
//
//	}
//	void operator --(int)
//	{
//		nom = nom - denom;
//		reduce();
//
//	}
//
//	void operator -()
//	{
//
//		nom = -1 * nom;
//		reduce();
//
//	}
//	void  operator +()
//	{
//
//		nom = -1 * nom;
//		reduce();
//
//	}
//	friend ostream& operator <<(ostream&, Fraction &);
//	friend istream& operator >>(istream&, Fraction &);
//	void operator =(Fraction o)
//	{
//
//		nom = o.nom;
//		denom = o.denom;
//
//	}
//
//};
//ostream & operator<<(ostream & out, Fraction & f)
//{
//	out << f.nom << "/" << f.denom << endl;
//	return out;
//}
//istream & operator>>(istream & in, Fraction & f)
//{
//	cout << "ENTER NOMINATOR ";
//	in >> f.nom;
//	cout << "ENTER DENOMIRATOR ";
//	in >> f.denom;
//	return in;
//}
//
//int main()
//{
//	Fraction obj1, obj2, obj3;
//	cout << "<><><><><><><FRACTION 1<><><><><><> \n";
//	cin >> obj1;
//	cout << obj1;
//	obj1.reduce();
//	cout << "REDUCED FORM : " << obj1;
//	cout << "<><><><><><><FRACTION 2<><><><><><> \n";
//	cin >> obj2;
//	cout << obj2;
//	obj2.reduce();
//	cout << "REDUCED FORM : " << obj2;
//
//	cout << "________________ADDITION________________\n";
//	obj3 = obj1 + obj2;
//	cout << obj3;
//	cout << "______________SUBSTRACTION________________\n";
//	obj3 = obj1 - obj2;
//	cout << obj3;
//	cout << "_____________MULTIPLICATION________________\n";
//	obj3 = obj1 * obj2;
//	cout << obj3;
//	cout << "________________DIVISION________________\n";
//	obj3 = obj1 / obj2;
//	cout << obj3;
//	cout << "_____________PREFIX INCREMENT________________\n";
//	++obj1;
//	cout << obj1;
//	cout << "_____________PREFIX DECREMENT________________\n";
//	--obj1;
//	cout << obj1;
//	cout << "_____________POSTFIX INCREMENT________________\n";
//	obj1++;
//	cout << obj1;
//	cout << "_____________POSTFIX DECREMENT________________\n";
//	obj1--;
//	cout << obj1;
//	cout << "____________NEGATIVE OF FRACTION________________\n";
//	-obj1;
//	cout << obj1;
//	cout << "____________POSITIVE OF FRACTION________________\n";
//	+obj1;
//	cout << obj1;
//	cout << "____________ COPYING FRACTIONS ________________\n";
//	cout << "FRACTION 1 :" << obj1;
//	Fraction obj4 = obj1;
//	cout << "COPIED FRACTION :" << obj4;
//	_getch();
//}



///****** Code from Zain Shoiab ********///


//#include<iostream>
//#include<conio.h>
//#include<math.h>
//using namespace std;
//class Fraction
//{
//private:
//	int numerator;
//	int denominator;
//public:
//	Fraction(int, int);
//	void setnumerator(int);
//	void setdenominator(int);
//	int getnumerator();
//	int getdenominator();
//	void Simplify();
//	friend Fraction& operator+(const Fraction&, const Fraction&);
//	friend Fraction& operator-(const Fraction&, const Fraction&);
//	Fraction& operator*(const Fraction&);
//	Fraction& operator/(const Fraction&);
//	Fraction& operator++();
//	Fraction& operator++(int);
//	Fraction& operator--();
//	Fraction& operator--(int);
//	void operator-();
//	void operator+();
//	friend ostream&operator<<(ostream&out, Fraction&);
//	friend istream&operator>>(istream&in, Fraction&);
//	//void operator=(Fraction&);
//};
//Fraction::Fraction(int n = 0, int d = 1)
//{
//	setnumerator(n);
//	setdenominator(d);
//	Simplify();
//}
//void Fraction::setnumerator(int n)
//{
//	numerator = n;
//}
//void Fraction::setdenominator(int d)
//{
//	denominator = d;
//}
//void Fraction::Simplify()
//{
//	bool e = true;
//	int n = numerator;
//	int d = denominator;
//	for (int i = (numerator*denominator); i > 1; i--)
//	{
//		if ((numerator%i == 0) && (denominator%i == 0))
//		{
//			numerator = n / i;
//			denominator = d / i;
//
//		}
//		else
//			bool e = false;
//	}
//}
//Fraction&operator+(const Fraction& f1, const Fraction& f2)
//{
//	Fraction f3;
//	int lcm;
//	if (f1.denominator % f2.denominator == 0 || f2.denominator % f1.denominator == 0)
//	{
//		if (f1.denominator < f2.denominator)
//		{
//			lcm = f2.denominator;
//		}
//		else if (f1.denominator > f2.denominator)
//		{
//			lcm = f1.denominator;
//		}
//		else
//		{
//			lcm = f1.denominator;
//		}
//	}
//	else
//		lcm = f1.denominator*f2.denominator;
//	f3.numerator = f1.numerator*(lcm / f1.denominator) + f2.numerator*(lcm / f2.denominator);
//	f3.denominator = lcm;
//	f3.Simplify();
//	return f3;
//}
//Fraction&operator-(const Fraction& f1, const Fraction& f2)
//{
//	Fraction f3;
//	int lcm;
//	if (f1.denominator % f2.denominator == 0 || f2.denominator % f1.denominator == 0)
//	{
//		if (f1.denominator < f2.denominator)
//		{
//			lcm = f2.denominator;
//		}
//		else if (f1.denominator > f2.denominator)
//		{
//			lcm = f1.denominator;
//		}
//		else
//		{
//			lcm = f1.denominator;
//		}
//	}
//	else
//		lcm = f1.denominator*f2.denominator;
//	f3.numerator = f1.numerator*(lcm / f1.denominator) - f2.numerator*(lcm / f2.denominator);
//	f3.denominator = lcm;
//	f3.Simplify();
//	return f3;
//}
//Fraction&Fraction:: operator*(const Fraction&f1)
//{
//	Fraction f2;
//	f2.numerator = this->numerator*f1.numerator;
//	f2.denominator = this->denominator*f1.denominator;
//	f2.Simplify();
//	return f2;
//}
//Fraction&Fraction:: operator/(const Fraction& f1)
//{
//	Fraction f2;
//	f2.numerator = this->numerator*f1.denominator;
//	f2.denominator = this->denominator*f1.numerator;
//	f2.Simplify();
//	return f2;
//}
//Fraction& Fraction:: operator++()
//{
//	Fraction f2;
//	f2.numerator = numerator + denominator;
//	f2.denominator = denominator;
//	f2.Simplify();
//	return f2;
//}
//Fraction& Fraction:: operator++(int)
//{
//	Fraction f2;
//	f2.numerator = numerator;
//	f2.denominator = denominator;
//	f2.Simplify();
//	return f2;
//}
//Fraction& Fraction:: operator--()
//{
//	Fraction f2;
//	f2.numerator = numerator - denominator;
//	f2.denominator = denominator;
//	f2.Simplify();
//	return f2;
//}
//Fraction& Fraction:: operator--(int)
//{
//	Fraction f2;
//	f2.numerator = numerator;
//	f2.denominator = denominator;
//	f2.Simplify();
//	return f2;
//}
//void Fraction:: operator-()
//{
//	this->numerator = numerator * -1;
//}
//void Fraction:: operator+()
//{
//	if (numerator < 0 || denominator < 0)
//	{
//		this->numerator = numerator * -1;
//		this->denominator = denominator * -1;
//	}
//}
//ostream&operator<<(ostream&out, Fraction&f1)
//{
//	out << "The Fraction is:";
//	out << f1.numerator << "/" << f1.denominator << endl;
//	return out;
//}
//istream&operator>>(istream&in, Fraction&f1)
//{
//	cout << "Enter the numerator and denominator:";
//	in >> f1.numerator >> f1.denominator;
//	f1.Simplify();
//	return in;
//}
////void Fraction :: operator=(Fraction& f1)
////{
////	 this->numerator =f1.numerator;
////	 this->denominator =f1.denominator;
////}
//								//Getters
//int Fraction::getnumerator()
//{
//	return numerator;
//}
//int Fraction::getdenominator()
//{
//	return denominator;
//}
//
//void main()
//{
//	Fraction f1, f2, sum, diff, multi, divi, pre_inc, post_inc, pre_dec, post_dec;
//	cin >> f1;
//	cin >> f2;
//	cout << "After Addition";
//	sum = f1 + f2;
//	cout << sum;
//	cout << "After Subtraction";
//	diff = f1 - f2;
//	cout << diff;
//	cout << "After Multiplicaton:";
//	multi = f1 * f2;
//	cout << multi;
//	cout << "After division";
//	divi = f1 / f2;
//	cout << divi;
//	cout << "After pre increment:";
//	pre_inc = ++f1;
//	cout << pre_inc;
//	cout << "After post increment:";
//	post_inc = f1++;
//	cout << post_inc;
//	cout << "After pre decrement:";
//	pre_dec = --f1;
//	cout << pre_dec;
//	cout << "After post decrement:";
//	post_dec = f1--;
//	cout << post_dec;
//	cout << "After Changing sign into negative:";
//	-f1;
//	cout << "The Fraction is:" << f1.getnumerator() << "/" << f1.getdenominator() << endl;
//	cout << "After Changing sign into postive:";
//	-f1;
//	cout << "The Fraction is:" << f1.getnumerator() << "/" << f1.getdenominator();
//	_getch();
//}




///***** Simple Operatore Overloading Example *******///

//#include <iostream>
//using namespace std;
//class Complex {
//public:
//	Complex();
//	Complex(double);
//	Complex(double, double);
//	Complex(const Complex &o)
//	{
//		real = o.real;
//		imag = o.imag;
//		cout << "Copy constructor is called...\n";
//	}
//	void print() const;
//	Complex operator+(const Complex&) const;
//	Complex operator-(const Complex&) const;
//	Complex operator*(const Complex&) const;
//	Complex operator/(const Complex&) const;
//	bool operator==(const Complex&) const;
//	bool operator!=(const Complex&) const;
//private:
//	double real;
//	double imag;
//};
//Complex::Complex() {
//	real = imag = 0.0;
//}
//Complex::Complex(double re) {
//	real = re;
//	imag = 0.0;
//}
//Complex::Complex(double re, double im) {
//	real = re;
//	imag = im;
//}
//void Complex::print() const {
//	cout << real << " + " << imag << "i\n";
//}
//Complex Complex::operator+(const Complex& u) const {
//	Complex v(real + u.real,
//		imag + u.imag);
//	return v;
//}
//Complex Complex::operator-(const Complex& u) const {
//	Complex v(real - u.real,
//		imag - u.imag);
//	return v;
//}
//Complex Complex::operator*(const Complex& u) const {
//	Complex v(real * u.real - imag * u.imag,
//		imag * u.real + real * u.imag);
//	return v;
//}
//Complex Complex::operator/(const Complex& u) const {
//	double abs_sq = real * u.real + imag * u.imag;
//	Complex v((real * u.real + imag * u.imag) / abs_sq,
//		(imag * u.real - real * u.imag) / abs_sq);
//	return v;
//}
//bool Complex::operator==(const Complex& u) const {
//	return (real == u.real && imag == u.imag);
//}
//bool Complex::operator!=(const Complex& u) const {
//	return !(real == u.real && imag == u.imag);
//}
//#include<conio.h>
//int main() {
//	Complex c1(8.8, 0);
//	Complex c2(3.1, -4.3983237476786289);
//	Complex c3 = c1 + c2;
//	Complex c4 = c2 - c1;
//	c1.print();
//	c2.print();
//	c3.print();
//	c4.print();
//	if (c3 == c4)
//		cout << "No way.\n";
//	else
//		cout << "Sure they are not equal.\n";
//	Complex c5 = c1 * c2;
//	Complex c6 = c1 / c2;
//	c5.print();
//	c6.print();
//	_getch();
//	return 0;
//}



///******** My Code for Task 2 ********////
#include<iostream>
#include<conio.h>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int n=0,int d=1)
	{
		numerator = n;
		denominator = d;
		simplify(n,d);
	}
	void simplify(int numer, int den)
	{
		for (int i = (numer*den); i > 1; i--)
		{
			if (numer%i == 0 && den%i == 0)
			{
				numer /= i;
				den /= i;
			}
		}
		this->numerator = numer;
		this->denominator = den;
	}
	Fraction operator+(const Fraction &fraction)
	{
		Fraction frac;
		int lcm;
		lcm = denominator * fraction.denominator;
		frac.numerator = ((lcm / denominator)*numerator + (lcm / fraction.denominator)*fraction.numerator);
		frac.denominator = lcm;
		frac.simplify(frac.numerator, frac.denominator);
		return frac;
	}
	Fraction operator-(const Fraction &fraction)
	{
		Fraction frac;
		int lcm;
		lcm = denominator * fraction.denominator;
		frac.numerator = ((lcm / denominator)*numerator - (lcm / fraction.denominator)*fraction.numerator);
		frac.denominator = lcm;
		frac.simplify(frac.numerator, frac.denominator);
		return frac;
	}
	Fraction operator*(const Fraction &fraction)
	{
		Fraction frac(numerator*fraction.numerator, denominator*fraction.denominator);
		frac.simplify(frac.numerator, frac.denominator);
		return frac;
	}
	Fraction operator/(const Fraction &fraction)
	{
		Fraction frac(numerator*fraction.denominator, denominator*fraction.numerator);
		frac.simplify(frac.numerator, frac.denominator);
		return frac;
	}
	Fraction operator++()
	{
		Fraction f;
		f.numerator = this->numerator + this->denominator;
		f.denominator = this->denominator;
		f.simplify(f.numerator, f.denominator);
		*this = f;
		return f;
	}
	Fraction operator--()
	{
		Fraction f;
		f.numerator = this->numerator - this->denominator;
		f.denominator = this->denominator;
		f.simplify(f.numerator, f.denominator);
		*this = f;
		return f;
	}
	Fraction operator++(int)
	{
		Fraction frac = *this;
		this->numerator = numerator + denominator;
		this->denominator = denominator;
		return frac;
	}
	Fraction operator--(int)
	{
		Fraction frac = *this;
		this->numerator = numerator - denominator;
		this->denominator = denominator;
		return frac;
	}
	void operator-()
	{
		this->numerator = numerator * -1;
	}

	friend ostream& operator<<(ostream& out, Fraction obj);
};
ostream& operator<<(ostream& out, Fraction obj)
{
	out << obj.numerator << " / " << obj.denominator << endl;
	return out;
}
int main()
{
	Fraction fra1(6, 4);
	Fraction fra2(5, 4);
	cout << "Initial Fractions: \n";
	cout << fra1 << endl << fra2<<endl;
	cout << "Addition of Fractions	 :";
	Fraction res = fra1 + fra2;
	cout << res;
	cout << "Subtraction of Fractions	 :";
	res = fra1 - fra2;
	cout << res;
	cout << "Multiplication of Fractions	 :";
	res = fra1 * fra2;
	cout << res;
	cout << "Division of Fractions	 :";
	res = fra1 / fra2;
	cout << res;
	res = --fra1;
	cout << res << fra1;
	-fra2;
	cout << fra2;
	_getch();
	return 0;
}
