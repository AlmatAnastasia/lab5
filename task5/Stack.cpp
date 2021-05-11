#include "Stack.h"

// конструктор инициализации
StackBasedOnArray::StackBasedOnArray(int _MAX_size) : MAX_size(_MAX_size), size(0) {arr=new int[MAX_size];} 


// конструктор копирования
StackBasedOnArray::StackBasedOnArray(const StackBasedOnArray& other)
{
	arr = new int[other.MAX_size];
	MAX_size = other.MAX_size;
	for (int i = 0; i < MAX_size; ++i)
	  arr[i] = other.arr[i];
}


// конструктор перемещения
StackBasedOnArray::StackBasedOnArray(StackBasedOnArray&& other): arr(other.arr)
{
	other.arr = nullptr;
}


// деструктор
StackBasedOnArray::~StackBasedOnArray()
{
	delete[] arr;
}


// вернуть длину стека
int StackBasedOnArray::GetSize() const
{
	return size;
}

// функции вставки и удаления элемента
// вставить элемент
void StackBasedOnArray::Push(const &element)
{ 
        if (size+1<= MAX_size) { arr[++size] = element;}
        else {cout << "StackBasedOnArray is full";}

}
// удалить элемент
int StackBasedOnArray::Pop()
{
        if (size != 0) {return arr[size--];}
		else 
		{
		    cout << "element not found";
			return (0);
		}
}


// просмотреть элементы стека
int StackBasedOnArray::Peek() 
{	
        if (size != 0) {return arr[size];}
        else 
		{
		    cout << "StackBasedOnArray is full";
			return (0);
		}
}


// оператор присваивания копий
StackBasedOnArray& StackBasedOnArray::operator=(const StackBasedOnArray& other)
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
StackBasedOnArray& StackBasedOnArray::operator=(StackBasedOnArray&& other)
{
	if (this == &other)  return *this;
	delete[] arr;
	arr = other.arr;
	MAX_size = other.MAX_size;
	other.arr = nullptr;
	return *this;
}


ostream &operator<<(ostream &stream, const StackBasedOnArray &value)
{
	for (int i = 0; i <= value.size; ++i)
		cout << value.arr[i] << " ";
	return stream;
}

//Перегрузка оператора индексации
int StackBasedOnArray::operator[](const &index) const
{
    return arr[index];
}

// вывод массива
void StackBasedOnArray::printArray() const
{
	std:: cout << "\nStack size: " << MAX_size << std::endl;
	for (int i = 0; i < MAX_size; i++)
	{ 
	    std::cout << "Used: " << i << std::endl;
		std::cout << "Next: " << arr[i+1] << std::endl;
		std::cout << "--------" << std::endl;
	}

}