#include <bits/stdc++.h>
#define MAX 50
using namespace std;

class Array {
    int a1[MAX], a2[MAX], n1, n2;
    vector <int> result;
    public:
        Array() {
            cout << "Enter number of elements of first array: ";
            cin >> n1;
            cout << "Enter elements of first array: ";
            for(int i = 0; i < n1; i++) {
                cin >> a1[i];
            }

            cout << "Enter number of elements of second array: ";
            cin >> n2;
            cout << "Enter elements of second array: ";
            for(int i = 0; i < n2; i++) {
                cin >> a2[i];
            }
        }

        void sort_2arr();
        void display();
};

void Array::sort_2arr() {
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2) {
        if(a1[i] <= a2[j]) {
            result.push_back(a1[i]);
            i++;
        }
        else if(a2[j] < a1[i]) {
            result.push_back(a2[j]);
            j++;
        }
    }
    while(i < n1) {
        result.push_back(a1[i]);
        i++;
    }
    while(j < n2) {
        result.push_back(a2[j]);
        j++;
    }
}

void Array::display() {
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    Array A;
    A.sort_2arr();
    cout << "Sorted Array: " << endl;
    A.display();
    return 0;
}