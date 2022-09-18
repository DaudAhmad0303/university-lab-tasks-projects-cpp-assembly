#include"Header.h"
#include<iostream>
#include<conio.h>
//*********************************************************************
//				Person class definition here
//*********************************************************************

//constructor
Person::Person()
{
	name = " ";
	id = 0;
	age = 0;
	gender = " ";
	phone_number = " ";
	birth_date = " ";
}

//*********************************************************************
//					Patient class definitions here
//*********************************************************************

//constructor 
Patient::Patient()
{
	day = "0";
	time = "0";
	dieases = " ";
	precription = " ";
	room_no = 0;
}
//virtual setter or getter function of patient class of name
void Patient::setname(string n) // virtual function
{
	name = n;
}
string Patient::getname()// virtual function
{
	return name;
}
//virtual setter or getter function of patient class of id
void Patient::setid(int i)// virtual function
{
	id = i;
}
int Patient::getid()// virtual function
{
	return id;
}
//virtual setter or getter function of patient class of gender
void Patient::setgender(string g)// virtual function
{
	gender = g;
}
string Patient::getgender()// virtual function
{
	return gender;
}
// virtual setter or getter function of patient class of age
void Patient::setage(int a)// virtual function
{
	age = a;
}
int Patient::getage()// virtual function
{
	return age;
}
//virtual setter or getter function of patient class of birth_date
void Patient::setbirth_date(string bd)// virtual function
{
	birth_date = bd;
}
string Patient::getbirth_date()// virtual function
{
	return birth_date;
}
// virtual setter or getter function of patient class of phone_number
void Patient::setphone_number(string pn)//pure virtual function 
{
	phone_number = pn;
}
string Patient::getphone_number()//pure virtual function
{
	return phone_number;
}
//setter and getter function of day 
void Patient::setday(string d)
{
	day = d;
}
string Patient::getday()
{
	return day;
}
//setter and getter function of time
void Patient::settime(string t)
{
	time = t;
}
string Patient::gettime()
{
	return time;
}
//setter and getter function of dieases
void Patient::setdieases(string dis)
{
	dieases = dis;
}
string Patient::getdieases()
{
	return dieases;
}
//setter and getter function of precription
void Patient::setprecription(string pre)
{
	precription = pre;
}
string Patient::getprecription()
{
	return precription;
} //setter and getter function of room_no
void Patient::setroom_no(int ro)
{
	room_no = ro;
}
int Patient::getroom_no()
{
	return room_no;
}
Patient::~Patient()
{

}
//********************************************************************
 //				Doctor class Definitions goes here
 //********************************************************************

 //constructor
