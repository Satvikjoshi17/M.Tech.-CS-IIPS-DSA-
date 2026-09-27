// 33. Implement Queue using Linked List.

#include <conio.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Queue
{
private:
    Node *front, *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void insert_e();
    void delete_e();
    void display();
};

void Queue::insert_e()
{
    Node *nn;
    char c;

    do
    {
        nn = new Node;

        cout << "Enter data: ";
        cin >> nn->data;

        nn->next = NULL;

        if(front == NULL)
        {
            front = nn;
        }
        else
        {
            rear->next = nn;
        }

        rear = nn;

        cout << "Enter more data? ";
        c = getch();

    } while(c == 'y' || c == 'Y');
}

void Queue::delete_e()
{
    if(front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        int x = front->data;
        Node *t = front;

        if(front == rear)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front->next;
        }

        delete t;

        cout << "Item deleted = " << x;
    }
}

void Queue::display()
{
    if(front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        Node *t;

        for(t = front; t != NULL; t = t->next)
        {
            cout << t->data << " ";
        }
    }
}

int main()
{
    Queue q;
    int choice;
    char c;

    do
    {
        cout << "\n\n--- QUEUE OPERATIONS ---" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: q.insert_e();
                    break;

            case 2: q.delete_e();
                    break;

            case 3: q.display();
                    break;

            default: cout << "Invalid choice.";
        }

        cout << "\nDo you want to continue? Press y or Y: ";
        cin >> c;

    } while(c == 'y' || c == 'Y');

    return 0;
}