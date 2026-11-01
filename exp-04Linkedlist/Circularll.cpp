
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
    void insert(int v);
    void deleteNode();
    void display();
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

        if(start == NULL)
        {
            start = nn;
            nn->next = start;
        }
        else
        {
            temp = start;

            while(temp->next != start)
            {
                temp = temp->next;
            }

            temp->next = nn;
            nn->next = start;
        }
    }

    cout << "Circular linked list created\n";
}

void LL::insert(int v)
{
    node *nn = new node;
    node *temp;

    nn->data = v;

    if(start == NULL)
    {
        start = nn;
        nn->next = start;
    }
    else
    {
        temp = start;

        while(temp->next != start)
        {
            temp = temp->next;
        }

        temp->next = nn;
        nn->next = start;
    }

    cout << "Node inserted\n";
}

void LL::deleteNode()
{
    if(start == NULL)
    {
        cout << "List is empty\n";
    }
    else if(start->next == start)
    {
        delete start;
        start = NULL;

        cout << "Node deleted\n";
    }
    else
    {
        node *temp = start;
        node *last = start;

        while(last->next != start)
        {
            last = last->next;
        }

        start = start->next;
        last->next = start;

        delete temp;

        cout << "First node deleted\n";
    }
}

void LL::display()
{
    if(start == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    node *temp = start;

    cout << "Circular linked list: ";

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != start);

    cout << endl;
}

int main()
{
    LL l;
    int ch, v;
    char choice;

    do
    {
        cout << "\n1. Create circular linked list";
        cout << "\n2. Insert at end";
        cout << "\n3. Delete first node";
        cout << "\n4. Display";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                l.create();
                break;

            case 2:
                cout << "Enter value: ";
                cin >> v;
                l.insert(v);
                break;

            case 3:
                l.deleteNode();
                break;

            case 4:
                l.display();
                break;

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
