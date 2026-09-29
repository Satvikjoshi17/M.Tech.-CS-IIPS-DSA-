#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

#define max 17
class dequeuee
{
   public :
  int arr[max] , f , r , x ;

  dequeuee()
  {
    f = -1 ; r = -1 ; 
  }
  void insertf() ; void insertr() ; void deletef() ; void deleter() ; void display() ;
};

void dequeuee :: insertf()
{
  if( f == ( r+1) % max ) { cout << " overflow "; }
  else{ 
    cout << " enter element "; 
    cin >> x ; 
    if( r == -1 ) { f = 0 ; r = 0 ; arr[r] = x ; }
    else
    {
      f = ( f - 1 + max ) % max ;
      arr[f] = x ;
   }
    
  }

}
void dequeuee :: insertr()
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

void dequeuee :: deletef()
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

void dequeuee :: deleter()
{
  if( f == -1 ) { cout << " underflow "; }
  else
  {
    x = arr[r] ;
    if( f == r ) { f = -1 ; r = -1 ; }
    else
    {
      r = ( r - 1 + max ) % max ;
      cout << " deleted element is : " << x << endl ;
    }
  }
}

void dequeuee :: display()
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
int main() {
  dequeuee dq ;
  int choice ; char c ;
  do {
    cout << "1. Insert at front" <<endl ;
    cout << "2. Insert at rear" <<endl ;
    cout << "3. Delete from front" <<endl ;
    cout << "4. Delete from rear" <<endl ;
    cout << "5. Display" << endl ;
    cout << "Enter your choice : " ;
    cin >> choice ;
    switch(choice) {
      case 1 : dq.insertf() ; break ;
      case 2 : dq.insertr() ; break ;
      case 3 : dq.deletef() ; break ;
      case 4 : dq.deleter() ; break ;
      case 5 : dq.display() ; break ;
      default : cout << "Invalid choice" << endl ; 
    }
    cout << "Do you want to continue (y/n) ? " ;
    cin >> c ;
  }while(c == 'y' || c == 'Y') ;

  return 0;
}