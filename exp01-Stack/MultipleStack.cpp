#include <iostream>
using namespace std;

class Stack
{
    int a[5];
    int top1, top2;

public:
    Stack();
    void push1();
    void push2();
    void pop1();
    void pop2();
    void display1();
    void display2();
};

Stack::Stack()
{
    top1 = -1;
    top2 = 5;
}

void Stack::push1()
{
    int x;

    if (top1 + 1 == top2)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        top1++;
        a[top1] = x;
    }
}

void Stack::push2()
{
    int x;

    if (top1 + 1 == top2)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        top2--;
        a[top2] = x;
    }
}

void Stack::pop1()
{
    if (top1 == -1)
    {
        cout << "Stack 1 Underflow\n";
    }
    else
    {
        cout << "Deleted element: " << a[top1] << endl;
        top1--;
    }
}

void Stack::pop2()
{
    if (top2 == 5)
    {
        cout << "Stack 2 Underflow\n";
    }
    else
    {
        cout << "Deleted element: " << a[top2] << endl;
        top2++;
    }
}

void Stack::display1()
{
    if (top1 == -1)
    {
        cout << "Stack 1 is empty\n";
    }
    else
    {
        cout << "Stack 1: ";

        for (int i = top1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
}

void Stack::display2()
{
    if (top2 == 5)
    {
        cout << "Stack 2 is empty\n";
    }
    else
    {
        cout << "Stack 2: ";

        for (int i = top2; i < 5; i++)
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
        cout << "\n1. Push1 Stack 1";
        cout << "\n2. Pop1 Stack 1";
        cout << "\n3. Display Stack 1";
        cout << "\n4. Push2 Stack 2";
        cout << "\n5. Pop2 Stack 2";
        cout << "\n6. Display Stack 2";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                s.push1();
                break;

            case 2:
                s.pop1();
                break;

            case 3:
                s.display1();
                break;

            case 4:
                s.push2();
                break;

            case 5:
                s.pop2();
                break;

            case 6:
                s.display2();
                break;

            case 7:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    }
    while (ch != 'y'||'Y');

    return 0;
}