Doctor::Doctor()
{
	experince_year = 0;
	date_of_join = "0";
	specalization = " ";
	rank = 0;
}
//virtual setter or getter function of dcoctor class of name
void Doctor::setname(string n1)// virtual function
{
	name = n1;
}
string Doctor::getname()//pure virtual function
{
	return name;
}
//virtual setter or getter function of dcoctor class of id
void Doctor::setid(int id1)// virtual function 
{
	id = id1;
}
int Doctor::getid()// virtual function 
{
	return id;
}
//virtual setter or getter function of doctor class of gender 
void Doctor::setgender(string g1)// virtual function
{
	gender = g1;
}
string Doctor::getgender()// virtual function 
{
	return gender;
} // virtual setter or getter function of dcoctor class of age
void Doctor::setage(int a1)// virtual function
{
	age = a1;
}
int Doctor::getage()// virtual function
{
	return age;
}
//virtual setter or getter function of dcoctor class of birthdate
void Doctor::setbirth_date(string bd1)// virtual function
{
	birth_date = bd1;
}
string Doctor::getbirth_date()// virtual function
{
	return birth_date;
} // virtual setter or getter function of dcoctor class of phonenumber
void Doctor::setphone_number(string pn1)//pure virtual function
{
	phone_number = pn1;
}
string Doctor::getphone_number()// virtual function 
{
	return phone_number;
} //setter and getter function of experince_year 
void Doctor::setexperince_year(int expd)
{
	experince_year = expd;
}
int Doctor::getexperince_year()
{
	return experince_year;
}
//setter and getter function of date_of_join
void Doctor::setdate_of_join(string dt)
{
	date_of_join = dt;
}
string Doctor::getdate_of_join()
{
	return date_of_join;
}
//setter and getter function of specalization
void Doctor::setspecalization(string sp)
{
	specalization = sp;
}
string Doctor::getspecalization()
{
	return specalization;
}
//setter and getter function of rank
void Doctor::setrank(int ra)
{
	rank = ra;
}
int Doctor::getrank()
{
	return rank;
}
Doctor::~Doctor()
{

}
//**********************************************************************
//					Cafeteria Class Definitions goes here
//**********************************************************************
Cafeteria::Cafeteria() //constructor to initialize value
{
	tea = 30;
	lays = 50;
	water = 30;
	coke = 65;
	candy = 5;
}
//setter functions to set the price of eatables
void Cafeteria::set_Tea(int a = 0)
{
	//a is the price of the tea
	tea = a * tea;
}
void Cafeteria::set_Lays(int b = 0)
{
	//b is the price of the lays
	lays = b * lays;
}
void Cafeteria::set_Water(int c = 0)
{
	//c is the price of the water
	water = c * water;
}
void Cafeteria::set_Coke(int d = 0)
{
	//d is the price of the coke
	coke = d * coke;
}
void Cafeteria::set_Candy(int e = 0)
{
	//e is the price of the candy 
	candy = e * candy;
}
//setter func. to calculate totalamount of eatables
void Cafeteria::set_TotalAmount(int f = 0)
{
	TotalAmount = f;
}
//getter functions to return the price of eatables
int Cafeteria::get_Tea()
{
	return tea;
}
int Cafeteria::get_Lays()
{
	return lays;
}
int Cafeteria::get_Water()
{
	return water;
}
int Cafeteria::get_Coke()
{
	return coke;
}
int Cafeteria::get_Candy()
{
	return candy;
}
//getter func. to return the totalamount of eatables
int Cafeteria::get_TotalAmount()
{
	return TotalAmount;
}
//function defination to deal with user-choice.
//'g' is containing user choice and 'h' is the Quantity of eatables
int Cafeteria::user_choice(int g, int h)
{
	switch (g)
	{
	case 1:
		set_Tea(h);
		return get_Tea();
		break;
	case 2:
		set_Lays(h);
		return get_Lays();
		break;
	case 3:
		set_Water(h);
		return get_Water();
		break;
	case 4:
		set_Coke(h);
		return get_Coke();
		break;
	case 5:
		set_Candy(h);
		return get_Candy();
		break;
	default:
		return 0;
		cout << " wrong input!";
	}
}
Cafeteria:: ~Cafeteria()
{

}
//**********************************************************************
//				Pharmacy Class Definitions goes here
//**********************************************************************
Pharmacy::Pharmacy()
{

	Drip = 300;
	Injection = 70;
	Cotton = 50;
	CottonPad = 500;
	Panadol = 15;
	Disprin = 20;
	Disprol = 30;
	Bruffin = 60;
	Paracetamol = 75;
	Syr_Gaviscon = 65;
	Syr_Dophalac = 80;
	Syr_Brufen = 105;
	Syr_Hydralac = 130;
	Syr_Safi = 120;
	Cr_Adapco = 350;
	Cr_Betnovate = 240;
	Cr_Polifax = 90;
	Cr_Bevason = 225;
	Cr_Isotin = 95;
}
//setter functions to set price of pharmaceutical products.
void Pharmacy::set_Drip(int a = 0)
//a will be the amount of drip
{
	Drip = a * Drip;
}
void Pharmacy::set_Injection(int b = 0)
//b will be the amount of injection
{
	Injection = b * Injection;
}
void Pharmacy::set_Cotton(int c = 0)
//c will be the amount of cotton
{
	Cotton = c * Cotton;
}
void Pharmacy::set_CottonPad(int d = 0)
//d will be the amount of cottonpad
{
	CottonPad = d * CottonPad;
}
void Pharmacy::set_Panadol(int p = 0)
//p will be the amount of tablets
{
	Panadol = p * Panadol;
}
void Pharmacy::set_Disprin(int di = 0)
//di will be the amount of tablets
{
	Disprin = di * Disprin;
}
void Pharmacy::set_Disprol(int dis = 0)
//dis will be the amount of tablets
{
	Disprol = dis * Disprol;
}
//setter getter defination for Bruffin.
void Pharmacy::set_Bruffin(int br = 0)
//br will be the amount of tablets
{
	Bruffin = br * Bruffin;
}
void Pharmacy::set_Paracetamol(int pr = 0)
//pr will be the amount of tablets

