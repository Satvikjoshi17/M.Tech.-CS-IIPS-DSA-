#include <iostream>
#include <conio.h>
#define MAX 50
using namespace std;

class Array {
    int a[MAX], n;
    public:
        Array() {
            cout << "Enter size of your element: ";
            cin >> n;
            cout << "Enter elements of your array: ";
            for(int i = 0; i < n; i++) {
                cin >> a[i];
            }
        }

        void mini();
        void maxi();
};

void Array::mini() {
    int min_e = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] < min_e) {
            min_e = a[i];
        }
    }

    cout << "Minimum Element: " << min_e << endl;
}

void Array::maxi() {
    int max_e = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max_e) {
            max_e = a[i];
        }
    }

    cout << "Maximum element: " << max_e << endl;
}

int main() {
    Array A;
    A.mini();
    A.maxi();
    return 0;
}