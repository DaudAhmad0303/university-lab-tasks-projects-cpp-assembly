#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class Vehicle {
protected:
	string company_name;
	string color;
	int number_of_wheels;
	int power_CC;
	string type_of_vehicle;
public:
	Vehicle();

	Vehicle(string name, string clr, int wheels, int pow, string type);

	void set_name(string);                                     //SETTERS AND GETTERS.
	string get_name();

	void set_color(string);
	string get_color();

	void set_wheels(int);
	int get_wheels();

	void set_power(int);
	int get_power();

	void set_type(string);
	string get_type();

	virtual void check_type() = 0;                               //PURE VIRTUAL FUNCTION
	virtual void display() const;

	//~Vehicle();
};
class Bilal_Motors
{
private:
	Vehicle* list_of_vehicles[20];
	int counter = 0;
public:
	Bilal_Motors();
	//void add_vehicle(Vehicle*);
	//void search_vehicle(string);
	//~Bilal_Motors();

};

//PART 2
class Bike : public Vehicle
{
private:
	double height;
	bool self_start;
	bool disc_brake;

public:
	static int no_of_bikes;
	Bike();
	Bike(string name = "Yahama", string clr = "Red", int wheels = 2, int pow = 70, string type = "Bike", double hei = 16, bool self = false, bool dis = false);
	void display();
	Bike(Bike& b);
	void check_type();
	friend ostream& operator<<(ostream&, const Bike&);
	//friend istream& operator>>(istream&, Bike&);

	//SETTERS AND GETTERS
	void set_height(int h);
	int get_height();

	void set_start(string check);
	bool get_start();

	void set_brake(string check);
	bool get_brake();

	void set_bikes(int bikes);
	int get_bikes();

};

//PART3
class Car : public Vehicle {
private:
	int no_of_doors;
	string transmission;                  //automatic or manual
	int no_of_seats;
public:
	static int no_of_cars;
	Car(string name, string clr, int wheels, int pow, string type, int num = 4, string trans = NULL, int seats = 4);
	Car(const Car&);
	void check_type();
	void display();
	//SETTERS AND GETTERS
	void set_doors(int doors);
	int get_doors();

	void set_transmission(string trans);
	string get_transmission();

	void set_seats(int seats);
	int get_seats();

	void set_cars(int cars);
	int get_cars();
};

//PART 4
class Truck : public Vehicle {                               //BASE CLASS PUBLICALLY INHERITANCE
private:
	double container_size;
	string category;                    //double-cabin or singel cabin
	bool four_wheel_drive;

public:
	static int no_of_trucks;
	Truck(string name, string clr, int wheels, int pow, string type, double size = 10000, string cat = NULL, bool drive = true);
	Truck(const Truck&);
	void check_type();
	void display();
	//SETTERS AND GETTERS
	void set_size(int size);
	int get_size();

	void set_category(string ctg);
	string get_category();

	void set_drive(string drive);
	bool get_drive();

};
Vehicle::Vehicle()
{
}
Vehicle::Vehicle(string name, string clr, int wheels, int pow, string type)
{
	company_name = name;
	color = clr;
	number_of_wheels = wheels;
	power_CC = pow;
	type_of_vehicle = type;
}



void Vehicle::set_name(string name)
{
	company_name = name;
}
string Vehicle::get_name()
{
	return company_name;
}
void Vehicle::set_color(string clr)
{
	color = clr;
	//	color=new char[strlen(clr)];
	//	for(int i=0;i<strlen(clr);i++)
	//		{
	//			color[i]=clr[i];
	//		}
}
string Vehicle::get_color()
{
	return color;
}
void Vehicle::set_wheels(int wheels)
{
	number_of_wheels = wheels;
}
int Vehicle::get_wheels()
{
	return number_of_wheels;
}
void Vehicle::set_power(int pow)
{
	power_CC = pow;
}
int Vehicle::get_power()
{
	return power_CC;
}
void Vehicle::set_type(string type)
{
	type_of_vehicle = type;
	//	type_of_vehicle=new char[strlen(type)];
	//	for(int i=0;i<strlen(type);i++)
	//		{
	//			type_of_vehicle[i]=type[i];
	//		}
}
string Vehicle::get_type()
{
	return type_of_vehicle;
}

void Vehicle::display()const
{
	this->display();
}

//PART 2
int Bike::no_of_bikes = 0;
Bike::Bike()
{
	height = 0;
	self_start = false;
	disc_brake = false;
}
Bike::Bike(string bname, string bclr, int bwheels, int bpow, string btype, double bhei, bool bself, bool bdis)
{
	/*height = bhei;
	self_start = bself;
	disc_brake = bdis;*/
	bwheels = 0;
}
Bike::Bike(Bike& other)
{
	no_of_bikes = other.no_of_bikes;
}
//OVERLOADED FUNCTIONS
ostream& operator<<(ostream& out, const Bike& bout)
{
	cout << "The height of Bike:\t";
	out << bout.height;
	cout << "Self start:\t";
	out << bout.self_start;
	cout << "Disc Brake:\t";
	out << bout.disc_brake;
	return out;
}
void Bike::set_height(int h)
{
	height = h;
}
int Bike::get_height()
{
	return height;
}

