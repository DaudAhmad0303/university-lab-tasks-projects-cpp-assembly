//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class Student {
//private:
//	string name;
//	short RGN;
//	float CGPA;
//public:
//	defalut Constructor
//	Student()
//	{
//		string name = "No Name";
//		short RGN = 0;
//		short CGPA = 0;
//	}
//	SetterFunction for Student name
//	void set_name(string n)
//	{
//		name = n;
//	}
//	GetterFunction for Book name
//	string get_name()
//	{
//		return name;
//	}
//	SetterFunction for Book Price
//	void set_RGN(short p) {
//		RGN = p;
//	}
//	GetterFunction for Book Price
//	short get_RGN()
//	{
//		return RGN;
//	}//SetterFunction for Book Pages
//	void set_CGPA(float p) {
//		CGPA = p;
//	}
//	GetterFunction for Book Pages
//	float get_CGPA()
//	{
//		return CGPA;
//	}
//	void print() {
//		cout << "The Name of Student is : " << name << endl;
//		cout << "The Registration Number is : " << RGN << endl;
//		cout << "The CGPA of Student is : " << CGPA << endl << endl;
//	}
//};
//int main()
//{
//	int i = 0;
//	string n;
//	short rg;
//	float cgpa;
//	Student st[5];
//	for (i = 0; i < 5; i++) {
//		cout << "Enter Name : ";
//		getline(cin, n);
//		st[i].set_name(n);
//		cout << "Enter Registration Number : ";
//		cin >> rg;
//		st[i].set_RGN(rg);
//		cout << "Enter CGPA : ";
//		cin >> cgpa;
//		st[i].set_CGPA(cgpa);
//		cin.ignore();
//	}
//	st[0].set_name("Aqib");
//	st[0].set_RGN(629);
//	st[0].set_CGPA(3.03);
//	st[1].set_name("Daud Ahmad");
//	st[1].set_RGN(620);
//	st[1].set_CGPA(3.56);
//	st[2].set_name("Zohaaib");
//	st[2].set_RGN(632);
//	st[2].set_CGPA(3.05);
//	st[3].set_name("Zain");
//	st[3].set_RGN(637);
//	st[3].set_CGPA(3.14);
//	st[4].set_name("Soahil");
//	st[4].set_RGN(608);
//	st[4].set_CGPA(3.20);
//	/*cout << Book1.get_name();
//	cout << Book1.get_price();
//	cout << Book1.get_pages();
//	cout << Book2.get_name();
//	cout << Book2.get_price();
//	cout << Book2.get_pages();
//*/
//	system("cls");
//	for ( i = 0; i < 5; i++) {
//	st[i].print();
//	}
//	_getch();
//	return 0;
//}