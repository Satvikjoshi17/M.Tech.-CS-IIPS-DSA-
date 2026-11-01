
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
    void display();
    void deleteBeginning();
    void deleteEnd();
    void deleteValue(int v);
    void reverse();
    void count();
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
        }
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

    cout << "Linked list: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// 19. Delete from beginning
void LL::deleteBeginning()
{
    if(start == NULL)
    {
        cout << "List is empty\n";
    }
    else
    {
        node *temp = start;

        start = start->next;

        cout << "Deleted: " << temp->data << endl;

        delete temp;
    }
}

// 20. Delete from end
void LL::deleteEnd()
{
    if(start == NULL)
    {
        cout << "List is empty\n";
    }
    else if(start->next == NULL)
    {
        cout << "Deleted: " << start->data << endl;

        delete start;
        start = NULL;
    }
    else
    {
        node *temp = start;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        node *del = temp->next;

        cout << "Deleted: " << del->data << endl;

        temp->next = NULL;
        delete del;
    }
}

// 21. Delete a node with given value
void LL::deleteValue(int v)
{
    if(start == NULL)
    {
        cout << "List is empty\n";
    }
    else if(start->data == v)
    {
        node *temp = start;
        start = start->next;

        delete temp;

        cout << "Node deleted\n";
    }
    else
    {
        node *temp = start;

        while(temp->next != NULL &&
              temp->next->data != v)
        {
            temp = temp->next;
        }

        if(temp->next == NULL)
        {
            cout << "Value not found\n";
        }
        else
        {
            node *del = temp->next;

            temp->next = del->next;

            delete del;

            cout << "Node deleted\n";
        }
    }
}

// 22. Reverse linked list
void LL::reverse()
{
    node *prev = NULL;
    node *temp = start;
    node *nextNode;

    while(temp != NULL)
    {
        nextNode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextNode;
    }

    start = prev;

    cout << "List reversed\n";
}

// 23. Count nodes
void LL::count()
{
    node *temp = start;
    int c = 0;

    while(temp != NULL)
    {
        c++;
        temp = temp->next;
    }

    cout << "Number of nodes: " << c << endl;
}

int main()
{
    LL l;
    int ch, v;
    char choice;

    do
    {
        cout << "\n1. Create linked list";
        cout << "\n2. Display";
        cout << "\n3. Delete from beginning";
        cout << "\n4. Delete from end";
        cout << "\n5. Delete given value";
        cout << "\n6. Reverse linked list";
        cout << "\n7. Count nodes";
        cout << "\nEnter choice: ";

        cin >> ch;

        switch(ch)
        {
            case 1:
                l.create();
                break;

            case 2:
                l.display();
                break;

            case 3:
                l.deleteBeginning();
                break;

            case 4:
                l.deleteEnd();
                break;

            case 5:
                cout << "Enter value to delete: ";
                cin >> v;
                l.deleteValue(v);
                break;

            case 6:
                l.reverse();
                break;

            case 7:
                l.count();
                break;

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
