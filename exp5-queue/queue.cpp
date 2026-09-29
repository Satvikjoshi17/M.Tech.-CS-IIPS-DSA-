#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class Queue {
    int a[MAX], front, rear;
    public:
        Queue() {
            front = -1;
            rear = -1;
        }
        void insert();
        void delete_e();
        void display();
};

void Queue::insert() {
    if(rear == MAX - 1) {
        cout << "Queue overflows" << endl;
    }
    else {
        int x;
        cout << "Enter element: ";
        cin >> x;
        if(rear == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear++;
        }
        a[rear] = x;
    }
}

void Queue::delete_e() {
    if(front == -1) {
        cout << "Queue underflows" << endl;
    }
    else {
        int x;
        x = a[front];
        if(front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
        cout << "Element " << x << " deleted" << endl;
    }
}

void Queue::display() {
    if(front == -1) {
        cout << "Queue underflows" << endl;
    }
    else {
        for(int i = front; i <= rear; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Queue q;
    int choice;
    char ch;
    do {
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                q.insert();
                break;
            case 2:
                q.delete_e();
                break;
            case 3:
                q.display();
                break;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "Do you want to continue? y or Y" << endl;
        ch = getch();
    } while(ch == 'Y' || ch == 'y');

    return 0;
}