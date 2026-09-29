#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class Dequeue {
    int a[MAX], front, rear;
    public:
        Dequeue() {
            front = -1;
            rear = -1;
        }
        void insert_r();
        void insert_f();
        void delete_r();
        void delete_f();
        void display();
};

void Dequeue::insert_r() {
    if(front == ((rear + 1) % MAX)) {
        cout << "Dequeue overflows" << endl;
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

void Dequeue::delete_f() {
    if(front == -1) {
        cout << "Dequeue underflows" << endl;
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

void Dequeue::insert_f() {
    if(rear == ((MAX + front - 1) % MAX)) {
        cout << "Dequeue overflows" << endl;
    }
    else {
        int x;
        cout << "Enter element: ";
        cin >> x;
        if(front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (MAX + front - 1) % MAX;
        }
        a[front] = x;
    }
}

void Dequeue::delete_r() {
    if(front == -1) {
        cout << "Dequeue underflows" << endl;
    }
    else {
        int x;
        x = a[rear];
        if(rear == front) {
            front = -1;
            rear = -1;
        }
        else {
            rear = (MAX + rear - 1) % MAX;
        }
        cout << "Element " << x << " deleted" << endl;
    }
}

void Dequeue::display() {
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
    Dequeue dq;
    int choice;
    char ch;
    do {
        cout << "1. Insert from rear" << endl;
        cout << "2. Insert from front" << endl;
        cout << "3. Delete from front" << endl;
        cout << "4. Delete from rear" << endl;
        cout << "5. Display" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                dq.insert_r();
                break;
            case 2:
                dq.insert_f();
                break;
            case 3:
                dq.delete_f();
                break;
            case 4:
                dq.delete_r();
                break;
            case 5:
                dq.display();
                break;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "Do you want to continue? y or Y" << endl;
        ch = getch();
    } while(ch == 'Y' || ch == 'y');
    return 0;
}