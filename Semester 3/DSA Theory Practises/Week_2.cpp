//Code of Single Linked List
//
//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class Node {
//public:
//	double data;	// data
//	Node* next;		// pointer to next
//};
//class List {
//private:
//	Node* head;
//public:
//	List(void) { head = NULL; }	// constructor
//	~List(void);				// destructor
//	bool IsEmpty()
//	{ 
//		cout << "List is ";
//		if (head == NULL)
//		{
//			cout << "Empty!\n";
//		}
//		else
//			cout << "Not Empty!\n";
//		return head == NULL;
//	}
//	Node* InsertNode(int index, double x);
//	int FindNode(double x);
//	int DeleteNode(double x);
//	void DisplayList(void);
//};
//Node* List::InsertNode(int index, double x) {
//	if (index < 0) return NULL;
//	int currIndex = 1;
//	Node* currNode = head;
//	while (currNode && index > currIndex) {
//		currNode = currNode->next;
//		currIndex++;
//	}
//	if (index > 0 && currNode == NULL)
//		return NULL;
//	Node* newNode = new	Node();
//	newNode->data = x;
//	if (index == 0) {
//		newNode->next = head;
//		head = newNode;
//	}
//	else {
//		newNode->next =	currNode->next;
//		currNode->next =newNode;
//	}
//	return newNode;
//}
//int List::FindNode(double x)
//{
//	Node* currNode = head;
//	int currIndex = 1;
//	while (currNode && currNode->data != x)
//	{
//		currNode = currNode->next;
//		currIndex++;
//	}
//	if (currNode)
//		return currIndex;
//	return 0;
//}
//int List::DeleteNode(double x)
//{
//	Node* prevNode = NULL;
//	Node* currNode = head;
//	int currIndex = 1;
//	while (currNode && currNode->data != x) {
//		prevNode = currNode;
//		currNode = currNode->next;
//		currIndex++;
//	}
//	if (currNode) {
//		if (prevNode)
//		{
//			prevNode->next = currNode->next;
//			delete currNode;
//		}
//		else
//		{
//			head = currNode->next;
//			delete currNode;
//		}
//		return currIndex;
//		}
//		return 0;
//	}
//void List::DisplayList()
//{
//	int num = 0;
//	Node* currNode = head;
//	while (currNode != NULL)
//	{
//		cout << currNode->data << endl;
//		currNode = currNode->next;
//		num++;
//	}
//	cout << "Number of nodes in the list: " << num << endl;
//}
//List::~List(void)
//{
//	Node* currNode = head, * nextNode = NULL;
//	while (currNode != NULL)
//	{
//		nextNode = currNode->next;
//		// destroy the current node
//		delete currNode;
//		currNode = nextNode;
//	}
//}
//int main(void)
//{
//	List list;
//	list.IsEmpty();
//	list.InsertNode(0, 7.0); // successful
//	list.InsertNode(1, 5.0); // successful
//	list.InsertNode(-1, 5.0); // unsuccessful
//	list.InsertNode(0, 6.0); // successful
//	list.InsertNode(0, 6.0); // successful
//	list.InsertNode(8, 4.0); // unsuccessful
//	// print all the elements
//	list.DisplayList();
//	list.IsEmpty();
//	if (list.FindNode(5.0) > 0) cout << "5.0 found" << endl;
//	else
//		cout << "5.0 not found" << endl;
//	if (list.FindNode(4.5) > 0) cout << "4.5 found" << endl;
//	else
//		cout << "4.5 not found" << endl;
//	list.DeleteNode(5.0);
//	list.DisplayList();
//	return 0;
//}


//*****************************************************************************************************
//										 My Written Code 
//*****************************************************************************************************

//template<class T>
//
//class Node
//{
//public:
//	double data;
//	Node* next;
//
//};
//class List
//{
//private:
//	Node* head;
//public:
//	List()
//	{
//		head = NULL;
//	}
//	~List();
//	bool IsEmpty();
//	Node* InsertNode(int index, double x);
//	int FindNode(double x);
//	int DeleteNode(double x);
//	void DisplayList(void);
//};
//bool List::IsEmpty()
//{
//	cout << "List is ";
//	if (head == NULL)
//		cout << "Empty!\n";
//	else
//		cout << "Not Empty!\n";
//	return head == NULL;
//}
//Node* List::InsertNode(int index, double x)
//{
//	if (index < 0)
//		return NULL;
//	int currIndex = 1;
//	Node* currNode = head;
//	while (currNode && index > currIndex)
//	{
//		currNode = currNode->next;
//		currIndex++;
//	}
//	if (index > 0 && currNode == NULL)
//		return NULL;
//	Node* newNode = new Node();
//	newNode->data = x;
//	newNode->next = NULL;
//	if (index == 0)
//	{
//		newNode->next = head;
//		head = newNode;
//	}
//	else
//	{
//		newNode->next = currNode->next;
//		currNode->next = newNode;
//	}
//	return newNode;
//}
//int List::FindNode(double x)
//{
//	cout << endl;
//	int currIndex = 1;
//	Node* currNode = head;
//	while (currNode && currNode->data != x)
//	{
//		currNode = currNode->next;
//		currIndex++;
//	}
//	if (currNode)
//	{
//		cout << x << " found at " << currIndex << endl;
//		return currIndex;
//	}
//	cout << x << " not found\n";
//	return 0;
//}
//int List::DeleteNode(double x)
//{
//	Node* preNode = NULL;
//	Node* currNode = head;
//	int currIndex = 1;
//	while (currIndex && currNode->data != x)
//	{
//		preNode = currNode;
//		currNode = currNode->next;
//		currIndex++;
//	}
//	if (currNode)
//	{
//		if (preNode)
//		{
//			preNode->next = currNode->next;
//			delete currNode;
//		}
//		else
//		{
//			head = currNode->next;
//			delete currNode;
//		}
//	}
//	return currIndex;
//
//}
//void List::DisplayList(void)
//{
//	int num = 0;
//	Node* currNode = head;
//	while (currNode)
//	{
//		cout << currNode->data << endl;
//		currNode = currNode->next;
//		num++;
//	}
//	cout << "Total number of items in List are : " << num << endl;
//}
//List::~List()
//{
//	Node* currNode = head;
//	Node* nextNode = NULL;
//	while (currNode)
//	{
//		nextNode = currNode->next;
//		delete currNode;
//		currNode = nextNode;
//	}
//}
//int main()
//{
//	List list;
//	list.IsEmpty();
//	list.InsertNode(0, 3.2);
//	list.InsertNode(0, 3.1);
//	list.InsertNode(0, 3.4);
//	list.InsertNode(4, 3.5);
//	list.InsertNode(-2, 3.6);
//	list.DisplayList();
//	list.IsEmpty();
//	list.FindNode(3.2);
//	list.FindNode(4.7);
//	int x = _getch();
//	return 0;
//}
