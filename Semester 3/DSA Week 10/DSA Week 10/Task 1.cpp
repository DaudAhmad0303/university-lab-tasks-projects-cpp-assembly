#include<iostream>
#include<conio.h>
using namespace std;
class BSTNode
{
private:
	char info;
	BSTNode* left;
	BSTNode* right;
public:
	BSTNode(char n = ' ')
	{
		info = n;
		left = nullptr;
		right = nullptr;
	}
	void setInfo(char i)
	{
		info = i;
	}
	char getInfo()const
	{
		return info;
	}
	void setLeft(BSTNode *l)
	{
		left = l;
	}
	BSTNode* getLeft()const
	{
		return left;
	}
	void setRight(BSTNode* r)
	{
		right = r;
	}
	BSTNode* getRight()const
	{
		return right;
	}
};
class BST
{
private:
	void inorderTraversal(BSTNode* r)
	{
		if (r != nullptr)
		{
			inorderTraversal(r->getLeft());
			cout << r->getInfo() << " ";
			inorderTraversal(r->getRight());
		}
	}
	BSTNode* findMin(BSTNode* r)
	{
		BSTNode* p = nullptr;
		while (r)
		{
			p = r;
			r = r->getLeft();
		}
		return p;
	}
	BSTNode* deleteNode(BSTNode* tree, char i)
	{
		BSTNode* t;
		if (i < tree->getInfo())
		{
			t = deleteNode(tree->getLeft(), i);
			tree->setLeft(t);
		}
		else if (i > tree->getInfo())
		{
			t = deleteNode(tree->getRight(), i);
			tree->setRight(t);
		}
		else if (tree->getLeft() != NULL && tree->getRight() != NULL)
		{
			BSTNode* minNode;
			minNode = findMin(tree->getRight());
			tree->setInfo(minNode->getInfo());
			t = deleteNode(tree->getRight(),
				minNode->getInfo());
			tree->setRight(t);
		}
		else
		{
			BSTNode* nodeToDelete = tree;
			if (tree->getLeft() == NULL)
				tree = tree->getRight();
			else if (tree->getRight() == NULL)
				tree = tree->getLeft();
			else tree = NULL;

			delete nodeToDelete;
		}
		return tree;
	}
public:
	BSTNode *root;
	BST()
	{
		root = nullptr;
	}
	bool insertion(BSTNode* add)
	{
		BSTNode* rptr = root;
		BSTNode* prev = nullptr;
		while (rptr)
		{
			if (add->getInfo() == rptr->getInfo())
			{
				return false;
			}
			else if (add->getInfo() < rptr->getInfo())
			{
				prev = rptr;
				rptr = rptr->getLeft();
			}
			else if (add->getInfo() > rptr->getInfo())
			{
				prev = rptr;
				rptr = rptr->getRight();
			}
		}
		if (!root)
		{
			root = add;
		}
		else if (add->getInfo() < prev->getInfo())
		{
			prev->setLeft(add);
		}
		else if (add->getInfo() > prev->getInfo())
		{
			prev->setRight(add);
		}
		return true;
	}
	bool search(char s)
	{
		if (root)
		{
			BSTNode* rptr = root;
			while (rptr)
			{
				if (s == rptr->getInfo())
				{
					return true;
				}
				else if (rptr->getInfo() < s)
				{
					rptr = rptr->getRight();
				}
				else
				{
					rptr = rptr->getLeft();
				}
			}
			return false;
		}
		else
		{
			return false;
		}
	}
	void inorder()
	{
		inorderTraversal(root);
	}
	void deleteInfo(char i)
	{
		deleteNode(root, i);
	}
};
int main()
{
	BST b;
	b.insertion(new BSTNode('e'));
	b.insertion(new BSTNode('d'));
	b.insertion(new BSTNode('c'));
	b.insertion(new BSTNode('f'));
	b.insertion(new BSTNode('h'));
	b.insertion(new BSTNode('g'));
	b.inorder();
	if (b.search('h'))
	{
		cout <<"\nYes it is present" << endl;
	}
	b.deleteInfo('d');
	b.inorder();
	_getch();
	return 0;
}