#include"Header.h"
#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;
void Cafeteria_Menu();
void Pharmacy_Menu();
void Test_Lab_Menu();
void Working_Staff_Menu();
void Login_Menu();
void Units_Menu();
void Department_Menu();
void title();
void Units_Menu1();
void Exit_fun();
int main()
{
	// Creating all objects here....
	Patient patient_obj;
	Pharmacy pharmacy_obj;
	Test_Lab testlab_obj;
	Cafeteria cafeteria_obj;
	Ward ward_obj;
	Department department_obj;
	Manager manager_obj;
	title();
	system("PAUSE");
Login_Panel: // reference for goto statement
	system("CLS");
	Login_Menu();// displays login menu
	int ch;
	cout << "Enter your choice: ";
	cin >> ch;
	system("CLS");
	if(ch == 1)
	{
		int pin,subchoice; bool con = true;
		int choice1 = 0, id, ag, ye, ra;
		string nam, gen, da, sp, phon;
		cout << "Enter admin pin" << endl;
		cin >> pin;
		system("CLS");
		if (pin == 12345) {// to check admin pin 
			cout << "You are logged in to the admin panel\n";
			while (con)
			{
				redirect1:
				Units_Menu1();
				cout << "Choose any option from above Menu: ";
				cin >> choice1;
				//Take the user choice of menu
				switch (choice1)
				{
				case 1:
					manager_obj.show_manager_info();
					//For moving to other menu's
					system("pause");
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> subchoice;
					if (subchoice == 1) {
						goto redirect1;
					}
					else if (subchoice == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}
					break;
				case 2:
					//Entering the Doctor's Details here
					cout << "Enter Name: "; cin >> nam; //ask name of the Doctor
					cout << "Enter id: "; cin >> id;// ask id of the Doctor
					cout << "Enter age: "; cin >> ag; // ask age of Doctor
					cout << "Enter gender: "; cin >> gen;// ask gender of the Doctor
					cout << "Enter phone number: "; cin >> phon;// ask phone number of Doctor
					cout << "Enter Experience in Years: "; cin >> ye;//ask the experience of doctor
					cout << "Enter Date of Joining: "; cin >> da; //ask the date of joining of doctor
					cout << "Enter Specialization: "; cin >> sp; //Specialization feild of doctor
					cout << "Enter Rank: "; cin >> ra; //rank of doctor in Hospital amoung doctors
					//setting values in the Doctor's class in Manager class
					manager_obj.setname(nam);
					manager_obj.setid(id);
					manager_obj.setphone_number(phon);
					manager_obj.setage(ag);
					manager_obj.setgender(gen);
					manager_obj.set_experience_year(ye);
					manager_obj.set_date_of_join(da);
					manager_obj.set_specialization(sp);
					manager_obj.set_rank(ra);
					//For moving to other menu's
					system("pause");
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> subchoice;
					if (subchoice == 1) {
						goto redirect1;
					}
					else if (subchoice == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}
					break;
				case 3:
					//Checking the Staff's Details
					manager_obj.show_workingstaff_details();
					//For moving to other menu's
					system("pause");
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> subchoice;
					if (subchoice == 1) {
						goto redirect1;
					}
					else if (subchoice == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}
					break;
				case 4:
					//Check the Salary of All Staff
					manager_obj.show_salaryofAll();
					//For moving to other menu's
					system("pause");
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> subchoice;
					if (subchoice == 1) {
						goto redirect1;
					}
					else if (subchoice == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}
					break;
				default:
					cout << "Wrong input...!\n";
					break;
				}

			}
			
			
		}
		while(pin!=12345)
		{ // to ask again login panel choice.
			cout << "\nWrong PIN entered...!";
			cout << "Enter PIN again: ";
			cin >> pin;
		}
		cout << "----------------------------------------------";
		cout << "\nYou are logged in to the admin panel...\n";
		goto redirect1;

	}
	system("CLS");
	if (ch == 2) { // to log into the user panel.
	redirect: // reference for goto statement
		Units_Menu();// displays unit menu
		int ch1; bool pick = true;
		cout << "Enter Unit number: ";
		cin >> ch1;
		system("CLS");
		while (pick) {//STARTING OF THE PATIENT CLASS...........................................................
			if (ch1 > 0 && ch1 < 7) {
				if (ch1 == 1) {

					string dat, tim, diea, prec, nam, gen, phon, birth;
					int room = 0, idid = 0, ag = 0, chph1 = 0;
					cout << "Enter Name: "; cin >> nam; //ask name of the patient
					cout << "Enter id: "; cin >> idid;// ask id of the patient
					cout << "Enter gender: "; cin >> gen;// ask gender of the patient
					cout << "Enter phone number: "; cin >> phon;// ask phone number of patient
					cout << "Enter birthday: "; cin >> birth;// ask birth of patient.
					cout << "Enter age: "; cin >> ag; // ask age of patient
					cout << "Enter date: "; cin >> dat;// ask date of patient
					cout << "Enter time: "; cin >> tim;// ask its time
					cout << "Enter diease: "; cin >> diea;// ask its disease
					cout << "Enter Precription: "; cin >> prec;// ask for some precription
					patient_obj.setname(nam); //giving variables to setter functions of the patient class..
					patient_obj.setid(idid);
					patient_obj.setgender(gen);
					patient_obj.setphone_number(phon);
					patient_obj.setbirth_date(birth);
					patient_obj.setage(ag);
					patient_obj.setday(dat);
					patient_obj.settime(tim);
					patient_obj.setdieases(diea);
					patient_obj.setprecription(prec);
					system("PAUSE");
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> chph1;
					if (chph1 == 1) {
						goto redirect;
					}
					else if (chph1 == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}

				}// STARTING OF THE PHARMACY CLASS................................................................

				else if (ch1 == 2) {

					bool pch1 = true;
					int pch2, quan, pch3, pch4, tch = 0;
					while (pch1) {
						Pharmacy_Menu();
						cout << "Select from the list above\n";
						cin >> pch2;
						cout << "Enter the quantity \n";
						cin >> quan;
						switch (pch2) {
						case 1:
							tch = tch + pharmacy_obj.get_Drip();
							pharmacy_obj.set_Drip(quan);
							break;
						case 2:
							tch = tch + pharmacy_obj.get_Injection();
							pharmacy_obj.set_Injection(quan);
							break;
						case 3:
							tch = tch + pharmacy_obj.get_Cotton();
							pharmacy_obj.set_Cotton(quan);
							break;
						case 4:
							tch = tch + pharmacy_obj.get_CottonPad();
							pharmacy_obj.set_CottonPad(quan);
							break;
						case 5:
							tch = tch + pharmacy_obj.get_Panadol();
							pharmacy_obj.set_Panadol(quan);
							break;
						case 6:
							tch = tch + pharmacy_obj.get_Disprin();
							pharmacy_obj.set_Disprin(quan);
							break;
						case 7:
							tch = tch + pharmacy_obj.get_Disprol();
							pharmacy_obj.set_Disprol(quan);
							break;
						case 8:
							tch = tch + pharmacy_obj.get_Bruffin();
							pharmacy_obj.set_Bruffin(quan);
							break;
						case 9:
							tch = tch + pharmacy_obj.get_Paracetamol();
							pharmacy_obj.set_Paracetamol(quan);
							break;
						case 10:
							tch = tch + pharmacy_obj.get_Syr_Gaviscon();
							pharmacy_obj.set_Syr_Gaviscon(quan);
							break;
						case 11:
							tch = tch + pharmacy_obj.get_Syr_Dophalac();
							pharmacy_obj.set_Syr_Dophalac(quan);
							break;
						case 12:
							tch = tch + pharmacy_obj.get_Syr_Brufen();
							pharmacy_obj.set_Syr_Brufen(quan);
							break;
						case 13:
							tch = tch + pharmacy_obj.get_Syr_Hydralac();
							pharmacy_obj.set_Syr_Hydralac(quan);
							break;
						case 14:
							tch = tch + pharmacy_obj.get_Syr_Safi();
							pharmacy_obj.set_Syr_Safi(quan);
							break;
						case 15:
							tch = tch + pharmacy_obj.get_Cr_Adapco();
							pharmacy_obj.set_Cr_Adapco(quan);
							break;
						case 16:
							tch = tch + pharmacy_obj.get_Cr_Betnovate();
							pharmacy_obj.set_Cr_Betnovate(quan);
							break;
						case 17:
							tch = tch + pharmacy_obj.get_Cr_Polifax();
							pharmacy_obj.set_Cr_Polifax(quan);
							break;
						case 18:
							tch = tch + pharmacy_obj.get_Cr_Bevason();
							pharmacy_obj.set_Cr_Bevason(quan);
							break;
						case 19:
							tch = tch + pharmacy_obj.get_Cr_Isotin();
							pharmacy_obj.set_Cr_Isotin(quan);
							break;
						default:
							cout << "Invalid Input\n";
							system("PAUSE");
						}
						system("CLS");
						cout << "Do you want to add more pharmacy items\n";
						cout << "1)Yes \t\t 2) No\n";
						cin >> pch3;
						system("CLS");
						if (pch3 == 1) {
							pch1 = true;
						}
						else if (pch3 == 2) {
							pch1 = false;
						}
					}
					std::cout << "Your total Bill is " << tch << endl << endl;
					std::system("PAUSE");
					std::system("CLS");
					std::cout << "Select any one option below\n";
					std::cout << "1) Unit Menu\n";
					std::cout << "2) Login Menu\n";
					std::cin >> pch4;
					std::system("CLS");
					if (pch4 == 1) {
						goto redirect;
					}
					else if (pch4 == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}
				}
				//STARTING OF THE TEST LAB CLASS..................................................................
				else if (ch1 == 3) {

					bool tch1 = true;
					int tch2, tch3, tch4;
					while (tch1) {
						Test_Lab_Menu();
						cout << "Select From the menu above...\n";
						cin >> tch2;
						system("CLS");
						switch (tch2) {
						case 1:
							cout << "Sugar test will cost you " << testlab_obj.Get_Sugar_test() << " rupees" << endl;
							break;
						case 2:
							cout << "Blood test will cost you " << testlab_obj.Get_Blood_Test() << " rupees" << endl;
							break;
						case 3:
							cout << "X-ray test will cost you " << testlab_obj.Get_X_ray() << " rupees" << endl;
							break;
						case 4:
							cout << "ultrasound will cost you " << testlab_obj.Get_Ultrasound() << " rupees" << endl;
							break;
						case 5:
							cout << "Corona test will cost you " << testlab_obj.Get_Corona_test() << "rupees" << endl;
							break;
						default:
							cout << "Invalid input";
						}
						system("PAUSE");
						system("CLS");
						cout << "Do you want to add more tests\n";
						cout << "1) Yes \t\t 2) No\n";
						cin >> tch3;
						system("CLS");
						if (tch3 == 1) {
							tch1 = true;
						}
						else if (tch3 == 2) {
							tch1 = false;
						}
					}
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> tch4;
					system("CLS");
					if (tch4 == 1) {
						goto redirect;
					}
					else if (tch4 == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}

				}
				//STARTING OF THE CAFETERIA CLASS..............................................................
				else if (ch1 == 4) {

					bool cch1 = true;
					int cch2, cch3, quan1, cch4, cach = 0;
					while (cch1) {
						Cafeteria_Menu();
						cout << "Select From the menu above...\n";
						cin >> cch2;
						cout << "Enter its quantity\n";
						cin >> quan1;
						system("CLS");
						switch (cch2) {
						case 1:
							cach = cach + cafeteria_obj.get_Tea();
							cafeteria_obj.set_Tea(quan1);
							break;
						case 2:
							cach = cach + cafeteria_obj.get_Lays();
							cafeteria_obj.set_Lays(quan1);
							break;
						case 3:
							cach = cach + cafeteria_obj.get_Water();
							cafeteria_obj.set_Water(quan1);
							break;
						case 4:
							cach = cach + cafeteria_obj.get_Water();
							cafeteria_obj.set_Coke(quan1);
							break;
						case 5:
							cach = cach + cafeteria_obj.get_Candy();
							cafeteria_obj.set_Candy(quan1);
							break;
						default:
							cout << "Invalid input\n";
							system("PAUSE");
							system("CLS");
						}
						cout << "Do you want to add more cafeteria items\n";
						cout << "1) Yes \t\t 2) No\n";
						cin >> cch3;
						system("CLS");
						if (cch3 == 1) {
							cch1 = true;
						}
						else if (cch3 == 2) {
							cch1 = false;
						}
					
					}
					cout << "Your Total bill is " << cach << endl << endl;
					system("PAUSE");
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> cch4;
					system("CLS");
					if (cch4 == 1) {
						goto redirect;
					}
					else if (cch4 == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}

				}
				//STARTING OF THE WARD CLASS IS HERE...........................................................
				else if (ch1 == 5) {

					int ward_i, no_beds=0, wch1;
					string ward_n;
					bool avail;
					cout << "Enter ward id:  "; cin >> ward_i;
					cout << "Enter ward Name:  "; cin >> ward_n;
					ward_obj.setNo_of_Beds(no_beds);
					ward_obj.setWard_ID(ward_i);
					ward_obj.setWard_name(ward_n);
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> wch1;
					system("CLS");
					if (wch1 == 1) {
						goto redirect;
					}
					else if (wch1 == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}
				}
				//STARTING OF THE DEPARTMENT CLASS IS HERE......................................................
				else if (ch1 == 6) {
					int dch1, dch2;
					Department_Menu();
					cout << "Which department is demanded by patient\n";
					cin >> dch1;
					system("CLS");

					switch (dch1) {
					case 1:
						cout << "Emergency fee is "<<
						department_obj.get_Emergency();
						break;
					case 2:
						cout << "Blood Pack fee is "<<
						department_obj.get_Bloodbank();
						break;
					case 3:
						cout << "Dialysis fee is "<<
						department_obj.get_DialysisCenter();
						break;
					case 4:
						cout << "Dilivery Charges are "<<
						department_obj.get_BirthCenter();
						break;
					default:
						cout << "Invalid Input\n";
					}
					cout << endl;
					system("pause");
					system("CLS");
					cout << "Select any one option below\n";
					cout << "1) Unit Menu\n";
					cout << "2) Login Menu\n";
					cin >> dch2;
					system("CLS");
					if (dch2 == 1) {
						goto redirect;
					}
					else if(dch2 == 2) {
						goto Login_Panel;
					}
					else
					{
						goto endit;
					}
				}

			}
			else {
				int ch2;
				cout << "Wrong input!!!\n";
				cout << "Want to select Unit again...?\n";
				cout << "1) Yes\t\t 2) No\n";
				cin >> ch2;
				system("CLS");
				if (ch2 == 1) {
					Units_Menu(); // displays unit menu
					cin >> ch1;
					system("CLS");
				}
				else {
					pick = false;
				}
			}
		}
	}
	if (ch == 3)
		Exit_fun();
		goto endit;
	endit:
	_getch();
	return 0;
}
//***********************************************************************************************
//             Menu for user interface functions are here
//***********************************************************************************************

