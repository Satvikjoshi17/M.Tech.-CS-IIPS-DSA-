// 15-23. Singly Linked List Operations.

#include <conio.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class SLL
{
private:
    Node *start;

public:
    SLL()
    {
        start = NULL;
    }

    void create();
    void display();

    void insert_beginning();
    void insert_end();
    void insert_position();

    void delete_beginning();
    void delete_end();
    void delete_value();

    void reverse();
    void count();
};

// 15. Create and display a singly linked list.

void SLL::create()
{
    Node *nn, *on;
    char c;

    do
    {
        nn = new Node;

        cout << "Enter data: ";
        cin >> nn->data;

        nn->next = NULL;

        if(start == NULL)
        {
            start = nn;
        }
        else
        {
            on = start;

            while(on->next != NULL)
            {
                on = on->next;
            }

            on->next = nn;
        }

        on = nn;

        cout << "Do you want to add more elements? Press y or Y. ";
        c = getch();

    } while(c == 'y' || c == 'Y');
}

void SLL::display()
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

// 16. Insert a node at the beginning of a linked list. 

void SLL::insert_beginning()
{
    Node *nn;

    nn = new Node;

    cout << "Enter data: ";
    cin >> nn->data;

    nn->next = start;
    start = nn;
}

// 17. Insert a node at the end of a linked list.

void SLL::insert_end()
{
    Node *nn, *t;

    nn = new Node;

    cout << "Enter data: ";
    cin >> nn->data;

    nn->next = NULL;

    if(start == NULL)
    {
        start = nn;
    }
    else
    {
        t = start;

        while(t->next != NULL)
        {
            t = t->next;
        }

        t->next = nn;
    }
}

// 18. Insert a node at a specified position. 

void SLL::insert_position()
{
    Node *nn, *t;
    int p, i;

    nn = new Node;

    cout << "Enter data: ";
    cin >> nn->data;

    cout << "Enter position: ";
    cin >> p;

    if(p == 1)
    {
        nn->next = start;
        start = nn;
    }
    else if(start == NULL)
    { 
        cout << "Invalid position";
        delete nn;
    }
    else
    {
        i = 1;
        t = start;

        while(i < (p - 1) && t->next != NULL)
        {
            t = t->next;
            i++;
        }

        if(i < p - 1)
        {
            cout << "Invalid position";
            delete nn;
        }
        else
        {
            nn->next = t->next;
            t->next = nn;
        }
    }
}

// 19. Delete a node from the beginning.

void SLL::delete_beginning()
{
    Node *t;

    if(start == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        t = start;
        start = start->next;

        delete t;
    }
}

// 20. Delete a node from the end.

void SLL::delete_end()
{
    Node *t, *p;

    if(start == NULL)
    {
        cout << "List is empty";
    }
    else if(start->next == NULL)
    {
        delete start;
        start = NULL;
    }
    else
    {
        t = start;

        while(t->next->next != NULL)
        {
            t = t->next;
        }

        p = t->next;
        t->next = NULL;

        delete p;
    }
}

// 21. Delete a node with a given value.

void SLL::delete_value()
{
    Node *t, *prev;
    int num;

    if(start == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        t = start;

        cout << "Enter no. to be deleted: ";
        cin >> num;

        while(t != NULL)
        {
            if(t->data != num)
            {
                prev = t;
                t = t->next;
            }
            else
            {
                if(t == start)
                {
                    start = t->next;
                }
                else
                {
                    prev->next = t->next;
                }

                delete t;

                cout << "Element deleted";
                return;
            }
        }

        cout << "Data not found";
    }
}

// 22. Reverse a singly linked list.

void SLL::reverse()
{
    Node *prev, *t, *next;

    if(start == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        prev = NULL;
        t = start;

        while(t != NULL)
        {
            next = t->next;
            t->next = prev;
            prev = t;
            t = next;
        }
        
        start = prev;
    }
}

// 23. Count the number of nodes in a linked list.

void SLL::count()
{
    Node *t;
    int c = 0;

    t = start;

    if(start == NULL)
    {
        cout << "Number of nodes = 0";
    }
    else
    {
        do
        {
            t = t->next;
            c++;
        }
        while(t != NULL);

        cout << "Number of nodes = " << c;
    }
}

int main()
{
    SLL s;
    int choice;
    char c;

    do
    {
        cout << "\n\n--- SINGLY LINKED LIST OPERATIONS ---" << endl;
        cout << "1. Create" << endl;
        cout << "2. Insert at Beginning" << endl;
        cout << "3. Insert at End" << endl;
        cout << "4. Insert at Position" << endl;
        cout << "5. Display" << endl;
        cout << "6. Delete from Beginning" << endl;
        cout << "7. Delete from End" << endl;
        cout << "8. Delete by Value" << endl;
        cout << "9. Reverse" << endl;
        cout << "10. Count Nodes" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: s.create();
                    break;

            case 2: s.insert_beginning();
                    break;

            case 3: s.insert_end();
                    break;

            case 4: s.insert_position();
                    break;

            case 5: s.display();
                    break;

            case 6: s.delete_beginning();
                    break;

            case 7: s.delete_end();
                    break;

            case 8: s.delete_value();
                    break;

            case 9: s.reverse();
                    break;

            case 10: s.count();
                     break;

            default: cout << "Invalid choice.";
        }

        cout << "\nDo you want to continue? Press y or Y: ";
        c = getch();

    } while(c == 'y' || c == 'Y');

    return 0;
}