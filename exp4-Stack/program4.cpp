 //(1)IMPLEMENTATION OF STACK USING ARRAY
#include<iostream>
#define MAX 10
using namespace std;

class Stack {
	int arr[MAX];
	int top;

public:
	Stack() {
		top = -1;
	}

	void push();
	void pop();
	void display();
};

void Stack::push() {
	int num;

	if (top == MAX - 1) {
		cout << "Stack Overflow" << endl;
		return;
	}

	cout << "Enter data: ";
	cin >> num;

	top++;
	arr[top] = num;
}

void Stack::pop() {
	if (top == -1) {
		cout << "Stack Underflow" << endl;
		return;
	}

	cout << "Deleted element: " << arr[top] << endl;
	top--;
}

void Stack::display() {
	if (top == -1) {
		cout << "Stack is empty" << endl;
		return;
	}

	for (int i = top; i >= 0; i--) {
		cout << arr[i] << endl;
	}
}


                                  //(2)IMPLEMENTATION OF STACK USING LINKED LIST
void Stack::push() {
	Node *nn = new Node;

	if (nn == NULL) {
		cout << "Stack Overflow" << endl;
		return;
	}

	cout << "Enter data: ";
	cin >> nn->data;

	nn->next = top;
	top = nn;
}

void Stack::pop() {
	if (top == NULL) {
		cout << "Stack Underflow" << endl;
		return;
	}

	Node *temp = top;

	cout << "Deleted element: " << temp->data << endl;

	top = top->next;
	delete temp;
}

void Stack::display() {
	if (top == NULL) {
		cout << "Stack is empty" << endl;
		return;
	}

	Node *on = top;

	while (on != NULL) {
		cout << on->data << endl;
		on = on->next;
	}
}
