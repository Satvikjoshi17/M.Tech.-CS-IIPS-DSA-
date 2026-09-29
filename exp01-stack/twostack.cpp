#include<iostream>
#include<stdlib.h>
#include<algorithm>

#define max 4 
using namespace std;

class twostack
{
public:

int arr[max] ; int top1 , top2 ; int size; int x ;
  twostack()
  {
    top1 = -1 ; top2 = max ; size = 0 ; 
  }
  
void insert1() ; void deletee1() ; void display2() ;void insert2() ; void deletee2() ; void display1() ;
};

 void twostack :: insert1()
 {
  if(top1 + 1 == top2 ) cout<<"overflow";
  else
  {
    cout<<"enter element";
    cin>>x;
    arr[top1 + 1 ] = x ;
  }
 }

void twostack :: insert2()
{
   if(top2 == top1 + 1 ) cout<<"overflow";
   else
   {
    cout<<"enter element";
    cin>>x;
    arr[top2 - 1] = x;
   }
}

void twostack :: deletee2() {
  if( top1 == max ) cout<< " underflow";
  else
  {
    x = arr[top2];
    top2 = top2 + 1 ;
    cout<<"deleted element" <<x ;
  }
}

void twostack :: deletee1() {
   if( top2 == -1 ) cout<< " underflow";
  else
  {
    x = arr[top1];
    top1 = top1 - 1 ;
    cout<<"deleted element" <<x ;
  }
} 
int main() {
  twostack ts ;
  int choice ; char c ;
  do {
    cout<<"1. insert in stack 1"<<endl;
    cout<<"2. delete from stack 1"<<endl;
    cout<<"3. display stack 1"<<endl;
    cout<<"4. insert in stack 2"<<endl;
    cout<<"5. delete from stack 2"<<endl;
    cout<<"6. display stack 2"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice ;
    switch(choice)
    {
      case 1 : ts.insert1() ; break ;
      case 2 : ts.deletee1() ; break ;
      case 3 : ts.display1() ; break ;
      case 4 : ts.insert2() ; break ;
      case 5 : ts.deletee2() ; break ;
      case 6 : ts.display2() ; break ;
      default : cout<<"invalid choice"<<endl; 
    }
    cout<<"do you want to continue(y/n)"<<endl;
    cin>>c ;
  }while(c == 'y' || c == 'Y') ;
}