{
	Paracetamol = pr * Paracetamol;
}
void Pharmacy::set_Syr_Gaviscon(int g = 0)
//g will be the amount of syrup

{
	Paracetamol = g * Paracetamol;
}
void Pharmacy::set_Syr_Dophalac(int dp = 0)
//dp  will be the amount of syrup

{
	Syr_Dophalac = dp * Syr_Dophalac;
}
void Pharmacy::set_Syr_Brufen(int bf = 0)
//bf will be the amount of syrup

{
	Syr_Brufen = bf * Syr_Brufen;
}
void Pharmacy::set_Syr_Hydralac(int hd = 0)
//hd will be the amount of syrup

{
	Syr_Hydralac = hd * Syr_Hydralac;
}
void Pharmacy::set_Syr_Safi(int s = 0)
//pr will be the amount of syrup

{
	Syr_Safi = s * Syr_Safi;
}
void Pharmacy::set_Cr_Adapco(int ad = 0)
//ad will be the amount of cream

{
	Cr_Adapco = ad * Cr_Adapco;
}
void Pharmacy::set_Cr_Betnovate(int bt = 0)
//bt will be the amount of cream

{
	Cr_Betnovate = bt * Cr_Betnovate;
}
void Pharmacy::set_Cr_Polifax(int po = 0)
//po will be the amount of cream

{
	Cr_Polifax = po * Cr_Polifax;
}
void Pharmacy::set_Cr_Bevason(int bv = 0)
//bv will be the amount of cream

{
	Cr_Bevason = bv * Cr_Bevason;
}
void Pharmacy::set_Cr_Isotin(int is = 0)
//is will be the amount of cream

{
	Cr_Isotin = is * Cr_Isotin;
}
void Pharmacy::set_Total_Expense(int h)
{
	Total_Expense = h;
}
//getter functions to get price of pharmaceutical products
int Pharmacy::get_Drip()
{
	return Drip;
}
int Pharmacy::get_Injection()
{
	return Injection;
}
int Pharmacy::get_Cotton()
{
	return Cotton;
}
int Pharmacy::get_CottonPad()
{
	return CottonPad;
}
int Pharmacy::get_Panadol()
{
	return Panadol;
}
int Pharmacy::get_Disprin()
{
	return Disprin;
}
int Pharmacy::get_Disprol()
{
	return Disprol;
}
int Pharmacy::get_Bruffin()
{
	return Bruffin;
}
int Pharmacy::get_Paracetamol()
{
	return Paracetamol;
}
int Pharmacy::get_Syr_Gaviscon()
{
	return Syr_Gaviscon;
}
int Pharmacy::get_Syr_Dophalac()
{
	return Syr_Dophalac;
}
int Pharmacy::get_Syr_Brufen()
{
	return Syr_Brufen;
}
int Pharmacy::get_Syr_Hydralac()
{
	return Syr_Hydralac;
}
int Pharmacy::get_Syr_Safi()
{
	return Syr_Safi;
}
int Pharmacy::get_Cr_Adapco()
{
	return Cr_Adapco;
}
int Pharmacy::get_Cr_Betnovate()
{
	return Cr_Betnovate;
}
int Pharmacy::get_Cr_Polifax()
{
	return Cr_Polifax;
}
int Pharmacy::get_Cr_Bevason()
{
	return Cr_Bevason;
}
int Pharmacy::get_Cr_Isotin()
{
	return Cr_Isotin;
}
int Pharmacy::get_Total_Expense()
{
	return Total_Expense;
}
//function defination to deal with user-choice.
//'l' is containing user choice and 'ch' is the Quantity of medicine

