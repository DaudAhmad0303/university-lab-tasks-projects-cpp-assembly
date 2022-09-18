//#include<iostream>
//#include<conio.h>
//#include<iomanip>
//#include<string>
//using namespace std;
//class Book
//{
//protected:
//	int ID;
//	string Name;
//	string Author;
//public:
//	Book()
//		:ID(0), Name("ABC"), Author("Unknown")
//	{
//	}
//	//Setters
//	void setID(int i)
//	{
//		ID = i;
//	}
//	void setName(string n)
//	{
//		Name = n;
//	}
//	void setAuthor(string a)
//	{
//		Author = a;
//	}
//	//Getters
//	int getID() { return ID; }
//	string getName() { return Name; }
//	string getAuthor() { return Author; }
//
//};
//class Novel:public Book
//{
//protected:
//	string Publisher;
//	int price;
//	string Published_date;
//	int total_copies;
//public:
//	Novel()
//		:Publisher("Unknown"), price(0), Published_date("00-00-0"), total_copies(0)
//	{
//	}
//	//setters
//	void setPublisher(string p)
//	{
//		Publisher = p;
//	}
//	void setPrice(int p)
//	{
//		price = p;
//	}
//	void setPublishedDate(string d)
//	{
//		Published_date = d;
//	}
//	void setTotalCopies(int c)
//	{
//		total_copies = c;
//	}
//	//Getters 
//	string getPublisher() { return Publisher; }
//	int getPrice() { return price; }
//	string getPublishedDate() { return Published_date; }
//	int getTotalCopies() { return total_copies; }
//	int getTotalCost()
//	{
//		int tc = 0;
//		tc = price * total_copies;
//		return tc;
//	}
//	void showInfo()
//	{
//		cout << "Book ID: " << getID() << endl;
//		cout << "Title :" << getName() << endl;
//		cout << "Author: " << getAuthor() << endl;
//		cout << "Price: Rs. " << getPrice() << endl;
//		cout << "Publisher Name: " << getPublisher() << endl;
//		cout << "Published Date: " << getPublishedDate() << endl;
//		cout << "Total Copies of Order: " << getTotalCopies() << endl;
//		cout << "Total cost for all the Novels is: " << getTotalCost() << endl;
//	}
//};
/////Ida Tarbell, The History of Standard Oil 
/////Upton Sinclair, The Jungle
/////Irma Rombauer, Joy of Cooking
//int main()
//{
//	Novel nov[3];
//	nov[0].setID(1000);
//	nov[0].setName("The History of Standard Oil");
//	nov[0].setAuthor("Ida Tarbell");
//	nov[0].setPrice(3000);
//	nov[0].setPublisher("John Smith");
//	nov[0].setPublishedDate("1904");
//	nov[0].setTotalCopies(5);
//	nov[1].setID(1011);
//	nov[1].setName("The Jungle");
//	nov[1].setAuthor("Upton Sinclair");
//	nov[1].setPrice(5000);
//	nov[1].setPublisher("Henry Adams");
//	nov[1].setPublishedDate("1906");
//	nov[1].setTotalCopies(3);
//	nov[2].setID(1012);
//	nov[2].setName("Joy of Cooking");
//	nov[2].setAuthor("Irma Rombauer");
//	nov[2].setPrice(4000);
//	nov[2].setPublisher("Margaret Mitchell");
//	nov[2].setPublishedDate("1931");
//	nov[2].setTotalCopies(7);
//	cout << "Each Novel's Information is here Below...\n";
//	cout << "\t\tNovel 1 Information\n";
//	nov[0].showInfo();
//	cout << "\t\tNovel 2 Information\n";
//	nov[1].showInfo();
//	cout << "\t\tNovel 3 Information\n";
//	nov[2].showInfo();
//	int a = nov[0].getPrice();
//	int b = nov[1].getPrice();
//	int c = nov[2].getPrice();
//	int max = a;
//	int min = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//
//	if (min > b)
//		min = b;
//	if (min > c)
//		min = c;
//
//	cout << "The Maximum Cost of the Novel is: " << max << endl;
//	cout << "The Minimum Cost of the Novel is: " << min << endl;
//	int total = nov[0].getTotalCost() + nov[1].getTotalCost() + nov[2].getTotalCost();
//	cout << "The total Cost of all the Novels is: " << total << endl;
//	_getch();
//	return 0;
//}
