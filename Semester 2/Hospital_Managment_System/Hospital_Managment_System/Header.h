#pragma once
#pragma once
#include<string>
#include<string.h>
using namespace std;
//*********************************************************************
//				Person class definition here
//*********************************************************************
class Person {
protected:
	//attributes of person class
	string name;
	int id;
	int age;
	string gender;
	string phone_number;
	string birth_date;
public:
	//constructor
	Person();
	// setter or getter function of name
	virtual void setname(string n)//pure virtual function
	{

	}
	virtual string getname()//pure virtual function {
	{
		return name;
	}
	// setter or getter function of id
	virtual void setid(int i)//pure virtual function 
	{

	}
	virtual int getid()//pure virtual function 
	{
		return id;
	}
	// setter or getter function of gender
	virtual void setgender(string g)//pure virtual function
	{

	}
	virtual string getgender()//pure virtual function 
	{
		return gender;
	}
	// setter or getter function of age
	virtual void setage(int a)//pure virtual function
	{

	}
	virtual int getage()//pure virtual function
	{
		return age;
	}
	// setter or getter function of age
	virtual void setphone_number(string p)//pure virtual function
	{

	}
	virtual string getphone_number()//pure virtual function
	{
		return phone_number;
	}
	// setter or getter function of age
	virtual void setbirth_date(string b)//pure virtual function
	{

	}
	virtual string getbirth_date()//pure virtual function
	{
		return birth_date;
	}
	~Person()
	{

	}
};
//*********************************************************************
//					Patient definition
//*********************************************************************
class Patient :public Person
{
protected:
	//attributes of patient class
	string day;
	string time;
	string dieases;
	string precription;
	int room_no;
public:
	//constructor 
	Patient();
	//virtual setter or getter function of patient class of name
	virtual void setname(string n);		// virtual function
	virtual string getname();			// virtual function
	//virtual setter or getter function of patient class of id
	virtual void setid(int i);			// virtual function
	virtual int getid();				// virtual function
	//virtual setter or getter function of patient class of gender
	virtual void setgender(string g);	// virtual function
	virtual string getgender();			// virtual function
	// virtual setter or getter function of patient class of age
	virtual void setage(int a);			// virtual function
	virtual int getage();				// virtual function
	//virtual setter or getter function of patient class of birth_date
	virtual void setbirth_date(string bd);// virtual function
	virtual string getbirth_date();		// virtual function
	// virtual setter or getter function of patient class of phone_number
	virtual void setphone_number(string pn);//pure virtual function 
	virtual string getphone_number();	//pure virtual function
	//setter and getter function of day 
	void setday(string d);
	string getday();
	//setter and getter function of time
	void settime(string t);
	string gettime();
	//setter and getter function of dieases
	void setdieases(string dis);
	string getdieases();
	//setter and getter function of precription
	void setprecription(string pre);
	string getprecription();
	//setter and getter function of room_no
	void setroom_no(int ro);
	int getroom_no();
	~Patient();
};
//********************************************************************
//				Doctor class here
//********************************************************************
class Doctor :public Person
{
protected:
	//attributes of doctor class 
	int experince_year;
	string date_of_join;
	string specalization;
	int rank;
public:
	//constructor
	Doctor();
	//virtual setter or getter function of dcoctor class of name
	virtual void setname(string n1);		// virtual function
	virtual string getname();				//pure virtual function
	//virtual setter or getter function of dcoctor class of id
	virtual void setid(int id1);			// virtual function 
	virtual int getid();					// virtual function  
	//virtual setter or getter function of doctor class of gender 
	virtual void setgender(string g1);		// virtual function
	virtual string getgender();				// virtual function 
	 // virtual setter or getter function of dcoctor class of age
	virtual void setage(int a1);			// virtual function
	virtual int getage();					// virtual function
	//virtual setter or getter function of dcoctor class of birthdate
	virtual void setbirth_date(string bd1);	// virtual function
	virtual string getbirth_date();			// virtual function
	// virtual setter or getter function of dcoctor class of phonenumber
	virtual void setphone_number(string pn1);//pure virtual function
	virtual string getphone_number();		// virtual function 
	//setter and getter function of experince_year 
	void setexperince_year(int expd);
	int getexperince_year();
	//setter and getter function of date_of_join
	void setdate_of_join(string dt);
	string getdate_of_join();
	//setter and getter function of specalization
	void setspecalization(string sp);
	string getspecalization();
	//setter and getter function of rank
	void setrank(int ra);
	int getrank();
	~Doctor();
};
//*********************************************************************
//						Cafeteria Class 
//*********************************************************************
class Cafeteria
{
	int tea;
	int lays;
	int water;
	int coke;
	int candy;
	int TotalAmount;
public:
	Cafeteria();//constructor
	//Setter Functions
	void set_Tea(int);
	void set_Lays(int);
	void set_Water(int);
	void set_Coke(int);
	void set_Candy(int);
	void set_TotalAmount(int);
	//Getter Functions
	int  get_Tea();
	int get_Lays();
	int  get_Water();
	int get_Coke();
	int get_Candy();
	int get_TotalAmount();
	int user_choice(int, int);
	~Cafeteria();  //Destructor
};

