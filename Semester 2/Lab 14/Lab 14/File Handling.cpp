//#include<iostream>
//#include<conio.h>
//#include<fstream>
//#include<iostream>
//using namespace std;
//int main()
//{
//	fstream file;
//	file.open("EnteredData.txt",ios::in);
//	if (!file)
//	{
//		cout << "Error in opening file!!!" << endl;
//		return 0;
//	}
//	const char ch = "";
//	cout << "File content: ";
//	while (ch==";")
//	{
//		file >> ch;
//		cout << ch;
//	}
//	file.close();
//
//	_getch();
//	return 0;
//}




#include <iostream>
# include <fstream>
# include <cstring>
#include<string>
#include<conio.h>

using namespace std;
int SIZE = 101;
void swapPositions(double agg[], string name[], string sname[], int reg[], string pref1[], string pref2[], string pref3[], string pref4[], string pref5[], string pref6[], string pref7[], int x, int y);
int findMin(double agg[], int startingPos, int total);
int main()
{
	string name[101];
	string sname[101];
	string pref1[101], pref2[101], pref3[101], pref4[101], pref5[101], pref6[101], pref7[101];
	int reg[101];
	double agg[101];
	int i = 0;
	ifstream read;
	read.open("pf.txt");
	if (!read)
	{
		cout << "file not opened";
	}
	string name1, sname2, pref11, pref12, pref13, pref14, pref15, pref16, pref17, pref111, pref121, pref131, pref141, pref151, pref161, pref171;
	double reg1, mat, doublee, agg1;
	while (read >> reg1 >> name1 >> sname2 >> mat >> doublee >> agg1 >> pref11 >> pref111 >> pref12 >> pref121 >> pref13 >> pref131 >> pref14 >> pref141 >> pref15 >> pref151 >> pref16 >> pref161 >> pref17 >> pref171)
	{
		reg[i] = reg1;
		name[i] = name1;
		sname[i] = sname2;
		agg[i] = agg1;
		pref1[i] = pref11;
		pref2[i] = pref12;
		pref3[i] = pref13;
		pref4[i] = pref14;
		pref5[i] = pref15;
		pref6[i] = pref16;
		pref7[i] = pref17;
		cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << " " << pref1[i] << " " << pref111 << " " << pref2[i] << " " << pref3[i] << endl;
		i++;
	}
	read.close();
	for (int i = 0; i < 101; i++)
	{
		cout << agg[i] << " ";


	}
	for (int startingPos = 0; startingPos < SIZE; startingPos++)
	{

		int smallestValIndx = findMin(agg, startingPos, SIZE);
		swapPositions(agg, name, sname, reg, pref1, pref2, pref3, pref4, pref5, pref6, pref7, smallestValIndx, startingPos);

	}

	cout << "\nThe new array is ";
	for (int k = 0; k < SIZE; k++)
	{
		cout << agg[k] << " ";
	}

	for (int p = 0; p < SIZE; p++)
	{
		cout << "{ " << reg[p] << " " << name[p] << " " << sname[p] << " " << pref1[p] << " " << pref2[p] << " " << pref3[p] << " " << pref4[p] << " " << pref5[p] << " " << pref6[p] << " " << pref7[p] << " }" << endl;

	}
	int count = 0;
	cout << endl << "Electrical" << endl;

	for (int i = 0; i < 51; i++)
	{

		if ((pref1[i] == "Electrical" or pref2[i] == "Electrical" or pref3[i] == "Electrical" or pref4[i] == "Electrical" or pref5[i] == "Electrical" or pref6[i] == "Electrical" or pref7[i] == "Electrical") and (pref1[i] != "1" and pref7[i] != "1" and pref2[i] != "1" and pref3[i] != "1" and pref6[i] != "1" and pref4[i] != "1" and pref5[i] != "1" and count != 8))
		{
			cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			pref7[i] = "1";
			count++;

		}
	}

	cout << endl << endl << " MECHANICAL" << endl;
	count = 0;
	for (int i = 0; i < 51; i++)
	{
		if ((pref1[i] == "Mechanical" or pref2[i] == "Mechanical" or pref3[i] == "Mechanical" or pref4[i] == "Mechanical" or pref5[i] == "Mechanical" or pref6[i] == "Mechanical" or pref7[i] == "Mechanical") and (pref1[i] != "1" and pref7[i] != "1" and pref2[i] != "1" and pref3[i] != "1" and pref6[i] != "1" and pref4[i] != "1" and pref5[i] != "1" and count != 8))
		{
			cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			pref7[i] = "1";
			count++;

		}
	}
	cout << endl << "Chemical\n";
	count = 0;

	for (int i = 0; i < 51; i++)
	{

		if ((pref1[i] == "Chemical" or pref2[i] == "Chemical" or pref3[i] == "Chemical" or pref4[i] == "Chemical" or pref5[i] == "Chemical" or pref6[i] == "Chemical" or pref7[i] == "Chemical") and (pref1[i] != "1" and pref7[i] != "1" and pref2[i] != "1" and pref3[i] != "1" and pref6[i] != "1" and pref4[i] != "1" and pref5[i] != "1" and count != 8))
		{
			cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			pref7[i] = "1";
			count++;

		}
	}
	cout << endl << "Civil\n";
	count = 0;
	for (int i = 0; i < 51; i++)
	{
		if ((pref1[i] == "Civil" or pref2[i] == "Civil" or pref3[i] == "Civil" or pref4[i] == "Civil" or pref5[i] == "Civil" or pref6[i] == "Civil" or pref7[i] == "Civil") and (pref1[i] != "1" and pref7[i] != "1" and pref2[i] != "1" and pref3[i] != "1" and pref6[i] != "1" and pref4[i] != "1" and pref5[i] != "1" and count != 8))
		{
			cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			pref7[i] = "1";
			count++;

		}
	}
	cout << endl << "Biomedical\n";
	count = 0;

	for (int i = 0; i < 51; i++)
	{

		if ((pref1[i] == "Biomedical" or pref2[i] == "Biomedical" or pref3[i] == "Biomedical" or pref4[i] == "Biomedical" or pref5[i] == "Biomedical" or pref6[i] == "Biomedical" or pref7[i] == "Biomedical") and (pref1[i] != "1" and  pref2[i] != "1" and pref3[i] != "1"  and pref4[i] != "1"  and  pref5[i] != "1" and pref6[i] != "1" and pref7[i] != "1" and count <= 7))
		{
			cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			pref7[i] = "1";
			count++;
		}
	}
	cout << endl << "Automotive\n";
	count = 0;
	for (int i = 0; i < 51; i++)
	{
		if ((pref1[i] == "Automotive" or pref2[i] == "Automotive" or pref3[i] == "Automotive" or pref4[i] == "Automotive" or pref5[i] == "Automotive" or pref6[i] == "Automotive" or pref7[i] == "Automotive") and (pref1[i] != "1" and  pref2[i] != "1" and pref3[i] != "1"  and pref4[i] != "1"  and  pref5[i] != "1" and pref6[i] != "1" and pref7[i] != "1" and count <= 7))
		{
			cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			pref7[i] = "1";
			count++;
		}
	}
	cout << endl << "Envoirmental\n";
	count = 0;

	for (int i = 0; i < 51; i++)
	{

		if ((pref1[i] == "Envoirmental" or pref2[i] == "Envoirmental" or pref3[i] == "Envoirmental" or pref6[i] == "Envoirmental" or pref4[i] == "Envoirmental" or pref5[i] == "Envoirmental" or pref7[i] == "Envoirmental") and (pref1[i] != "1" and pref7[i] != "1" and pref2[i] != "1" and pref3[i] != "1" and pref6[i] != "1" and pref4[i] != "1" and pref5[i] != "1" and count != 7))
		{
			cout << reg[i] << " " << name[i] << " " << sname[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			pref7[i] = "1";
			count++;
		}
	}
	_getch();









}
void swapPositions(double agg[], string name[], string sname[], int reg[], string pref1[], string pref2[], string pref3[], string pref4[], string pref5[], string pref6[], string pref7[], int x, int y)
{
	double temp = agg[x];
	agg[x] = agg[y];
	agg[y] = temp;

	string tempo = name[x];
	name[x] = name[y];
	name[y] = tempo;

	string potato = sname[x];
	sname[x] = sname[y];
	sname[y] = potato;

	int tempoo = reg[x];
	reg[x] = reg[y];
	reg[y] = tempoo;

	string hulk = pref1[x];
	pref1[x] = pref1[y];
	pref1[y] = hulk;

	string bulk = pref2[x];
	pref2[x] = pref2[y];
	pref2[y] = bulk;

	string vulk = pref3[x];
	pref3[x] = pref3[y];
	pref3[y] = vulk;

	string culk = pref4[x];
	pref4[x] = pref4[y];
	pref4[y] = culk;

	string dulk = pref5[x];
	pref5[x] = pref5[y];
	pref5[y] = dulk;

	string ulk = pref6[x];
	pref6[x] = pref6[y];
	pref6[y] = ulk;

	string iulk = pref7[x];
	pref7[x] = pref7[y];
	pref7[y] = iulk;
}
int findMin(double agg[], int startingPos, int total)
{
	int minIndx = startingPos;
	for (int j = startingPos + 1; j < total; j++)
		if (agg[j] > agg[minIndx])
			minIndx = j;
	return minIndx; // not part of the for loop
}






