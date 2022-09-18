#include<iostream>
using namespace std;
class Heap {
public:
	Heap(int x = 100);
	bool insert(int x);
	void deleteMin();
	bool isFull();
	bool isEmpty();
	void printHeap();

private:
	int currentSize;
	int capacity;
	int* array;
	void percolateDown(int hole);


};
Heap::Heap(int x)
{
	capacity = x;
	array = new int[capacity + 1];
	currentSize = 0;

}
bool Heap::isFull()
{
	if (currentSize == capacity)
		return true;
	else
		return false;
}
bool Heap::insert(int x)
{
	if (isFull())
	{
		cout << "Insert- Heap is Full" << endl;
		return false;
	}
	int hole = ++currentSize;
	for (; hole > 1 && x < array[hole / 2]; hole /= 2)
		array[hole] = array[hole / 2];
	array[hole] = x;
	return true;
}
bool Heap::isEmpty()
{
	if (currentSize == 0)
		return true;
	else
		return false;
}
void Heap::deleteMin()
{
	if (isEmpty())
	{
		cout << "Heap is Empty" << endl;
		return;
	}
	int minitem = array[1];
	array[1] = array[currentSize--];
	percolateDown(1);
}
void Heap::percolateDown(int hole)
{
	int child;
	int tmp = array[hole];
	for (; hole * 2 <= currentSize; hole = child)
	{
		child = hole * 2;
		if (child != currentSize && array[child + 1] < array[child])
			child++;  // right child is smaller
		if (array[child] < tmp)
			array[hole] = array[child];
		else break;
	}
	array[hole] = tmp;


}
void Heap::printHeap()
{
	if (isEmpty())
		return;
	for (int i = 1; i <= currentSize; i++)
	{
		cout << array[i] << " ";
	}
}
int main()
{
	Heap* hp = new Heap(100);
	hp->insert(20);
	hp->insert(2);
	hp->printHeap();
}
//max heap
//priority heap
