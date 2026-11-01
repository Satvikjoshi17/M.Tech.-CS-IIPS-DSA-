
#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    void input();
    void insertionSort();
    void display();
};

void Array::input()
{
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Array::insertionSort()
{
    int key, j;

    for(int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    cout << "Array sorted successfully\n";
}

void Array::display()
{
    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main()
{
    Array ar;
    int ch;
    char choice;

    do
    {
        cout << "\n1. Input array";
        cout << "\n2. Insertion Sort";
        cout << "\n3. Display array";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                ar.input();
                break;

            case 2:
                ar.insertionSort();
                break;

            case 3:
                ar.display();
                break;

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
