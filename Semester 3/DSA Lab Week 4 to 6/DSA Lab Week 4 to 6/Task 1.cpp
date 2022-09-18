#include <iostream>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;

//	Node Class
class Node {
public:
	char data;
	Node* next;
};

//	Stack Class
class Stack {
protected:
	Node* head;
public:
	Stack();
	void display();
	char top();
	void pop();
	~Stack();
	void push(char x);
};

//	Dispaly Stack
void Stack::display() {
	Node* ptr;
	if (head == NULL) {
		cout << "Empty Stack" << endl;
	}
	else {
		ptr = head;
		while (ptr != NULL) {
			cout << ptr->data << endl;
			ptr = ptr->next;
		}
	}
}

//	Precedance
int Precedance(char p) {
	if (p == '+' || p == '-') {
		return 1;
	}
	else if (p == '^') {
		return 3;
	}
	else if (p == '*' || p == '/') {
		return 2;
	}
	else {
		return -1;
	}
}

//	Constructor
Stack::Stack() {
	head = NULL;
}

//	Destructor
Stack::~Stack() {
	Node* nextNode = head;
	if (head == NULL) {
		cout << "Empty Stack" << endl;
	}
	else {
		while (head != NULL) {

			nextNode = head->next;
			delete head;
			head = nextNode;
		}

	}
}

//	Push
void Stack::push(char c) {
	Node* newNode = new Node();
	newNode->data = c;
	newNode->next = head;
	head = newNode;
}

//	Pop 
void Stack::pop() {
	int x = head->data;
	Node* p = head;
	head = head->next;
	delete p;

}

//	Top
char Stack::top() {

	return head->data;
}

//	Infix to Postfix
void Infix_to_postfix(string st) {

	string postfix;
	Stack s;
	int l = st.length();
	s.push('5');


	for (int i = 0; i < l; i++) {
		if ((st[i] >= 'a' && st[i] <= 'z') ||
			(st[i] >= 'A' && st[i] <= 'Z')) {
			postfix = postfix + st[i];
		}

		else if (st[i] == '(') {
			s.push('(');
		}

		else if (st[i] == ')') {
			while (s.top() != '5' && s.top() != '(') {
				char c = s.top();
				s.pop();
				postfix = postfix + c;
			}
			if (s.top() == '(') {
				char c = s.top();
				s.pop();
			}
		}

		else {
			while (s.top() != '5' && Precedance(st[i]) <= Precedance(s.top())) {
				char c = s.top();
				s.pop();
				postfix = postfix + c;
			}
			s.push(st[i]);
		}
	}
	while (s.top() != '5') {
		char c = s.top();
		s.pop();
		postfix = postfix + c;
	}
	std::cout << postfix << endl;
}

int main() {
	string infix = "a+b*(c^d-e)^(f+g*h)-i";
	Infix_to_postfix(infix);
	_getch();
	return 0;
}