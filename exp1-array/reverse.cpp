#include <iostream>
#define MAX 50
using namespace std;

class Array {
    int a[MAX], n;
    public:
        Array() {
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements of your array: ";
            for(int i = 0; i < n; i++) {
                cin >> a[i];
            }
        }

        void reverse_arr();
        void display();
};

void Array::reverse_arr() {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void Array::display() {
    cout << "Elements are: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    Array A;
    A.reverse_arr();
    cout << "Reversed array: " << endl;
    A.display();
    return 0;
}