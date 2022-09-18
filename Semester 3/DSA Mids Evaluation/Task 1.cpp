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
//	int countNodes_rec(Node *);
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
//	Node* currNode = head;
//	while (currNode != NULL)
//	{
//		cout << currNode->data << endl;
//		currNode = currNode->next;
//	}
//	cout << "Number of nodes in the list: " << countNodes_rec(head) << endl;
//}
//int List::countNodes_rec(Node* p)
//{
//	Node* temp = p;
//	int count = 0;
//	if (temp == NULL)
//	{
//		return count;
//	}
//	if (temp != NULL)
//	{
//		count++;
//		return (count + countNodes_rec(temp->next));
//	}
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
//	_getch();
//	return 0;
//}
//