int Pharmacy::user_Pharmacy_choice(int l, int ch)
{
	switch (l)
	{
	case 1:
		set_Drip(ch);
		return get_Drip();
		break;
	case 2:
		set_Injection(ch);
		return get_Injection();
		break;
	case 3:
		set_Cotton(ch);
		return get_Cotton();
		break;
	case 4:
		set_CottonPad(ch);
		return get_CottonPad();
		break;
	case 5:
		set_Panadol(ch);
		return get_Panadol();
		break;
	case 6:
		set_Disprin(ch);
		return get_Disprin();
		break;
	case 7:
		set_Disprol(ch);
		return get_Disprol();
		break;
	case 8:
		set_Bruffin(ch);
		return get_Bruffin();
		break;
	case 9:
		set_Paracetamol(ch);
		return get_Paracetamol();
		break;
	case 10:
		set_Syr_Gaviscon(ch);
		return get_Syr_Gaviscon();
		break;
	case 11:
		set_Syr_Dophalac(ch);
		return get_Syr_Dophalac();
		break;
	case 12:
		set_Syr_Brufen(ch);
		return get_Syr_Brufen();
		break;
	case 13:
		set_Syr_Hydralac(ch);
		return get_Syr_Hydralac();
		break;
	case 14:
		set_Syr_Safi(ch);
		return get_Syr_Safi();
		break;
	case 15:
		set_Cr_Adapco(ch);
		return get_Cr_Adapco();
		break;
	case 16:
		set_Cr_Betnovate(ch);
		return get_Cr_Betnovate();
		break;
	case 17:
		set_Cr_Polifax(ch);
		return get_Cr_Polifax();
		break;
	case 18:
		set_Cr_Bevason(ch);
		return get_Cr_Bevason();
		break;
	case 19:
		set_Cr_Isotin(ch);
		return get_Cr_Isotin();
		break;
	default:
		return 0;
		cout << "wrong input!" << endl;
	}
}
Pharmacy::~Pharmacy()
{

}
//***********************************************************************
//			 Department Class Definitions goes here
//***********************************************************************
Department::Department()
{
	Emergency = 1500;
	Bloodbank = 1000;
	DialysisCenter = 5000;
	BirthCenter = 50000;
}
//setter and getter functions for surgery
void Department::set_Emergency(int em)
//em is containing the amount of emergency check up fee
{
	Emergency = em;
}
int Department::get_Emergency()
{
	return Emergency;

}
//setter and getters for blood
void Department::set_Bloodbank(int bl)
//bl is containing the amount of blood pack
{
	Bloodbank = bl;
}
int Department::get_Bloodbank()
{
	return Bloodbank;
}
void Department::set_DialysisCenter(int dialysis)
//dialysis is containing the amount of dialysis fee
{
	DialysisCenter = dialysis;
}
int Department::get_DialysisCenter()
{
	return DialysisCenter;
}
void Department::set_BirthCenter(int birth)
// birth is containig the amount of Dilvery Expenditures
{
	BirthCenter = birth;
}
int Department::get_BirthCenter()
{
	return BirthCenter;
}
//function defination to deal with user - choice. 'l' is containing user choice 
int Department::user_Department_choice(int l, int amount)
{
	switch (l)
	{
	case 1:
		set_Emergency(amount);
		return get_Emergency();
		break;
	case 2:
		set_Bloodbank(amount);
		return get_Bloodbank();
		break;
	case 3:
		set_DialysisCenter(amount);
		return get_DialysisCenter();
		break;
	case 4:
		set_BirthCenter(amount);
		return get_BirthCenter();
		break;
	default:
		return 0;
		cout << "wrong input!" << endl;
	}
}
Department::~Department()
{

}

//**********************************************************************************
//                Test_Lab class definations here
//**********************************************************************************

//constructor
Test_Lab::Test_Lab() {
	Sugar_test = 1000;
	Blood_test = 1500;
	X_ray = 2000;
	Ultrasound = 2500;
	Corona_test = 3000;
}

