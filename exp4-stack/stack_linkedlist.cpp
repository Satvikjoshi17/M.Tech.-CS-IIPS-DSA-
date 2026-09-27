// 27. Implement Stack using Linked List.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push();
    void pop();
    void display();
};

void Stack::push()
{
    Node *nn = new Node;

    if(nn == NULL)
    {
        cout << "Memory full";
    }
    else
    {
        cout << "Enter element: ";
        cin >> nn->data;

        nn->next = top;
        top = nn;
    }
}

void Stack::pop()
{
    if(top == NULL)
    {
        cout << "Stack underflow";
    }
    else
    {
        Node *t;

        cout << top->data << " deleted";

        t = top;
        top = top->next;

        delete t;
    }
}

void Stack::display()
{
    Node *t;

    if(top == NULL)
    {
        cout << "Stack underflow";
    }
    else
    {
        cout << "Stack elements are: ";

        for(t = top; t != NULL; t = t->next)
        {
            cout << t->data << " ";
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