//Объявление функций и глобальных переменных #pragma once
#pragma once
#include <iostream>
using namespace std;

template<typename T>
class StackT
{
    T *arr;
    int size;

public:
    StackT();
    StackT(int count); // конструктор инициализации
    StackT(const StackT& other);  // конструктор копирования
    StackT(StackT&& other); // конструктор перемещения
    ~StackT(); // деструктор
    
    //Обязательные функции-члены
    int GetSize() const; // вернуть длину стека
    void Push(const T& element); // функции вставки и удаления элемента
    T Pop(); // удалить элемент из стека
    T Peek(); // просмотреть элементы стека

    StackT &operator=(const StackT& other); // оператор присваивания копий
    StackT &operator=(StackT&& other); // оператор присваивания перемещения
    void printArray(); // вывод массива

};



