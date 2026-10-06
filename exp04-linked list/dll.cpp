#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

class node
{ public :
  node * next ; int data ;
};

class dll{
node * start ; int i ;
public : 
dll()
{ start = NULL ; }
void deletee() ; void display(); void count() ; void insert(int p , int d ); void create(); void search(int num) ;
};

void dll ::  create()
{
  node * on ; node * nn ; char c ;
  do{
    nn = new node ;
    cout<<"enter data";
    cin>> nn -> data ;
    nn -> next = NULL ;
    if (start == NULL ) {start = nn ;}
    else
    { on -> next = nn ;
    on = nn ;
    }
    cout<<"\n wanna add more elements";
    c = getch();
  }
    while( c=='Y' || c=='y');
  }

  void dll :: insert(int p , int d )
{
  node *nn , *temp ;
  nn = new node();
  nn -> data = d ;
  nn -> next = NULL ;
  if( p == 1 || start == NULL )
  {
    nn -> next = start;
    start = nn;
  }
  else{
    i=1 ; temp = start ;
    while( i < ( p-1 ) && temp -> next!= NULL )
    {
      temp = temp -> next ; i++ ;
      nn -> next = temp -> next ;
      temp -> next = nn ;
    }
  }
}
void dll :: display()
{
  node * t ; t = start ;
  if( t == NULL )
  cout<<"list is empty";
  else
  {
    do{
      cout<<t -> data <<" ";
      t = t -> next ;
    }
    while ( t != NULL );
  }
}
void dll :: count()
{
  node * t ; t = start ; i = 0 ;
  if( t == NULL )
  cout<<"list is empty";
  else
  {
    do{
      i++ ;
      t = t -> next ;
    }
    while ( t != NULL );
    cout<<"no of elements are "<<i;
  }
}


  void dll :: deletee() {
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    if (start == NULL) {
        cout << "List is empty\n";
        return;
    }

    node *temp = start;

    // Case 1: delete first node
    if (pos == 1) {
        start = start->next;
        cout << "Deleted element: " << temp->data << endl;
        delete temp;
        return;
    }

    // Case 2: delete at given position
    node *prev = NULL;
    int i = 1;
    while (temp != NULL && i < pos) {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        cout << "Position out of range\n";
        return;
    }

    prev->next = temp->next;
    cout << "Deleted element: " << temp->data << endl;
    delete temp;
}



void dll :: search(int num)
{
  node * t ; t = start ; int f = 0 ;
  if( t == NULL )
  cout<<"list is empty";
  else
  {
    do{
      if( t -> data == num )
      {
        cout<<"element found";
        f = 1 ;
        break ;
      }
      t = t -> next ;
    }
    while ( t != NULL );
    if( f == 0 )
    cout<<"element not found";
  }
}
 

int main()
{
  dll d ; int choice , p , d1 , num ; char c ;
  do{
    cout<<"\n1. create\n2. insert\n3. display\n4. count\n5. delete\n6. search";
    cout<<"\nenter your choice";
    cin>>choice ;
    switch(choice)
    {
      case 1 : d.create() ; break ;
      case 2 : cout<<"enter position and data"; cin>>p>>d1; d.insert(p,d1) ; break ;
      case 3 : d.display() ; break ;
      case 4 : d.count() ; break ;
      case 5 : d.deletee() ; break ;
      case 6 : cout<<"enter element to be searched"; cin>>num; d.search(num) ; break ;
      default : cout<<"invalid choice";
    }
    cout<<"\ndo you want to continue (y/n)";
    c = getch();
  } while(c=='y' || c=='Y');
}