#include<iostream>
#include<conio.h>
using namespace std;

void Tower_of_Hanoi(int n, char source, char temp, char destin)
{
	if (n == 1)
	{
		cout << "Disk 1 moved from rod " << source << " to rod " << destin << endl << endl;
		return;
	}
	Tower_of_Hanoi(n - 1, source, destin, temp);
	cout << "Disk " << n << " moved from rod " << source << " to rod " << destin << endl << endl;
	Tower_of_Hanoi(n - 1, temp, source, destin);
}

int main()
{
	int n;
	cout << "Enter No. of disk: ";
	cin >> n;
	cout << "\n\t\tWorking\n";
	Tower_of_Hanoi(n, 'A', 'B', 'C');
	_getch();
	return 0;
}

