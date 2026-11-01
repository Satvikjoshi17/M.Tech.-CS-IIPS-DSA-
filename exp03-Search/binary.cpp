#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    Array();
    void input();
    void binarySearch();
    void display();
};

Array::Array()
{
    n = 0;
}

void Array::input()
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Array::binarySearch()
{
    int x, low = 0, high = n - 1;
    int mid, flag = 0;

    cout << "Enter element to search: ";
    cin >> x;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == x)
        {
            cout << "Element found at position "
                 << mid + 1 << endl;
            flag = 1;
            break;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (flag == 0)
        cout << "Element not found\n";
}

void Array::display()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    Array a;
    int ch;

    do
    {
        cout << "\n1. Input";
        cout << "\n2. Binary Search";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                a.input();
                break;

            case 2:
                a.binarySearch();
                break;

            case 3:
                a.display();
                break;

            case 4:
                cout << "Exiting\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    }
    while (ch =='y'||ch=='Y');

    return 0;
}