//setters and getters for Sugar_test
void Test_Lab::Set_Sugar_test(int st) {
	Sugar_test = st;
}
int Test_Lab::Get_Sugar_test() {
	return Sugar_test;
}

//setters and getters for Blood_test
void Test_Lab::Set_Blood_test(int bt) {
	Blood_test = bt;
}
int Test_Lab::Get_Blood_Test() {
	return Blood_test;
}

//setters and getters for X_ray
void Test_Lab::Set_X_ray(int xr) {
	X_ray = xr;
}
int Test_Lab::Get_X_ray() {
	return X_ray;
}

//setters and getters for Ultrasound
void Test_Lab::Set_Ultrasound(int us) {
	Ultrasound = us;
}
int Test_Lab::Get_Ultrasound() {
	return Ultrasound;
}

//setters and getters for Corona Test
void Test_Lab::Set_Corona_test(int ct) {
	Corona_test = ct;
}
int Test_Lab::Get_Corona_test() {
	return Corona_test;
}

Test_Lab::~Test_Lab() {

}

//*******************************************************************************
//               Account class definations here
//*******************************************************************************

//constructor
Account::Account() {
	Salary = 0;
	bonus = 0;
	increment = 0;
}

//setters and getters for Salary
void  Account::Set_Salary(int x) {
	Salary = x;
}
int Account::Get_Salary() {
	return Salary;
}

//setters and getters for Paybill
void Account::Set_Bonus(int pb) {
	bonus = pb;		// Bonus will be amount given every year Extra
}
int Account::Get_Bonus() {
	return bonus;
}

//setters and getters for Amount class
void Account::Set_Increment(int at) {
	increment = at;
}
int Account::Get_Increment() {
	return increment;
}

//destructor
Account::~Account() {

}

//********************************************************************************
//                 Working Staff Class definations here
//*******************************************************************************

//constructor
Working_Staff::Working_Staff() {
	Nurses = 20;
	Paramedical_Staff = 15;
	Receptionist = 2;
	Sweeper = 10;
}

//setters and getters for Nurses Class
void Working_Staff::Set_Nurses(int w) {
	Nurses = w;
}
int Working_Staff::Get_Nurses() {
	return Nurses;
}

//setters and getters for Paramedical Staff
void Working_Staff::Set_Paramedical_Staff(int x) {
	Paramedical_Staff = x;
}
int Working_Staff::Get_Paramedical_Staff() {
	return Paramedical_Staff;
}

//setters and getters for Receptionist
void Working_Staff::Set_Receptionist(int y) {
	Receptionist = y;
}
int Working_Staff::Get_Receptionist() {
	return Receptionist;
}

//setters and getters for Sweeper
void Working_Staff::Set_Sweeper(int z) {
	Sweeper = z;
}
int Working_Staff::Get_Sweeper() {
	return Sweeper;
}

