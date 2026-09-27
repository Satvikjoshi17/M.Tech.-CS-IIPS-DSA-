// 34. Implement Double Ended Queue (Deque).

#include <iostream>
using namespace std;

#define MAX 50

class Deque
{
private:
    int a[MAX], front, rear, x;

public:
    Deque()
    {
        front = -1;
        rear = -1;
    }

    void insert_f();
    void insert_r();
    void delete_f();
    void delete_r();
    void display();
};

void Deque::insert_r()
{
    if(front == ((rear + 1) % MAX))
    {
        cout << "Q is full";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        if(rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX;
        }

        a[rear] = x;
    }
}

void Deque::insert_f()
{
    if(rear == ((MAX + (front - 1)) % MAX))
    {
        cout << "Q is full";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        if(front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            front = (MAX + (front - 1)) % MAX;
        }

        a[front] = x;
    }
}

void Deque::delete_f()
{
    if(front == -1)
    {
        cout << "Q is empty";
    }
    else
    {
        x = a[front];

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }

        cout << "Deleted item = " << x;
    }
}

void Deque::delete_r()
{
    if(front == -1)
    {
        cout << "Q is empty";
    }
    else
    {
        x = a[rear];

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            rear = (MAX + (rear - 1)) % MAX;
        }

        cout << "Deleted item = " << x;
    }
}

void Deque::display()
{
    int i,j;

    if(front == -1)
    {
        cout << "Q is empty";
    }
    else
    {
        if(front <= rear)
        {
            for(i = front; i <= rear; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for(i = front; i <= MAX - 1; i++)
            {
                cout << a[i] << " ";
            }

            for(j = 0; j <= rear; j++)
            {
                cout << a[j] << " ";
            }
        }
    }
}

int main()
{
    Deque q;
    int choice;
    char c;

    do
    {
        cout << "\n\n--- DEQUE OPERATIONS ---" << endl;
        cout << "1. Insert Front" << endl;
        cout << "2. Insert Rear" << endl;
        cout << "3. Delete Front" << endl;
        cout << "4. Delete Rear" << endl;
        cout << "5. Display" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: q.insert_f();
                    break;

            case 2: q.insert_r();
                    break;

            case 3: q.delete_f();
                    break;

            case 4: q.delete_r();
                    break;

            case 5: q.display();
                    break;

            default: cout << "Invalid choice.";
        }

        cout << "\nDo you want to continue? Press y or Y: ";
        cin >> c;

    } while(c == 'y' || c == 'Y');
    return 0;
}