#include<iostream>
#include"Header.h"
using namespace std;

//*************************************************************************************************************************
//    PatientAccount Class Defintions
//************************************************************************************************************************

PatientAccount::PatientAccount()
{
	room_rent = 5000;
	surgery_expence = 0;
	pharmacy_expence = 0;
	receipt = room_rent + surgery_expence + pharmacy_expence;
}

//Deinition for Room_rent

void PatientAccount::set_Room_rent(int a = 1)// 'a' will be the value of no. of Days
{
	room_rent = a * 5000;
}
int PatientAccount::get_Room_rent()
{
	return room_rent;
}

//Definition for SergeryExpenses

void PatientAccount::set_Surgery_expense(int b)// 'b' will be the value of SurgeryExpense
{
	surgery_expence = b;
}
int PatientAccount::get_Surgery_expense()
{
	return surgery_expence;
}

//Definition for pharmacyExpenses

void PatientAccount::set_Pharmacy_expense(int c)// 'c' will be the vaue of pharmacy Bill Value
{
	pharmacy_expence = c;
}
int PatientAccount::get_Pharmacy_expense()
{
	return pharmacy_expence;
}

//Definition for Receipt

void PatientAccount::set_Receipt()
{
	receipt = get_Room_rent() + get_Surgery_expense() + get_Pharmacy_expense();
}
int PatientAccount::get_Receipt()
{
	return receipt;
}

//Defintion for total Payment Displaying Function
void PatientAccount::total_Payment()
{
	//For making Screen Output Awesome
	cout << "  \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";		//first row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//first row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//first row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//first row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//first row
	cout << "\n  \xb2\t\t\t\t\t\t\t\t  \xb2";								//second row
	cout << "\n\t\t\t\tYour Bill\n";
	cout << "\t\t\t\t=========\t\t\t\t\n";
	cout << "\tAmount for Surgery Expenses: \t\tRs. " << get_Surgery_expense() << endl;
	cout << "\tAmount for Pharmacy Expenses:\t\tRs. " << get_Pharmacy_expense() << endl;
	cout << "\tAmount for Air Conditioned Room Rent:\tRs. " << get_Room_rent() << endl << endl << endl;
	cout << "\t----------------------------------------------------\n";
	cout << "\tTotal Amount to Pay: \t\t\tRs. " << get_Receipt() << endl;
	cout << "\n  \xb2\t\t\t\t\t\t\t\t  \xb2\n";								//second last row
	cout << "  \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//last row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//last row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//last row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";			//last row
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n";		//last row

}

//*************************************************************************************************************************
//    Pharmacy class Defintions
//************************************************************************************************************************


//constructor
Pharmacy::Pharmacy()
{
	Panadol = 15;
	Disprin = 20;
	Disprol = 30;
	Bruffin = 60;
	Paracetamol = 75;
	Erythrocin = 200;
	Buscopan = 60;
	Ceclor = 150;
	Entox_P = 250;
	Epazol = 390;
	Total_Pharmacy_expence;

}
//setter getter defination for Panadol.
void Pharmacy::set_Panadol(int a = 0)
//a will be the amount of tablets
{
	Panadol = a * Panadol;
}
int Pharmacy::get_Panadol() {
	return Panadol;
}

//setter getter defination for Disprin.
void Pharmacy::set_Disprin(int b = 0)
//b will be the amount of tablets
{
	Disprin = b * Disprin;
}
int Pharmacy::get_Disprin() {
	return Disprin;
}

//setter getter defination for Disprol.
void Pharmacy::set_Disprol(int c = 0)
//c will be the amount of tablets
{
	Disprol = c * Disprol;
}
int Pharmacy::get_Disprol() {
	return Disprol;
}

//setter getter defination for Bruffin.
void Pharmacy::set_Bruffin(int d = 0)
//d will be the amount of tablets
{
	Bruffin = d * Bruffin;
}
int Pharmacy::get_Bruffin() {
	return Bruffin;
}

//setter getter defination for Paracetamol.
void Pharmacy::set_Paracetamol(int e = 0)
//e will be the amount of tablets

{
	Paracetamol = e * Paracetamol;
}
int Pharmacy::get_Paracetamol() {
	return Paracetamol;
}
//setter getter defination for Erythrocin.
void Pharmacy::set_Erythrocin(int f = 0)
//f will be the amount of tablets

