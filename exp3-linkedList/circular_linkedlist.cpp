// 25. Implement a Circular Linked List.

#include <conio.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class CLL
{
private:
    Node *start;

public:
    CLL()
    {
        start = NULL;
    }

    void create();
    void insert(int p, int value);
    void display();
    void delete_node();
    void search(int num);
    void sort();
};

void CLL::create()
{
    Node *nn, *on;
    char c;

    do
    {
        nn = new Node;
        nn->next = NULL;

        cout << "Enter value: ";
        cin >> nn->data;

        if(start == NULL)
        {
            start = nn;
            nn->next = nn;
        }
        else
        {
            nn->next = start;
            on->next = nn;
        }

        on = nn;

        cout << "Do you want to continue? Press y or Y. ";
        cin >> c;

    } while(c == 'y' || c == 'Y');
}

void CLL::insert(int p, int value)
{
    Node *nn, *temp;
    int i;

    nn = new Node;
    nn->data = value;

    if(start == NULL)
    {
        start = nn;
        nn->next = nn;
    }
    else if(p == 1)
    {
        temp = start;

        while(temp->next != start)
        {
            temp = temp->next;
        }

        nn->next = start;
        temp->next = nn;
        start = nn;
    }
    else
    {
        temp = start;
        i = 1;

        while(i < p - 1 && temp->next != start)
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
            temp->next = nn;
        }
    }
}

void CLL::display()
{
    if(start == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        Node *t;

        for(t = start; t->next != start; t = t->next)
        {
            cout << t->data << " ";
        }

        cout << t->data;
    }
}

void CLL::delete_node()
{
    Node *t, *on;
    int num;

    t = start;

    cout << "Enter number to remove: ";
    cin >> num;

    if(start == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        if(t->data == num)
        {
            if(t->next == start)
            {
                start = NULL;
                delete t;
            }
            else
            {
                on = t;

                while(on->next != start)
                {
                    on = on->next;
                }

                start = t->next;
                on->next = start;

                delete t;
            }

            cout << "Element deleted";
        }
        else
        {
            on = t;
            t = t->next;

            while(t != start)
            {
                if(t->data == num)
                {
                    on->next = t->next;
                    delete t;
                    break;
                }
                else
                {
                    on = t;
                    t = t->next;
                }
            }

            if(t == start)
            {
                cout << "Element not found";
            }
        }
    }
}
void CLL::search(int num)
{
    Node *t;
    int f = 0, i = 0;

    t = start;

    if(start == NULL)
    {
        cout << "List is empty";
        return;
    }

    do
    {
        i++;

        if(t->data == num)
        {
            f = 1;
            cout << "Element found at position " << i;
            break;
        }
        else
        {
            t = t->next;
        }

    } while(t != start);

    if(f == 0)
    {
        cout << "Element not found";
    }
}

void CLL::sort()
{
    Node *i, *j;
    int temp;

    if(start == NULL)
    {
        return;
    }

    for(i = start; i->next != start; i = i->next)
    {
        for(j = i->next; j != start; j = j->next)
        {
            if(i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

int main()
{
    CLL c;
    int choice;
    int p, value, num;
    char ch;

    do
    {
        cout << "\n\n--- CIRCULAR LINKED LIST OPERATIONS ---" << endl;
        cout << "1. Create" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Display" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Search" << endl;
        cout << "6. Sort" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: c.create();
                    break;

            case 2: cout << "Enter position: ";
                    cin >> p;

                    cout << "Enter value: ";
                    cin >> value;

                    c.insert(p, value);
                    break;

            case 3: c.display();
                    break;

            case 4: c.delete_node();
                    break;

            case 5: cout << "Enter number to search: ";
                    cin >> num;

                    c.search(num);
                    break;

            case 6: c.sort();
                    cout << "List sorted";
                    break;

            default: cout << "Invalid choice.";
        }

        cout << "\nDo you want to continue? Press y or Y: ";
        cin>>ch;

    } while(ch == 'y' || ch == 'Y');

    return 0;
}