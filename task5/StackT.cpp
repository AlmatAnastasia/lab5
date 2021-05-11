#include "StackT.h"


// конструктор инициализации
template<typename T>
StackBasedOnArrayT<T>::StackBasedOnArrayT(int _MAX_size) : MAX_size(_MAX_size), size(0) {arr=new int[MAX_size];} 

// конструктор копирования
template<typename T>
StackBasedOnArrayT<T>::StackBasedOnArrayT(const StackBasedOnArrayT& other)
{
    arr = new int[other.MAX_size];
	MAX_size = other.MAX_size;
	for (int i = 0; i < MAX_size; ++i)
	  arr[i] = other.arr[i];
  
}


// конструктор перемещения
template<typename T>
StackBasedOnArrayT<T>::StackBasedOnArrayT(StackBasedOnArrayT&& other): arr(other.arr)
{
	other.arr = nullptr;
}

// деструктор
template<typename T>
StackBasedOnArrayT<T>::~StackBasedOnArrayT()
{
	delete[] arr;
}


// вернуть длину стека
template<typename T>
int StackBasedOnArrayT<T>::GetSize() const
{
	return size;
}

// функции вставки и удаления элемента
// вставить элемент
template<typename T>
void StackBasedOnArrayT<T>::Push(const T& element)
{
 if (size+1<= MAX_size) { arr[++size] = element;}
        else {cout << "StackBasedOnArray is full";}
}
// удалить элемент
template <typename T>
T StackBasedOnArrayT<T>::Pop()
{
	 if (size != 0) {return arr[size--];}
		else 
		{
		    cout << "element not found";
			return (0);
		}
}


// просмотреть элементы стека
template<typename T>
T StackBasedOnArrayT<T>::Peek()
{	
    if (size != 0) {return arr[size];}
        else 
		{
		    cout << "StackBasedOnArray is full";
			return (0);
		}
}


// оператор присваивания копий
template<typename T>
StackBasedOnArrayT<T>&StackBasedOnArrayT<T>::operator=(const StackBasedOnArrayT& other)
{
	if (this == &other) return *this;
	delete[] arr;
	arr = new int[other.MAX_size];
	MAX_size = other.MAX_size;
	for (int i = 0; i < MAX_size; ++i)
		arr[i] = other.arr[i];
	return *this;
}


//оператор присваивания перемещения
template<typename T>
StackBasedOnArrayT<T>&StackBasedOnArrayT<T>::operator=(StackBasedOnArrayT&& other)
{
	if (this == &other)  return *this;
	delete[] arr;
	arr = other.arr;
	MAX_size = other.MAX_size;
	other.arr = nullptr;
	return *this;
}

//Перегрузка оператора индексации
template<typename T>
int StackBasedOnArrayT<T>::operator[](const &index) const
{
    return arr[index];
}

// вывод массива
template<typename T>
void StackBasedOnArrayT<T>::printArray() const
{
	std:: cout << "\nStackBasedOnArray size: " << MAX_size << std::endl;
	for (int i = 0; i < MAX_size; i++)
	{ 
	    std::cout << "Used: " << i << std::endl;
		std::cout << "Next: " << arr[i+1] << std::endl;
		std::cout << "--------" << std::endl;
	}

}