{
	Erythrocin = f * Erythrocin;
}
int Pharmacy::get_Erythrocin() {
	return Erythrocin;
}
//setter getter defination for Buscopan.
void Pharmacy::set_Buscopan(int g = 0)
//g will be the amount of tablets
{
	Buscopan = g * Buscopan;
}
int Pharmacy::get_Buscopan() {
	return Buscopan;
}
//setter getter defination for Ceclor.
void Pharmacy::set_Ceclor(int h = 0)
//h will be the amount of tablets
{
	Ceclor = h * Ceclor;
}
int Pharmacy::get_Ceclor() {
	return Ceclor;
}
//setter getter defination for Entox_P.
void Pharmacy::set_Entox_P(int i = 0)
//i will be the amount of tablets
{
	Entox_P = i * Entox_P;
}
int Pharmacy::get_Entox_P() {
	return  Entox_P;
}
//setter getter defination for Epazol.
void Pharmacy::set_Epazol(int j = 0)
//j will be the amount of tablets
{
	Epazol = j * Epazol;
}
int Pharmacy::get_Epazol() {
	return Epazol;
}
//setter and getter to calculate the total_medical_expence.
//'k' will be the total amount of all selected medicines
void Pharmacy::set_total_Pharmacy_expence(int k) {
	Total_Pharmacy_expence = k;
}
int Pharmacy::get_total_Pharmacy_expence() {
	return Total_Pharmacy_expence;
}
//function defination to deal with user-choice.
//'l' is containing user choice and 'ch' is the Quantity of medicine
int Pharmacy::user_Pharmacy_choice(int l,int ch) {
	switch (l) {
	case 1:
		set_Panadol(ch);
		return get_Panadol();
		break;
	case 2:
		set_Disprin(ch);
		return get_Disprin();
		break;
	case 3:
		set_Disprol(ch);
		return get_Disprol();
		break;
	case 4:
		set_Bruffin(ch);
		return get_Bruffin();
		break;
	case 5:
		set_Paracetamol(ch);
		return get_Paracetamol();
		break;
	case 6:
		set_Erythrocin(ch);
		return get_Erythrocin();
		break;
	case 7:
		set_Buscopan(ch);
		return get_Buscopan();
		break;
	case 8:
		set_Ceclor(ch);
		return get_Ceclor();
		break;
	case 9:
		set_Entox_P(ch);
		return get_Entox_P();
		break;
	case 10:
		set_Epazol(ch);
		return get_Epazol();
		break;
	default:
		return 0;
		cout << " wrong input!";
	}
}

//*************************************************************************************************************************
//    Surgery class Defintions
//************************************************************************************************************************

//Constructor

Surgery::Surgery() {
	Appendix_Surgery = 12000;
	heart_Surgery = 100000;
	LowBackPain_Surgery = 80000;
	legs_Surgery = 35000;
	Kidney_Surgery = 40000;
	Total_surgery_expence = 0;
}

//setter getter defination for Appendix_surgery.
void Surgery::set_Appendeix_Surgery(int a) {
	Appendix_Surgery = a;
}
int Surgery::get_Appendix_Surgery() {
	return Appendix_Surgery;
}

//setter getter defination for heart_surgery.
void Surgery::set_heart_Surgery(int b) {
	heart_Surgery = b;
}
int Surgery::get_heart_Surgery() {
	return heart_Surgery;
}

//setter gutter defination for LowBackPain_Surgery.
void Surgery::set_LowBackPain_Surgery(int c) {
	LowBackPain_Surgery = c;
}
int Surgery::get_LowBackSurgery() {
	return LowBackPain_Surgery;
}

//setter gutter defination for legs_surgery.
void Surgery::set_legs_Surgery(int d) {
	legs_Surgery = d;
}
int Surgery::get_legs_Surgery() {
	return legs_Surgery;
}

//setter getter defination for kidnay_surgery.
void Surgery::set_kidney_Surgery(int e) {
	Kidney_Surgery = e;
}
int Surgery::get_kidney_Surgery() {
	return Kidney_Surgery;
}

//to calculate the total surgery expence.		
//setter
void Surgery::set_total_Surgery_expence(int f) {
	Total_surgery_expence = f;
}
//getter
int Surgery::get_total_Surgery_expence() {
	return Total_surgery_expence;
}

//functio defination to deal with user-choice.
//It is also performing the role of setAll fun. for Medicines
int Surgery::user_surgery_choice(int h) {
	switch (h) {
	case 1:
		return get_Appendix_Surgery();
		break;
	case 2:
		return get_heart_Surgery();
		break;
	case 3:
		return get_LowBackSurgery();
		break;
	case 4:
		return get_legs_Surgery();
		break;
	case 5:
		return get_kidney_Surgery();
		break;
	default:
		cout<< " you have entered invalid input!!\n";
		return 0;
		break;
	}
}