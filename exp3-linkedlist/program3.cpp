                                                     //(1)CREATE FUNCTION FOR LL
void LL::create() {
	Node *on = NULL;
	char c;
	do {
		Node *nn = new Node;
		nn->next = NULL;
		cout<<"enter the data u wanna insert"<<endl;
		cin>>nn->data;
		if(head==NULL) {
			head = nn;
		}
		else {
			on->next=nn;
		}
		on = nn;
		cout<<"wanna add more"<<endl;
		cin>>c;
	}
	while(c=='y');
}

                                                     //(2)DISPLAY FUNCTION IN LL
void LL::display() {
	Node *on = head;

	if (head == NULL) {
		cout << "List is empty" << endl;
		return;
	}

	while (on != NULL) {
		cout << on->data << " ";
		on = on->next;
	}
	cout << endl;
}

(3)COUNT FUNCTION IN LL
void LL::count() {
	Node *temp=head;
	int i =0 ;
	while(temp!=NULL) {
		i++;
		temp=temp->next;
	}
	cout<<"total no of nodes are "<<i<<endl;
}


                                                        //(4)INSERT AT BEGINNING
void LL::insertatBeginning() {
	Node *nn = new Node;

	cout << "Enter data: ";
	cin >> nn->data;

	nn->next = head;
	head = nn;
}


                                                             //(5)INSERT AT END
void LL::insertatEnd() {
	Node *nn = new Node;

	cout << "Enter data: ";
	cin >> nn->data;

	nn->next = NULL;

	if (head == NULL) {
		head = nn;
		return;
	}

	Node *on = head;

	while (on->next != NULL) {
		on = on->next;
	}

	on->next = nn;
}


                                                     //(6)INSERT AT SPECIFIC POS
void LL::insert() {
	int p;
	Node *nn = new Node;

	cout << "Enter the data" << endl;
	cin >> nn->data;

	cout << "Enter the position" << endl;
	cin >> p;

	if (p < 1) {
		cout << "Invalid position" << endl;
		delete nn;
		return;
	}

	if (p == 1) {
		nn->next = head;
		head = nn;
		return;
	}

	Node *temp = head;

	for (int i = 1; i < p - 1 && temp != NULL; i++) {
		temp = temp->next;
	}

	if (temp == NULL) {
		cout << "Invalid position" << endl;
		delete nn;
		return;
	}

	nn->next = temp->next;
	temp->next = nn;
}


                                                             //(7)DELETE FROM LL
void LL::deletee() {
	int num;
	Node *temp = head;
	Node *prev = NULL;
	cout<<"enter the number u want to delete"<<endl;
	cin>>num;
	if(head==NULL) {
		cout<<"list is empty"<<endl;
	}
	while(temp!=NULL && temp->data!=num) {
		prev = temp;
		temp = temp->next;
	}
	if(temp==NULL) {
		cout<<"element notfound"<<endl;
		return;
	}
	else if(temp==head) {
		head = head->next;
		delete temp;
	}
	else {
		prev->next = temp->next;
		delete temp;
	}
}


                                                    //(8)REVERSING A LINKED LIST
void LL::reverse() {
	Node *prev = NULL;
	Node *on = head;
	Node *nn = NULL;

	while (on != NULL) {
		nn = on->next;
		on->next = prev;
		prev = on;
		on = nn;
	}

	head = prev;
}


                                                            //(9)NUMBER OF NODES
void LL::count() {
	Node *temp=head;
	int i =0 ;
	while(temp!=NULL) {
		i++;
		temp=temp->next;
	}
	cout<<"total no of nodes are "<<i<<endl;
}