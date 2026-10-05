#include<iostream>
#include<conio.h>
using namespace std ;
# define MAX 6

class Array
{ 
int a[MAX], size ;
public:

Array()
{ size = 0 ; }

void insertion()
{
int d, p;
        cout << "Enter data and position of an element: ";
        cin >> d >> p;

        if (p < 1 || p > size + 1) {
            cout << "Invalid position!" << endl;
            return;
        }

        if (size == MAX) {
            cout << "Array overflow!" << endl;
            return;
        }

        for (int i = size; i >= p; i--) {
            a[i] = a[i - 1];
        }

        a[p - 1] = d; 
        size++;        
}


void get()
{

cout<<"Enter the size of array";
cin>>size;
cout<<"Enter the elements in the array";
for(int i = 0 ; i < size ; i++ )
{
  cin>>a[i];
}
}



void put()
{ 
  cout<<"Elements in array are : ";
  for(int i = 0  ; i < size ; i++ )
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}


void maxi_e()
{
int maximum ;
maximum = a[0];
for( int i = 1 ; i < size ; i++ )
{
  if( maximum < a[i] )
  maximum = a[i];
}
cout<<"Maximum element in array is "<<maximum <<endl;
}

void mini_e()
{
int minimum ;
minimum = a[0];
for( int i = 1 ; i < size ; i++ )
{
  if( minimum > a[i] )
  minimum = a[i];
}
cout<<"Minimum element in array is "<<minimum << endl;
}

void reverse()
{
  cout<<" elements in reverse order of array are : ";
  for( int i = size - 1 ; i >= 0 ; i-- )
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
};

int main()
{
  Array a;
  a.insertion();
  a.get();
  a.put();
  a.maxi_e();
  a.mini_e();
  a.reverse();
  }
