#include <iostream>
using namespace std;

class LL
{
    struct node
    {
        int data;
        node *next;
    };

    node *start;

public:
    LL();
    void create();
    void insertPosition();
    void display();
};

LL::LL()
{
    start = NULL;
}

void LL::create()
{
    int n, i;
    node *nn, *temp;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        nn = new node;
        cout << "Enter data: ";
        cin >> nn->data;
        nn->next = NULL;

        if(start == NULL)
            start = nn;
        else
        {
            temp = start;
            while(temp->next != NULL)
                temp = temp->next;

            temp->next = nn;
        }
    }
}

void LL::insertPosition()
{
    node *nn = new node;
    node *temp;
    int p, i;

    cout << "Enter data: ";
    cin >> nn->data;

    cout << "Enter position: ";
    cin >> p;

    nn->next = NULL;

    if(p < 1)
    {
        cout << "Invalid position\n";
        delete nn;
        return;
    }

    if(p == 1)
    {
        nn->next = start;
        start = nn;
    }
    else
    {
        temp = start;
        i = 1;

        while(i < p - 1 && temp != NULL)
        {
            temp = temp->next;
            i++;
        }

        if(temp == NULL)
        {
            cout << "Invalid position\n";
            delete nn;
            return;
        }

        nn->next = temp->next;
        temp->next = nn;
    }
}

void LL::display()
{
    node *temp = start;

    if(start == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    LL l;
    int ch;
    char choice;

    do
    {
        cout << "\n1. Create";
        cout << "\n2. Insert at specified position";
        cout << "\n3. Display";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1: l.create(); break;
            case 2: l.insertPosition(); break;
            case 3: l.display(); break;
            default: cout << "Invalid choice\n";
        }

        cout << "Continue? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}