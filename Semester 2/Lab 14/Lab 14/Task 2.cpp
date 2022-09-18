//#include<conio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, temp, pass = 0;
//	int a[10] = { 10,2,0,14,43,25,18,1,5,45 };
//	cout << "Input list ...\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << "\t";
//	}
//	cout << endl;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (a[j] < a[i]) \
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//		pass++;
//	}
//	cout << "Sorted Element List ...\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << "\t";
//	}
//	cout << "\nNumber of passes taken to sort the list:" << pass << endl;
//	_getch();
//	return 0;
//
//}



/*
#include<iostream>
#include<conio.h>
using namespace std;

void insert_sort(int *arr, int s);

int main(void)
{
	int n;

	cout << "\nEnter the size of array ";
	cin >> n;
	int *ar = new int[n];
	cout << "\nEnter the array of " << n << " elements ";
	for (int e = 0; e < n; e++)
	{
		cin >> ar[e];
	}
	insert_sort(ar, n);
	cout << "Sorted Array ";
	for (int e = 0; e < n; e++)
	{
		cout << "\n\n " << ar[e];
	}

	cin.ignore();
	cin.get();
	_getch();
}
void insert_sort(int *arr, int s)
{

	for (int j = 1; j < s; j++)
	{
		int check = arr[j];
		int i = j - 1;
		while (i >= 0 && arr[i] > check)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = check;
	}
}


*/



#include <iostream>
# include <fstream>
# include <cstring>
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
	string name1="f", sname2, pref11, pref12, pref13, pref14, pref15, pref16, pref17, pref111, pref121, pref131, pref141, pref151, pref161, pref171;
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

	cout << "The new array is ";
	for (int k = 0; k < SIZE; k++)
	{
		cout << agg[k] << " ";
	}

	for (int p = 0; p < SIZE; p++)
	{
		cout << "{ " << reg[p] << " " << name[p] << " " << sname[p] << " " << pref1[p] << " " << pref2[p] << " " << pref3[p] << " " << pref4[p] << " " << pref5[p] << " " << pref6[p] << " " << pref7[p] << " }" << "  ";

	}
	int count = 0;
	cout << endl << "Electrical" << endl;

	for (int i = 0; i < 51; i++)
	{

		if (pref1[i] == "Electrical" and count != 8)
		{
			cout << reg[i] << " " << name[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			count++;
		}
	}

	cout << endl << endl << " MECHANICAL" << endl;
	count = 0;
	for (int i = 0; i < 51; i++)
	{
		if (pref1[i] == "Mechanical" && count != 8 and pref1[i] != "1")
		{
			cout << reg[i] << " " << name[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			count++;
		}
	}
	cout << endl << "Chemical\n";
	count = 0;

	for (int i = 0; i < 51; i++)
	{

		if (pref1[i] == "Chemical" or pref2[i] == "Chemical"  and count <= 5 and pref1[i] != "1" and pref2[i] != "1")
		{
			cout << reg[i] << " " << name[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			count++;
		}
	}
	cout << endl << "Civil\n";
	count = 0;
	for (int i = 0; i < 51; i++)
	{
		if (pref1[i] == "Civil" && count != 7 and pref1[i] != "1")
		{
			cout << reg[i] << " " << name[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			count++;
		}
	}
	cout << endl << "Biomedical\n";
	count = 0;

	for (int i = 0; i < 51; i++)
	{

		if (pref1[i] == "Biomedical" and count != 7 and pref1[i] != "1")
		{
			cout << reg[i] << " ";
			cout << name[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			count++;
		}
	}
	cout << endl << "Automotive\n";
	count = 0;
	for (int i = 0; i < 51; i++)
	{
		if ((pref1[i] == "Automotive" or pref2[i] == "Automotive" or pref3[i] == "Automotive" or pref4[i] == "Automotive" or pref5[i] == "Automotive" or pref6[i] == "Automotive") and (pref1[i] != "1" and  pref2[i] != "1" and pref3[i] != "1"  and pref4[i] != "1"  and  pref5[i] != "1" and pref6[i] != "1" and count <= 6))
		{
			cout << reg[i] << " " << name[i] << " " << agg[i] << endl;
			pref1[i] = "1";
			pref2[i] = "1";
			pref3[i] = "1";
			pref4[i] = "1";
			pref5[i] = "1";
			pref6[i] = "1";
			count++;
		}
	}
	cout << endl << "Envoirmental\n";
	count = 0;

	for (int i = 0; i < 51; i++)
	{

		if ( (pref1[i] == "Envoirmental" or pref2[i] == "Envoirmental" or pref3[i] == "Envoirmental" or pref3[i] == "Envoirmental" or pref4[i] == "Envoirmental" or pref5[i] == "Envoirmental" or pref7[i] == "Envoirmental") and (pref1[i] != "1" and pref7[i] != "1" and pref2[i] != "1" and pref3[i] != "1" and pref6[i] != "1" and pref4[i] != "1" and pref5[i] != "1" and count != 6) )
		{
			cout << reg[i] << " " << name[i] << " " << agg[i] << endl;
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





