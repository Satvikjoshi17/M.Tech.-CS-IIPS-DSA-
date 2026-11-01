#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    Array();
    void input();
    void linearSearch();
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

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Array::linearSearch()
{
    int x, flag = 0;

    cout << "Enter element to search: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << "Element found at position "
                 << i + 1 << endl;
            flag = 1;
            break;
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
        cout << "\n2. Linear Search";
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
                a.linearSearch();
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
    while (ch!=4);

    return 0;
}