#include<iostream>
#include<stdlib.h>
#include<algorithm>

#define max 10 
using namespace std;

class stacke
{
public:

int arr[max] ; int top; int size; 
  stacke()
  {
    top = -1 ; size = 0 ; 
  }
  
void insert() ; void deletee() ; void display() ; void peek() ; void isEmpty() ; void isFull() ;
};

 void stacke::insert()
 {
  if(top == max)
  {
    cout<<"stack is full"<<endl;
  }
  else
  {
    int x;
    cout<<"enter the element to be inserted"<<endl;
    cin>>x;
    top++;
    arr[top] = x;
  }
 }
void stacke::deletee()
 {
  if(top == -1)
  {
    cout<<"stack is empty"<<endl;
  }
  else
  {
    cout<<"the deleted element is "<<arr[top]<<endl;
    top--;
  }
 }

 void stacke::display()
 {
  if(top == -1)
  {
    cout<<"stack is empty"<<endl;
  }
  else
  {
    for(int i = top ; i >= 0 ; i--)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
 }

 void stacke::peek()
 {
  if(top == -1)
  {
    cout<<"stack is empty"<<endl;
  }
  else
  {
    cout<<"the top element is "<<arr[top]<<endl;
  }
 }

 void stacke::isEmpty()
 {
  if(top == -1)
  {
    cout<<"stack is empty"<<endl;
  }
  else
  {
    cout<<"stack is not empty"<<endl;
  }
 }

 void stacke::isFull()
 {
  if(top == max - 1)
  {
    cout<<"stack is full"<<endl;
  }
  else
  {
    cout<<"stack is not full"<<endl;
  }
 }    


int main()
  {
    stacke st ;
    char c ; int choice ;
    do {
      
      cout<<"1. insert"<<endl;
      cout<<"2. delete"<<endl;
      cout<<"3. display"<<endl;
      cout<<"4. peek"<<endl;
      cout<<"5. isEmpty"<<endl;
      cout<<"6. isFull"<<endl;
      cout<<"enter your choice"<<endl;
      cin>>choice ;
      switch(choice)
      {
        case 1 : st.insert() ; break ;
        case 2 : st.deletee() ; break ;
        case 3 : st.display() ; break ;
        case 4 : st.peek() ; break ;
        case 5 : st.isEmpty() ; break ;
        case 6 : st.isFull() ; break ;
        default : cout<<"invalid choice"<<endl; 
      }
      cout<<"do you want to continue(y/n)"<<endl;
      cin>>c ;
    }
    while(c == 'y' || c == 'Y');

  }