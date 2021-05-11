//Объявление функций и глобальных переменных #pragma once
#pragma once
#include <iostream>
using namespace std;

template<typename T>
class StackBasedOnArrayT
{
public:
    StackBasedOnArrayT(int _MAX_size); // конструктор инициализации
    StackBasedOnArrayT(const StackBasedOnArrayT& other);  // конструктор копирования
    StackBasedOnArrayT(StackBasedOnArrayT&& other); // конструктор перемещения
    ~StackBasedOnArrayT(); // деструктор
    
    //Обязательные функции-члены
    int GetSize() const; // вернуть длину стека
    void Push(const T &element); // функции вставки и удаления элемента
    T Pop(); // удалить элемент из стека
    T Peek(); // просмотреть элементы стека

    StackBasedOnArrayT &operator=(const StackBasedOnArrayT& other); // оператор присваивания копий
    StackBasedOnArrayT &operator=(StackBasedOnArrayT&& other); // оператор присваивания перемещения
    int operator[](const &index) const;//Перегрузка оператора индексации
    void printArray() const; // вывод массива

private:
    T *arr;// указатель на стек
    int size, MAX_size;//номер текущего элемента стека и максимальное количество элементов в стеке 
};



