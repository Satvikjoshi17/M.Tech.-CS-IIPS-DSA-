
#include <iostream>
using namespace std;

class Stack
{
    struct node
    {
        int data;
        node *next;
    };

    node *top;

public:
    Stack();
    void push();
    void pop();
    void display();
};

Stack::Stack()
{
    top = NULL;
}

void Stack::push()
{
    node *nn = new node;

    cout << "Enter data: ";
    cin >> nn->data;

    nn->next = top;
    top = nn;

    cout << "Element pushed successfully\n";
}

void Stack::pop()
{
    if(top == NULL)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        node *temp = top;

        cout << "Deleted element: " << top->data << endl;

        top = top->next;
        delete temp;
    }
}

void Stack::display()
{
    if(top == NULL)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        node *temp = top;

        cout << "Stack elements: ";

        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
}

int main()
{
    Stack s;
    int ch;
    char choice;

    do
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
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

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
