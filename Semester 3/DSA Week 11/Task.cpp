#include<iostream>
#include<conio.h>
#include<stack>
#include<string>
using namespace std;
class Tnode
{
	char data;
public:

	Tnode* left;
	Tnode* right;
	Tnode(char data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
	void setdata(char data)
	{
		this->data = data;
	}
	char getdata()
	{
		return data;
	}
};
class StackNod
{
public:
	Tnode* treeN;
	StackNod* n;
	StackNod(Tnode* treeN)
	{
		this->treeN = treeN;
	}
};
class ExpressionTree
{
private:
	StackNod* top;
public:
	ExpressionTree()
	{
		top = NULL;
	}
	void clear()
	{
		top = NULL;
	}
	void push(Tnode* ptr)
	{
		if (top == NULL)
			top = new StackNod(ptr);
		else {
			StackNod* nptr = new StackNod(ptr);
			nptr->n = top;
			top = nptr;
		}
	}

	Tnode* pop() {
		if (top == NULL)
		{
			cout << "Underflow" << endl;
		}
		else
		{
			Tnode* ptr = top->treeN;
			top = top->n;
			return ptr;
		}
	}
	Tnode* peek()
	{
		return top->treeN;
	}
	void insert(char val)
	{
		if (isDigit(val))
		{
			Tnode* rptr = new Tnode(val);
			push(rptr);
		}
		else if (isOperator(val)) {
			Tnode* rptr = new Tnode(val);
			rptr->left = pop();
			rptr->right = pop();
			push(rptr);
		}
		else {
			cout << "Invalid Expression" << endl;
			return;
		}
	}
	bool isDigit(char ch)
	{
		return ch >= '0' && ch <= '9';
	}
	bool isOperator(char ch)
	{
		return ch == '+' || ch == '-' || ch == '*' || ch == '/';
	}
	int toDigit(char ch)
	{
		return ch - '0';
	}
	void buildTree(string eqn)
	{
		for (int i = eqn.length() - 1; i >= 0; i--)
			insert(eqn[i]);
	}
	void postfix()
	{
		postOrder(peek());
	}
	void postOrder(Tnode* ptr)
	{
		if (ptr != NULL) {
			postOrder(ptr->left);
			postOrder(ptr->right);
			cout << ptr->getdata();
		}
	}
	void infix() {
		inOrder(peek());
	}

	void inOrder(Tnode* ptr) {
		if (ptr != NULL) {
			inOrder(ptr->left);
			cout << ptr->getdata();
			inOrder(ptr->right);
		}
	}
	void prefix() {
		preOrder(peek());
	}

	void preOrder(Tnode* ptr) {
		if (ptr != NULL) {
			cout << ptr->getdata();
			preOrder(ptr->left);
			preOrder(ptr->right);
		}
	}
};
int main()
{
	string s;
	ExpressionTree et;
	cout << "Enter equation in Prefix form: ";
	cin >> s;
	et.buildTree(s);
	cout << "\nPrefix : ";
	et.prefix();
	cout << "\nInfix : ";
	et.infix();
	cout << "\nPostfix : ";
	et.postfix();
	_getch();
	return  0;
}