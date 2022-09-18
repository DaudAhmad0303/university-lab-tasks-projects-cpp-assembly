#include<conio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<vector>
using namespace std;
class Books
{
private:
	string title;
	string author;
public:
	Books(string tit = "abc", string aut = "unknown")
	{
		title = tit;
		author = aut;
	}
	friend ostream& operator<<(ostream& out, const Books book);


};
class Library
{
private:
	string l_name;
	vector<reference_wrapper<Books>>l_books;
public:
	Library(string libName = "ABC")
		:l_name(libName)
	{
	}
	void addBook(string tit,string aut)
	{
		Books book(tit, aut);
		l_books.push_back(book);
	}
	Books getBook()
	{
		return l_books;
	}
	friend ostream& operator<<(ostream& out, Library &lib);

};
std::ostream& operator<<(std::ostream& out, Library &lib)
{
	if (lib.l_books.empty())
	{
		out << lib.l_name << " has no Book right Now..!\n";
		return out;
	}
	out << lib.l_name << " has Following Books : ";
	out<<lib.getBook();
	//for (const auto &bank : lib.l_books)
	return out;
}
ostream& operator<<(ostream& out, const Books book)
{
	out << book.title << "\t\tBy:\t" << book.author;
	return out;
}
int main()
{
	Library myLib("Daudz Library");
	myLib.addBook( {"How to program in c++" }, {"Dietal and Dietal"});
	cout<<
	_getch();
	return 0;
}

