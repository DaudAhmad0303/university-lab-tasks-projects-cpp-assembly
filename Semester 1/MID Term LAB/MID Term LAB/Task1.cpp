//Program to convert Time in Seconds
#include<iostream>
#include<conio.h>
using namespace std;
void hms_to_sec(int hours, int min, int second);
int h_to_sec(int hours);
int m_to_sec(int min);
int main()
{
	int hour = 0, minu = 0, sec = 0;
	cout<<"Program to convert Time in Seconds........ \n\n";
	cout << "Help : FORMAT : H M S\n";
	cout << "\nEnter HOURS ,MINUTES ,SECONDS : ";
	cin >> hour;
	cin >> minu;
	cin >> sec;
	hms_to_sec(hour, minu, sec);
	_getch();
	return 0;
}
void hms_to_sec(int hours,int min,int second)
{
	int a = h_to_sec(hours);
	int b = m_to_sec(min);
	cout <<"\n"<< a<<" : "<<b<<" : "<<second;
}
int h_to_sec(int hours)
{
	return hours * 60 * 60;
}
int m_to_sec(int min)
{
	return min * 60;
}
