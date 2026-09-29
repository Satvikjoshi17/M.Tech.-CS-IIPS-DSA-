#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class Array {
    int a[MAX];
    int n;
    public:
    Array() {
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
    int linearSearch(int key);
};

int Array::linearSearch(int key) {
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    Array arr;
    int key;
    cout << "Enter your key: ";
    cin >> key;
    int result = arr.linearSearch(key);
    cout << "Key found at: " << result << endl;
    return 0;
}