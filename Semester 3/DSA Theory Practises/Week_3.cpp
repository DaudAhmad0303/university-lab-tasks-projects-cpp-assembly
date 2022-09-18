//////Doubly Linked List
//
////#include<iostream>
////#include<conio.h>
////using namespace std;
////class DNode
////{
////public:
////	double data;
////	DNode* next;
////	DNode* prev;
////};
////class DList
////{
////private:
////	DNode* head;
////	DNode* tail;
////
////public:
////	//Constructor
////	DList(void)
////	{
////		head = new DNode();
////		tail = new DNode();
////		head->next = tail;
////		tail->prev = head;
////	}
////	~DList();
////	bool IsEmpty();
////	//DNode* InsertNode(int index, double x);
////	DNode* InsertAtStart(double x);
////	DNode* InsertAtEnd(double x);
////	int FindNode(double x);
////	int DeleteNode(double x);
////	int DeleteAtStart(double x);
////	int DeleteAtEnd(double x);
////	void displaylist();
////	void displaylistInReverse();
////};
////DList::~DList()
////{
////	DNode* currNode = head, * nextNode = NULL;
////	while (currNode != NULL)
////	{
////		nextNode = currNode->next;
////		// destroy the current node
////		delete currNode;
////		currNode = nextNode;
////	}
////
////}
////bool DList::IsEmpty()
////{
////	return (head->next == tail);
////}
////DNode* DList::InsertNode(int index, double x) //Insert in the middle
////{
////	if (index < 0)  return NULL;
////	int currIndex = 1;
////	DNode* currNode = head;
////	while (currNode && currIndex > index)
////	{
////		currNode = currNode->next;
////		currIndex++;
////	}
////	if (index > 0 && currNode == NULL) return NULL;
////	DNode* newNode = new DNode();
////	newNode->data = x;
////	newNode->next = currNode->next;
////	newNode->prev = currNode;
////	currNode->next->prev = newNode;
////	currNode->next = newNode;
////	return newNode;
////
////}
////DNode* DList::InsertAtStart(double x) //Insert at the start
////{
////	DNode* newNode = new DNode();
////	newNode->data = x;
////	newNode->next = head->next;
////	newNode->prev = head;
////	head->next = newNode;
////	head->next->prev = newNode;
////	return newNode;
////}
////DNode* DList::InsertAtEnd(double x) //Insert At the end
////{
////	DNode* newNode = new DNode();
////	newNode->data = x;
////	newNode->next = tail;
////	newNode->prev = tail->prev;
////	tail->prev->next = newNode;
////	tail->prev = newNode;
////	return newNode;
////}
////
////int DList::FindNode(double x)
////{
////	int currIndex = 1;
////	DNode* currNode = head;
////	while (currNode && currNode->data != x)
////	{
////		currNode = currNode->next;
////		currIndex++;
////	}
////	if (currNode)	return currIndex;
////	return 0;
////}
////int DList::DeleteNode(double x) //Delete in the Middle
////{
////	DNode* cur = head;
////	while (cur->next != tail && cur->data != x)
////	{
////		cur = cur->next;
////	}
////	if (cur->data == x)
////	{
////		DNode* target = cur;
////		target->next->prev = target->prev;
////		target->prev->next = target->next;
////		delete target;
////		cur = NULL;
////		return 1;
////	}
////	else
////		return 0;
////
////}
////int DList::DeleteAtStart(double x)
////{
////	DNode* tempNode = head->next;
////	head->next = tempNode->next;
////	tempNode->next->prev = head;
////	delete tempNode;
////	return 1;
////}
////int DList::DeleteAtEnd(double x)
////{
////	DNode* tempNode = tail->prev;
////	tail->prev = tempNode->prev;
////	tempNode->prev->next = tail;
////	delete tempNode;
////	return 1;
////}
////
////void DList::displaylist()
////{
////	int num = 0;
////	DNode* currNode = head;
////	while (currNode != NULL) {
////		cout << currNode->data << endl;
////		currNode = currNode->next;
////		num++;
////	}
////	cout << "Number of nodes in the list: " << num << endl;
////
////}
////void DList::displaylistInReverse()
////{
////	int num = 0;
////	DNode* currNode = tail;
////	while (currNode != NULL)
////	{
////		cout << currNode->data << endl;
////		currNode = currNode->prev;
////		num++;
////	}
////
////}
////
////
////int main()
////{
////
////
////	DList list;
////	list.IsEmpty();
////	list.InsertNode(0, 7.0); // successful
////	list.InsertNode(1, 5.0); // successful
////	list.displaylist();
////	list.InsertNode(-1, 5.0); // unsuccessful
////	list.InsertNode(0, 6.0); // successful
////	list.InsertNode(0, 6.0); // successful
////	list.InsertNode(8, 4.0); // unsuccessful
////	list.InsertAtEnd(3.0);
////	list.InsertAtStart(7.0);
////	// print all the elements
////	list.displaylist();
////	cout << list.IsEmpty();
////	if (list.FindNode(5.0) > 0) cout << "5.0 found" << endl;
////	else
////		cout << "5.0 not found" << endl;
////	if (list.FindNode(4.5) > 0) cout << "4.5 found" << endl;
////	else
////		cout << "4.5 not found" << endl;
////	list.DeleteNode(5.0);
////	list.displaylist();
////
////	int q = _getch();
////	return 0;
////}
//
//
//
#include<iostream>
#include<conio.h>
using namespace std;
//int recursiveFactorial(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//		return n * recursiveFactorial(n - 1);
//}
int main()
{
	//cout << "The Factorial of 5 is " << recursiveFactorial(5) << endl;
	/*int val;
	cin >> val;
	try
	{
		if (val < 0)
		{
			throw val;
		}
		else
		{
			cout << "In try " << endl;
		}
	}
	catch (int x)
	{
		cout << "In catch " << x << endl;
	}
	*/
	/*int a = 20, b = 10;
	a = b++ + a++;
	cout << a;
	b = ++b + ++a;
	cout << b;
	*///system("clrsc");
	//system("PAUSE");
	return 0;
}