#include "StackT.h"
#include "Stack.h"
using namespace std;

// вывод массива
void Stack::printArray()
{
	int* arr1 = new int[size];
	for (int i = 0; i < size; ++i) {
		arr1[i] = arr[i];
		cout << arr1[i] << " ";
	}
}


// вывод массива
template <typename T>
void StackT<T>::printArray()
{
	int* arr1 = new int[size];
	for (int i = 0; i < size; ++i) {
		arr1[i] = arr[i];
		cout << arr1[i] << " ";
	}
}
