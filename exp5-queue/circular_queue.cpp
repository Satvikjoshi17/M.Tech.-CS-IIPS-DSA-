// 32. Implement Circular Queue.

#include <iostream>
using namespace std;

#define MAX 50

class C_Queue
{
private:
    int a[MAX], front, rear, x;

public:
    C_Queue()
    {
        front = -1;
        rear = -1;
    }

    void insert_e();
    void delete_e();
    void display();
};

void C_Queue::insert_e()
{
    if(front == (rear + 1) % MAX)
    {
        cout << "Queue is full";
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

void C_Queue::delete_e()
{
    if(front == -1)
    {
        cout << "Queue underflow";
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

void C_Queue::display()
{
    if(front == -1)
    {
        cout << "Queue is empty";
    }
    else
    {
        if(front <= rear)
        {
            for(int i = front; i <= rear; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for(int i = front; i < MAX; i++)
            {
                cout << a[i] << " ";
            }

            for(int j = 0; j <= rear; j++)
            {
                cout << a[j] << " ";
            }
        }
    }
}

int main()
{
    C_Queue q;
    int choice;
    char c;

    do
    {
        cout << "\n\n--- CIRCULAR QUEUE OPERATIONS ---" << endl;
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