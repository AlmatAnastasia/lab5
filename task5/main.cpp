#include <iostream>
#include "Stack.h"
#include "StackT.h"
#include "StackT.cpp"
#include "VivodArray.cpp"
#include <string>
using namespace std;

int main()
{
	int n=0;
	int n1=-1;
	int i=1;
	cout<< "Menu:\n";
	cout << "1. Stack\n";
	cout << "2. StackT\n";
	cin >> n;
	if (n == 1)
	{
		int arr, element, num;
		cout << "Stack length.\n";
		cout << "Length = ";
		cin >> arr;
		Stack s;
		cout << "Add Elements:\n";
		do
		{
			cout << i << ".Element = ";
			cin >> element;
			s.Push(element);
            i++;
		} while ((s.GetSize()) < arr);
		n=0;
		do
	    {
			cout << "\nCommands:\n";
		    cout << "1. Pop - delete\n";
	        cout << "2. Peek - show\n";
			cout << "3. Push - insert\n";
			cout << "4. GetSize - show size\n";
		    cout << "5. End - exit\n";
		    cin >> n;
		    if (n == 1){
			s.Pop();
			cout << endl << "Stack(pop) = "; 
			}
		    else if (n == 2){
			s.Peek();
			cout << endl << "Stack(peek) = "; 
			}
			else if (n == 3){
			cout << "Element insert = ";
			cin >> n1;
			s.Push(n1);
			cout << endl << "Stack(push) = "; 
			}
			else if (n == 4){
            cout << endl << "Size = "; 
			cout << s.GetSize();
			cout << endl << "Stack(getsize) = "; 
			}
		    else if (n == 5){
			exit (0);
			}
			s.printArray();
	    } while (n);
	}
	else if (n == 2)
	{
		int arr, element, num;
		cout << "Stack length.\n";
		cout << "Length = ";
		cin >> arr;
		StackT<int> s1;
		cout << "Add Elements:\n";
		do
		{
			cout << i << ".Element = ";
			cin >> element;
			s1.Push(element);
            i++;
		} while ((s1.GetSize()) < arr);
		n=0;
		do
	    {
			cout << "\nCommands:\n";
		    cout << "1. Pop - delete\n";
	        cout << "2. Peek - show\n";
			cout << "3. Push - insert\n";
			cout << "4. GetSize - show size\n";
		    cout << "5. End - exit\n";
		    cin >> n;
		    if (n == 1){
			s1.Pop();
			cout << endl << "Stack(pop) = "; 
			}
		    else if (n == 2){
			s1.Peek();
			cout << endl << "Stack(peek) = "; 
			}
			else if (n == 3){
			cout << "Element insert = ";
			cin >> n1;
			s1.Push(n1);
			cout << endl << "Stack(push) = "; 
			}
			else if (n == 4){
            cout << endl << "Size = "; 
			cout << s1.GetSize();
			cout << endl << "Stack(getsize) = "; 
			}
		    else if (n == 5){
			exit (0);
			}
			s1.printArray();
	    } while (n);
    }
	system("pause");
}