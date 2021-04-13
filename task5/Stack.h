//Объявление функций и глобальных переменных #pragma once
#pragma once
#include <iostream>
using namespace std;

class Stack
{
public:
    Stack(); // конструктор инициализации
    Stack(const Stack& other);  // конструктор копирования
    Stack(Stack&& other); // конструктор перемещения
    ~Stack(); // деструктор
    
    //Обязательные функции-члены
    int GetSize() const; // вернуть длину стека
    void Push(const int& element); // функции вставки и удаления элемента
    int Pop(); // удалить элемент из стека
    int Peek(); // просмотреть элементы стека

    Stack &operator=(const Stack& other); // оператор присваивания копий
    Stack &operator=(Stack&& other); // оператор присваивания перемещения
    friend ostream& operator<<(ostream& stream, const Stack& value);
    void printArray(); // вывод массива


private:
    int *arr; // указатель на стек
    int size; // максимальное количество элементов в стеке 
};

