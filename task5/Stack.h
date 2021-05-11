//Объявление функций и глобальных переменных #pragma once
#pragma once
#include <iostream>
using namespace std;

class StackBasedOnArray
{
public:

    StackBasedOnArray(int _MAX_size); // конструктор инициализации
    StackBasedOnArray(const StackBasedOnArray& other);  // конструктор копирования
    StackBasedOnArray(StackBasedOnArray&& other); // конструктор перемещения
    ~StackBasedOnArray(); // деструктор
    
    //Обязательные функции-члены
    int GetSize() const; // вернуть длину стека
    void Push(const &element); // функции вставки и удаления элемента
    int Pop(); // удалить элемент из стека
    int Peek(); // просмотреть элементы стека

    StackBasedOnArray &operator=(const StackBasedOnArray& other); // оператор присваивания копий
    StackBasedOnArray &operator=(StackBasedOnArray&& other); // оператор присваивания перемещения
    friend ostream& operator<<(ostream& stream, const StackBasedOnArray& value);
    int operator[](const &index) const;//Перегрузка оператора индексации
    void printArray() const; // вывод массива

private:
    int *arr;// указатель на стек
    int size, MAX_size;//номер текущего элемента стека и максимальное количество элементов в стеке 
};

