#include "Stack.h"

// конструктор инициализации
Stack::Stack()
{
	this->size=0;
	this->arr=nullptr;
}


// конструктор копирования
Stack::Stack(const Stack& other)
{
	arr = new int[other.size];
	size = other.size;
	for (int i = 0; i < size; ++i)
	  arr[i] = other.arr[i];
}


// конструктор перемещения
Stack::Stack(Stack&& other)
{
	arr = other.arr;
	size = other.size;
	other.arr = nullptr;
}


// деструктор
Stack::~Stack()
{
	delete[] arr;
}


// вернуть длину стека
int Stack::GetSize() const
{
	return size;
}

// функции вставки и удаления элемента
// вставить элемент
void Stack::Push(const int& element)
{
int* arr1 = new int[size + 1];

	for (int before = 0; before < size; ++before) arr1[before] = arr[before];

	arr1[size] = element;

	for (int after = size; after < size; ++after) arr1[after + 1] = arr[after];

	delete[] arr;
	arr = arr1;
	++size;
}
// удалить элемент
int Stack::Pop()
{
	if (size > 0)
	{
		--size;
		int *arr1 = new int[size];
		for (int i = 0; i < size; ++i)
			arr1[i] = arr[i];

		delete[] arr;
		arr = arr1;
        return arr[size];
	}
	else 
	{
		cout << "element not found";
		arr = 0;
		return arr[size];
    }
}



// просмотреть элементы стека
int Stack::Peek() 
{	
		return arr[size];
}


// оператор присваивания копий
Stack& Stack::operator=(const Stack& other)
{
	if (this == &other) return *this;
	delete[] arr;
	arr = new int[other.size];
	size = other.size;
	for (int i = 0; i < size; ++i)
		arr[i] = other.arr[i];
	return *this;
}


//оператор присваивания перемещения
Stack& Stack::operator=(Stack&& other)
{
	if (this == &other)  return *this;
	delete[] arr;
	arr = other.arr;
	size = other.size;
	other.arr = nullptr;
	return *this;
}


ostream &operator<<(ostream &stream, const Stack &value)
{
	for (int i = 0; i <= value.size; ++i)
		cout << value.arr[i] << " ";
	return stream;
}