//destructor
Working_Staff::~Working_Staff() {

}
//***********************************************************************
//			 Ward Class Definitions goes here
//***********************************************************************
void Ward::setWard_ID(int i)
{
	ward_ID = i;
}
void Ward::setWard_name(string n)
{
	ward_name = n;
}
void Ward::setAvailablility(bool a)
{
	availability = a;
}
void Ward::setNo_of_Beds(int n)
{
	no_of_beds = n;
}
int Ward::getWard_ID()
{
	return ward_ID;
}
string Ward::getWard_name()
{
	return ward_name;
}
bool Ward::getAvailablility()
{
	return availability;
}
int Ward::getNo_of_Beds()
{
	return no_of_beds;
}
//***********************************************************************
//			 Manager class Definitions goes here
//***********************************************************************
Manager::Manager()
{
	name = "Muhammad Gilzaib";
	age = 28;
	gender = "Male";
	phone_number = 923234551058;
	birth_date = "02-08-1992";
	set_paymentofAll();
}
void Manager::set_experience_year(int y)
{
	doc.setexperince_year(y);
}
void Manager::set_date_of_join(string d)
{
	doc.setdate_of_join(d);
}
void Manager::set_specialization(string s)
{
	doc.setspecalization(s);
}
void Manager::set_rank(int r)
{
	doc.setrank(r);
}
void Manager::show_manager_info()
{
	cout << "\n\t\t\tName: " << name << endl;
	cout << "\t\t\tAge: " << age << endl;
	cout << "\t\t\tGender: " << gender << endl;
	cout << "\t\t\tPhone Number: " << phone_number << endl;
	cout << "\t\t\tBirth Date: " << birth_date << endl;
}
void Manager::show_workingstaff_details()
{
	cout << "\n\t\t" << staff.Get_Nurses() << " Nurses are in the Hospital.\n";
	cout << "\t\t" << staff.Get_Paramedical_Staff() << " Paramedical_staff members are in the hospital.\n";
	cout << "\t\t" << staff.Get_Receptionist() << "  Receptionists are in at Reception.\n";
	cout << "\t\t" << staff.Get_Sweeper() << " Sweepers are in the Hospital.\n";
}
void Manager::show_doctor_info()
{
	cout << "Name: " << doc.getname() << endl;
	cout << "ID: " << doc.getid() << endl;
	cout << "Age: " << doc.getage() << endl;
	cout << "Gender: " << doc.getgender() << endl;
	cout << "Phone Number: " << doc.getphone_number() << endl;
	cout << "Experience Year: " << doc.getexperince_year() << endl;
	cout << "Date Of Joining: " << doc.getdate_of_join() << endl;
	cout << "Specialization: " << doc.getspecalization() << endl;
	cout << "Rank: " << doc.getrank() << endl;
}
void Manager::set_paymentofAll()
{
	//Salary and bonus etc. of Doctor
	//Setting Doctor's info here
	doct.Set_Salary(75000);
	doct.Set_Bonus(5000);
	doct.Set_Increment(2000);
	//Setting Paramedical Staff's info here
	paramed.Set_Salary(40000);
	paramed.Set_Bonus(4000);
	paramed.Set_Increment(1500);
	//Setting Nurses info here
	nurses.Set_Salary(30000);
	nurses.Set_Bonus(2000);
	nurses.Set_Increment(1300);
	//Setting Sweepers info here
	sweepers.Set_Salary(20000);
	sweepers.Set_Bonus(1000);
	sweepers.Set_Increment(1100);
}
void Manager::show_salaryofAll()
{
	//Doctor's Salary
	cout << "The Salary Summery of doctors is given below: \n";
	cout << "\t\tRs. " << doct.Get_Salary();
	cout << " is Salalry.\n";
	cout << "\t\tRs. " << doct.Get_Increment();
	cout << " is the yearly increment in the Salary.\n";
	cout << "\t\tRs. " << doct.Get_Increment();
	cout << " is Bonus given Yearly from hospital.\n\n";

	//Paramedical Staff's Salary
	cout << "The Salary Summery of Paramedical Staff is given below: \n";
	cout << "\t\tRs. " << paramed.Get_Salary();
	cout << " is Salalry.\n";
	cout << "\t\tRs. " << paramed.Get_Increment();
	cout<<"is the yearly increment in the Salary.\n";
	cout << "\t\tRs. " << paramed.Get_Bonus();
	cout << " Bonus given Yearly from hospital.\n\n";

	//Nurses' Salary
	cout << "The Salary Summery of Nurses is given below: \n";
	cout << "\t\tRs. " << nurses.Get_Salary();
	cout << " is Salalry.\n";
	cout << "\t\tRs. " << nurses.Get_Increment();
	cout << " is the yearly increment in the Salary.\n";
	cout << "\t\tRs. " << nurses.Get_Bonus();
	cout << " is Bonus given Yearly from hospital.\n\n";

	//Sweeper's Salary
	cout << "The Salary Summery of Sweepers is given below: \n";
	cout << "\t\tRs. " << sweepers.Get_Salary();
	cout<<" is Salalry.\n";
	cout << "\t\tRs. " << sweepers.Get_Increment();
	cout << " is the yearly increment in the Salary.\n";
	cout << "\t\tRs. "<< sweepers.Get_Bonus();
	cout<<" is Bonus given Yearly from hospital.\n\n";
	
}