void Cafeteria_Menu() // display menu for Cafeteria class
{
	cout << " Select the eatable you want to buy:" << endl;
	cout << "  1: Tea" << endl;
	cout << "  2: Lays" << endl;
	cout << "  3: Water" << endl;
	cout << "  4: Coke" << endl;
	cout << "  5: Candy" << endl;
}

void Pharmacy_Menu()
{
	cout << "\n\x10 Select the product you want to buy:" << endl;
	cout << "  1: Drip" << endl;
	cout << "  2: Injection" << endl;
	cout << "  3: Cotton" << endl;
	cout << "  4: CottonPad" << endl;
	cout << "  5: Panadol" << endl;
	cout << "  6: Disprin " << endl;
	cout << "  7: Disprol" << endl;
	cout << "  8: Bruffin" << endl;
	cout << "  9: Paracetamol" << endl;
	cout << "  10: Syr_Gaviscon" << endl;
	cout << "  11: Syr_Dophalac" << endl;
	cout << "  12: Syr_Brufen" << endl;
	cout << "  13: Syr_Hydralac" << endl;
	cout << "  14: Syr_Safi " << endl;
	cout << "  15: Cr_Adapco" << endl;
	cout << "  16: Cr_Betnovate" << endl;
	cout << "  17: Cr_Polifax" << endl;
	cout << "  18: Cr_Bevason " << endl;
	cout << "  19: Cr_Isotin" << endl;
}

