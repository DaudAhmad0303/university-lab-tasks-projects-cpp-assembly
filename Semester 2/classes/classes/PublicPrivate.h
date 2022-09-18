#pragma once
#include<string>
class student
{
private:
//	**********creating attributes
//	*********Created Private sothat not accessible from outside main()
	string name;	
	int age;
	float cgpa;
public:
	student();
	void set_data(string n, int a, float c);
	void print();
	void set_name(string n);
	string get_name();
	void set_age(int a = 10);
	int get_age();
	void set_cgpa(float c);
	float get_cgpa();
};