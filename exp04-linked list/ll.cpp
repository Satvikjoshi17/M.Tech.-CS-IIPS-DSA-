#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

class node
{ public :
  node * next ; int data ;
};

class ll{
node * start ; int i ;
public : 
ll()
{ start = NULL ; }
void deletee() ; void display(); void count() ; void insert(int p , int d ); void create(); void search(int num) ;
};

void ll ::  create()
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


void ll :: insert(int p , int d )
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
void ll :: display()
{ 
  if( start == NULL ) cout<<"empty ll ";
  else{
    node * temp ;
    for( temp = start ; temp != NULL ; temp = temp -> next )
    {
      cout<<temp -> data ; i++ ;
    }
  }
}
void  ll :: count()
{
   i = 0 ; node * t ; t = start ;
  do{
    t = t -> next ;
    i++ ;
  }
  while( t != NULL);
  cout<<"total elements"<<i;
}

void ll :: search(int num)
{
  node*t ; int f = 0 ; t = start ; i = 0 ;
  do{
    i++ ; 
    if( t -> data == num )
    {
        f = 1 ;
        cout<<"elemants found at " << i ; break ;
    }
    else { t = t -> next ;}
    }
    while ( t != NULL );
    
      if( f == 0 )
     cout<<"element not found ";
    
  }



void ll :: deletee()
{
  node * t ; node *prev ;
  int num ; t = start ;
  cout<<"enter num to be deleted";
  cin>>num ;
  while( t != NULL )
  {
    if( t -> data != num )
    {
       prev = t ;
       t = t -> next;
    }
  else
 {
    if (t == start ) { start = t -> next ;}
    else { prev -> next = t -> next ; }

  }
  delete t ;
  }
}
int main()
{
  ll l ; int p , d , num ;
  char c ;
  do{
    cout<<"1. create ll"<<endl;
    cout<<"2. insert in ll"<<endl;
    cout<<"3. display ll"<<endl;
    cout<<"4. count elements in ll"<<endl;
    cout<<"5. search element in ll"<<endl;
    cout<<"6. delete element from ll"<<endl;
    cin>>p ;
    switch(p)
    {
      case 1 : l.create() ; break ;
      case 2 : cout<<"enter position and data";
               cin>>p>>d ; l.insert(p,d) ; break ;
      case 3 : l.display() ; break ;
      case 4 : l.count() ; break ;
      case 5 : cout<<"enter element to be searched";
               cin>>num ; l.search(num) ; break ;
      case 6 : l.deletee() ; break ;
      default : cout<<"invalid choice" ; break ;
    }
    cout<<"\n wanna continue";
    c = getch();
  }
  while( c=='Y' || c=='y');
}