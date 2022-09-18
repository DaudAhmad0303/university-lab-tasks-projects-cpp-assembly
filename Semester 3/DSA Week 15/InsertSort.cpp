// Insertion sort in C++
/*
* 
* Aqib's Code
#include <iostream>
using namespace std;
void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main() {
    int data[] = { 7,3,4,8,2,5,9,1,6 };
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);
}
*/
//
//#include<iostream>
//using namespace std;
//void insertionSort(int *array, int N)
//{
//    int pos, value;
//    for (int i = 1; i < N ; i++)
//    {
//        value = array[i];
//        for (pos = i - 1; pos >= 0; pos--)
//            if (array[pos] > value)
//                array[pos + 1] = array[pos];
//            else  
//                break;
//
//        array[pos + 1] = value;
//    }
//}
//int main()
//{
//    int arr[10] = { 7,3,4,8,2,5,9,1,6,0 };
//    insertionSort(arr, 10);
//    cout << "Sorted Array:\n";
//    for (int i = 0; i < 10; i++)
//    {
//        cout << arr[i] << " ";
//    }
//}