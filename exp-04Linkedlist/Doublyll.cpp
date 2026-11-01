
#include <iostream>
using namespace std;

class LL
{
    struct node
    {
        int data;
        node *prev;
        node *next;
    };

    node *start;

public:
    LL();
    void create();
    void traverseForward();
    void traverseBackward();
};

LL::LL()
{
    start = NULL;
}

void LL::create()
{
    node *nn, *temp;
    int n, v;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        nn = new node;

        cout << "Enter data: ";
        cin >> v;

        nn->data = v;
        nn->prev = NULL;
        nn->next = NULL;

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
    }

    cout << "Doubly linked list created\n";
}

void LL::traverseForward()
{
    node *temp = start;

    if(start == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    cout << "Forward traversal: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void LL::traverseBackward()
{
    node *temp = start;

    if(start == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    cout << "Backward traversal: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
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
        cout << "\n1. Create doubly linked list";
        cout << "\n2. Traverse forward";
        cout << "\n3. Traverse backward";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                l.create();
                break;

            case 2:
                l.traverseForward();
                break;

            case 3:
                l.traverseBackward();
                break;

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
