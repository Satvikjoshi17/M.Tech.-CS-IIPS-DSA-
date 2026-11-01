#include <iostream>
using namespace std;

class Array
{
    int a[100], b[100], c[200];
    int n, m;

public:
    Array();
    void input();
    void merge();
    void display();
};

Array::Array()
{
    n = 0;
    m = 0;
}

void Array::input()
{
    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];
}

void Array::merge()
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    cout << "Arrays merged successfully\n";
}

void Array::display()
{
    cout << "Merged sorted array: ";

    for (int i = 0; i < n + m; i++)
        cout << c[i] << " ";

    cout << endl;
}

int main()
{
    Array ar;
    int ch;
    char choice;

    do
    {
        cout << "\n1. Input arrays";
        cout << "\n2. Merge arrays";
        cout << "\n3. Display merged array";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                ar.input();
                break;

            case 2:
                ar.merge();
                break;

            case 3:
                ar.display();
                break;

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}