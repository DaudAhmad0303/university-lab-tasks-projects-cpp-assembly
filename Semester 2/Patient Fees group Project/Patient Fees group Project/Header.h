#pragma once
#include <iostream>

class PatientAccount {
private:
	int room_rent;
	int surgery_expence;
	int pharmacy_expence;
	int receipt;
public:
	//Constructor to initialize the values of member variables
	PatientAccount();

	//setter getter for room rent per day.
	void set_Room_rent(int a);//Receive days
	int get_Room_rent();

	//setter getter for Surgery expence received from Surgery Class
	void set_Surgery_expense(int b);
	int get_Surgery_expense();

	//setter getter for Pharmacy expense recieved from Pharmacy Class
	void set_Pharmacy_expense(int c);
	int get_Pharmacy_expense();

	//setter and getter function to make final receipt of patient
	void set_Receipt();
	int get_Receipt();

	//Funtion for Total Payment Displaying
	void total_Payment();
};

class Surgery {
private:
	int Appendix_Surgery;
	int heart_Surgery;
	int LowBackPain_Surgery;
	int legs_Surgery;
	int Kidney_Surgery;
	int Total_surgery_expence;
public:
	//Constructor for initializing values.
	Surgery();

	//setter and getter for Appendix_Surgery
	void set_Appendeix_Surgery(int a);
	int get_Appendix_Surgery();

	//setter and getter for heart_Surgery
	void set_heart_Surgery(int b);
	int get_heart_Surgery();

	//setter and getter for LowBackPain_Surgery.
	void set_LowBackPain_Surgery(int c);
	int get_LowBackSurgery();

	//setter and getter for legs_Surgery.
	void set_legs_Surgery(int d);
	int get_legs_Surgery();

	//setter and getter for kidney_Surgery.
	void set_kidney_Surgery(int e);
	int get_kidney_Surgery();

	//to calculate total surgery expence and return its value to Patientaccount Class.
	void set_total_Surgery_expence(int f); //setter
	int get_total_Surgery_expence(); //getter

	//for choice taking
	int user_surgery_choice(int a);

};

class Pharmacy {
private:
	int Panadol;
	int Disprin;
	int Disprol;
	int Bruffin;
	int Paracetamol;
	int Erythrocin;
	int Buscopan;
	int Ceclor;
	int Entox_P;
	int Epazol;
	int Total_Pharmacy_expence;
public:
	//Constructor for initializing values
	Pharmacy();

	//setter and getter for Panadol.
	void set_Panadol(int a);
	int get_Panadol();

	//setter and getter for Disprin.	
	void set_Disprin(int b);
	int get_Disprin();

	//setter and getter for Disprol.
	void set_Disprol(int c);
	int get_Disprol();

	//setter and getter for Bruffin.
	void set_Bruffin(int d);
	int get_Bruffin();

	//setter and getter for Paracetamol.
	void set_Paracetamol(int e);
	int get_Paracetamol();

	//setter and getter for Erythrocin.
	void set_Erythrocin(int f);
	int get_Erythrocin();

	//setter and getter for Buscopan.
	void set_Buscopan(int g);
	int get_Buscopan();

	//setter and getter for Ceclor.
	void set_Ceclor(int h);
	int get_Ceclor();

	//setter and getter for Entox_P.
	void set_Entox_P(int i);
	int get_Entox_P();

	//setter and getter for Epazol.
	void set_Epazol(int j);
	int get_Epazol();
	//setter and getter to calculate total value of medicines and give back to Accountpatient class.
	void set_total_Pharmacy_expence(int x); //setter
	int  get_total_Pharmacy_expence(); //getter
	//Class decelaration for user_Pharmacy_choice
	int user_Pharmacy_choice(int y,int ch);
};