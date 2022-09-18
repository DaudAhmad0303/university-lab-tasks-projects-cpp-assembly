#include<iostream>
#include<conio.h>
using namespace std;
class AVL_Node
{
private:
	int	info;				// for data
	AVL_Node* left;			// pointer to Left
	AVL_Node* right;		// pointer to Right
	AVL_Node* parent;		// pointer to Parent
	int	height;				// height

public:
	//constructors
	AVL_Node();
	AVL_Node(int info);
	int getInfo();
	void setInfo(int info);
	AVL_Node* getLeft();
	void setLeft(AVL_Node* left);
	AVL_Node* getRight();
	void setRight(AVL_Node* right);
	int isLeaf();
	AVL_Node* getParent();
	void setParent(AVL_Node* parent);
	int getHeight();
	void setHeight(int b);

};

AVL_Node::AVL_Node()
{
	this->info = -1;
	this->left = this->right = NULL;
	this->parent = NULL;
	this->height = 0;

}
AVL_Node::AVL_Node(int info)
{
	this->info = info;
	this->left = this->right = NULL;
	this->parent = NULL;
	this->height = 0;

}
void AVL_Node::setInfo(int info)
{
	this->info = info;

}
int AVL_Node::getInfo()
{
	return this->info;
}
void AVL_Node::setLeft(AVL_Node* left)
{
	this->left = left;
}
AVL_Node* AVL_Node::getLeft()
{
	return this->left;

}
void AVL_Node::setRight(AVL_Node* right)
{

	this->right = right;
}
AVL_Node* AVL_Node::getRight()
{
	return this->right;
}
int AVL_Node::isLeaf()
{
	if (this->left == NULL && this->right == NULL)
		return 1;
	return 0;
}
void AVL_Node::setParent(AVL_Node* parent)
{
	this->parent = parent;
}
AVL_Node* AVL_Node::getParent()
{
	return this->parent;
}
void AVL_Node::setHeight(int B)
{
	this->height = B;
}
int AVL_Node::getHeight()
{
	return this->height;
}
int Max(int a, int b)
{
	return (a > b) ? a : b;
}
class AVL {
public:
	void insert(int info);
	void Delete(int info);
	AVL_Node* AVL_insert(AVL_Node* parent, int info);
	AVL_Node* Delete(AVL_Node* p, int data);
	AVL_Node* singleRightRotation(AVL_Node* k2);
	AVL_Node* singleLeftRotation(AVL_Node* k1);
	AVL_Node* doubleLeftRightRotation(AVL_Node* k3);
	AVL_Node* doubleRightLeftRotation(AVL_Node* k1);
	void inorder(AVL_Node* node);
	int height(AVL_Node* node);
	AVL_Node* Right_move(AVL_Node* t);
	AVL_Node* Left_move(AVL_Node* t);
	int getBalanceFactor(AVL_Node* b);
	AVL();
public:
	AVL_Node* root;
};
AVL::AVL()
{
	this->root = NULL;
}
AVL_Node* AVL::doubleRightLeftRotation(AVL_Node* k1)
{
	if (k1 == NULL) return NULL;
	// single right rotate with k3 (k1's right child)
	k1->setRight(singleRightRotation(k1->getRight()));
	// now single left rotate with k1 as the root
	return singleLeftRotation(k1);
}

