// 24. Create and traverse a doubly linked list.

#include <conio.h>
#include <iostream>
using namespace std;

struct Node
{
    Node *next;
    Node *prev;
    int data;
};

class DLL
{
private:
    Node *start;

public:
    DLL()
    {
        start = NULL;
    }

    void create();
    void insert();
    void display();
    void delete_node();
};

void DLL::create()
{
    Node *nn, *temp;
    char c;

    do
    {
        nn = new Node;

        cout << "Enter data: ";
        cin >> nn->data;

        nn->next = NULL;
        nn->prev = NULL;

        if(start == NULL)
        {
            start = nn;
        }
        else
        {
            temp = start;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = nn;
            nn->prev = temp;
        }

        cout << "Do you want to add more elements? Press y or Y. ";
        c = getch();

    } while(c == 'y' || c == 'Y');
}

void DLL::insert()
{
    Node *nn, *temp;
    int p, i;

    nn = new Node;

    cout << "Enter data: ";
    cin >> nn->data;

    nn->next = NULL;
    nn->prev = NULL;

    cout << "Enter position: ";
    cin >> p;

    if(p == 1)
    {
        nn->next = start;

        if(start != NULL)
        {
            start->prev = nn;
        }

        start = nn;
    }
    else if(start == NULL)
    {
        cout << "Invalid position";
        delete nn;
    }
    else
    {
        temp = start;
        i = 1;

        while(i < (p - 1) && temp->next != NULL)
        {
            temp = temp->next;
            i++;
        }

        if(i < p - 1)
        {
            cout << "Invalid position";
            delete nn;
        }
        else
        {
            nn->next = temp->next;
            nn->prev = temp;

            if(temp->next != NULL)
            {
                temp->next->prev = nn;
            }

            temp->next = nn;
        }
    }
}

void DLL::display()
{
    if(start == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        Node *t;

        for(t = start; t != NULL; t = t->next)
        {
            cout << t->data << " ";
        }
    }
}

void DLL::delete_node()
{
    Node *temp;
    int d;

    temp = start;

    cout << "Enter element to be deleted: ";
    cin >> d;

    if(temp == NULL)
    {
        cout << "List is empty";
    }
    else if(temp->next == NULL && temp->data == d)
    {
        start = NULL;

        delete temp;

        cout << "Element deleted";
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->data != d)
            {
                temp = temp->next;
            }
            else
            {
                if(temp == start)
                {
                    temp->next->prev = NULL;
                    start = temp->next;
                }
                else
                {
                    temp->prev->next = temp->next;

                    if(temp->next != NULL)
                    {
                        temp->next->prev = temp->prev;
                    }
                }

                delete temp;

                cout << "Element deleted";
                return;
            }
        }

        cout << "Element not found";
    }
}

int main()
{
    DLL d;
    int choice;
    char c;

    do
    {
        cout << "\n\n--- DOUBLY LINKED LIST OPERATIONS ---" << endl;
        cout << "1. Create" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Display" << endl;
        cout << "4. Delete" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: d.create();
                    break;

            case 2: d.insert();
                    break;

            case 3: d.display();
                    break;

            case 4: d.delete_node();
                    break;

            default: cout << "Invalid choice.";
        }

        cout << "\nDo you want to continue? Press y or Y: ";
        c = getch();

    } while(c == 'y' || c == 'Y');

    return 0;
}