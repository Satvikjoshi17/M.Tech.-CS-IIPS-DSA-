                      //(1)IMPLEMENTATION OF QUEUE USING ARRAY
#include<iostream>
#define MAX 10
using namespace std;

class Queue {
	int arr[MAX];
	int front, rear;

public:
	Queue() {
		front = -1;
		rear = -1;
	}

	void insert();
	void deletee();
	void display();
};

void Queue::insert() {
	int num;

	if (rear == MAX - 1) {
		cout << "Queue Overflow" << endl;
		return;
	}

	cout << "Enter data: ";
	cin >> num;

	if (front == -1) {
		front = 0;
	}

	rear++;
	arr[rear] = num;
}

void Queue::deletee() {
	if (front == -1 || front > rear) {
		cout << "Queue Underflow" << endl;
		return;
	}

	cout << "Deleted element: " << arr[front] << endl;
	front++;

	if (front > rear) {
		front = rear = -1;
	}
}

void Queue::display() {
	if (front == -1) {
		cout << "Queue is empty" << endl;
		return;
	}

	for (int i = front; i <= rear; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}


                                           //(2)CIRCULAR IMPLEMENTATION OF QUEUE
#include<iostream>
#define MAX 10
using namespace std;

class CQ {
	int arr[MAX];
	int front, rear;

public:
	CQ() {
		front = -1;
		rear = -1;
	}

	void insert();
	void del();
	void display();
};

void CQ::insert() {
	int num;

	if (front == (rear + 1) % MAX) {
		cout << "Queue Overflow" << endl;
		return;
	}

	cout << "Enter data: ";
	cin >> num;

	if (front == -1) {
		front = 0;
		rear = 0;
	}
	else {
		rear = (rear + 1) % MAX;
	}

	arr[rear] = num;
}

void CQ::del() {
	if (front == -1) {
		cout << "Queue Underflow" << endl;
		return;
	}

	cout << "Deleted element: " << arr[front] << endl;

	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else {
		front = (front + 1) % MAX;
	}
}

void CQ::display() {
	if (front == -1) {
		cout << "Queue is empty" << endl;
		return;
	}

	int i = front;

	while (true) {
		cout << arr[i] << " ";

		if (i == rear) {
			break;
		}

		i = (i + 1) % MAX;
	}

	cout << endl;
}


                                  //(3)IMPLEMENTATION OF QUEUE USING LINKED LIST
#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

class Queue {
	Node *front, *rear;

public:
	Queue() {
		front = NULL;
		rear = NULL;
	}

	void insert();
	void deletee();
	void display();
};

void Queue::insert() {
	Node *nn = new Node;

	if (nn == NULL) {
		cout << "Queue Overflow" << endl;
		return;
	}

	cout << "Enter data: ";
	cin >> nn->data;

	nn->next = NULL;

	if (front == NULL) {
		front = nn;
		rear = nn;
	}
	else {
		rear->next = nn;
		rear = nn;
	}
}

void Queue::deletee() {
	if (front == NULL) {
		cout << "Queue Underflow" << endl;
		return;
	}

	Node *temp = front;

	cout << "Deleted element: " << temp->data << endl;

	front = front->next;

	if (front == NULL) {
		rear = NULL;
	}

	delete temp;
}


                                                  //(4)IMPLEMENTATION OF DEQUEUE
#include<iostream>
#define MAX 5
using namespace std;

class DQ {
	int arr[MAX];
	int front, rear;

public:
	Deque() {
		front = -1;
		rear = -1;
	}

	void insertFront();
	void insertRear();
	void deleteFront();
	void deleteRear();
	void display();
};

void DQ::insertFront() {
	int num;

	if (front == (rear + 1) % MAX) {
		cout << "Deque Overflow" << endl;
		return;
	}

	cout << "Enter data: ";
	cin >> num;

	if (front == -1) {
		front = rear = 0;
	}
	else if (front == 0) {
		front = MAX - 1;
	}
	else {
		front--;
	}

	arr[front] = num;
}

void DQ::insertRear() {
	int num;

	if (front == (rear + 1) % MAX) {
		cout << "Deque Overflow" << endl;
		return;
	}

	cout << "Enter data: ";
	cin >> num;

	if (front == -1) {
		front = rear = 0;
	}
	else {
		rear = (rear + 1) % MAX;
	}

	arr[rear] = num;
}

void DQ::deleteFront() {
	if (front == -1) {
		cout << "Deque Underflow" << endl;
		return;
	}

	cout << "Deleted element: " << arr[front] << endl;

	if (front == rear) {
		front = rear = -1;
	}
	else {
		front = (front + 1) % MAX;
	}
}

void DQ::deleteRear() {
	if (front == -1) {
		cout << "Deque Underflow" << endl;
		return;
	}

	cout << "Deleted element: " << arr[rear] << endl;

	if (front == rear) {
		front = rear = -1;
	}
	else if (rear == 0) {
		rear = MAX - 1;
	}
	else {
		rear--;
	}
}

void DQ::display() {
	if (front == -1) {
		cout << "Deque is empty" << endl;
		return;
	}

	int i = front;

	while (true) {
		cout << arr[i] << " ";

		if (i == rear) {
			break;
		}

		i = (i + 1) % MAX;
	}

	cout << endl;
}

