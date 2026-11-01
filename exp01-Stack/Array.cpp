#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    Array();
    void insert();
    void del();
    void maximum();
    void minimum();
    void get();
    void put();
    void reverse();
    void display();
};

Array::Array()
{
    n = 0;
}

void Array::insert()
{
    int pos, x;

    cout << "Enter position: ";
    cin >> pos;

    if (pos < 1 || pos > n + 1 || n == 100)
        cout << "Invalid position or array full\n";
    else
    {
        cout << "Enter element: ";
        cin >> x;

        for (int i = n; i >= pos; i--)
            a[i] = a[i - 1];

        a[pos - 1] = x;
        n++;
    }
}

void Array::del()
{
    int pos;

    cout << "Enter position: ";
    cin >> pos;

    if (pos < 1 || pos > n)
        cout << "Invalid position\n";
    else
    {
        cout << "Deleted: " << a[pos - 1] << endl;

        for (int i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;
    }
}

void Array::maximum()
{
    if (n == 0)
    {
        cout << "Array is empty\n";
        return;
    }

    int max = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    cout << "Maximum: " << max << endl;
}

void Array::minimum()
{
    if (n == 0)
    {
        cout << "Array is empty\n";
        return;
    }

    int min = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];

    cout << "Minimum: " << min << endl;
}

void Array::get()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

void Array::put()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

void Array::reverse()
{
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    cout << "Array reversed\n";
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
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Maximum";
        cout << "\n4. Minimum";
        cout << "\n5. Get";
        cout << "\n6. Put";
        cout << "\n7. Reverse";
        cout << "\n8. Display";
        cout << "\n9. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1: a.insert(); break;
            case 2: a.del(); break;
            case 3: a.maximum(); break;
            case 4: a.minimum(); break;
            case 5: a.get(); break;
            case 6: a.put(); break;
            case 7: a.reverse(); break;
            case 8: a.display(); break;
            case 9: cout << "Exiting\n"; break;
            default: cout << "Invalid choice\n";
        }
    }
    while (ch ='Y'||'y');

    return 0;
}