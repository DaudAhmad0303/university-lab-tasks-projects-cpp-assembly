////*********************************************
////				Task 						  *
////  Using dynamic memory allocation,          *
////  enter marks (float) of subjects of a      *
////  student and calculate GPA of that student.*
////*********************************************
//#include<iostream>
//#include<conio.h>
//#include<iomanip>
//using namespace std;
//class Student {
//private:
//	float *sb;
//	short SIZE;
//public:
//	Student(int n = 4) {
//		SIZE = n;
//		sb = new float[SIZE];
//		for (size_t i = 0; i < SIZE; i++)
//		{
//			sb[i] = 0;
//		}
//	}
//	Student(float s1, float s2, float s3, float s4) {
//		setSbj(1, s1);
//		setSbj(2, s2); 
//		setSbj(3, s3);
//		setSbj(4, s4);
//	} 
//	void setSbj(float s1, short sbNo) {
//		sb[sbNo] = s1;
//	}
//	short getSbj(short i) {
//		return sb[i];
//	} 
//	float GPA() {
//		float sum = 0; 
//		for (int i = 0; i < 5; i++)
//		{
//			sum = sum + sb[i];
//		}
//		float percentage = (sum / 400) * 100;
//		cout << endl << percentage << endl << "PPPPP" << " " << sum;
//		if (percentage >= 90) {
//			return 4.0; 
//		}
//		else if (percentage < 90 && percentage >= 85) {
//			return 3.3;
//		}
//		else if (percentage < 85 && percentage >= 75) {
//			return 3.0;
//		}
//		else if (percentage < 75 && percentage >= 60) {
//			return 2.7;
//		}
//		else if (percentage < 60 && percentage >= 50) {
//			return 2.3;
//		}
//		else if (percentage < 50 && percentage >= 40) {
//			return 2.0;
//		}
//		else {
//			return 1.7;
//		}
//	}
//	void print() {
//		cout << "Your Calculated GPA is : " << GPA() << endl;
//	}
//	~Student() {
//		delete[]sb;
//	}
//};
//
//int main() {
//	Student aqib;
//	Student daud[4];
//	Student zain;
//	zain.setSbj(1, 20);
//	zain.setSbj(2, 50);
//	zain.setSbj(3, 70);
//	zain.setSbj(4, 90);
//	cout << "Zain's Result:";
//	cout << zain.getSbj(1) << " ";
//	cout << zain.getSbj(2) << " ";
//	cout << zain.getSbj(3) << " ";
//	cout << zain.getSbj(4) << " ";
//	daud[0].setSbj(1, 90);
//	/*daud.setSbj1(30);
//	daud.setSbj1(88);
//	daud.setSbj1(80);
//	*/aqib.print();
//	daud[0].print();
//	_getch();
//	return 0;
//}