//*********************************************************************
//						Pharamacy Class 
//*********************************************************************
class Pharmacy
{
	int Drip;
	int Injection;
	int Cotton;
	int CottonPad;
	int Panadol;
	int Disprin;
	int Disprol;
	int Bruffin;
	int Paracetamol;
	int Syr_Gaviscon;
	int Syr_Dophalac;
	int Syr_Brufen;
	int Syr_Hydralac;
	int Syr_Safi;
	int Cr_Adapco;
	int Cr_Betnovate;
	int Cr_Polifax;
	int Cr_Bevason;
	int Cr_Isotin;
	int Total_Expense;

public:
	Pharmacy();   //Constructor
	//Setter Functions 
	void set_Drip(int);
	void set_Injection(int);
	void set_Cotton(int);
	void set_CottonPad(int);
	void set_Panadol(int);
	void set_Disprin(int);
	void set_Disprol(int);
	void set_Bruffin(int);
	void set_Paracetamol(int);
	void set_Syr_Gaviscon(int);
	void set_Syr_Dophalac(int);
	void set_Syr_Brufen(int);
	void set_Syr_Hydralac(int);
	void set_Syr_Safi(int);
	void set_Cr_Adapco(int);
	void set_Cr_Betnovate(int);
	void set_Cr_Polifax(int);
	void set_Cr_Bevason(int);
	void set_Cr_Isotin(int);
	void set_Total_Expense(int x);
	//Getter Functions
	int get_Drip();
	int get_Injection();
	int get_Cotton();
	int  get_CottonPad();
	int get_Panadol();
	int get_Disprin();
	int get_Disprol();
	int get_Bruffin();
	int get_Paracetamol();
	int get_Syr_Gaviscon();
	int get_Syr_Dophalac();
	int get_Syr_Brufen();
	int get_Syr_Hydralac();
	int get_Syr_Safi();
	int get_Cr_Adapco();
	int get_Cr_Betnovate();
	int get_Cr_Polifax();
	int get_Cr_Bevason();
	int get_Cr_Isotin();
	int get_Total_Expense();
	int user_Pharmacy_choice(int, int);
	~Pharmacy();     //Destructor
};

//*********************************************************************
//						Department Class 
//*********************************************************************
class Department
{
	int	Emergency;
	int Bloodbank;
	int DialysisCenter;
	int BirthCenter;
public:
	Department();      //Constructor
	//setter functions
	void set_Emergency(int);
	void set_Bloodbank(int);
	void set_DialysisCenter(int);
	void set_BirthCenter(int);
	//Getter Functions
	int get_Emergency();
	int get_Bloodbank();
	int get_DialysisCenter();
	int get_BirthCenter();
	int user_Department_choice(int, int);

	~Department();             //Destructor
};

//*********************************************************************
//						Test_Lab Class 
//*********************************************************************
class Test_Lab {
protected:
	int Sugar_test;
	int Blood_test;
	int X_ray;
	int Ultrasound;
	int Corona_test;
public:
	//Constructor
	Test_Lab();

	//Setter functions
	void Set_Sugar_test(int);
	void Set_Blood_test(int);
	void Set_X_ray(int);
	void Set_Ultrasound(int);
	void Set_Corona_test(int);

	//Getter functions
	int Get_Sugar_test();
	int Get_Blood_Test();
	int Get_X_ray();
	int Get_Ultrasound();
	int Get_Corona_test();

	//Destructor
	~Test_Lab();
};

//*********************************************************************
//						Account Class 
//*********************************************************************
class Account {
protected:
	int Salary;
	int bonus;
	int increment;
public:
	//Constructor
	Account();

	//Setter functions
	void virtual Set_Salary(int);
	void Set_Bonus(int);
	void Set_Increment(int);

	//Getter functions
	int Get_Salary();
	int Get_Bonus();
	int Get_Increment();

	//Destructor
	~Account();
};

//*********************************************************************
//					Working_Staff Class 
//*********************************************************************
class Working_Staff
{
protected:
	int Nurses;
	int Paramedical_Staff;
	int Receptionist;
	int Sweeper;
public:
	//constructor
	Working_Staff();

	//Setter functions
	void Set_Nurses(int);
	void Set_Paramedical_Staff(int);
	void Set_Receptionist(int);
	void Set_Sweeper(int);

	//Getter functions
	int Get_Nurses();
	int Get_Paramedical_Staff();
	int Get_Receptionist();
	int Get_Sweeper();

	//Destructor
	~Working_Staff();
};

//*********************************************************************
//						Manager Class 
//*********************************************************************
class Manager :public Person
{
private:
	Doctor doc;
	Working_Staff staff;
	Account doct;
	Account paramed;
	Account nurses;
	Account sweepers;
public:
	Manager();
	void set_experience_year(int);
	void set_date_of_join(string);
	void set_specialization(string);
	void set_rank(int);
	void set_paymentofAll();
	void show_salaryofAll();
	void show_workingstaff_details();
	void show_manager_info();
	void show_doctor_info();
};

//*********************************************************************
//						Ward Class 
//*********************************************************************
class Ward
{
private:
	int ward_ID;
	string ward_name;
	bool availability;
	int no_of_beds;
public:
	void setWard_ID(int);
	void setWard_name(string);
	void setAvailablility(bool);
	void setNo_of_Beds(int);
	int getWard_ID();
	string getWard_name();
	bool getAvailablility();
	int getNo_of_Beds();
};