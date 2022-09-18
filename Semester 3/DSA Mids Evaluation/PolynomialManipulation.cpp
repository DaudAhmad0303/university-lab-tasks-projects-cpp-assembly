//class polynomial
//{
//	term* first_term;
//	polynomial() {}
//	polynomial() { first_term = NULL; }
//	polynomial add(polynomial p);
//	void display();
//	void sort();
//};
//void polynomial::sort()
//{
//	int j;
//	term* check_ptr;
//	int count = getCount();
//	term** arr = new term * [count];
//	check_ptr = first_term;
//	for (j = 0; j < count; j++)
//	{
//		arr[j] = check_ptr;
//		check_ptr = check_ptr->next_term;
//	}
//	for (int i = 0; i < count - 1; i++)
//	{
//		for (j = i + 1; j < count; ++j)
//		{
//			if (arr[i]->expo == arr[j]->expo)
//			{
//				arr[i]->coeff += arr[j]->coeff;
//				delete arr[j];
//				arr[j] = arr[count - 1];
//				--count;
//			}
//		}
//	}
//	for (j = 1; j < count; j++)
//	{
//		check_ptr = arr[j];
//		int i = j - 1;
//		while (i >= 0 && arr[i]->expo < check_ptr->expo)
//		{
//			arr[i + 1] = arr[i];
//			i--;
//		}
//		arr[i + 1] = check_ptr;
//	}
//	first_term = arr[0];
//	for (j = 0; j < count - 1; j++)
//	{
//		arr[j]->next_term = arr[j + 1];
//		arr[j]->next_term = NULL;
//		delete[] arr;
//	}
//}
////Sample Display function
//void polynomial:: display()
//{
//	term* current_term = first_term;
//	while (current_term != NULL)
//	{
//		if (current_term->coeff >= 0)
//		{
//			cout << " + " << current_term->coeff << "x^" << current_term->expo;
//			current_term = current_term->next_term;
//		}
//		else
//		{
//			cout << " " << current_term->coeff << "x^" << current_term->expo;
//			current_term = current_term->next_term;
//		}
//	}
//
//}
//
////Driver Program
//void main()
//{
//	//using add function 
//	//p1.add(p2);
//	//p3=p1.add(p2);
//}
//
//
//
//

//
//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//// Node structure containing power and coefficient of
//// variable
//class Node
//{
//public:
//	int coeff;
//	int pow;
//	Node* next;
//	Node()
//	{
//		next = NULL;
//	}
//};
//
//// Function to create new node
//Node* create_node(int x, int y, Node* poly1)
//{
//	Node* r, * z;
//	r = new Node;
//	z = poly1;
//	if (z == NULL)
//	{
//		r = new Node;
//		r->coeff = x;
//		r->pow = y;
//		r->next = NULL;
//		poly1 = r;
//		return poly1;
//	}
//	else
//	{
//		r->coeff = x;
//		r->pow = y;
//		Node* rptr = poly1;
//		while (rptr->next != NULL)
//		{
//			rptr = rptr->next;
//		}
//		rptr->next = r;
//		return poly1;
//	}
//}
//
//// Function Adding two polynomial numbers
//void polyadd(Node* poly1, Node* poly2, Node* poly)
//{
//	while (poly1->next && poly2->next) {
//		// If power of 1st polynomial is greater then 2nd,
//		// then store 1st as it is and move its pointer
//		if (poly1->pow > poly2->pow) {
//			poly->pow = poly1->pow;
//			poly->coeff = poly1->coeff;
//			poly1 = poly1->next;
//		}
//
//		// If power of 2nd polynomial is greater then 1st,
//		// then store 2nd as it is and move its pointer
//		else if (poly1->pow < poly2->pow) {
//			poly->pow = poly2->pow;
//			poly->coeff = poly2->coeff;
//			poly2 = poly2->next;
//		}
//
//		// If power of both polynomial numbers is same then
//		// add their coefficients
//		else {
//			poly->pow = poly1->pow;
//			poly->coeff = poly1->coeff + poly2->coeff;
//			poly1 = poly1->next;
//			poly2 = poly2->next;
//		}
//
//		// Dynamically create new node
//		poly->next = new Node;
//		poly = poly->next;
//		poly->next = NULL;
//	}
//	while (poly1->next || poly2->next) {
//		if (poly1->next) {
//			poly->pow = poly1->pow;
//			poly->coeff = poly1->coeff;
//			poly1 = poly1->next;
//		}
//		if (poly2->next) {
//			poly->pow = poly2->pow;
//			poly->coeff = poly2->coeff;
//			poly2 = poly2->next;
//		}
//		poly->next = new Node;
//		poly = poly->next;
//		poly->next = NULL;
//	}
//}
//
//// Display Linked list
//void show(Node* node)
//{
//	Node* rptr = node;
//	while (rptr->next != NULL)
//	{
//		cout << rptr->coeff << "x^" << rptr->pow;
//		rptr = rptr->next;
//		if (rptr->coeff >= 0)
//		{
//			if (rptr->next != NULL)
//			{
//				if (rptr->coeff <= -1)
//					cout << " -";
//				else
//					cout << " +";
//			}
//		}
//	}
//	if (rptr->coeff <= -1)
//		cout <<" "<< rptr->coeff << "x^" << rptr->pow;
//	else
//		cout << " +" << rptr->coeff << "x^" << rptr->pow;
//}
//
//// Driver code
//int main()
//{
//	Node* poly1 = NULL, * poly2 = NULL, * poly = NULL;
//
//	// Create first list of 5x^2 + 4x^1 + 2x^0
//	poly1 = create_node(5, 2, poly1);
//	poly1 = create_node(4, 1, poly1);
//	poly1 = create_node(2, 0, poly1);
//
//	// Create second list of -5x^1 - 5x^0
//	poly2 = create_node(-5, 1, poly2);
//	poly2 = create_node(5, 0, poly2);
//
//	cout << "1st Number: ";
//	show(poly1);
//
//	cout << "\n2nd Number: ";
//	show(poly2);
//
//	poly = new Node;
//
//	// Function add two polynomial numbers
//	polyadd(poly1, poly2, poly);
//
//	// Display resultant List
//	cout << "\nAdded polynomial: ";
//	show(poly);
//	int a = _getch();
//	return 0;
//}