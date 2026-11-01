#include <iostream>
#include <conio.h>
#define MAX 3
using namespace std;
class LS
{
    int a[MAX], NUM, size;

public:
    LS()
    {
        cout << "Enter elements";
        for (int i = 0; i < MAX; i++)
        {
            cin >> a[i];
        }
    }
    void display();
    void search();
};
void LS::display()
{
    cout << "Enter elements";
    for (int i = 0; i< MAX; i++)
    {
        cout << a[i];
    }
}
void LS::search()
{
    cout << "Enter search element";
    cin >> NUM;
    int i;
    for (int i = 0; i < MAX; i++)
    {
        if (a[i] == NUM)
        {
             cout << "Element found at" << i << "index";
             break;
            }
            
            }
            if(a[i]!=NUM)
            {
            cout<<"Element not found";
            
            }
        }
   
    

int main()
{
    LS l;
    char c;
    int choice;
    do
    {
        cout << "1.display  2.search";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.display();
            break;
        case 2:
            l.search();
            break;
        }
        cout << "You can continue with y or Y";

        c = getch();
    } while (c == 'Y' || c == 'y');
    getch();

    return 0;
}
