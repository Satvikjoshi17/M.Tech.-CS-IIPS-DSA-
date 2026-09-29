#include <iostream>
#include <conio.h>
#define MAX 50
using namespace std;

class Stack {
    int a[MAX], top, x;
    public:
        Stack() {
            top = -1;
        }

        void insert();
        void delete_e();
        void display();
};

void Stack::insert() {
    if(top == MAX - 1) {
        cout << "Stack overflows" << endl;
    }
    else {
        cout << "Enter element: ";
        cin >> x;
        top++;
        a[top] = x;
    }
}

void Stack::delete_e() {
    if(top == -1) {
        cout << "Stack underflows" << endl;
    }
    else {
        x = a[top];
        top--;
        cout << "Element " << x << " deleted" << endl;
    }
}

void Stack::display() {
    for(int i = top; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack S;
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
                S.insert();
                break;
            case 2:
                S.delete_e();
                break;
            case 3:
                S.display();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        cout << "Do you want to continue? y or Y" << endl;
        ch = getch();
    }while(ch == 'Y' || ch == 'y');
    return 0;
}