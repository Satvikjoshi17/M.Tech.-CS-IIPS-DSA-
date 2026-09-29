#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class circularQueue {
    int a[MAX], front, rear;
    public:
        circularQueue() {
            front = -1;
            rear = -1;
        }

        void insert();
        void delete_e();
        void display();
};

void circularQueue::insert() {
    if(front == ((rear + 1) % MAX)) {
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
            rear = (rear + 1) % MAX;
        }
        a[rear] = x;
    }
}

void circularQueue::delete_e() {
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
            front = (front + 1) % MAX;
        }

        cout << "Element " << x << " deleted" << endl;
    }
}

void circularQueue::display() {
    if(front == -1) {
        cout << "Queue underflows" << endl;
    }
    else {
        if(front <= rear) {
            for(int i = front; i <= rear; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else {
            for(int i = front; i < MAX; i++) {
                cout << a[i] << " ";
            }
            for(int i = 0; i <= rear; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    circularQueue cq;
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
                cq.insert();
                break;
            case 2:
                cq.delete_e();
                break;
            case 3:
                cq.display();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        cout << "Do you want to continue? y or Y: " << endl;
        ch = getch();
    } while(ch == 'Y' || ch == 'y');
    return 0;
}