void Test_Lab_Menu() {
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t_____________________________________\n";
	cout << "\t\t\t\t\t\t|SELECT THE TEST FROM THE MENU BELOW|" << endl;
	cout << "\t\t\t\t\t\t|\t1:) Sugar Test              |\n";
	cout << "\t\t\t\t\t\t|\t2:) Blood Test              |\n";
	cout << "\t\t\t\t\t\t|\t3:) X ray                   |\n";
	cout << "\t\t\t\t\t\t|\t4:) Ultrasound              |\n";
	cout << "\t\t\t\t\t\t|\t5:) Corona Test             |\n";
	cout << "\t\t\t\t\t\t|___________________________________|\n";
}

void Working_Staff_Menu() {
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t_____________________________________\n";
	cout << "\t\t\t\t\t\t|Select one Staff category          |" << endl;
	cout << "\t\t\t\t\t\t|\t1:) Nurses                  |\n";
	cout << "\t\t\t\t\t\t|\t2:) Paramedical Staff       |\n";
	cout << "\t\t\t\t\t\t|\t3:) Receptionist            |\n";
	cout << "\t\t\t\t\t\t|\t4:) Sweeper                 |\n";
	cout << "\t\t\t\t\t\t|___________________________________|\n";
}

void Login_Menu() {

	cout << "\n\n\n\n\n\n\n\t\t\t_____________________________________\n";
	cout << "\t\t\t|Please Login First		\n";
	cout << "\t\t\t|\t1) Admin				\n";
	cout << "\t\t\t|\t2) User				\n";
	cout << "\t\t\t|\t3) Exit from System				\n";
	cout << "\t\t\t|____________________________________\n";
}

