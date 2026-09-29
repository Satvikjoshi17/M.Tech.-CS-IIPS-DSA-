#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
#define max 17 

class queuee
{
   public :
  int arr[max] , f , r , x ;

  queuee()
  {
    f = -1 ; r = -1 ; 
  }
  void insert() ; void deletee() ; void display() ;
};

void queuee :: insert() {
  if(r == max - 1) {cout << "Queue is full" <<endl ; }
  else {
    if(f == -1) {
      f = 0 ; 
  cout << "Enter the element to be inserted : " ;
    cin >> x ; 
    r++ ; 
    arr[r] = x ; 
  }
}
}


void queuee :: deletee() {
  if( f == -1) { cout << "Queue is empty"<<endl ; }
  else
   {
    x = arr[f] ;
    if(f == r)
     {
      f = -1 ; r = -1 ;
    }
    else 
    {
      f++ ;
  cout << "Deleted element is : "  <<endl ;
  }
}
}

void queuee :: display() {
  if( f == -1) {cout << "Queue is empty"<<endl ;
  }
  else {
    cout << "Queue elements are : " ;
    for(int i = f ; i <= r ; i++) cout << arr[i] << " " ;
  cout<<endl ;
  }
}


int main() {
  queuee q ;
  int choice ; char c ;
  do {
    cout << "1. Insert" <<endl ;
    cout << "2. Delete" <<endl ;
    cout << "3. Display" << endl ;
   cout << "Enter your choice : " ;
    cin >> choice ;
    switch(choice) {
      case 1 : q.insert() ; break ;
      case 2 : q.deletee() ; break ;
      case 3 : q.display() ; break ;
      default : cout << "Invalid choice" <<endl ; break ;
    }
    cout << "Do you want to continue (y/n) ? " ;
    cin >> c ;
  } while(c == 'y' || c == 'Y') ;

  return 0 ;
}