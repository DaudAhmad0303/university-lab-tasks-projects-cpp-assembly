#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char asc;
	for (int n = 0; n <= 127; n++)
	{
		asc = n;
		cout << asc << " ";
		if (n % 16 == 0);
		{
			cout << "\n";
		}

	}
_getch();
	   	  
}