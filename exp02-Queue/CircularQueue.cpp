#include <iostream>
#include <conio.h>
#define MAX 5
using namespace std;

class CQueue
{
    int f, r, x, a[MAX];

public:
    CQueue()
    {
        f = -1;
        r = -1;
    }

    void display();
    void insert_e();
    void delete_e();
};

void CQueue::insert_e()
{
    if ((r + 1) % MAX == f)
    {
        cout << "CQueue Overflow\n";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        if (f == -1)
        {
            f = 0;
            r = 0;
        }
        else
        {
            r = (r + 1) % MAX;
        }

        a[r] = x;
    }
}

void CQueue::delete_e()
{
    if (f == -1)
    {
        cout << "Queue Underflow\n";
    }
    else
    {
        x = a[f];

        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = (f + 1) % MAX;
        }

        cout << x << " removed\n";
    }
}

void CQueue::display()
{
    if (f == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        int i = f;

        while (true)
        {
            cout << a[i] << " ";

            if (i == r)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }
}

int main()
{
    CQueue cq;
    int choice;
    char c;

    do
    {
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cq.insert_e();
                break;

            case 2:
                cq.delete_e();
                break;

            case 3:
                cq.display();
                break;

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        c = getch();
        cout << c << endl;

    } while (c == 'Y' || c == 'y');

    return 0;
}