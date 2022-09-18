
///********** Task1 for Bank and Employee Association relationship Implementation ******///

//
//#include<conio.h>
//#include<iostream>
//#include<string>
//#include<functional>
//#include<vector>
//using namespace std;
//class Employee;
//class Bank
//{
//private:
//	string b_name;
//	vector<reference_wrapper<Employee>>e_employee;
//public:
//	Bank(const string& name)
//		:b_name(name)
//	{
//	}
//	void addEmployee(Employee& employee);
//	string & getName() { return b_name; }
//	friend ostream& operator<<(ostream& out,const Bank &bank);
//};
//class Employee
//{
//private:
//	string e_name;
//public:
//	Employee(const string& name)
//		:e_name(name)
//	{
//	}
//	friend ostream& operator<<(ostream& out, const Employee& employee);
//};
//void Bank::addEmployee(Employee& employee)
//{
//	e_employee.push_back(employee);
//}
//ostream& operator<<(ostream& out, const Bank &bank)
//{
//	if (bank.e_employee.empty())
//	{
//		out << bank.b_name << " has no Employee right Now..!\n";
//		return out;
//	}
//	out << bank.b_name << " has Employee : ";
//	for (const auto &bank : bank.e_employee)
//		out << bank.get() << " ";
//	return out;
//}
//ostream& operator<<(ostream& out, const Employee& employee)
//{
//	out << employee.e_name;
//	return out;
//}
//int main()
//{
//	Employee emp1("Aqib");
//	Employee emp2("Zain");
//	Bank hbl("HBL");
//	Bank allied("Allied_Bank");
//
//	hbl.addEmployee(emp1);
//	hbl.addEmployee(emp2);
//
//	cout << allied;
//	cout << hbl;
//	_getch();
//	return 0;
//}



///********** Relation of Association Example Program Discussed in Lecture **********///


//#include<iostream>
//#include<conio.h>
//#include<cstdint>
//#include<functional>
//#include<vector>
//using namespace std;
//class Patient;
//class Doctor
//{
//private:
//	string m_name;
//	vector<reference_wrapper<const Patient>>m_patient;
//public:
//	Doctor(const string& name)
//		:m_name(name)
//	{
//	}
//	void addPatient(Patient& patient);
//	friend ostream& operator<<(ostream& out, const Doctor &doctor);
//	const string& getName() const { return m_name; }
//};
//class Patient
//{
//	string m_name;
//	vector<reference_wrapper<const Doctor>>m_doctor;
//	void adddoctor(const Doctor& doctor)
//	{
//		m_doctor.push_back(doctor);
//	}
//public:
//	Patient(const string& name)
//		:m_name(name)
//	{
//	}
//	friend ostream& operator<<(ostream& out, const Patient &patient);
//	const string& getName() const { return m_name; }
//	friend void Doctor::addPatient(Patient& patient);
//};
//void Doctor::addPatient(Patient& patient)
//{
//	m_patient.push_back(patient);
//
//	patient.adddoctor(*this);
//}
////std::ostream & operator<<(std::ostream & out, const Patient & patient);
////{
////	if (patient.m_doctor.empty())
////	{
////		out << patient.getName() << " has no Doctor right Now..!";
////		return out;
////	}
////	out << patient.m_name << " is seeing doctors: ";
////	for (const auto& doctor : patient.m_doctor)
////		out << doctor.get().getName() << " ";
////	return out;
////}
//std::ostream & operator<<(std::ostream & out, const Doctor & doctor)
//{
//	if(doctor.m_patient.empty())
//	{
//		out << doctor.m_name << " has no Patient right Now..!";
//		return out;
//	}
//	out << doctor.m_name << " is seeing Patient: ";
//	for (const auto& patient : doctor.m_patient)
//		out << patient.get().getName() << " ";
//	return out;
//}
//std::ostream & operator<<(std::ostream & out, const Patient & patient)
//{
//	// TODO: insert return statement here
//	if (patient.m_doctor.empty())
//	{
//		out << patient.getName() << " has no Doctor right Now..!";
//		return out;
//	}
//	out << patient.m_name << " is seeing doctors: ";
//	for (const auto& doctor : patient.m_doctor)
//		out << doctor.get().getName() << " ";
//	return out;
//}
//int main()
//{
//	Patient dave{ "Dave" };
//	Patient frank{ "Frank" };
//	Patient betsy{ "Betsy" };
//
//	Doctor james{ "James" };
//	Doctor scott{ "Scott" };
//
//	james.addPatient(dave);
//
//	scott.addPatient(dave);
//	scott.addPatient(betsy);
//
//	cout << james << "\n";
//	cout << scott << "\n";
//	cout << dave << "\n";
//	cout << frank << "\n";
//	cout << betsy << "\n";
//
//	_getch();
//	return 0;
//}