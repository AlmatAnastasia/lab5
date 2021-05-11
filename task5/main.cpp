#include <iostream>
#include "Stack.h"
#include "StackT.h"
#include "StackT.cpp"
#include <string>
using namespace std;

int main()
{
	int n = 0;
        int i = 1;
        int MAX_size = 5;
	cout<< "Menu:\n";
	cout << "1. Stack\n";
	cout << "2. StackT\n";
	cin >> n;
	if (n == 1)
	{
		int element, num;
		cout << "Stack length = "<< MAX_size;
		StackBasedOnArray s(MAX_size);
		cout << "\nAdd Elements:\n";
		do
		{
			cout << i << ".Element = ";
			cin >> element;
			s.Push(element);
            cout << "Size = " << s.GetSize()<< "\n";
              i++;
		} while (s.GetSize() < MAX_size);
                s.printArray();
	}
	else if (n == 2)
	{
		int element, num;
		cout << "Stack length = "<< MAX_size;
		StackBasedOnArrayT<int> s1(MAX_size);
		cout << "\nAdd Elements:\n";
		do
		{
			cout << i << ".Element = ";
			cin >> element;
			s1.Push(element);
              i++;
		} while (s1.GetSize() < MAX_size);
		s1.printArray();
    }
	system("pause");
}