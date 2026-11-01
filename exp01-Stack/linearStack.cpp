#include <iostream>
using namespace std;

class Stack
{
    int a[5];
    int top;

public:
    Stack();
    void push();
    void pop();
    void display();
};

Stack::Stack()
{
    top = -1;
}

void Stack::push()
{
    int x;

    if (top == 4)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        top++;
        a[top] = x;
    }
}

void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        cout << "Deleted element: " << a[top] << endl;
        top--;
    }
}

void Stack::display()
{
    if (top == -1)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    Stack s;
    int ch;

    do
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                s.push();
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    }
    while (ch != 4);

    return 0;
}