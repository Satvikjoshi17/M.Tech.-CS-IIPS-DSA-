#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class Array {
    int a[MAX];
    int n;
    public:
       void input() {
           cout << "Enter the number of elements (max " << MAX << "): ";
           cin >> n;
           if (n > MAX) {
               cout << "Number of elements exceeds maximum limit." << endl;
               return;
           }
           cout << "Enter " << n << " elements: ";
           for (int i = 0; i < n; i++) {
               cin >> a[i];
           }
       }

       void display() {
              cout << "Array elements are: ";
              for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
              }
              cout << endl;
       }
};

int main() {
    Array arr;
    arr.input();
    arr.display();
    return 0;
}