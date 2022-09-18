//#include<iostream>
//#include<conio.h>
//#include<string>
//#include<string.h>
//using namespace std;
//int main()
//{
//	string *student;
//	int *marks;
//	student = new string[8];
//	marks = new int[8];
//	int average = 0;
//	int max = 0;
//	//Data Entered
//	{
//		student[0] = "Ali";
//		student[1] = "Usman";
//		student[2] = "Daud";
//		student[3] = "Zain";
//		student[4] = "Shan";
//		student[5] = "Ahmad";
//		student[6] = "Arif";
//		student[7] = "Asad";
//		marks[0] = 50;
//		marks[1] = 80;
//		marks[2] = 58;
//		marks[3] = 89;
//		marks[4] = 95;
//		marks[5] = 56;
//		marks[6] = 40;
//		marks[7] = 80;
//	}
//	std::cout << "Student Name\tMarks\n";
//	for (int i = 0; i <= 7; i++)
//	{
//		std::cout << student[i] << "\t" << marks[i] << endl;
//		average += marks[i];
//	}
//	average /= 8;
//	for (int i = 0; i <= 6; i++)
//	{
//		max = marks[i];
//		if (marks[i] < marks[i + 1])
//		{
//			max = marks[i + 1];
//		}
//		else if (marks[i] > marks[i + 1])
//		{
//			max = marks[i];
//		}
//	}
//	std::cout << "\nAverage Marks of the Students is: " << average;
//	std::cout << "\nMaximum Gained Marks are: " << max;
//	delete[]student;
//	delete[]marks;
//	_getch();
//	return 0;
//}