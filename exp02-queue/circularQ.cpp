#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
#define max 17 

class Cqueuee
{
   public :
  int arr[max] , f , r , x ;

  Cqueuee()
  {
    f = -1 ; r = -1 ; 
  }
  void insert() ; void deletee() ; void display() ;
};

void Cqueuee :: insert()
{
  if( f == ( r+1) % max ) { cout << " overflow "; }
  else{ 
    cout << " enter element "; 
    cin >> x ; 
    if( r == -1 ) { f = 0 ; r = 0 ; arr[r] = x ; }
    else
    {
    r = ( r + 1 ) % max ; 
    arr[r] = x ;
   }
    
  }

}

void Cqueuee :: deletee()
{
  if( f == -1 ) { cout << " underflow "; }
  else
  {
    x = arr[f] ;
    if( f == r ) { f = -1 ; r = -1 ; }
    else
    {
      f = ( f + 1 ) % max ;
      cout << " deleted element is : " << x << endl ;
    }
  }
}

void Cqueuee :: display()
{
  if( f == -1) { cout<<" underflow" << endl ; }
  else{
    if(f <= r )
    {
      for(int i = f ; i <= r ; i++) cout << arr[i] << " " ;
    }
    else
    {
      for(int i = f ; i < max ; i++) cout << arr[i] << " " ;
      for(int i = 0 ; i <= r ; i++) cout << arr[i] << " " ;
    }
  }
}

int main()
{
  Cqueuee cq ;
  int choice ; char c ;
  do {
    cout << "1. Insert" <<endl ;
    cout << "2. Delete" <<endl ;
    cout << "3. Display" <<endl ;
    cout << "Enter your choice : " ;
    cin >> choice ;
    switch(choice)
    {
      case 1 : cq.insert() ; break ;
      case 2 : cq.deletee() ; break ;
      case 3 : cq.display() ; break ;
      default : cout << "Invalid choice" <<endl ; break ;
    }
    cout << "Do you want to continue (y/n) ? " ;
    cin >> c ;
  } while(c == 'y' || c == 'Y') ;

  return 0 ;
}