#include <iostream>
using namespace std;
int main()
{
    int x, y, b, a = 0;
    cout << "Enter hours from 1 to 23: ";
    cin >> x;
    cout << "Enter minutes from 1 to 59: ";
    cin >> y;
    a = y + 15;
    if (x == 23 && a > 59)
    {
        b = 0;
        cout << "Your time after 15 minutes is : ";
        cout << b << " : " << a - 60;
    }

    else if (a >= 60)
    {
        x++;
        cout << "Your time after 15 minutes is : ";
        y = a - 60;
        cout << x << ":" << y;
    }
    else if (a < 60)
    {
        cout << "Your time after 15 minutes is : ";
        cout << x << ":" << a;
    }

    return 0;
}