AVL_Node* AVL::doubleLeftRightRotation(AVL_Node* k3)
{
	if (k3 == NULL) return NULL;
	// single left rotate with k1 (k3's left child)
	k3->setLeft(singleLeftRotation(k3->getLeft()));
	// now single right rotate with k3 as the root
	return singleRightRotation(k3);

}
AVL_Node* AVL::singleLeftRotation(AVL_Node* k1)
{
	if (k1 == NULL) return NULL;
	// k2 is now the new root
	AVL_Node* k2 = k1->getRight();
	k1->setRight(k2->getLeft()); // Y
	k2->setLeft(k1);
	// reassign heights. First k1 (demoted)
	int h = Max(height(k1->getLeft()),
		height(k1->getRight()));
	k1->setHeight(h + 1);
	// k1 is now k2's left subtree 
	h = Max(height(k2->getRight()),
		k1->getHeight());
	k2->setHeight(h + 1);

	return k2;
}
AVL_Node* AVL::singleRightRotation(AVL_Node* k2)
{
	if (k2 == NULL) return NULL;
	// k1 (first node in k2's left subtree)  //thhjg will be the new root
	AVL_Node* k1 = k2->getLeft();
	// Y moves from k1's right to k2's left
	k2->setLeft(k1->getRight());
	k1->setRight(k2);

	// reassign heights. First k2
	int leftheight = height(k2->getLeft());
	int rightheight = height(k2->getRight());
	int h = Max(leftheight, rightheight);
	k2->setHeight(h + 1);
	// k2 is now k1's right subAVL 
	h = Max(height(k1->getLeft()), k2->getHeight());
	k1->setHeight(h + 1);
	return k1;
}
void AVL::insert(int info)
{
	root = AVL_insert(root, info);
}
AVL_Node* AVL::AVL_insert(AVL_Node* parent, int info)
{
	if (parent == NULL)
		return(new AVL_Node(info));
	if (info < parent->getInfo())
		parent->setLeft(AVL_insert(parent->getLeft(), info));
	else if (info > parent->getInfo())
		parent->setRight(AVL_insert(parent->getRight(), info));
	else
		return parent;

	// Update the balance factor of each node and
	// balance the tree
	parent->setHeight(1 + Max(height(parent->getLeft()),
		height(parent->getRight())));
	int balanceFactor = getBalanceFactor(parent);
	if (balanceFactor > 1)
	{
		if (info < parent->getLeft()->getInfo())
		{
			return singleRightRotation(parent);
		}
		else if (info > parent->getLeft()->getInfo())
		{
			parent->setLeft(singleLeftRotation(parent->getLeft()));
			return singleRightRotation(parent);
		}
	}
	if (balanceFactor < -1)
	{
		if (info > parent->getRight()->getInfo())
		{
			return singleLeftRotation(parent);
		}
		else if (info > parent->getRight()->getInfo())
		{
			parent->setRight(singleRightRotation(parent->getRight()));
			return singleLeftRotation(parent);
		}
	}
	return parent;
}
void AVL::Delete(int data)
{
	root = Delete(root, data);
}
AVL_Node* AVL::Delete(AVL_Node* t, int data)
{
	if (t->getLeft() == NULL && t->getRight() == NULL)
	{
		if (t == this->root)
			this->root = NULL;
		else
			return NULL;
	}

	AVL_Node* x;
	AVL_Node* y;
	if (t->getInfo() < data)
	{
		t->setRight(Delete(t->getRight(), data));
	}
	else if (t->getInfo() > data)
	{
		t->setLeft(Delete(t->getLeft(), data));
	}
	else
	{
		if (t->getLeft() != NULL)
		{
			y = Right_move(t->getLeft());
			t->setInfo(y->getInfo());
			t->setLeft(Delete(t->getLeft(), y->getInfo()));
		}
		else
		{
			y = Left_move(t->getRight());
			t->setInfo(y->getInfo());
			t->setRight(Delete(t->getRight(), y->getInfo()));
		}
	}

	if (getBalanceFactor(t) == 2 && getBalanceFactor(t->getLeft()) == 1)
	{
		t = singleLeftRotation(t);
	}
	else if (getBalanceFactor(t) == 2 && getBalanceFactor(t->getLeft()) == -1)
	{
		t = doubleLeftRightRotation(t);
	}
	else if (getBalanceFactor(t) == 2 && getBalanceFactor(t->getLeft()) == 0)
	{
		t = singleLeftRotation(t);
	}
	else if (getBalanceFactor(t) == -2 && getBalanceFactor(t->getLeft()) == -1)
	{
		t = singleLeftRotation(t);
	}
	else if (getBalanceFactor(t) == -2 && getBalanceFactor(t->getRight()) == 1)
	{
		t = doubleRightLeftRotation(t);
	}
	else if (getBalanceFactor(t) == -2 && getBalanceFactor(t->getRight()) == 0)
	{
		t = singleLeftRotation(t);
	}
	return t;

}
AVL_Node* AVL::Right_move(AVL_Node* t)
{
	{
		while (t->getRight() != NULL)
			t->setRight(t->getRight());
		return t;
	}
}
AVL_Node* AVL::Left_move(AVL_Node* t)
{
	while (t->getLeft() != NULL)
		t->setLeft(t->getLeft());
	return t;
}
int AVL::height(AVL_Node* node)
{
	if (node != NULL)
		return node->getHeight();
	return -1;
}
int AVL::getBalanceFactor(AVL_Node* b)
{
	if (b == NULL)
		return 0;
	return height(b->getLeft()) - height(b->getRight());
}
void AVL::inorder(AVL_Node* node)
{
	if (node != NULL)
	{
		inorder(node->getLeft());
		cout << node->getInfo() << " ";
		inorder(node->getRight());
	}
}
void main()
{
	cout << "\nThe insertion in the AVL Tree: \n" << endl;
	AVL avl;
	avl.insert(10);
	avl.insert(15);
	avl.inorder(avl.root);
	avl.insert(20);
	cout << endl;
	cout << endl;
	avl.inorder(avl.root);
	avl.insert(25);
	avl.insert(30);
	cout << endl;
	cout << endl;
	avl.inorder(avl.root);
	avl.insert(35);
	cout << endl;
	cout << endl;
	avl.inorder(avl.root);
	cout << endl;
	cout << "\nThe deletion in the AVL Tree: \n" << endl;
	avl.Delete(30);
	avl.inorder(avl.root);
	_getch();

}