void Bike::display()
{
	cout << "Company\t" << "Color\t" << "Wheels" << "Power\t" << "Type\t" << "Height\t" << "SelfStart\t" << "DiscBrake\t" << "Total.";
	cout << endl;
	cout << get_name() << '\t';
	cout << get_color() << '\t';
	cout << get_wheels() << '\t';
	cout << get_power() << '\t';
	cout << get_type() << '\t';
	cout << get_height() << '\t';
	cout << get_start() << '\t';
	cout << get_bikes() << '\t';
	cout << get_bikes() << '\t';
}
//SETTERS AND GETTERS.
void Bike::set_start(string check)
{
	if (check == "True" || check == "Yes")
		self_start = true;
	else if (check == "No" || check == "false")
		self_start = false;
}
bool Bike::get_start()
{
	return self_start;
}

void Bike::set_brake(string check)
{
	if (check == "Yes" || check == "y" || check == "Y")
		disc_brake = true;
	else if (check == "No" || check == "n" || check == "N")
		disc_brake = false;
}
bool Bike::get_brake()
{
	return disc_brake;
}

void Bike::set_bikes(int num)
{
	no_of_bikes = num;
}
int Bike::get_bikes()
{
	return no_of_bikes;
}
void Bike::check_type()
{
	if (this->get_wheels() == 2)
	{
		char array[] = "Bike";
		string tptr = array;
		this->set_type(tptr);
	}
}

//PART 3
int Car::no_of_cars = 1;
Car::Car(string name, string clr, int wheels, int pow, string type, int num, string trans, int seats) :Vehicle(name, clr, wheels, pow, type)
{
	no_of_cars++;
}
Car::Car(const Car& other)
	:no_of_doors(other.no_of_doors),transmission(other.transmission),no_of_seats(other.no_of_seats)
{
	no_of_cars=other.no_of_cars;
}
void Car::check_type()
{
	if (this->get_wheels() == 4)
	{
		char carray[] = { 'C','a','r' };
		string cptr = carray;
		this->set_type(cptr);
	}
}
void Car::display()
{
	cout << "Company\t" << "Color\t" << "Wheels" << "Power\t" << "Type\t" << "Doors\t" << "Transmission\t" << "Seats\t" << "Total.";
	cout << endl;
	cout << get_name() << '\t';
	cout << get_color() << '\t';
	cout << get_wheels() << '\t';
	cout << get_power() << '\t';
	cout << get_type() << '\t';
	cout << get_doors() << '\t';
	cout << get_transmission() << '\t';
	cout << get_seats() << '\t';
	cout << get_cars() << '\t';
}
//GETTERS AND SETTERS
void Car::set_doors(int doors)
{
	no_of_doors = doors;
}
int Car::get_doors()
{
	return no_of_doors;
}

void Car::set_transmission(string trans)
{
	transmission = trans;
}
string Car::get_transmission()
{
	return transmission;
}

void Car::set_seats(int seats)
{
	no_of_seats = seats;
}
int Car::get_seats()
{
	return no_of_seats;
}

void Car::set_cars(int cars)
{
	no_of_cars = cars;
}
int Car::get_cars()
{
	return no_of_cars;
}

//PART 4
int Truck::no_of_trucks = 1;
Truck::Truck(string name, string clr, int wheels, int pow, string type, double size, string cat, bool drive) : Vehicle(name, clr, wheels, pow, type)
{
	container_size = size;
	category = cat;
	four_wheel_drive = drive;
	no_of_trucks++;
}
Truck::Truck(const Truck& other)
		:container_size(other.container_size),category(other.category),four_wheel_drive(other.four_wheel_drive)
	{
		no_of_trucks=other.no_of_trucks;
	}
void Truck::check_type()
{
	if (this->get_wheels() == 4)
	{
		char carray[] = { 'T','r','u','c','k' };
		string cptr = carray;
		this->set_type(cptr);
	}
}
void Truck::display()
{
	cout << "Company\t" << "Color\t" << "Wheels" << "Power\t" << "Type\t" << "Size\t" << "Category\t" << "Fout Wheel Drive\t" << "Total.";
	cout << endl;
	cout << get_name() << '\t';
	cout << get_color() << '\t';
	cout << get_wheels() << '\t';
	cout << get_power() << '\t';
	cout << get_type() << '\t';
	cout << get_size() << '\t';
	cout << get_category() << '\t';
	cout << get_drive() << '\t';
}
//SETTERS AND GETTERS
void Truck::set_size(int size)
{
	container_size = size;
}
int Truck::get_size()
{
	return container_size;
}

void Truck::set_category(string ctg)
{
	category = ctg;
}
string Truck::get_category()
{
	return category;
}

void Truck::set_drive(string drive)
{
	if (drive == "yes" || drive == "y")
		four_wheel_drive = true;
	else if (drive == "No" || drive == "n")
		four_wheel_drive = false;
}
bool Truck::get_drive()
{
	return four_wheel_drive;
}

Bilal_Motors::Bilal_Motors()
{
	list_of_vehicles[20] = { NULL };
}
int main()
{
	char name[] = "suzuki";
	char color[] = "red";
	char type[] = "Car";

	cout << "_____________Welcome to Bila Motors_______________\n"
		<< "___________Choose any option from the following menu__________ \n"
		<< "                            S.Show Vehicle list(brief)                                                 \n"
		<< "                            A.Add new vehicle.                                                         \n"
		<< "                              B for bike.                                                              \n"
		<< "                              C for car.                                                               \n"
		<< "                              T for truck.                                                             \n"
		<< "                            E.Find vehicle by type.                                                    \n"
		<< "                            Q.Quit program.                                                            \n";
	char choice;
	cout << "Enter any of the options above." << endl;
	cin >> choice;
	while (choice != 'Q')
	{
		switch (choice) {
		case 'S':
			Bilal_Motors list();
			list;
		case 'A':
			cout << "B for Bike.\n"
				<< "C for car.\n";
		}
	}
}