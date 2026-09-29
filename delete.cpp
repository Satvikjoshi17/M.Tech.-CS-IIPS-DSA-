#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class Array {
    int a[MAX];
    int n;
    public:
        Array() {
            cout << "Enter size of array: ";
            cin >> n;
            cout << "Enter elements of array: ";
            for(int i = 0; i < n; i++) {
                cin >> a[i];
            }
        }

        void delete_e(int p) {
            for(int i = p - 1; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
            n--;
            cout << "Element deleted successfully" << endl;
        }

        void display() {
            for(int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        
};

int main() {
    Array A;
    int position;
    cout << "Enter position of element to be deleted: ";
    cin >> position;
    A.delete_e(position);
    A.display();
    return 0;
}