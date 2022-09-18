//Static Jagged Array

/*
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int* ptr;
	//Step 1
	int row1[3] = { 3,7,9 };
	int row2[9] = { 1,2,3,4,5,6,7,8,8 };
	int row3[2] = { 5,3 };
	int row4[5] = { 2,7,4,1,9 };
	int row5[8] = { 9,7,8,2,9,3,1,0 };
	//Step 2
	int size[5] = { 3,9,2,5,8 };
	//Step 3
	int* jagged[5] = { row1, row2, row3, row4, row5 };
	//For traversal
	cout << "Here're the Static Jagged Array Results: \n";
	for (int i = 0; i < 5; i++)
	{//Rows
		ptr = jagged[i];
		//Colunm
		for (int j = 0; j < size[k]; j++)
		{
			cout << *ptr << " ";
			ptr++;
		}
		cout << endl;
		k++;
		jagged[i]++;
	}


	_getch();
	return 0;
}
*/

//Dynamic Jaggaed Array
//
//
//#include<conio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int k = 0, number = 1;
//	int* ptr;
//	
//	//Step 1
//	int* jagged[2];
//	//Step 3
//
//	jagged[0] = new int[3];
//	jagged[1] = new int[5];
//	
//	//Step 2
//	int size[2] = { 3,5 };
//	//For traversal
//	cout << "Here're the Dynamic Jagged Array Results: \n";
//	for (int i = 0; i < 2; i++)
//	{//Rows
//		ptr = jagged[i];
//		//Colunm
//		for (int j = 0; j < size[k]; j++)
//		{
//			*ptr = number++;
//			ptr++;
//		}
//		cout << "\n";
//		k++;
//	}
//
//	k = 0;
//	//For Displaying Array
//	for (int i = 0; i < 2; i++)
//	{//Rows 
//		ptr = jagged[i];
//		//Colunm
//		for (int j = 0; j < size[k]; j++)
//		{
//			cout << *ptr << " ";
//			ptr++;
//		}
//		cout << "\n";
//		k++;
//		//jagged[i]++;	//This Bloody **** jagged[i]++; wasted my 5 hours :(
//	}
//
//	_getch();
// 	return 0;
//}
