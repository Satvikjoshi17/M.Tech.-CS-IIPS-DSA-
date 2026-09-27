// 26. Implement Stack using Array

#include <iostream>
using namespace std;

#define MAX 50

class Stack
{
private:
    int a[MAX], top;

public:
    Stack()
    {
        top = -1;
    }

    void push(); void pop();
    void display();
};

void Stack::push()
{
    int e;

    if(top == MAX - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        cout << "Enter element: ";
        cin >> e;

        top = top + 1;
        a[top] = e;
    }
}

void Stack::pop()
{
    int e;

    if(top == -1)
    {
        cout << "Stack underflow";
    }
    else
    {
        e = a[top];
        top = top - 1;

        cout << "Deleted element: " << e;
    }
}

void Stack::display()
{
    if(top == -1)
    {
        cout << "Stack underflow";
    }
    else
    {
        cout << "Stack elements are: ";
        for(int i = top; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    Stack s;
    int choice;
    char c;

    do
    {
        cout << "\n\n--- STACK OPERATIONS ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: s.push();
                    break;
            case 2: s.pop();
                    break;
            case 3: s.display();
                    break;
            default: cout << "Invalid choice.";
        }

        cout << "\nDo you want to continue? Press y or Y: ";
        cin >> c;

    } while(c == 'y' || c == 'Y');

    return 0;
}