void Units_Menu() {
	cout << "Select one Unit" << endl; //menu for no of department to be chosen.
	cout << "1) Patient\n";
	cout << "2) Pharmacy\n";
	cout << "3) Test Lab\n";
	cout << "4) Cafeteria\n";
	cout << "5) Ward\n";
	cout << "6) Departments\n";
}
void Units_Menu1() {
	cout << "\n1) View Manger Details " << endl;
	cout << "2) Enter Doctor Details " << endl;
	cout << "3) Check Staff Details " << endl;
	cout << "4) Check the Pay " << endl;
}
void Department_Menu() {
	cout << "1: Emergency\n";
	cout << "2: Blood bank\n";
	cout << "3: Dialysis center\n";
	cout << "4: Birth center\n";
}
void title()
{
	//For making Screen Output Awesome
	cout << "\n\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";		//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";						//first row
	cout << "\n\t\t\xb1\t\t\t\t\t\t\xb1";									//second row
	cout << "\n\t\t\xb1\tWelcome to Hospital Management System\t\xb1";		//Main Line
	cout << "\n\t\t\xb1\t\t\t\t\t\t\xb1";									//third row
	cout << "\t\t\t\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";	//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n";					//forth row

}
void Exit_fun()
{
	//For making Screen Output Awesome
	cout << "\n\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";		//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//first row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";						//first row
	cout << "\n\t\t\xb1\t\t\t\t\t\t\xb1";									//second row
	cout << "\n\t\t\xb1\t\tThanks for using HMS \t\t\xb1";		//Main Line
	cout << "\n\t\t\xb1\t\t\t\t\t\t\xb1";									//third row
	cout << "\t\t\t\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";	//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1";			//forth row
	cout << "\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n";					//forth row

}